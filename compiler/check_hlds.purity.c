/*
** Automatically generated from `purity.m'
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


/* :- module check_hlds.purity. */
/* :- implementation. */

/*
INIT mercury__check_hlds__purity__init
ENDINIT
*/

#include "check_hlds.purity.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.post_typecheck.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 151 "check_hlds.purity.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;

#line 154 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0;

#line 157 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1;

#line 160 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2];

#line 163 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2];

#line 166 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2];

#line 169 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0;

#line 172 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1;

#line 175 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2;

#line 178 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3;

#line 181 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4;

#line 184 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_purity_check_result_0[5];

#line 187 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_purity_check_result_0[5];

#line 190 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_check_result_0[5];

#line 193 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 196 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 199 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 202 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 205 "check_hlds.purity.c"
static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8];

#line 208 "check_hlds.purity.c"
static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8];

#line 211 "check_hlds.purity.c"
static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0;

#line 214 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1];

#line 217 "check_hlds.purity.c"
static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1];

#line 220 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1];

#line 223 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1];

#line 226 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0;

#line 229 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1;

#line 232 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2];

#line 235 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2];

#line 238 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2];

#line 241 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
#line 244 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 246 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 249 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
#line 252 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 254 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 256 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 259 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0_10001(
#line 262 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 264 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 267 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0_10001(
#line 270 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 272 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 274 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 277 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
#line 280 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 282 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 285 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
#line 288 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 290 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 292 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 295 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
#line 298 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 300 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2);

#line 303 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
#line 306 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 308 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 310 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3);

#line 497 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(
#line 497 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_32,
#line 497 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 497 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 497 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7);

#line 584 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(
#line 584 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__AddrOfGoal_29,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 584 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17);

#line 640 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
#line 640 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_90,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 626 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(
#line 626 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 626 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_44,
#line 626 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 626 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 626 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 626 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 626 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 626 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 611 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(
#line 611 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_41,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 1582 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
#line 1582 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1582 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1582 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 1582 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
#line 1582 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1582 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 1590 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
#line 1590 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1590 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1590 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 1590 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0(
#line 1590 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1590 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 203 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0(
#line 203 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 203 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 203 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 203 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0(
#line 203 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 203 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 1586 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
#line 1586 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1586 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1586 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3);

#line 1586 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
#line 1586 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1586 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2);

#line 1613 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
#line 1613 "purity.m"
  MR_Word check_hlds__purity__Specs_4,
#line 1613 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_10,
#line 1613 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_11);

#line 1605 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
#line 1605 "purity.m"
  MR_Word check_hlds__purity__Spec_4,
#line 1605 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1605 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9);

#line 1493 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
#line 1493 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1493 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 1493 "purity.m"
  MR_Word check_hlds__purity__Context_8,
#line 1493 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9);

#line 1468 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
#line 1468 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_5,
#line 1468 "purity.m"
  MR_Word check_hlds__purity__PredId_6,
#line 1468 "purity.m"
  MR_Word check_hlds__purity__Context_7);

#line 1444 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inferred_impure_4_f_0(
#line 1444 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1444 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1444 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1444 "purity.m"
  MR_Word check_hlds__purity__Purity_9);

#line 1413 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_promise_pure_4_f_0(
#line 1413 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1413 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1413 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1413 "purity.m"
  MR_Word check_hlds__purity__PromisedPurity_9);

#line 1398 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_exaggerated_impurity_decl_5_f_0(
#line 1398 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_7,
#line 1398 "purity.m"
  MR_Word check_hlds__purity__PredInfo_8,
#line 1398 "purity.m"
  MR_Word check_hlds__purity__PredId_9,
#line 1398 "purity.m"
  MR_Word check_hlds__purity__DeclPurity_10,
#line 1398 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_11);

#line 1378 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_promise_4_f_0(
#line 1378 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1378 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1378 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1378 "purity.m"
  MR_Word check_hlds__purity__Purity_9);

#line 1327 "purity.m"
static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
#line 1327 "purity.m"
  MR_Word check_hlds__purity__Outer_6,
#line 1327 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1327 "purity.m"
  MR_Word * check_hlds__purity__Goal_9,
#line 1327 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_28,
#line 1327 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_29);

#line 1311 "purity.m"
static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
#line 1311 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1311 "purity.m"
  MR_Word check_hlds__purity__VarTypes_8,
#line 1311 "purity.m"
  MR_Word check_hlds__purity__VarSet_9,
#line 1311 "purity.m"
  MR_Word check_hlds__purity__Var_10,
#line 1311 "purity.m"
  MR_Word * check_hlds__purity__VarType_11,
#line 1311 "purity.m"
  MR_Word * check_hlds__purity__Specs_12);

#line 1291 "purity.m"
static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
#line 1291 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_5,
#line 1291 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_6,
#line 1291 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_7,
#line 1291 "purity.m"
  MR_Word * check_hlds__purity__Specs_8);

#line 1227 "purity.m"
static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
#line 1227 "purity.m"
  MR_Word check_hlds__purity__Info_7,
#line 1227 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_8,
#line 1227 "purity.m"
  MR_Word check_hlds__purity__Var_9,
#line 1227 "purity.m"
  MR_Word check_hlds__purity__ConsId_10,
#line 1227 "purity.m"
  MR_Word check_hlds__purity__Args_11,
#line 1227 "purity.m"
  MR_Word * check_hlds__purity__Specs_12);

#line 1175 "purity.m"
static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
#line 1175 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1175 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1175 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9,
#line 1175 "purity.m"
  MR_Word * check_hlds__purity__ActualPurity_10,
#line 1175 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_17,
#line 1175 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_18);

#line 1142 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
#line 1142 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1142 "purity.m"
  MR_Word check_hlds__purity__Info_2,
#line 1142 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_3,
#line 1142 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_4);

#line 1047 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
#line 1047 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_7,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0_10,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Invariants_11);

#line 988 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
#line 988 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 988 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 988 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 988 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_3);

#line 996 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
#line 996 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 996 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 996 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2,
#line 996 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_3,
#line 996 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_4);

#line 867 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
#line 867 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 867 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 867 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2);

#line 666 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
#line 666 "purity.m"
  MR_Word check_hlds__purity__GoalExpr0_8,
#line 666 "purity.m"
  MR_Word * check_hlds__purity__GoalExpr_9,
#line 666 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_10,
#line 666 "purity.m"
  MR_Word * check_hlds__purity__Purity_11,
#line 666 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_12,
#line 666 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_192,
#line 666 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_193);

#line 640 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
#line 640 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 611 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
#line 611 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

#line 594 "purity.m"
static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
#line 594 "purity.m"
  MR_Word check_hlds__purity__Purity_5,
#line 594 "purity.m"
  MR_Word check_hlds__purity__ContainsTrace_6,
#line 594 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8,
#line 594 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_GoalInfo_9);

#line 584 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
#line 584 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__Goal_8,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 584 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17);

#line 568 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
#line 568 "purity.m"
  MR_Word check_hlds__purity__Clause_3,
#line 568 "purity.m"
  MR_Word check_hlds__purity__AllProcIds_4);

#line 510 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
#line 510 "purity.m"
  MR_Word check_hlds__purity__Clause0_7,
#line 510 "purity.m"
  MR_Word * check_hlds__purity__Clause_8,
#line 510 "purity.m"
  MR_Word check_hlds__purity__PredInfo_9,
#line 510 "purity.m"
  MR_Word * check_hlds__purity__Purity_10,
#line 510 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_35,
#line 510 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_36);

#line 497 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
#line 497 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 497 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 497 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 497 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7);

#line 336 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__workaround_gcc_bug_1_f_0(
#line 336 "purity.m"
  MR_Word check_hlds__purity__X_3);

#line 280 "purity.m"
static void MR_CALL 
check_hlds__purity__puritycheck_pred_6_p_0(
#line 280 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 280 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_35,
#line 280 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_36,
#line 280 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_9,
#line 280 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_37,
#line 280 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_38);

#line 225 "purity.m"
static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
#line 225 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 225 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2,
#line 225 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_3,
#line 225 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_4,
#line 225 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_5);


static /* final */ const MR_Box check_hlds__purity_scalar_common_1[6][3];

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[63][2];

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__purity_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__purity_scalar_common_2[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_4[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_6[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[63][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "no impurity declaration."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be promised pure and should have"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that invokes impure or semipure code"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "indicator."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is sufficient."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "No purity indicator is necessary."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error: unification with expression"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was declared"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but expression was not a function call."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error: parallel conjunct is"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but parallel conjuncts must be pure or semipure."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error in closure: closure body is"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but closure was not declared"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The type of outer variable"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be either io.state or stm_builtin.stm."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: declared"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but promised pure."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A pure"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: declared"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but actually"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: unnecessary"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not invoke any"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "code,"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "so there is no need for a"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error:"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It must be pure."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It must be declared"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or promised"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In call to "))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error: call must be in"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "an explicit unification which is preceded by"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error: call must be preceded by"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In call to"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A purity indicator of"))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1309 "check_hlds.purity.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0
  }
};

#line 1318 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0 = {
  (MR_String) "have_not_converted_unify",
  (MR_Integer) 0
};

#line 1324 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1 = {
  (MR_String) "have_converted_unify",
  (MR_Integer) 1
};

#line 1330 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1
};

#line 1336 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0
};

#line 1342 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1348 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____converted_unify_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____converted_unify_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "converted_unify",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0
};

#line 1365 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0 = {
  (MR_String) "no_worries",
  (MR_Integer) 0
};

#line 1371 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1 = {
  (MR_String) "insufficient_decl",
  (MR_Integer) 1
};

#line 1377 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2 = {
  (MR_String) "inconsistent_promise",
  (MR_Integer) 2
};

#line 1383 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3 = {
  (MR_String) "unnecessary_promise_pure",
  (MR_Integer) 3
};

#line 1389 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4 = {
  (MR_String) "unnecessary_decl",
  (MR_Integer) 4
};

#line 1395 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_purity_check_result_0[5] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4
};

#line 1404 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_purity_check_result_0[5] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_2,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_4,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_purity_check_result_0_3
};

#line 1413 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_check_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 1422 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_purity_check_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____purity_check_result_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_check_result_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_check_result",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_purity_check_result_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_purity_check_result_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_check_result_0
};

#line 1439 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1447 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1456 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1464 "check_hlds.purity.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1472 "check_hlds.purity.c"
static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0
};

#line 1484 "check_hlds.purity.c"
static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8] = {
  (MR_String) "pi_module_info",
  (MR_String) "pi_run_post_typecheck",
  (MR_String) "pi_pred_info",
  (MR_String) "pi_vartypes",
  (MR_String) "pi_varset",
  (MR_String) "pi_messages",
  (MR_String) "pi_requant",
  (MR_String) "pi_converted_unify"
};

#line 1496 "check_hlds.purity.c"
static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0 = {
  (MR_String) "purity_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0,
  check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0,
  NULL,
  NULL
};

#line 1511 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

#line 1516 "check_hlds.purity.c"
static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0
  }
};

#line 1525 "check_hlds.purity.c"
static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

#line 1530 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1] = {
  (MR_Integer) 0
};

#line 1535 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__purity____Unify____purity_info_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_info_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_info",
  {     check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0 },
  {     check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0
};

#line 1552 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0 = {
  (MR_String) "run_post_typecheck",
  (MR_Integer) 0
};

#line 1558 "check_hlds.purity.c"
static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1 = {
  (MR_String) "do_not_run_post_typecheck",
  (MR_Integer) 1
};

#line 1564 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1
};

#line 1570 "check_hlds.purity.c"
static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0
};

#line 1576 "check_hlds.purity.c"
static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1582 "check_hlds.purity.c"
const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____run_post_typecheck_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____run_post_typecheck_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "run_post_typecheck",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0
};

#line 1599 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
#line 1602 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1604 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1606 "check_hlds.purity.c"
{
#line 1608 "check_hlds.purity.c"
  {
#line 1610 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1613 "check_hlds.purity.c"
    {
#line 1615 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____converted_unify_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1618 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1620 "check_hlds.purity.c"
  }
#line 1622 "check_hlds.purity.c"
}

#line 1625 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
#line 1628 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1630 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1632 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1634 "check_hlds.purity.c"
{
#line 1636 "check_hlds.purity.c"
  {
#line 1638 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1641 "check_hlds.purity.c"
    {
#line 1643 "check_hlds.purity.c"
      check_hlds__purity____Compare____converted_unify_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1646 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1648 "check_hlds.purity.c"
  }
#line 1650 "check_hlds.purity.c"
}

#line 1653 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0_10001(
#line 1656 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1658 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1660 "check_hlds.purity.c"
{
#line 1662 "check_hlds.purity.c"
  {
#line 1664 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1667 "check_hlds.purity.c"
    {
#line 1669 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____purity_check_result_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1672 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1674 "check_hlds.purity.c"
  }
#line 1676 "check_hlds.purity.c"
}

#line 1679 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0_10001(
#line 1682 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1684 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1686 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1688 "check_hlds.purity.c"
{
#line 1690 "check_hlds.purity.c"
  {
#line 1692 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1695 "check_hlds.purity.c"
    {
#line 1697 "check_hlds.purity.c"
      check_hlds__purity____Compare____purity_check_result_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1700 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1702 "check_hlds.purity.c"
  }
#line 1704 "check_hlds.purity.c"
}

#line 1707 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
#line 1710 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1712 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1714 "check_hlds.purity.c"
{
#line 1716 "check_hlds.purity.c"
  {
#line 1718 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1721 "check_hlds.purity.c"
    {
#line 1723 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____purity_info_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1726 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1728 "check_hlds.purity.c"
  }
#line 1730 "check_hlds.purity.c"
}

#line 1733 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
#line 1736 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1738 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1740 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1742 "check_hlds.purity.c"
{
#line 1744 "check_hlds.purity.c"
  {
#line 1746 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1749 "check_hlds.purity.c"
    {
#line 1751 "check_hlds.purity.c"
      check_hlds__purity____Compare____purity_info_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1754 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1756 "check_hlds.purity.c"
  }
#line 1758 "check_hlds.purity.c"
}

#line 1761 "check_hlds.purity.c"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
#line 1764 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 1766 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2)
#line 1768 "check_hlds.purity.c"
{
#line 1770 "check_hlds.purity.c"
  {
#line 1772 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded;

#line 1775 "check_hlds.purity.c"
    {
#line 1777 "check_hlds.purity.c"
      check_hlds__purity__succeeded = check_hlds__purity____Unify____run_post_typecheck_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
#line 1780 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 1782 "check_hlds.purity.c"
  }
#line 1784 "check_hlds.purity.c"
}

#line 1787 "check_hlds.purity.c"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
#line 1790 "check_hlds.purity.c"
  MR_Box * check_hlds__purity__wrapper_arg_1,
#line 1792 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 1794 "check_hlds.purity.c"
  MR_Box check_hlds__purity__wrapper_arg_3)
#line 1796 "check_hlds.purity.c"
{
#line 1798 "check_hlds.purity.c"
  {
#line 1800 "check_hlds.purity.c"
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

#line 1803 "check_hlds.purity.c"
    {
#line 1805 "check_hlds.purity.c"
      check_hlds__purity____Compare____run_post_typecheck_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
#line 1808 "check_hlds.purity.c"
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
#line 1810 "check_hlds.purity.c"
  }
#line 1812 "check_hlds.purity.c"
}

#line 497 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(
#line 497 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_32,
#line 497 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 497 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 497 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7)
#line 497 "purity.m"
{
#line 501 "purity.m"
  while (MR_TRUE)
#line 501 "purity.m"
    {
#line 501 "purity.m"
      /* tailcall optimized into a loop */
#line 501 "purity.m"
      {
#line 501 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 501 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 501 "purity.m"
          {
#line 1849 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_7 = check_hlds__purity__STATE_VARIABLE_Info_0_6;
#line 501 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 501 "purity.m"
          }
#line 501 "purity.m"
        else
#line 503 "purity.m"
          {
#line 503 "purity.m"
            MR_Word check_hlds__purity__Clause0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 503 "purity.m"
            MR_Word check_hlds__purity__Clauses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 503 "purity.m"
            MR_Word check_hlds__purity__Clause_17;
#line 503 "purity.m"
            MR_Word check_hlds__purity__ClausePurity_22;
#line 503 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_27_27;
#line 503 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_28_28;
#line 506 "purity.m"
            MR_Word * check_hlds__purity__AddrClauses_31;
#line 506 "purity.m"
            MR_Word check_hlds__purity__HeadVar__2_33;

#line 504 "purity.m"
            {
#line 504 "purity.m"
              check_hlds__purity__compute_purity_for_clause_6_p_0(check_hlds__purity__Clause0_15, &check_hlds__purity__Clause_17, check_hlds__purity__PredInfo_3, &check_hlds__purity__ClausePurity_22, check_hlds__purity__STATE_VARIABLE_Info_0_6, &check_hlds__purity__STATE_VARIABLE_Info_27_27);
            }
#line 505 "purity.m"
            {
#line 505 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__STATE_VARIABLE_Purity_0_4, check_hlds__purity__ClausePurity_22);
            }
#line 502 "purity.m"
            {
#line 502 "purity.m"
              check_hlds__purity__HeadVar__2_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_33, 0) = ((MR_Box) (check_hlds__purity__Clause_17));
#line 502 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_33, 1) = NULL;
#line 502 "purity.m"
            }
#line 502 "purity.m"
            check_hlds__purity__AddrClauses_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_33, (MR_Integer) 1));
#line 1900 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_32 = check_hlds__purity__HeadVar__2_33;
#line 506 "purity.m"
            /* direct tailcall eliminated */
#line 506 "purity.m"
            {
#line 506 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Clauses0_16;
#line 506 "purity.m"
              MR_Word * check_hlds__purity__AddrOfHeadVar__2__tmp_copy_32 = check_hlds__purity__AddrClauses_31;
#line 506 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4 = check_hlds__purity__STATE_VARIABLE_Purity_28_28;
#line 506 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_6 = check_hlds__purity__STATE_VARIABLE_Info_27_27;

#line 506 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_6 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_6;
#line 506 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_4 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4;
#line 506 "purity.m"
              check_hlds__purity__AddrOfHeadVar__2_32 = check_hlds__purity__AddrOfHeadVar__2__tmp_copy_32;
#line 506 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 506 "purity.m"
            }
#line 506 "purity.m"
            continue;
#line 503 "purity.m"
          }
#line 501 "purity.m"
      }
#line 501 "purity.m"
      break;
#line 501 "purity.m"
    }
#line 497 "purity.m"
}

#line 584 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(
#line 584 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__AddrOfGoal_29,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 584 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17)
#line 584 "purity.m"
{
#line 587 "purity.m"
  {
#line 587 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 587 "purity.m"
    MR_Word check_hlds__purity__Goal_8;
#line 587 "purity.m"
    MR_Word check_hlds__purity__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
#line 587 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
#line 587 "purity.m"
    MR_Word check_hlds__purity__GoalExpr_14;
#line 587 "purity.m"
    MR_Word check_hlds__purity__GoalInfo_15;
#line 587 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24;

#line 589 "purity.m"
    {
#line 589 "purity.m"
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_12, &check_hlds__purity__GoalExpr_14, check_hlds__purity__GoalInfo0_13, check_hlds__purity__Purity_9, check_hlds__purity__ContainsTrace_10, check_hlds__purity__STATE_VARIABLE_Info_0_16, check_hlds__purity__STATE_VARIABLE_Info_17);
    }
#line 598 "purity.m"
    {
#line 598 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_9, check_hlds__purity__GoalInfo0_13, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24);
    }
#line 602 "purity.m"
#line 602 "purity.m"
    switch (*check_hlds__purity__ContainsTrace_10) {
#line 602 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 602 "purity.m"
      case (MR_Integer) 1:
#line 603 "purity.m"
        {
#line 604 "purity.m"
          {
#line 604 "purity.m"
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
#line 603 "purity.m"
        }
#line 602 "purity.m"
        break;
#line 602 "purity.m"
      case (MR_Integer) 0:
#line 600 "purity.m"
        {
#line 601 "purity.m"
          {
#line 601 "purity.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
#line 600 "purity.m"
        }
#line 602 "purity.m"
        break;
#line 602 "purity.m"
    }
#line 592 "purity.m"
    {
#line 592 "purity.m"
      check_hlds__purity__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 592 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_8, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_14));
#line 592 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_8, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_15));
#line 592 "purity.m"
    }
#line 2025 "check_hlds.purity.c"
    *check_hlds__purity__AddrOfGoal_29 = check_hlds__purity__Goal_8;
#line 587 "purity.m"
  }
#line 584 "purity.m"
}

#line 640 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
#line 640 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_90,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 640 "purity.m"
{
#line 644 "purity.m"
  while (MR_TRUE)
#line 644 "purity.m"
    {
#line 644 "purity.m"
      /* tailcall optimized into a loop */
#line 644 "purity.m"
      {
#line 644 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 644 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "purity.m"
          {
#line 2068 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 644 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 644 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 644 "purity.m"
          }
#line 644 "purity.m"
        else
#line 646 "purity.m"
          {
#line 646 "purity.m"
            MR_Word check_hlds__purity__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 646 "purity.m"
            MR_Word check_hlds__purity__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 646 "purity.m"
            MR_Word check_hlds__purity__Goal_20;
#line 646 "purity.m"
            MR_Word check_hlds__purity__GoalPurity_25;
#line 646 "purity.m"
            MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 646 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 646 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_38_38;
#line 646 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_39_39;
#line 646 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;
#line 661 "purity.m"
            MR_Word * check_hlds__purity__AddrGoals_89;
#line 661 "purity.m"
            MR_Word check_hlds__purity__HeadVar__2_91;

#line 647 "purity.m"
            {
#line 647 "purity.m"
              check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_18, &check_hlds__purity__Goal_20, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
            }
#line 652 "purity.m"
#line 652 "purity.m"
            switch (check_hlds__purity__GoalPurity_25) {
#line 652 "purity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 652 "purity.m"
              case (MR_Integer) 2:
#line 653 "purity.m"
                {
#line 653 "purity.m"
                  MR_Word check_hlds__purity__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 1)));
#line 653 "purity.m"
                  MR_Word check_hlds__purity__Context_29;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__Spec_30;
#line 653 "purity.m"
                  MR_String check_hlds__purity__PurityName_47;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__Pieces_48;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__Msg_49;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_52_52;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_53_53;
#line 653 "purity.m"
                  MR_String check_hlds__purity__V_54_54;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_60_60;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_61_61;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_65_65;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__Msgs0_71;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__Msgs_72;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_74_74;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_75_75;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_76_76;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_77_77;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_78_78;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_79_79;
#line 653 "purity.m"
                  MR_Word check_hlds__purity__V_80_80;
#line 654 "purity.m"
                  MR_Word check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 0)));

#line 655 "purity.m"
                  {
#line 655 "purity.m"
                    check_hlds__purity__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_28);
                  }
#line 1556 "purity.m"
                  {
#line 1556 "purity.m"
                    parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__GoalPurity_25, &check_hlds__purity__PurityName_47);
                  }
#line 1558 "purity.m"
                  {
#line 1558 "purity.m"
                    check_hlds__purity__V_54_54 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_47, (MR_String) ",");
                  }
#line 1558 "purity.m"
                  {
#line 1558 "purity.m"
                    check_hlds__purity__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "purity.m"
                    MR_hl_field(MR_mktag(2), check_hlds__purity__V_53_53, 0) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1558 "purity.m"
                  }
#line 1558 "purity.m"
                  {
#line 1558 "purity.m"
                    check_hlds__purity__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 0) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1558 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[29])));
#line 1558 "purity.m"
                  }
#line 1557 "purity.m"
                  {
#line 1557 "purity.m"
                    check_hlds__purity__Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[27])));
#line 1557 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 1) = ((MR_Box) (check_hlds__purity__V_52_52));
#line 1557 "purity.m"
                  }
#line 1560 "purity.m"
                  {
#line 1560 "purity.m"
                    check_hlds__purity__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__Pieces_48));
#line 1560 "purity.m"
                  }
#line 1560 "purity.m"
                  {
#line 1560 "purity.m"
                    check_hlds__purity__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 0) = ((MR_Box) (check_hlds__purity__V_61_61));
#line 1560 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1560 "purity.m"
                  }
#line 1560 "purity.m"
                  {
#line 1560 "purity.m"
                    check_hlds__purity__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 0) = ((MR_Box) (check_hlds__purity__Context_29));
#line 1560 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 1) = ((MR_Box) (check_hlds__purity__V_60_60));
#line 1560 "purity.m"
                  }
#line 1561 "purity.m"
                  {
#line 1561 "purity.m"
                    check_hlds__purity__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 0) = ((MR_Box) (check_hlds__purity__Msg_49));
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "purity.m"
                  }
#line 1561 "purity.m"
                  {
#line 1561 "purity.m"
                    check_hlds__purity__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1561 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 2) = ((MR_Box) (check_hlds__purity__V_65_65));
#line 1561 "purity.m"
                  }
#line 1609 "purity.m"
                  check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
#line 1609 "purity.m"
                  check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
#line 1609 "purity.m"
                  check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
#line 1609 "purity.m"
                  check_hlds__purity__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
#line 1609 "purity.m"
                  check_hlds__purity__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
#line 1609 "purity.m"
                  check_hlds__purity__Msgs0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
#line 1609 "purity.m"
                  check_hlds__purity__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 6)));
#line 1609 "purity.m"
                  check_hlds__purity__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 7)));
#line 1610 "purity.m"
                  {
#line 1610 "purity.m"
                    check_hlds__purity__Msgs_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 0) = ((MR_Box) (check_hlds__purity__Spec_30));
#line 1610 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 1) = ((MR_Box) (check_hlds__purity__Msgs0_71));
#line 1610 "purity.m"
                  }
#line 1611 "purity.m"
                  {
#line 1611 "purity.m"
                    check_hlds__purity__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (check_hlds__purity__V_76_76));
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (check_hlds__purity__V_77_77));
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (check_hlds__purity__V_78_78));
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (check_hlds__purity__Msgs_72));
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) (check_hlds__purity__V_79_79));
#line 1611 "purity.m"
                    MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 7) = ((MR_Box) (check_hlds__purity__V_80_80));
#line 1611 "purity.m"
                  }
#line 653 "purity.m"
                }
#line 652 "purity.m"
                break;
#line 652 "purity.m"
              case (MR_Integer) 0:
#line 649 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 652 "purity.m"
                break;
#line 652 "purity.m"
              case (MR_Integer) 1:
#line 650 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 652 "purity.m"
                break;
#line 652 "purity.m"
            }
#line 659 "purity.m"
            {
#line 659 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_39_39 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
            }
#line 660 "purity.m"
            {
#line 660 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
            }
#line 645 "purity.m"
            {
#line 645 "purity.m"
              check_hlds__purity__HeadVar__2_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_91, 0) = ((MR_Box) (check_hlds__purity__Goal_20));
#line 645 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_91, 1) = NULL;
#line 645 "purity.m"
            }
#line 645 "purity.m"
            check_hlds__purity__AddrGoals_89 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_91, (MR_Integer) 1));
#line 2345 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_90 = check_hlds__purity__HeadVar__2_91;
#line 661 "purity.m"
            /* direct tailcall eliminated */
#line 661 "purity.m"
            {
#line 661 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Goals0_19;
#line 661 "purity.m"
              MR_Word * check_hlds__purity__AddrOfHeadVar__2__tmp_copy_90 = check_hlds__purity__AddrGoals_89;
#line 661 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3 = check_hlds__purity__STATE_VARIABLE_Purity_39_39;
#line 661 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;
#line 661 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__purity__STATE_VARIABLE_Info_38_38;

#line 661 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_7 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 661 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5;
#line 661 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_3 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3;
#line 661 "purity.m"
              check_hlds__purity__AddrOfHeadVar__2_90 = check_hlds__purity__AddrOfHeadVar__2__tmp_copy_90;
#line 661 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 661 "purity.m"
            }
#line 661 "purity.m"
            continue;
#line 646 "purity.m"
          }
#line 644 "purity.m"
      }
#line 644 "purity.m"
      break;
#line 644 "purity.m"
    }
#line 640 "purity.m"
}

#line 626 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(
#line 626 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 626 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_44,
#line 626 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 626 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 626 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 626 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 626 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 626 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 626 "purity.m"
{
#line 630 "purity.m"
  while (MR_TRUE)
#line 630 "purity.m"
    {
#line 630 "purity.m"
      /* tailcall optimized into a loop */
#line 630 "purity.m"
      {
#line 630 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 630 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "purity.m"
          {
#line 2423 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 630 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 630 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 630 "purity.m"
          }
#line 630 "purity.m"
        else
#line 632 "purity.m"
          {
#line 632 "purity.m"
            MR_Word check_hlds__purity__Case0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 632 "purity.m"
            MR_Word check_hlds__purity__Cases0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 632 "purity.m"
            MR_Word check_hlds__purity__Case_20;
#line 632 "purity.m"
            MR_Word check_hlds__purity__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 0)));
#line 632 "purity.m"
            MR_Word check_hlds__purity__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 1)));
#line 632 "purity.m"
            MR_Word check_hlds__purity__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 2)));
#line 632 "purity.m"
            MR_Word check_hlds__purity__Goal_28;
#line 632 "purity.m"
            MR_Word check_hlds__purity__GoalPurity_29;
#line 632 "purity.m"
            MR_Word check_hlds__purity__GoalContainsTrace_30;
#line 632 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 632 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_38_38;
#line 632 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39;
#line 638 "purity.m"
            MR_Word * check_hlds__purity__AddrCases_43;
#line 638 "purity.m"
            MR_Word check_hlds__purity__HeadVar__2_45;

#line 634 "purity.m"
            {
#line 634 "purity.m"
              check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_27, &check_hlds__purity__Goal_28, &check_hlds__purity__GoalPurity_29, &check_hlds__purity__GoalContainsTrace_30, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
            }
#line 635 "purity.m"
            {
#line 635 "purity.m"
              check_hlds__purity__Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 635 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 0) = ((MR_Box) (check_hlds__purity__MainConsId_25));
#line 635 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 1) = ((MR_Box) (check_hlds__purity__OtherConsIds_26));
#line 635 "purity.m"
              MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 2) = ((MR_Box) (check_hlds__purity__Goal_28));
#line 635 "purity.m"
            }
#line 636 "purity.m"
            {
#line 636 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_38_38 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_29, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
            }
#line 637 "purity.m"
            {
#line 637 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_30, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
            }
#line 631 "purity.m"
            {
#line 631 "purity.m"
              check_hlds__purity__HeadVar__2_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_45, 0) = ((MR_Box) (check_hlds__purity__Case_20));
#line 631 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_45, 1) = NULL;
#line 631 "purity.m"
            }
#line 631 "purity.m"
            check_hlds__purity__AddrCases_43 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_45, (MR_Integer) 1));
#line 2505 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_44 = check_hlds__purity__HeadVar__2_45;
#line 638 "purity.m"
            /* direct tailcall eliminated */
#line 638 "purity.m"
            {
#line 638 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Cases0_19;
#line 638 "purity.m"
              MR_Word * check_hlds__purity__AddrOfHeadVar__2__tmp_copy_44 = check_hlds__purity__AddrCases_43;
#line 638 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3 = check_hlds__purity__STATE_VARIABLE_Purity_38_38;
#line 638 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39;
#line 638 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__purity__STATE_VARIABLE_Info_37_37;

#line 638 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_7 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 638 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5;
#line 638 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_3 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3;
#line 638 "purity.m"
              check_hlds__purity__AddrOfHeadVar__2_44 = check_hlds__purity__AddrOfHeadVar__2__tmp_copy_44;
#line 638 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 638 "purity.m"
            }
#line 638 "purity.m"
            continue;
#line 632 "purity.m"
          }
#line 630 "purity.m"
      }
#line 630 "purity.m"
      break;
#line 630 "purity.m"
    }
#line 626 "purity.m"
}

#line 611 "purity.m"
static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(
#line 611 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_41,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 611 "purity.m"
{
#line 615 "purity.m"
  while (MR_TRUE)
#line 615 "purity.m"
    {
#line 615 "purity.m"
      /* tailcall optimized into a loop */
#line 615 "purity.m"
      {
#line 615 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 615 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "purity.m"
          {
#line 2583 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 615 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 615 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 615 "purity.m"
          }
#line 615 "purity.m"
        else
#line 617 "purity.m"
          {
#line 617 "purity.m"
            MR_Word check_hlds__purity__HeadGoal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 617 "purity.m"
            MR_Word check_hlds__purity__TailGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 617 "purity.m"
            MR_Word check_hlds__purity__HeadGoal_24;
#line 617 "purity.m"
            MR_Word check_hlds__purity__GoalPurity_25;
#line 617 "purity.m"
            MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 617 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_34_34;
#line 617 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_35_35;
#line 617 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36;
#line 622 "purity.m"
            MR_Word * check_hlds__purity__AddrTailGoals_40;
#line 622 "purity.m"
            MR_Word check_hlds__purity__HeadVar__2_42;

#line 618 "purity.m"
            {
#line 618 "purity.m"
              check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__HeadGoal0_18, &check_hlds__purity__HeadGoal_24, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_34_34);
            }
#line 620 "purity.m"
            {
#line 620 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
            }
#line 621 "purity.m"
            {
#line 621 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
            }
#line 624 "purity.m"
            {
#line 624 "purity.m"
              check_hlds__purity__HeadVar__2_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_42, 0) = ((MR_Box) (check_hlds__purity__HeadGoal_24));
#line 624 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_42, 1) = NULL;
#line 624 "purity.m"
            }
#line 624 "purity.m"
            check_hlds__purity__AddrTailGoals_40 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_42, (MR_Integer) 1));
#line 2645 "check_hlds.purity.c"
            *check_hlds__purity__AddrOfHeadVar__2_41 = check_hlds__purity__HeadVar__2_42;
#line 622 "purity.m"
            /* direct tailcall eliminated */
#line 622 "purity.m"
            {
#line 622 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__TailGoals0_19;
#line 622 "purity.m"
              MR_Word * check_hlds__purity__AddrOfHeadVar__2__tmp_copy_41 = check_hlds__purity__AddrTailGoals_40;
#line 622 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3 = check_hlds__purity__STATE_VARIABLE_Purity_35_35;
#line 622 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36;
#line 622 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__purity__STATE_VARIABLE_Info_34_34;

#line 622 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_7 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 622 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_5;
#line 622 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_3 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_3;
#line 622 "purity.m"
              check_hlds__purity__AddrOfHeadVar__2_41 = check_hlds__purity__AddrOfHeadVar__2__tmp_copy_41;
#line 622 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 622 "purity.m"
            }
#line 622 "purity.m"
            continue;
#line 617 "purity.m"
          }
#line 615 "purity.m"
      }
#line 615 "purity.m"
      break;
#line 615 "purity.m"
    }
#line 611 "purity.m"
}

#line 1582 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
#line 1582 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1582 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1582 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 1582 "purity.m"
{
#line 1582 "purity.m"
  {
#line 1582 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1582 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 1582 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 1582 "purity.m"
    {
#line 1582 "purity.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
    }
#line 1582 "purity.m"
  }
#line 1582 "purity.m"
}

#line 1582 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
#line 1582 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1582 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 1582 "purity.m"
{
#line 2726 "check_hlds.purity.c"
  {
#line 2728 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

#line 2731 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 2733 "check_hlds.purity.c"
  }
#line 1582 "purity.m"
}

#line 1590 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
#line 1590 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1590 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1590 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 1590 "purity.m"
{
#line 1590 "purity.m"
  {
#line 1590 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1590 "purity.m"
    MR_Integer check_hlds__purity__CastX_27 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 1590 "purity.m"
    MR_Integer check_hlds__purity__CastY_28 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 1590 "purity.m"
    check_hlds__purity__succeeded = (check_hlds__purity__CastX_27 == check_hlds__purity__CastY_28);
#line 1590 "purity.m"
    if (check_hlds__purity__succeeded)
#line 2762 "check_hlds.purity.c"
      *check_hlds__purity__HeadVar__1_1 = (MR_Integer) 0;
#line 1590 "purity.m"
    else
#line 1590 "purity.m"
      {
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 2)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 3)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 4)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 5)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 6)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 7)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 0)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 1)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 2)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 3)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 4)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 5)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 6)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 7)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_20_20;

#line 1590 "purity.m"
        {
#line 1590 "purity.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__purity__V_20_20, check_hlds__purity__V_4_4, check_hlds__purity__V_12_12);
        }
#line 2808 "check_hlds.purity.c"
        check_hlds__purity__succeeded = (check_hlds__purity__V_20_20 == (MR_Integer) 0);
#line 1590 "purity.m"
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1590 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
          *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_20_20;
#line 1590 "purity.m"
        else
#line 1590 "purity.m"
          {
#line 1590 "purity.m"
            MR_Word check_hlds__purity__V_21_21;
#line 1590 "purity.m"
            MR_Integer check_hlds__purity__V_37_37 = (MR_Integer) check_hlds__purity__V_5_5;
#line 1590 "purity.m"
            MR_Integer check_hlds__purity__V_38_38 = (MR_Integer) check_hlds__purity__V_13_13;

#line 1590 "purity.m"
            {
#line 1590 "purity.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__purity__V_21_21, check_hlds__purity__V_37_37, check_hlds__purity__V_38_38);
            }
#line 2832 "check_hlds.purity.c"
            check_hlds__purity__succeeded = (check_hlds__purity__V_21_21 == (MR_Integer) 0);
#line 1590 "purity.m"
            check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1590 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
              *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_21_21;
#line 1590 "purity.m"
            else
#line 1590 "purity.m"
              {
#line 1590 "purity.m"
                MR_Word check_hlds__purity__V_22_22;

#line 1590 "purity.m"
                {
#line 1590 "purity.m"
                  hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__purity__V_22_22, check_hlds__purity__V_6_6, check_hlds__purity__V_14_14);
                }
#line 2852 "check_hlds.purity.c"
                check_hlds__purity__succeeded = (check_hlds__purity__V_22_22 == (MR_Integer) 0);
#line 1590 "purity.m"
                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1590 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
                  *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_22_22;
#line 1590 "purity.m"
                else
#line 1590 "purity.m"
                  {
#line 1590 "purity.m"
                    MR_Word check_hlds__purity__V_23_23;

#line 1590 "purity.m"
                    {
#line 1590 "purity.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_1[1], &check_hlds__purity__V_23_23, ((MR_Box) (check_hlds__purity__V_7_7)), ((MR_Box) (check_hlds__purity__V_15_15)));
                    }
#line 2872 "check_hlds.purity.c"
                    check_hlds__purity__succeeded = (check_hlds__purity__V_23_23 == (MR_Integer) 0);
#line 1590 "purity.m"
                    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1590 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
                      *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_23_23;
#line 1590 "purity.m"
                    else
#line 1590 "purity.m"
                      {
#line 1590 "purity.m"
                        MR_Word check_hlds__purity__V_24_24;

#line 1590 "purity.m"
                        {
#line 1590 "purity.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[0], &check_hlds__purity__V_24_24, ((MR_Box) (check_hlds__purity__V_8_8)), ((MR_Box) (check_hlds__purity__V_16_16)));
                        }
#line 2892 "check_hlds.purity.c"
                        check_hlds__purity__succeeded = (check_hlds__purity__V_24_24 == (MR_Integer) 0);
#line 1590 "purity.m"
                        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1590 "purity.m"
                        if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
                          *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_24_24;
#line 1590 "purity.m"
                        else
#line 1590 "purity.m"
                          {
#line 1590 "purity.m"
                            MR_Word check_hlds__purity__V_25_25;

#line 1590 "purity.m"
                            {
#line 1590 "purity.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[2], &check_hlds__purity__V_25_25, ((MR_Box) (check_hlds__purity__V_9_9)), ((MR_Box) (check_hlds__purity__V_17_17)));
                            }
#line 2912 "check_hlds.purity.c"
                            check_hlds__purity__succeeded = (check_hlds__purity__V_25_25 == (MR_Integer) 0);
#line 1590 "purity.m"
                            check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1590 "purity.m"
                            if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
                              *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_25_25;
#line 1590 "purity.m"
                            else
#line 1590 "purity.m"
                              {
#line 1590 "purity.m"
                                MR_Word check_hlds__purity__V_26_26;
#line 1590 "purity.m"
                                MR_Integer check_hlds__purity__V_39_39 = (MR_Integer) check_hlds__purity__V_10_10;
#line 1590 "purity.m"
                                MR_Integer check_hlds__purity__V_40_40 = (MR_Integer) check_hlds__purity__V_18_18;

#line 1590 "purity.m"
                                {
#line 1590 "purity.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__purity__V_26_26, check_hlds__purity__V_39_39, check_hlds__purity__V_40_40);
                                }
#line 2936 "check_hlds.purity.c"
                                check_hlds__purity__succeeded = (check_hlds__purity__V_26_26 == (MR_Integer) 0);
#line 1590 "purity.m"
                                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 1590 "purity.m"
                                if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
                                  *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__V_26_26;
#line 1590 "purity.m"
                                else
#line 1590 "purity.m"
                                  {
#line 1590 "purity.m"
                                    MR_Integer check_hlds__purity__V_41_41 = (MR_Integer) check_hlds__purity__V_11_11;
#line 1590 "purity.m"
                                    MR_Integer check_hlds__purity__V_42_42 = (MR_Integer) check_hlds__purity__V_19_19;

#line 1590 "purity.m"
                                    {
#line 1590 "purity.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__V_41_41, check_hlds__purity__V_42_42);
                                    }
#line 1590 "purity.m"
                                  }
#line 1590 "purity.m"
                              }
#line 1590 "purity.m"
                          }
#line 1590 "purity.m"
                      }
#line 1590 "purity.m"
                  }
#line 1590 "purity.m"
              }
#line 1590 "purity.m"
          }
#line 1590 "purity.m"
      }
#line 1590 "purity.m"
  }
#line 1590 "purity.m"
}

#line 1590 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0(
#line 1590 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1590 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 1590 "purity.m"
{
#line 1590 "purity.m"
  {
#line 1590 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1590 "purity.m"
    MR_Integer check_hlds__purity__CastX_19 = (MR_Integer) check_hlds__purity__HeadVar__1_1;
#line 1590 "purity.m"
    MR_Integer check_hlds__purity__CastY_20 = (MR_Integer) check_hlds__purity__HeadVar__2_2;

#line 1590 "purity.m"
    check_hlds__purity__succeeded = (check_hlds__purity__CastX_19 == check_hlds__purity__CastY_20);
#line 1590 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
      check_hlds__purity__succeeded = MR_TRUE;
#line 1590 "purity.m"
    else
#line 1590 "purity.m"
      {
#line 1590 "purity.m"
        MR_Word check_hlds__purity__TypeInfo_23_23;
#line 1590 "purity.m"
        MR_Word check_hlds__purity__TypeInfo_24_24;
#line 1590 "purity.m"
        MR_Word check_hlds__purity__TypeInfo_25_25;
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 2)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 3)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 4)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 5)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 6)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 7)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 2)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 3)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 4)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 5)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 6)));
#line 1590 "purity.m"
        MR_Word check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 7)));

#line 3046 "check_hlds.purity.c"
        {
#line 3048 "check_hlds.purity.c"
          check_hlds__purity__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__purity__V_3_3, check_hlds__purity__V_11_11);
        }
#line 1590 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
          {
#line 3055 "check_hlds.purity.c"
            check_hlds__purity__succeeded = (check_hlds__purity__V_4_4 == check_hlds__purity__V_12_12);
#line 1590 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
              {
#line 3061 "check_hlds.purity.c"
                {
#line 3063 "check_hlds.purity.c"
                  check_hlds__purity__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__purity__V_5_5, check_hlds__purity__V_13_13);
                }
#line 1590 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
                  {
#line 3070 "check_hlds.purity.c"
                    check_hlds__purity__TypeInfo_23_23 = (MR_Word) &check_hlds__purity_scalar_common_1[1];
#line 3072 "check_hlds.purity.c"
                    {
#line 3074 "check_hlds.purity.c"
                      check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_23_23, ((MR_Box) (check_hlds__purity__V_6_6)), ((MR_Box) (check_hlds__purity__V_14_14)));
                    }
#line 1590 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
                      {
#line 3081 "check_hlds.purity.c"
                        check_hlds__purity__TypeInfo_24_24 = (MR_Word) &check_hlds__purity_scalar_common_2[0];
#line 3083 "check_hlds.purity.c"
                        {
#line 3085 "check_hlds.purity.c"
                          check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_24_24, ((MR_Box) (check_hlds__purity__V_7_7)), ((MR_Box) (check_hlds__purity__V_15_15)));
                        }
#line 1590 "purity.m"
                        if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
                          {
#line 3092 "check_hlds.purity.c"
                            check_hlds__purity__TypeInfo_25_25 = (MR_Word) &check_hlds__purity_scalar_common_2[2];
#line 3094 "check_hlds.purity.c"
                            {
#line 3096 "check_hlds.purity.c"
                              check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_25_25, ((MR_Box) (check_hlds__purity__V_8_8)), ((MR_Box) (check_hlds__purity__V_16_16)));
                            }
#line 1590 "purity.m"
                            if (check_hlds__purity__succeeded)
#line 1590 "purity.m"
                              {
#line 3103 "check_hlds.purity.c"
                                check_hlds__purity__succeeded = (check_hlds__purity__V_9_9 == check_hlds__purity__V_17_17);
#line 1590 "purity.m"
                                if (check_hlds__purity__succeeded)
#line 3107 "check_hlds.purity.c"
                                  check_hlds__purity__succeeded = (check_hlds__purity__V_10_10 == check_hlds__purity__V_18_18);
#line 1590 "purity.m"
                              }
#line 1590 "purity.m"
                          }
#line 1590 "purity.m"
                      }
#line 1590 "purity.m"
                  }
#line 1590 "purity.m"
              }
#line 1590 "purity.m"
          }
#line 1590 "purity.m"
      }
#line 1590 "purity.m"
    return check_hlds__purity__succeeded;
#line 1590 "purity.m"
  }
#line 1590 "purity.m"
}

#line 203 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____purity_check_result_0_0(
#line 203 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 203 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 203 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 203 "purity.m"
{
#line 203 "purity.m"
  {
#line 203 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 203 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 203 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 203 "purity.m"
    {
#line 203 "purity.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
    }
#line 203 "purity.m"
  }
#line 203 "purity.m"
}

#line 203 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_check_result_0_0(
#line 203 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 203 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 203 "purity.m"
{
#line 3169 "check_hlds.purity.c"
  {
#line 3171 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

#line 3174 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 3176 "check_hlds.purity.c"
  }
#line 203 "purity.m"
}

#line 1586 "purity.m"
static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
#line 1586 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__1_1,
#line 1586 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1586 "purity.m"
  MR_Word check_hlds__purity__HeadVar__3_3)
#line 1586 "purity.m"
{
#line 1586 "purity.m"
  {
#line 1586 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1586 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
#line 1586 "purity.m"
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

#line 1586 "purity.m"
    {
#line 1586 "purity.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
    }
#line 1586 "purity.m"
  }
#line 1586 "purity.m"
}

#line 1586 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
#line 1586 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_1,
#line 1586 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2)
#line 1586 "purity.m"
{
#line 3220 "check_hlds.purity.c"
  {
#line 3222 "check_hlds.purity.c"
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

#line 3225 "check_hlds.purity.c"
    return check_hlds__purity__succeeded;
#line 3227 "check_hlds.purity.c"
  }
#line 1586 "purity.m"
}

#line 1613 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
#line 1613 "purity.m"
  MR_Word check_hlds__purity__Specs_4,
#line 1613 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_10,
#line 1613 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_11)
#line 1613 "purity.m"
{
#line 1618 "purity.m"
  {
#line 1618 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 1618 "purity.m"
    if ((check_hlds__purity__Specs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1618 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Info_11 = check_hlds__purity__STATE_VARIABLE_Info_0_10;
#line 1618 "purity.m"
    else
#line 1620 "purity.m"
      {
#line 1620 "purity.m"
        MR_Word check_hlds__purity__Msgs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1620 "purity.m"
        MR_Word check_hlds__purity__Msgs_9;
#line 1621 "purity.m"
        MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1621 "purity.m"
        MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1621 "purity.m"
        MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1621 "purity.m"
        MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1621 "purity.m"
        MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1621 "purity.m"
        MR_Word check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1621 "purity.m"
        MR_Word check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1623 "purity.m"
        MR_Word check_hlds__purity__V_20_20;
#line 1623 "purity.m"
        MR_Word check_hlds__purity__V_21_21;
#line 1623 "purity.m"
        MR_Word check_hlds__purity__V_22_22;
#line 1623 "purity.m"
        MR_Word check_hlds__purity__V_23_23;
#line 1623 "purity.m"
        MR_Word check_hlds__purity__V_24_24;
#line 1623 "purity.m"
        MR_Word check_hlds__purity__V_26_26;
#line 1623 "purity.m"
        MR_Word check_hlds__purity__V_27_27;
#line 1623 "purity.m"
        MR_Word check_hlds__purity__V_25_25;

#line 1622 "purity.m"
        {
#line 1622 "purity.m"
          check_hlds__purity__Msgs_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__Specs_4, check_hlds__purity__Msgs0_8);
        }
#line 1623 "purity.m"
        check_hlds__purity__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1623 "purity.m"
        check_hlds__purity__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1623 "purity.m"
        check_hlds__purity__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1623 "purity.m"
        check_hlds__purity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1623 "purity.m"
        check_hlds__purity__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1623 "purity.m"
        check_hlds__purity__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1623 "purity.m"
        check_hlds__purity__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1623 "purity.m"
        check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
#line 1623 "purity.m"
        {
#line 1623 "purity.m"
          MR_Word base;
#line 1623 "purity.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1623 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Info_11 = base;
#line 1623 "purity.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_20_20));
#line 1623 "purity.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_21_21));
#line 1623 "purity.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1623 "purity.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1623 "purity.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1623 "purity.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_9));
#line 1623 "purity.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_26_26));
#line 1623 "purity.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_27_27));
#line 1623 "purity.m"
        }
#line 1620 "purity.m"
      }
#line 1618 "purity.m"
  }
#line 1613 "purity.m"
}

#line 1605 "purity.m"
static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
#line 1605 "purity.m"
  MR_Word check_hlds__purity__Spec_4,
#line 1605 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1605 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9)
#line 1605 "purity.m"
{
#line 1608 "purity.m"
  {
#line 1608 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1608 "purity.m"
    MR_Word check_hlds__purity__Msgs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1608 "purity.m"
    MR_Word check_hlds__purity__Msgs_7;
#line 1608 "purity.m"
    MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1608 "purity.m"
    MR_Word check_hlds__purity__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1608 "purity.m"
    MR_Word check_hlds__purity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1608 "purity.m"
    MR_Word check_hlds__purity__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1608 "purity.m"
    MR_Word check_hlds__purity__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1608 "purity.m"
    MR_Word check_hlds__purity__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1608 "purity.m"
    MR_Word check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));

#line 1610 "purity.m"
    {
#line 1610 "purity.m"
      check_hlds__purity__Msgs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_7, 0) = ((MR_Box) (check_hlds__purity__Spec_4));
#line 1610 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_7, 1) = ((MR_Box) (check_hlds__purity__Msgs0_6));
#line 1610 "purity.m"
    }
#line 1611 "purity.m"
    {
#line 1611 "purity.m"
      MR_Word base;
#line 1611 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Info_9 = base;
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_11_11));
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_12_12));
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_13_13));
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_14_14));
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_15_15));
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_7));
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_16_16));
#line 1611 "purity.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_17_17));
#line 1611 "purity.m"
    }
#line 1608 "purity.m"
  }
#line 1605 "purity.m"
}

#line 1493 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
#line 1493 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1493 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 1493 "purity.m"
  MR_Word check_hlds__purity__Context_8,
#line 1493 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9)
#line 1493 "purity.m"
{
#line 1497 "purity.m"
  {
#line 1497 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_65_65;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__PredInfo_11;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__ActualPurity_12;
#line 1497 "purity.m"
    MR_String check_hlds__purity__DeclaredPurityName_13;
#line 1497 "purity.m"
    MR_String check_hlds__purity__ActualPurityName_14;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__PredPieces_15;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__Pieces1_16;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__Pieces2_17;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_25_25;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_28_28;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_30_30;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_33_33;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_34_34;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_59_59;
#line 1497 "purity.m"
    MR_Word check_hlds__purity__V_63_63;

#line 1498 "purity.m"
    {
#line 1498 "purity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_6, check_hlds__purity__PredId_7, &check_hlds__purity__PredInfo_11);
    }
#line 1499 "purity.m"
    {
#line 1499 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_11, &check_hlds__purity__ActualPurity_12);
    }
#line 1500 "purity.m"
    {
#line 1500 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclaredPurity_9, &check_hlds__purity__DeclaredPurityName_13);
    }
#line 1501 "purity.m"
    {
#line 1501 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_12, &check_hlds__purity__ActualPurityName_14);
    }
#line 1502 "purity.m"
    {
#line 1502 "purity.m"
      check_hlds__purity__PredPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 0, check_hlds__purity__PredId_7);
    }
#line 3505 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1506 "purity.m"
    {
#line 1506 "purity.m"
      check_hlds__purity__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_34_34, 1) = ((MR_Box) (check_hlds__purity__DeclaredPurityName_13));
#line 1506 "purity.m"
    }
#line 1506 "purity.m"
    {
#line 1506 "purity.m"
      check_hlds__purity__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 0) = ((MR_Box) (check_hlds__purity__V_34_34));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[18])));
#line 1506 "purity.m"
    }
#line 1506 "purity.m"
    {
#line 1506 "purity.m"
      check_hlds__purity__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[44])));
#line 1506 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 1) = ((MR_Box) (check_hlds__purity__V_33_33));
#line 1506 "purity.m"
    }
#line 1505 "purity.m"
    {
#line 1505 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1505 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 1) = ((MR_Box) (check_hlds__purity__V_30_30));
#line 1505 "purity.m"
    }
#line 1505 "purity.m"
    {
#line 1505 "purity.m"
      check_hlds__purity__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[61])));
#line 1505 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 1) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1505 "purity.m"
    }
#line 1505 "purity.m"
    {
#line 1505 "purity.m"
      check_hlds__purity__V_24_24 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_65_65, check_hlds__purity__PredPieces_15, check_hlds__purity__V_25_25);
    }
#line 1505 "purity.m"
    {
#line 1505 "purity.m"
      check_hlds__purity__Pieces1_16 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[60]), check_hlds__purity__V_24_24);
    }
#line 1511 "purity.m"
#line 1511 "purity.m"
    switch (check_hlds__purity__ActualPurity_12) {
#line 1511 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1511 "purity.m"
      case (MR_Integer) 2:
#line 1511 "purity.m"
      case (MR_Integer) 1:
#line 1514 "purity.m"
        {
#line 1514 "purity.m"
          MR_Word check_hlds__purity__V_43_43;
#line 1514 "purity.m"
          MR_Word check_hlds__purity__V_44_44;

#line 1515 "purity.m"
          {
#line 1515 "purity.m"
            check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1515 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_44_44, 1) = ((MR_Box) (check_hlds__purity__ActualPurityName_14));
#line 1515 "purity.m"
          }
#line 1515 "purity.m"
          {
#line 1515 "purity.m"
            check_hlds__purity__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 0) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1515 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[20])));
#line 1515 "purity.m"
          }
#line 1515 "purity.m"
          {
#line 1515 "purity.m"
            check_hlds__purity__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[62])));
#line 1515 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_17, 1) = ((MR_Box) (check_hlds__purity__V_43_43));
#line 1515 "purity.m"
          }
#line 1514 "purity.m"
        }
#line 1511 "purity.m"
        break;
#line 1511 "purity.m"
      case (MR_Integer) 0:
#line 1510 "purity.m"
        check_hlds__purity__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[22]);
#line 1511 "purity.m"
        break;
#line 1511 "purity.m"
    }
#line 1518 "purity.m"
    {
#line 1518 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__Pieces1_16));
#line 1518 "purity.m"
    }
#line 1518 "purity.m"
    {
#line 1518 "purity.m"
      check_hlds__purity__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_59_59, 0) = ((MR_Box) (check_hlds__purity__Pieces2_17));
#line 1518 "purity.m"
    }
#line 1518 "purity.m"
    {
#line 1518 "purity.m"
      check_hlds__purity__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_58_58, 0) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1518 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1518 "purity.m"
    }
#line 1518 "purity.m"
    {
#line 1518 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1518 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 1) = ((MR_Box) (check_hlds__purity__V_58_58));
#line 1518 "purity.m"
    }
#line 1518 "purity.m"
    {
#line 1518 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_8));
#line 1518 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1518 "purity.m"
    }
#line 1519 "purity.m"
    {
#line 1519 "purity.m"
      check_hlds__purity__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_63_63, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1519 "purity.m"
    }
#line 1519 "purity.m"
    {
#line 1519 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1519 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_63_63));
#line 1519 "purity.m"
    }
#line 1497 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1497 "purity.m"
  }
#line 1493 "purity.m"
}

#line 1468 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
#line 1468 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_5,
#line 1468 "purity.m"
  MR_Word check_hlds__purity__PredId_6,
#line 1468 "purity.m"
  MR_Word check_hlds__purity__Context_7)
#line 1468 "purity.m"
{
#line 1471 "purity.m"
  {
#line 1471 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__Spec_8;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_63_63;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__PredInfo_9;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_10;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__Purity_11;
#line 1471 "purity.m"
    MR_String check_hlds__purity__PurityName_12;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__PredPieces_13;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__Pieces1_14;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__Pieces2_15;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__Msg_16;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__V_18_18;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__V_21_21;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__V_54_54;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1471 "purity.m"
    MR_Word check_hlds__purity__V_61_61;

#line 1472 "purity.m"
    {
#line 1472 "purity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_5, check_hlds__purity__PredId_6, &check_hlds__purity__PredInfo_9);
    }
#line 1473 "purity.m"
    {
#line 1473 "purity.m"
      check_hlds__purity__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_9);
    }
#line 1474 "purity.m"
    {
#line 1474 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__Purity_11);
    }
#line 1475 "purity.m"
    {
#line 1475 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_11, &check_hlds__purity__PurityName_12);
    }
#line 1476 "purity.m"
    {
#line 1476 "purity.m"
      check_hlds__purity__PredPieces_13 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_5, (MR_Integer) 0, check_hlds__purity__PredId_6);
    }
#line 3779 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1478 "purity.m"
    {
#line 1478 "purity.m"
      check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__PurityName_12));
#line 1478 "purity.m"
    }
#line 1478 "purity.m"
    {
#line 1478 "purity.m"
      check_hlds__purity__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 0) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1478 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1478 "purity.m"
    }
#line 1478 "purity.m"
    {
#line 1478 "purity.m"
      check_hlds__purity__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[55])));
#line 1478 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_18_18, 1) = ((MR_Box) (check_hlds__purity__V_21_21));
#line 1478 "purity.m"
    }
#line 1479 "purity.m"
    {
#line 1479 "purity.m"
      check_hlds__purity__V_24_24 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__PredPieces_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1478 "purity.m"
    {
#line 1478 "purity.m"
      check_hlds__purity__Pieces1_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__V_18_18, check_hlds__purity__V_24_24);
    }
#line 1484 "purity.m"
#line 1484 "purity.m"
    switch (check_hlds__purity__PredOrFunc_10) {
#line 1484 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1484 "purity.m"
      case (MR_Integer) 1:
#line 1485 "purity.m"
        {
#line 1485 "purity.m"
          MR_Word check_hlds__purity__V_33_33;
#line 1485 "purity.m"
          MR_Word check_hlds__purity__V_36_36;
#line 1485 "purity.m"
          MR_Word check_hlds__purity__V_37_37;

#line 1488 "purity.m"
          {
#line 1488 "purity.m"
            check_hlds__purity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1488 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_37_37, 1) = ((MR_Box) (check_hlds__purity__PurityName_12));
#line 1488 "purity.m"
          }
#line 1488 "purity.m"
          {
#line 1488 "purity.m"
            check_hlds__purity__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 0) = ((MR_Box) (check_hlds__purity__V_37_37));
#line 1488 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[18])));
#line 1488 "purity.m"
          }
#line 1487 "purity.m"
          {
#line 1487 "purity.m"
            check_hlds__purity__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[57])));
#line 1487 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_33_33, 1) = ((MR_Box) (check_hlds__purity__V_36_36));
#line 1487 "purity.m"
          }
#line 1486 "purity.m"
          {
#line 1486 "purity.m"
            check_hlds__purity__Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[56])));
#line 1486 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 1) = ((MR_Box) (check_hlds__purity__V_33_33));
#line 1486 "purity.m"
          }
#line 1485 "purity.m"
        }
#line 1484 "purity.m"
        break;
#line 1484 "purity.m"
      case (MR_Integer) 0:
#line 1481 "purity.m"
        {
#line 1481 "purity.m"
          MR_Word check_hlds__purity__V_46_46;
#line 1481 "purity.m"
          MR_Word check_hlds__purity__V_47_47;

#line 1483 "purity.m"
          {
#line 1483 "purity.m"
            check_hlds__purity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1483 "purity.m"
            MR_hl_field(MR_mktag(3), check_hlds__purity__V_47_47, 1) = ((MR_Box) (check_hlds__purity__PurityName_12));
#line 1483 "purity.m"
          }
#line 1483 "purity.m"
          {
#line 1483 "purity.m"
            check_hlds__purity__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1483 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[18])));
#line 1483 "purity.m"
          }
#line 1482 "purity.m"
          {
#line 1482 "purity.m"
            check_hlds__purity__Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[58])));
#line 1482 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 1) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 1482 "purity.m"
          }
#line 1481 "purity.m"
        }
#line 1484 "purity.m"
        break;
#line 1484 "purity.m"
    }
#line 1490 "purity.m"
    {
#line 1490 "purity.m"
      check_hlds__purity__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1490 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_55_55, 0) = ((MR_Box) (check_hlds__purity__Pieces1_14));
#line 1490 "purity.m"
    }
#line 1490 "purity.m"
    {
#line 1490 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1490 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__Pieces2_15));
#line 1490 "purity.m"
    }
#line 1490 "purity.m"
    {
#line 1490 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1490 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1490 "purity.m"
    }
#line 1490 "purity.m"
    {
#line 1490 "purity.m"
      check_hlds__purity__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_54_54, 0) = ((MR_Box) (check_hlds__purity__V_55_55));
#line 1490 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_54_54, 1) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1490 "purity.m"
    }
#line 1490 "purity.m"
    {
#line 1490 "purity.m"
      check_hlds__purity__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1490 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_16, 0) = ((MR_Box) (check_hlds__purity__Context_7));
#line 1490 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_16, 1) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1490 "purity.m"
    }
#line 1491 "purity.m"
    {
#line 1491 "purity.m"
      check_hlds__purity__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__Msg_16));
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1491 "purity.m"
    }
#line 1491 "purity.m"
    {
#line 1491 "purity.m"
      check_hlds__purity__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1491 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 2) = ((MR_Box) (check_hlds__purity__V_61_61));
#line 1491 "purity.m"
    }
#line 1471 "purity.m"
    return check_hlds__purity__Spec_8;
#line 1471 "purity.m"
  }
#line 1468 "purity.m"
}

#line 1444 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inferred_impure_4_f_0(
#line 1444 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1444 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1444 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1444 "purity.m"
  MR_Word check_hlds__purity__Purity_9)
#line 1444 "purity.m"
{
#line 1447 "purity.m"
  {
#line 1447 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_81;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__Context_11;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_12;
#line 1447 "purity.m"
    MR_String check_hlds__purity__PredOrFuncStr_13;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_14;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__DeclaredPurity_15;
#line 1447 "purity.m"
    MR_String check_hlds__purity__PurityName_16;
#line 1447 "purity.m"
    MR_String check_hlds__purity__DeclaredPurityName_17;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__Pieces1_18;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__Pieces2_19;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__Msg_20;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_25_25;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_28_28;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_29_29;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_53_53;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_54_54;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_62_62;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__PredPieces_68;
#line 1447 "purity.m"
    MR_Word check_hlds__purity__V_74_74;

#line 1448 "purity.m"
    {
#line 1448 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
#line 1449 "purity.m"
    {
#line 1449 "purity.m"
      check_hlds__purity__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
#line 1450 "purity.m"
    {
#line 1450 "purity.m"
      check_hlds__purity__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(check_hlds__purity__PredOrFunc_12);
    }
#line 1374 "purity.m"
    {
#line 1374 "purity.m"
      check_hlds__purity__PredPieces_68 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
#line 4089 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1376 "purity.m"
    {
#line 1376 "purity.m"
      check_hlds__purity__V_74_74 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_81, check_hlds__purity__PredPieces_68, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1376 "purity.m"
    {
#line 1376 "purity.m"
      check_hlds__purity__PredContextPieces_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_81, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[37]), check_hlds__purity__V_74_74);
    }
#line 1452 "purity.m"
    {
#line 1452 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__DeclaredPurity_15);
    }
#line 1453 "purity.m"
    {
#line 1453 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_9, &check_hlds__purity__PurityName_16);
    }
#line 1454 "purity.m"
    {
#line 1454 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclaredPurity_15, &check_hlds__purity__DeclaredPurityName_17);
    }
#line 1456 "purity.m"
    {
#line 1456 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_24_24, 0) = ((MR_Box) (check_hlds__purity__PredOrFuncStr_13));
#line 1456 "purity.m"
    }
#line 1457 "purity.m"
    {
#line 1457 "purity.m"
      check_hlds__purity__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_29_29, 0) = ((MR_Box) (check_hlds__purity__PurityName_16));
#line 1457 "purity.m"
    }
#line 1457 "purity.m"
    {
#line 1457 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[16])));
#line 1457 "purity.m"
    }
#line 1457 "purity.m"
    {
#line 1457 "purity.m"
      check_hlds__purity__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[50])));
#line 1457 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_25_25, 1) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1457 "purity.m"
    }
#line 1456 "purity.m"
    {
#line 1456 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 1) = ((MR_Box) (check_hlds__purity__V_25_25));
#line 1456 "purity.m"
    }
#line 1456 "purity.m"
    {
#line 1456 "purity.m"
      check_hlds__purity__Pieces1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[49])));
#line 1456 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces1_18, 1) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1456 "purity.m"
    }
#line 1458 "purity.m"
    {
#line 1458 "purity.m"
      check_hlds__purity__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__purity__PredInfo_7);
    }
#line 1460 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1459 "purity.m"
      {
#line 1459 "purity.m"
        check_hlds__purity__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[52]);
#line 1459 "purity.m"
      }
#line 1460 "purity.m"
    else
#line 1461 "purity.m"
      {
#line 1461 "purity.m"
        MR_Word check_hlds__purity__V_41_41;
#line 1461 "purity.m"
        MR_Word check_hlds__purity__V_42_42;
#line 1461 "purity.m"
        MR_Word check_hlds__purity__V_43_43;
#line 1461 "purity.m"
        MR_Word check_hlds__purity__V_46_46;
#line 1461 "purity.m"
        MR_Word check_hlds__purity__V_47_47;
#line 1461 "purity.m"
        MR_String check_hlds__purity__V_48_48;

#line 1461 "purity.m"
        {
#line 1461 "purity.m"
          check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "purity.m"
          MR_hl_field(MR_mktag(3), check_hlds__purity__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1461 "purity.m"
          MR_hl_field(MR_mktag(3), check_hlds__purity__V_42_42, 1) = ((MR_Box) (check_hlds__purity__PurityName_16));
#line 1461 "purity.m"
        }
#line 1462 "purity.m"
        {
#line 1462 "purity.m"
          check_hlds__purity__V_48_48 = mercury__string__f_43_43_2_f_0(check_hlds__purity__DeclaredPurityName_17, (MR_String) ".");
        }
#line 1462 "purity.m"
        {
#line 1462 "purity.m"
          check_hlds__purity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_47_47, 0) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 1462 "purity.m"
        }
#line 1462 "purity.m"
        {
#line 1462 "purity.m"
          check_hlds__purity__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])));
#line 1462 "purity.m"
        }
#line 1462 "purity.m"
        {
#line 1462 "purity.m"
          check_hlds__purity__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[54])));
#line 1462 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_43_43, 1) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 1462 "purity.m"
        }
#line 1461 "purity.m"
        {
#line 1461 "purity.m"
          check_hlds__purity__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 0) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1461 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 1) = ((MR_Box) (check_hlds__purity__V_43_43));
#line 1461 "purity.m"
        }
#line 1461 "purity.m"
        {
#line 1461 "purity.m"
          check_hlds__purity__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[53])));
#line 1461 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_19, 1) = ((MR_Box) (check_hlds__purity__V_41_41));
#line 1461 "purity.m"
        }
#line 1461 "purity.m"
      }
#line 1465 "purity.m"
    {
#line 1465 "purity.m"
      check_hlds__purity__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_54_54, 0) = ((MR_Box) (check_hlds__purity__PredContextPieces_14));
#line 1465 "purity.m"
    }
#line 1465 "purity.m"
    {
#line 1465 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__Pieces1_18));
#line 1465 "purity.m"
    }
#line 1465 "purity.m"
    {
#line 1465 "purity.m"
      check_hlds__purity__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_58_58, 0) = ((MR_Box) (check_hlds__purity__Pieces2_19));
#line 1465 "purity.m"
    }
#line 1465 "purity.m"
    {
#line 1465 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__V_58_58));
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1465 "purity.m"
    }
#line 1465 "purity.m"
    {
#line 1465 "purity.m"
      check_hlds__purity__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 0) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 1) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1465 "purity.m"
    }
#line 1465 "purity.m"
    {
#line 1465 "purity.m"
      check_hlds__purity__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_53_53, 0) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1465 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_53_53, 1) = ((MR_Box) (check_hlds__purity__V_55_55));
#line 1465 "purity.m"
    }
#line 1464 "purity.m"
    {
#line 1464 "purity.m"
      check_hlds__purity__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1464 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_20, 0) = ((MR_Box) (check_hlds__purity__Context_11));
#line 1464 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_20, 1) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1464 "purity.m"
    }
#line 1466 "purity.m"
    {
#line 1466 "purity.m"
      check_hlds__purity__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_62_62, 0) = ((MR_Box) (check_hlds__purity__Msg_20));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1466 "purity.m"
    }
#line 1466 "purity.m"
    {
#line 1466 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1466 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_62_62));
#line 1466 "purity.m"
    }
#line 1447 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1447 "purity.m"
  }
#line 1444 "purity.m"
}

#line 1413 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_promise_pure_4_f_0(
#line 1413 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1413 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1413 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1413 "purity.m"
  MR_Word check_hlds__purity__PromisedPurity_9)
#line 1413 "purity.m"
{
#line 1417 "purity.m"
  {
#line 1417 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_84;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__Context_11;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_12;
#line 1417 "purity.m"
    MR_String check_hlds__purity__Pragma_13;
#line 1417 "purity.m"
    MR_String check_hlds__purity__CodeStr_14;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_15;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__MainPieces_16;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__VerbosePieces_17;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_25_25;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_34_34;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_35_35;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_36_36;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_39_39;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_40_40;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_41_41;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_59_59;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_60_60;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_65_65;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__PredPieces_71;
#line 1417 "purity.m"
    MR_Word check_hlds__purity__V_77_77;

#line 1418 "purity.m"
    {
#line 1418 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
#line 1374 "purity.m"
    {
#line 1374 "purity.m"
      check_hlds__purity__PredPieces_71 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
#line 4444 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1376 "purity.m"
    {
#line 1376 "purity.m"
      check_hlds__purity__V_77_77 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_84, check_hlds__purity__PredPieces_71, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1376 "purity.m"
    {
#line 1376 "purity.m"
      check_hlds__purity__PredContextPieces_12 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_84, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[37]), check_hlds__purity__V_77_77);
    }
#line 1424 "purity.m"
#line 1424 "purity.m"
    switch (check_hlds__purity__PromisedPurity_9) {
#line 1424 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1424 "purity.m"
      case (MR_Integer) 2:
#line 1429 "purity.m"
        {
#line 1430 "purity.m"
          {
#line 1430 "purity.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "function \140check_hlds.purity.warn_unnecessary_promise_pure\'/4", (MR_String) "promise_impure");
          }
#line 1429 "purity.m"
        }
#line 1424 "purity.m"
        break;
#line 1424 "purity.m"
      case (MR_Integer) 0:
#line 1421 "purity.m"
        {
#line 1422 "purity.m"
          check_hlds__purity__Pragma_13 = (MR_String) "promise_pure";
#line 1423 "purity.m"
          check_hlds__purity__CodeStr_14 = (MR_String) "impure or semipure";
#line 1421 "purity.m"
        }
#line 1424 "purity.m"
        break;
#line 1424 "purity.m"
      case (MR_Integer) 1:
#line 1425 "purity.m"
        {
#line 1426 "purity.m"
          check_hlds__purity__Pragma_13 = (MR_String) "promise_semipure";
#line 1427 "purity.m"
          check_hlds__purity__CodeStr_14 = (MR_String) "impure";
#line 1425 "purity.m"
        }
#line 1424 "purity.m"
        break;
#line 1424 "purity.m"
    }
#line 1432 "purity.m"
    {
#line 1432 "purity.m"
      check_hlds__purity__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
#line 1433 "purity.m"
    {
#line 1433 "purity.m"
      check_hlds__purity__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1433 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_25_25, 1) = ((MR_Box) (check_hlds__purity__Pragma_13));
#line 1433 "purity.m"
    }
#line 1433 "purity.m"
    {
#line 1433 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 0) = ((MR_Box) (check_hlds__purity__V_25_25));
#line 1433 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[14])));
#line 1433 "purity.m"
    }
#line 1433 "purity.m"
    {
#line 1433 "purity.m"
      check_hlds__purity__MainPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__MainPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[44])));
#line 1433 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__MainPieces_16, 1) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1433 "purity.m"
    }
#line 1435 "purity.m"
    {
#line 1435 "purity.m"
      check_hlds__purity__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1435 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__V_35_35, 1) = ((MR_Box) (check_hlds__purity__PredOrFunc_15));
#line 1435 "purity.m"
    }
#line 1436 "purity.m"
    {
#line 1436 "purity.m"
      check_hlds__purity__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_40_40, 0) = ((MR_Box) (check_hlds__purity__CodeStr_14));
#line 1436 "purity.m"
    }
#line 1437 "purity.m"
    {
#line 1437 "purity.m"
      check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[48])));
#line 1437 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 1) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1437 "purity.m"
    }
#line 1436 "purity.m"
    {
#line 1436 "purity.m"
      check_hlds__purity__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[47])));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_41_41, 1) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1436 "purity.m"
    }
#line 1436 "purity.m"
    {
#line 1436 "purity.m"
      check_hlds__purity__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 0) = ((MR_Box) (check_hlds__purity__V_40_40));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 1) = ((MR_Box) (check_hlds__purity__V_41_41));
#line 1436 "purity.m"
    }
#line 1436 "purity.m"
    {
#line 1436 "purity.m"
      check_hlds__purity__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[46])));
#line 1436 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_36_36, 1) = ((MR_Box) (check_hlds__purity__V_39_39));
#line 1436 "purity.m"
    }
#line 1435 "purity.m"
    {
#line 1435 "purity.m"
      check_hlds__purity__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 0) = ((MR_Box) (check_hlds__purity__V_35_35));
#line 1435 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 1) = ((MR_Box) (check_hlds__purity__V_36_36));
#line 1435 "purity.m"
    }
#line 1435 "purity.m"
    {
#line 1435 "purity.m"
      check_hlds__purity__VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[45])));
#line 1435 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 1) = ((MR_Box) (check_hlds__purity__V_34_34));
#line 1435 "purity.m"
    }
#line 1440 "purity.m"
    {
#line 1440 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1440 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__PredContextPieces_12));
#line 1440 "purity.m"
    }
#line 1440 "purity.m"
    {
#line 1440 "purity.m"
      check_hlds__purity__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1440 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_58_58, 0) = ((MR_Box) (check_hlds__purity__MainPieces_16));
#line 1440 "purity.m"
    }
#line 1441 "purity.m"
    {
#line 1441 "purity.m"
      check_hlds__purity__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_60_60, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_60_60, 1) = ((MR_Box) (check_hlds__purity__VerbosePieces_17));
#line 1441 "purity.m"
    }
#line 1441 "purity.m"
    {
#line 1441 "purity.m"
      check_hlds__purity__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 0) = ((MR_Box) (check_hlds__purity__V_60_60));
#line 1441 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1441 "purity.m"
    }
#line 1440 "purity.m"
    {
#line 1440 "purity.m"
      check_hlds__purity__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 0) = ((MR_Box) (check_hlds__purity__V_58_58));
#line 1440 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_57_57, 1) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1440 "purity.m"
    }
#line 1440 "purity.m"
    {
#line 1440 "purity.m"
      check_hlds__purity__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 0) = ((MR_Box) (check_hlds__purity__V_56_56));
#line 1440 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_55_55, 1) = ((MR_Box) (check_hlds__purity__V_57_57));
#line 1440 "purity.m"
    }
#line 1439 "purity.m"
    {
#line 1439 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_11));
#line 1439 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_55_55));
#line 1439 "purity.m"
    }
#line 1442 "purity.m"
    {
#line 1442 "purity.m"
      check_hlds__purity__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1442 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1442 "purity.m"
    }
#line 1442 "purity.m"
    {
#line 1442 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1442 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1442 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1442 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_65_65));
#line 1442 "purity.m"
    }
#line 1417 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1417 "purity.m"
  }
#line 1413 "purity.m"
}

#line 1398 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__warn_exaggerated_impurity_decl_5_f_0(
#line 1398 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_7,
#line 1398 "purity.m"
  MR_Word check_hlds__purity__PredInfo_8,
#line 1398 "purity.m"
  MR_Word check_hlds__purity__PredId_9,
#line 1398 "purity.m"
  MR_Word check_hlds__purity__DeclPurity_10,
#line 1398 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_11)
#line 1398 "purity.m"
{
#line 1402 "purity.m"
  {
#line 1402 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__Spec_12;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_57;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__Context_13;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_14;
#line 1402 "purity.m"
    MR_String check_hlds__purity__DeclPurityName_15;
#line 1402 "purity.m"
    MR_String check_hlds__purity__ActualPurityName_16;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__Pieces_17;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_19_19;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_27_27;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_28_28;
#line 1402 "purity.m"
    MR_String check_hlds__purity__V_29_29;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_32_32;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_33_33;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_37_37;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__PredPieces_44;
#line 1402 "purity.m"
    MR_Word check_hlds__purity__V_50_50;

#line 1403 "purity.m"
    {
#line 1403 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_8, &check_hlds__purity__Context_13);
    }
#line 1374 "purity.m"
    {
#line 1374 "purity.m"
      check_hlds__purity__PredPieces_44 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_7, (MR_Integer) 1, check_hlds__purity__PredId_9);
    }
#line 4778 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_57 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1376 "purity.m"
    {
#line 1376 "purity.m"
      check_hlds__purity__V_50_50 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_57, check_hlds__purity__PredPieces_44, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1376 "purity.m"
    {
#line 1376 "purity.m"
      check_hlds__purity__PredContextPieces_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_57, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[37]), check_hlds__purity__V_50_50);
    }
#line 1405 "purity.m"
    {
#line 1405 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclPurity_10, &check_hlds__purity__DeclPurityName_15);
    }
#line 1406 "purity.m"
    {
#line 1406 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_11, &check_hlds__purity__ActualPurityName_16);
    }
#line 1408 "purity.m"
    {
#line 1408 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__DeclPurityName_15));
#line 1408 "purity.m"
    }
#line 1409 "purity.m"
    {
#line 1409 "purity.m"
      check_hlds__purity__V_29_29 = mercury__string__f_43_43_2_f_0(check_hlds__purity__ActualPurityName_16, (MR_String) ".");
    }
#line 1409 "purity.m"
    {
#line 1409 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1409 "purity.m"
    }
#line 1409 "purity.m"
    {
#line 1409 "purity.m"
      check_hlds__purity__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 0) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1409 "purity.m"
    }
#line 1409 "purity.m"
    {
#line 1409 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[43])));
#line 1409 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_24_24, 1) = ((MR_Box) (check_hlds__purity__V_27_27));
#line 1409 "purity.m"
    }
#line 1408 "purity.m"
    {
#line 1408 "purity.m"
      check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1408 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 1) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1408 "purity.m"
    }
#line 1408 "purity.m"
    {
#line 1408 "purity.m"
      check_hlds__purity__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[42])));
#line 1408 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 1) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1408 "purity.m"
    }
#line 1407 "purity.m"
    {
#line 1407 "purity.m"
      check_hlds__purity__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__purity__PredContextPieces_14, check_hlds__purity__V_19_19);
    }
#line 1410 "purity.m"
    {
#line 1410 "purity.m"
      check_hlds__purity__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_33_33, 0) = ((MR_Box) (check_hlds__purity__Pieces_17));
#line 1410 "purity.m"
    }
#line 1410 "purity.m"
    {
#line 1410 "purity.m"
      check_hlds__purity__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_32_32, 0) = ((MR_Box) (check_hlds__purity__V_33_33));
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1410 "purity.m"
    }
#line 1410 "purity.m"
    {
#line 1410 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_13));
#line 1410 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_32_32));
#line 1410 "purity.m"
    }
#line 1411 "purity.m"
    {
#line 1411 "purity.m"
      check_hlds__purity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1411 "purity.m"
    }
#line 1411 "purity.m"
    {
#line 1411 "purity.m"
      check_hlds__purity__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1411 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_12, 2) = ((MR_Box) (check_hlds__purity__V_37_37));
#line 1411 "purity.m"
    }
#line 1402 "purity.m"
    return check_hlds__purity__Spec_12;
#line 1402 "purity.m"
  }
#line 1398 "purity.m"
}

#line 1378 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_promise_4_f_0(
#line 1378 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_6,
#line 1378 "purity.m"
  MR_Word check_hlds__purity__PredInfo_7,
#line 1378 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1378 "purity.m"
  MR_Word check_hlds__purity__Purity_9)
#line 1378 "purity.m"
{
#line 1381 "purity.m"
  {
#line 1381 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__Spec_10;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_22_70;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__Context_11;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_12;
#line 1381 "purity.m"
    MR_String check_hlds__purity__PredOrFuncStr_13;
#line 1381 "purity.m"
    MR_String check_hlds__purity__PurityName_14;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__PredContextPieces_15;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__MainPieces_16;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__VerbosePieces_17;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__Msg_18;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_19_19;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_30_30;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_31_31;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_42_42;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_43_43;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_45_45;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_50_50;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__PredPieces_57;
#line 1381 "purity.m"
    MR_Word check_hlds__purity__V_63_63;

#line 1382 "purity.m"
    {
#line 1382 "purity.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
#line 1383 "purity.m"
    {
#line 1383 "purity.m"
      check_hlds__purity__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
#line 1384 "purity.m"
    {
#line 1384 "purity.m"
      check_hlds__purity__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(check_hlds__purity__PredOrFunc_12);
    }
#line 1385 "purity.m"
    {
#line 1385 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_9, &check_hlds__purity__PurityName_14);
    }
#line 1374 "purity.m"
    {
#line 1374 "purity.m"
      check_hlds__purity__PredPieces_57 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
#line 5010 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_22_70 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1376 "purity.m"
    {
#line 1376 "purity.m"
      check_hlds__purity__V_63_63 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_70, check_hlds__purity__PredPieces_57, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
#line 1376 "purity.m"
    {
#line 1376 "purity.m"
      check_hlds__purity__PredContextPieces_15 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_70, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[37]), check_hlds__purity__V_63_63);
    }
#line 1388 "purity.m"
    {
#line 1388 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__PurityName_14));
#line 1388 "purity.m"
    }
#line 1388 "purity.m"
    {
#line 1388 "purity.m"
      check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1388 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[40])));
#line 1388 "purity.m"
    }
#line 1388 "purity.m"
    {
#line 1388 "purity.m"
      check_hlds__purity__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[38])));
#line 1388 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_19_19, 1) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1388 "purity.m"
    }
#line 1387 "purity.m"
    {
#line 1387 "purity.m"
      check_hlds__purity__MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__purity__PredContextPieces_15, check_hlds__purity__V_19_19);
    }
#line 1390 "purity.m"
    {
#line 1390 "purity.m"
      check_hlds__purity__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_31_31, 0) = ((MR_Box) (check_hlds__purity__PredOrFuncStr_13));
#line 1390 "purity.m"
    }
#line 1390 "purity.m"
    {
#line 1390 "purity.m"
      check_hlds__purity__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 0) = ((MR_Box) (check_hlds__purity__V_31_31));
#line 1390 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[12])));
#line 1390 "purity.m"
    }
#line 1390 "purity.m"
    {
#line 1390 "purity.m"
      check_hlds__purity__VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[41])));
#line 1390 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 1) = ((MR_Box) (check_hlds__purity__V_30_30));
#line 1390 "purity.m"
    }
#line 1395 "purity.m"
    {
#line 1395 "purity.m"
      check_hlds__purity__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_43_43, 0) = ((MR_Box) (check_hlds__purity__MainPieces_16));
#line 1395 "purity.m"
    }
#line 1395 "purity.m"
    {
#line 1395 "purity.m"
      check_hlds__purity__V_45_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_45_45, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1395 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_45_45, 1) = ((MR_Box) (check_hlds__purity__VerbosePieces_17));
#line 1395 "purity.m"
    }
#line 1395 "purity.m"
    {
#line 1395 "purity.m"
      check_hlds__purity__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 0) = ((MR_Box) (check_hlds__purity__V_45_45));
#line 1395 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1395 "purity.m"
    }
#line 1395 "purity.m"
    {
#line 1395 "purity.m"
      check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 0) = ((MR_Box) (check_hlds__purity__V_43_43));
#line 1395 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 1) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 1395 "purity.m"
    }
#line 1394 "purity.m"
    {
#line 1394 "purity.m"
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1394 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_11));
#line 1394 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1394 "purity.m"
    }
#line 1396 "purity.m"
    {
#line 1396 "purity.m"
      check_hlds__purity__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_50_50, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "purity.m"
    }
#line 1396 "purity.m"
    {
#line 1396 "purity.m"
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1396 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_50_50));
#line 1396 "purity.m"
    }
#line 1381 "purity.m"
    return check_hlds__purity__Spec_10;
#line 1381 "purity.m"
  }
#line 1378 "purity.m"
}

#line 1327 "purity.m"
static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
#line 1327 "purity.m"
  MR_Word check_hlds__purity__Outer_6,
#line 1327 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 1327 "purity.m"
  MR_Word * check_hlds__purity__Goal_9,
#line 1327 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_28,
#line 1327 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_29)
#line 1327 "purity.m"
{
#line 1331 "purity.m"
  {
#line 1331 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 1331 "purity.m"
    MR_Word check_hlds__purity__Inner_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 1331 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
#line 1331 "purity.m"
    MR_Word check_hlds__purity__NonLocals0_13;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__Context_14;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__OuterDI_15;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__OuterUO_16;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__InnerDI_17;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__InnerUO_18;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__ModuleInfo_21;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__OuterToInnerGoal_22;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__InnerToOuterGoal_23;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__WrapExpr_24;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__NonLocals_25;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__GoalInfo1_26;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__GoalInfo_27;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_30_30;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_35_35;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_37_37;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_38_38;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_40_40;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_41_41;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_42_42;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_45_45;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_46_46;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_47_47;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_51_51;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_59_59;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_61_61;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_62_62;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_66_66;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_67_67;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_73_73;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_74_74;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_75_75;
#line 1331 "purity.m"
    MR_Word check_hlds__purity__V_77_77;
#line 1332 "purity.m"
    MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
#line 1341 "purity.m"
    MR_Word check_hlds__purity__V_81_81;
#line 1341 "purity.m"
    MR_Word check_hlds__purity__V_82_82;
#line 1341 "purity.m"
    MR_Word check_hlds__purity__V_83_83;
#line 1341 "purity.m"
    MR_Word check_hlds__purity__V_84_84;
#line 1341 "purity.m"
    MR_Word check_hlds__purity__V_85_85;
#line 1341 "purity.m"
    MR_Word check_hlds__purity__V_86_86;
#line 1341 "purity.m"
    MR_Word check_hlds__purity__V_87_87;

#line 1333 "purity.m"
    {
#line 1333 "purity.m"
      check_hlds__purity__NonLocals0_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__purity__GoalInfo0_12);
    }
#line 1334 "purity.m"
    {
#line 1334 "purity.m"
      check_hlds__purity__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_12);
    }
#line 1335 "purity.m"
    check_hlds__purity__OuterDI_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_6, (MR_Integer) 0)));
#line 1335 "purity.m"
    check_hlds__purity__OuterUO_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_6, (MR_Integer) 1)));
#line 1336 "purity.m"
    check_hlds__purity__InnerDI_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Inner_8, (MR_Integer) 0)));
#line 1336 "purity.m"
    check_hlds__purity__InnerUO_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Inner_8, (MR_Integer) 1)));
#line 1341 "purity.m"
    check_hlds__purity__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 1341 "purity.m"
    check_hlds__purity__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 1341 "purity.m"
    check_hlds__purity__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 1341 "purity.m"
    check_hlds__purity__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 1341 "purity.m"
    check_hlds__purity__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 1341 "purity.m"
    check_hlds__purity__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
#line 1341 "purity.m"
    check_hlds__purity__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
#line 1341 "purity.m"
    check_hlds__purity__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
#line 1342 "purity.m"
    {
#line 1342 "purity.m"
      check_hlds__purity__V_30_30 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1344 "purity.m"
    {
#line 1344 "purity.m"
      check_hlds__purity__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_38_38, 0) = ((MR_Box) (check_hlds__purity__InnerDI_17));
#line 1344 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "purity.m"
    }
#line 1344 "purity.m"
    {
#line 1344 "purity.m"
      check_hlds__purity__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_35_35, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
#line 1344 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_35_35, 1) = ((MR_Box) (check_hlds__purity__V_38_38));
#line 1344 "purity.m"
    }
#line 1345 "purity.m"
    check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[4]);
#line 1345 "purity.m"
    {
#line 1345 "purity.m"
      check_hlds__purity__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_41_41, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_41_41, 1) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1345 "purity.m"
    }
#line 1346 "purity.m"
    check_hlds__purity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[5]);
#line 1346 "purity.m"
    {
#line 1346 "purity.m"
      check_hlds__purity__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1346 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_46_46, 0) = ((MR_Box) (check_hlds__purity__InnerDI_17));
#line 1346 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_46_46, 1) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1346 "purity.m"
    }
#line 1346 "purity.m"
    {
#line 1346 "purity.m"
      check_hlds__purity__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_45_45, 0) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 1346 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1346 "purity.m"
    }
#line 1345 "purity.m"
    {
#line 1345 "purity.m"
      check_hlds__purity__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_40_40, 0) = ((MR_Box) (check_hlds__purity__V_41_41));
#line 1345 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_40_40, 1) = ((MR_Box) (check_hlds__purity__V_45_45));
#line 1345 "purity.m"
    }
#line 1345 "purity.m"
    {
#line 1345 "purity.m"
      check_hlds__purity__V_37_37 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__purity__V_40_40);
    }
#line 1342 "purity.m"
    {
#line 1342 "purity.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__purity__V_30_30, (MR_String) "stm_from_outer_to_inner", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__purity__V_35_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__purity__V_37_37, check_hlds__purity__ModuleInfo_21, check_hlds__purity__Context_14, &check_hlds__purity__OuterToInnerGoal_22);
    }
#line 1348 "purity.m"
    {
#line 1348 "purity.m"
      check_hlds__purity__V_51_51 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
#line 1350 "purity.m"
    {
#line 1350 "purity.m"
      check_hlds__purity__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 0) = ((MR_Box) (check_hlds__purity__OuterUO_16));
#line 1350 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1350 "purity.m"
    }
#line 1350 "purity.m"
    {
#line 1350 "purity.m"
      check_hlds__purity__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 0) = ((MR_Box) (check_hlds__purity__InnerUO_18));
#line 1350 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_56_56, 1) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1350 "purity.m"
    }
#line 1351 "purity.m"
    {
#line 1351 "purity.m"
      check_hlds__purity__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1351 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_62_62, 0) = ((MR_Box) (check_hlds__purity__InnerUO_18));
#line 1351 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_62_62, 1) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1351 "purity.m"
    }
#line 1352 "purity.m"
    {
#line 1352 "purity.m"
      check_hlds__purity__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_67_67, 0) = ((MR_Box) (check_hlds__purity__OuterUO_16));
#line 1352 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_67_67, 1) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1352 "purity.m"
    }
#line 1352 "purity.m"
    {
#line 1352 "purity.m"
      check_hlds__purity__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_66_66, 0) = ((MR_Box) (check_hlds__purity__V_67_67));
#line 1352 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1352 "purity.m"
    }
#line 1351 "purity.m"
    {
#line 1351 "purity.m"
      check_hlds__purity__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1351 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__V_62_62));
#line 1351 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_61_61, 1) = ((MR_Box) (check_hlds__purity__V_66_66));
#line 1351 "purity.m"
    }
#line 1351 "purity.m"
    {
#line 1351 "purity.m"
      check_hlds__purity__V_58_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__purity__V_61_61);
    }
#line 1348 "purity.m"
    {
#line 1348 "purity.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__purity__V_51_51, (MR_String) "stm_from_inner_to_outer", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__purity__V_56_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__purity__V_58_58, check_hlds__purity__ModuleInfo_21, check_hlds__purity__Context_14, &check_hlds__purity__InnerToOuterGoal_23);
    }
#line 1355 "purity.m"
    {
#line 1355 "purity.m"
      check_hlds__purity__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_75_75, 0) = ((MR_Box) (check_hlds__purity__InnerToOuterGoal_23));
#line 1355 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1355 "purity.m"
    }
#line 1355 "purity.m"
    {
#line 1355 "purity.m"
      check_hlds__purity__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_74_74, 0) = ((MR_Box) (check_hlds__purity__Goal0_7));
#line 1355 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_74_74, 1) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1355 "purity.m"
    }
#line 1355 "purity.m"
    {
#line 1355 "purity.m"
      check_hlds__purity__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_73_73, 0) = ((MR_Box) (check_hlds__purity__OuterToInnerGoal_22));
#line 1355 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_73_73, 1) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1355 "purity.m"
    }
#line 1355 "purity.m"
    {
#line 1355 "purity.m"
      check_hlds__purity__WrapExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1355 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_24, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1355 "purity.m"
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_24, 2) = ((MR_Box) (check_hlds__purity__V_73_73));
#line 1355 "purity.m"
    }
#line 1360 "purity.m"
    {
#line 1360 "purity.m"
      check_hlds__purity__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_77_77, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
#line 1360 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_77_77, 1) = ((MR_Box) (check_hlds__purity__V_59_59));
#line 1360 "purity.m"
    }
#line 1360 "purity.m"
    {
#line 1360 "purity.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__purity__V_77_77, check_hlds__purity__NonLocals0_13, &check_hlds__purity__NonLocals_25);
    }
#line 1361 "purity.m"
    {
#line 1361 "purity.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__purity__NonLocals_25, check_hlds__purity__GoalInfo0_12, &check_hlds__purity__GoalInfo1_26);
    }
#line 1362 "purity.m"
    {
#line 1362 "purity.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 21, check_hlds__purity__GoalInfo1_26, &check_hlds__purity__GoalInfo_27);
    }
#line 1364 "purity.m"
    {
#line 1364 "purity.m"
      MR_Word base;
#line 1364 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "purity.m"
      *check_hlds__purity__Goal_9 = base;
#line 1364 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__WrapExpr_24));
#line 1364 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_27));
#line 1364 "purity.m"
    }
#line 1331 "purity.m"
    *check_hlds__purity__STATE_VARIABLE_Info_29 = check_hlds__purity__STATE_VARIABLE_Info_0_28;
#line 1331 "purity.m"
  }
#line 1327 "purity.m"
}

#line 1311 "purity.m"
static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
#line 1311 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1311 "purity.m"
  MR_Word check_hlds__purity__VarTypes_8,
#line 1311 "purity.m"
  MR_Word check_hlds__purity__VarSet_9,
#line 1311 "purity.m"
  MR_Word check_hlds__purity__Var_10,
#line 1311 "purity.m"
  MR_Word * check_hlds__purity__VarType_11,
#line 1311 "purity.m"
  MR_Word * check_hlds__purity__Specs_12)
#line 1311 "purity.m"
{
#line 1314 "purity.m"
  {
#line 1314 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 1315 "purity.m"
    {
#line 1315 "purity.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__purity__VarTypes_8, check_hlds__purity__Var_10, check_hlds__purity__VarType_11);
    }
#line 1317 "purity.m"
    {
#line 1317 "purity.m"
      MR_Word check_hlds__purity__V_15_15;

#line 1317 "purity.m"
      {
#line 1317 "purity.m"
        check_hlds__purity__V_15_15 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      }
#line 1317 "purity.m"
      {
#line 1317 "purity.m"
        check_hlds__purity__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*check_hlds__purity__VarType_11, check_hlds__purity__V_15_15);
      }
#line 1317 "purity.m"
    }
#line 1318 "purity.m"
    if (!(check_hlds__purity__succeeded))
#line 1318 "purity.m"
      {
#line 1318 "purity.m"
        MR_Word check_hlds__purity__V_16_16;

#line 1318 "purity.m"
        {
#line 1318 "purity.m"
          check_hlds__purity__V_16_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
        }
#line 1318 "purity.m"
        {
#line 1318 "purity.m"
          check_hlds__purity__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*check_hlds__purity__VarType_11, check_hlds__purity__V_16_16);
        }
#line 1318 "purity.m"
      }
#line 1322 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1321 "purity.m"
      *check_hlds__purity__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1322 "purity.m"
    else
#line 1323 "purity.m"
      {
#line 1323 "purity.m"
        MR_Word check_hlds__purity__Spec_13;
#line 1323 "purity.m"
        MR_Word check_hlds__purity__Pieces_23;
#line 1323 "purity.m"
        MR_Word check_hlds__purity__Msg_24;
#line 1323 "purity.m"
        MR_Word check_hlds__purity__V_27_27;
#line 1323 "purity.m"
        MR_Word check_hlds__purity__V_28_28;
#line 1323 "purity.m"
        MR_String check_hlds__purity__V_29_29;
#line 1323 "purity.m"
        MR_Word check_hlds__purity__V_34_34;
#line 1323 "purity.m"
        MR_Word check_hlds__purity__V_35_35;
#line 1323 "purity.m"
        MR_Word check_hlds__purity__V_39_39;

#line 1568 "purity.m"
        {
#line 1568 "purity.m"
          check_hlds__purity__V_29_29 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__purity__VarSet_9, check_hlds__purity__Var_10);
        }
#line 1568 "purity.m"
        {
#line 1568 "purity.m"
          check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1568 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1568 "purity.m"
        }
#line 1568 "purity.m"
        {
#line 1568 "purity.m"
          check_hlds__purity__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1568 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 0) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1568 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[35])));
#line 1568 "purity.m"
        }
#line 1567 "purity.m"
        {
#line 1567 "purity.m"
          check_hlds__purity__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1567 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[33])));
#line 1567 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_23, 1) = ((MR_Box) (check_hlds__purity__V_27_27));
#line 1567 "purity.m"
        }
#line 1570 "purity.m"
        {
#line 1570 "purity.m"
          check_hlds__purity__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1570 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__V_35_35, 0) = ((MR_Box) (check_hlds__purity__Pieces_23));
#line 1570 "purity.m"
        }
#line 1570 "purity.m"
        {
#line 1570 "purity.m"
          check_hlds__purity__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1570 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 0) = ((MR_Box) (check_hlds__purity__V_35_35));
#line 1570 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1570 "purity.m"
        }
#line 1570 "purity.m"
        {
#line 1570 "purity.m"
          check_hlds__purity__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1570 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_24, 0) = ((MR_Box) (check_hlds__purity__Context_7));
#line 1570 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_24, 1) = ((MR_Box) (check_hlds__purity__V_34_34));
#line 1570 "purity.m"
        }
#line 1571 "purity.m"
        {
#line 1571 "purity.m"
          check_hlds__purity__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 0) = ((MR_Box) (check_hlds__purity__Msg_24));
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1571 "purity.m"
        }
#line 1571 "purity.m"
        {
#line 1571 "purity.m"
          check_hlds__purity__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1571 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 2) = ((MR_Box) (check_hlds__purity__V_39_39));
#line 1571 "purity.m"
        }
#line 1324 "purity.m"
        {
#line 1324 "purity.m"
          MR_Word base;
#line 1324 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "purity.m"
          *check_hlds__purity__Specs_12 = base;
#line 1324 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_13));
#line 1324 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "purity.m"
        }
#line 1323 "purity.m"
      }
#line 1314 "purity.m"
  }
#line 1311 "purity.m"
}

#line 1291 "purity.m"
static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
#line 1291 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_5,
#line 1291 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_6,
#line 1291 "purity.m"
  MR_Word check_hlds__purity__ActualPurity_7,
#line 1291 "purity.m"
  MR_Word * check_hlds__purity__Specs_8)
#line 1291 "purity.m"
{
#line 1300 "purity.m"
  {
#line 1300 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 1295 "purity.m"
    {
#line 1295 "purity.m"
      check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__ActualPurity_7, check_hlds__purity__DeclaredPurity_6);
    }
#line 1300 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1296 "purity.m"
      {
#line 1296 "purity.m"
        MR_Word check_hlds__purity__Context_9;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__Spec_10;
#line 1296 "purity.m"
        MR_String check_hlds__purity__ActualPurityName_16;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__Pieces_17;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__Msg_18;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__V_21_21;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__V_22_22;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__V_23_23;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__V_26_26;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__V_29_29;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__V_37_37;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__V_38_38;
#line 1296 "purity.m"
        MR_Word check_hlds__purity__V_42_42;

#line 1296 "purity.m"
        {
#line 1296 "purity.m"
          check_hlds__purity__Context_9 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_5);
        }
#line 1537 "purity.m"
        {
#line 1537 "purity.m"
          parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_7, &check_hlds__purity__ActualPurityName_16);
        }
#line 1539 "purity.m"
        {
#line 1539 "purity.m"
          check_hlds__purity__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "purity.m"
          MR_hl_field(MR_mktag(2), check_hlds__purity__V_22_22, 0) = ((MR_Box) (check_hlds__purity__ActualPurityName_16));
#line 1539 "purity.m"
        }
#line 1541 "purity.m"
        {
#line 1541 "purity.m"
          check_hlds__purity__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_29_29, 0) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1541 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[16])));
#line 1541 "purity.m"
        }
#line 1540 "purity.m"
        {
#line 1540 "purity.m"
          check_hlds__purity__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[32])));
#line 1540 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_26_26, 1) = ((MR_Box) (check_hlds__purity__V_29_29));
#line 1540 "purity.m"
        }
#line 1539 "purity.m"
        {
#line 1539 "purity.m"
          check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[31])));
#line 1539 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 1) = ((MR_Box) (check_hlds__purity__V_26_26));
#line 1539 "purity.m"
        }
#line 1539 "purity.m"
        {
#line 1539 "purity.m"
          check_hlds__purity__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 0) = ((MR_Box) (check_hlds__purity__V_22_22));
#line 1539 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_21_21, 1) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1539 "purity.m"
        }
#line 1538 "purity.m"
        {
#line 1538 "purity.m"
          check_hlds__purity__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[30])));
#line 1538 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_17, 1) = ((MR_Box) (check_hlds__purity__V_21_21));
#line 1538 "purity.m"
        }
#line 1542 "purity.m"
        {
#line 1542 "purity.m"
          check_hlds__purity__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1542 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__V_38_38, 0) = ((MR_Box) (check_hlds__purity__Pieces_17));
#line 1542 "purity.m"
        }
#line 1542 "purity.m"
        {
#line 1542 "purity.m"
          check_hlds__purity__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1542 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 0) = ((MR_Box) (check_hlds__purity__V_38_38));
#line 1542 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1542 "purity.m"
        }
#line 1542 "purity.m"
        {
#line 1542 "purity.m"
          check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1542 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_9));
#line 1542 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__V_37_37));
#line 1542 "purity.m"
        }
#line 1543 "purity.m"
        {
#line 1543 "purity.m"
          check_hlds__purity__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(1), check_hlds__purity__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1543 "purity.m"
        }
#line 1543 "purity.m"
        {
#line 1543 "purity.m"
          check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1543 "purity.m"
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__V_42_42));
#line 1543 "purity.m"
        }
#line 1299 "purity.m"
        {
#line 1299 "purity.m"
          MR_Word base;
#line 1299 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "purity.m"
          *check_hlds__purity__Specs_8 = base;
#line 1299 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_10));
#line 1299 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1299 "purity.m"
        }
#line 1296 "purity.m"
      }
#line 1300 "purity.m"
    else
#line 1303 "purity.m"
      *check_hlds__purity__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1300 "purity.m"
  }
#line 1291 "purity.m"
}

#line 1227 "purity.m"
static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
#line 1227 "purity.m"
  MR_Word check_hlds__purity__Info_7,
#line 1227 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_8,
#line 1227 "purity.m"
  MR_Word check_hlds__purity__Var_9,
#line 1227 "purity.m"
  MR_Word check_hlds__purity__ConsId_10,
#line 1227 "purity.m"
  MR_Word check_hlds__purity__Args_11,
#line 1227 "purity.m"
  MR_Word * check_hlds__purity__Specs_12)
#line 1227 "purity.m"
{
#line 1231 "purity.m"
  {
#line 1231 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1231 "purity.m"
    MR_Word check_hlds__purity__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
#line 1231 "purity.m"
    MR_Word check_hlds__purity__TypeOfVar_14;
#line 1231 "purity.m"
    MR_Word check_hlds__purity__PredInfo_15;
#line 1231 "purity.m"
    MR_Word check_hlds__purity__CallerMarkers_16;
#line 1231 "purity.m"
    MR_Word check_hlds__purity__Context_17;
#line 1231 "purity.m"
    MR_Word check_hlds__purity__ClosureSpecs_34;
#line 1231 "purity.m"
    MR_Word check_hlds__purity__DeclaredPurity_35;
#line 1234 "purity.m"
    MR_Word check_hlds__purity__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
#line 1234 "purity.m"
    MR_Word check_hlds__purity__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
#line 1234 "purity.m"
    MR_Word check_hlds__purity__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
#line 1234 "purity.m"
    MR_Word check_hlds__purity__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
#line 1234 "purity.m"
    MR_Word check_hlds__purity__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
#line 1234 "purity.m"
    MR_Word check_hlds__purity__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
#line 1234 "purity.m"
    MR_Word check_hlds__purity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
#line 1236 "purity.m"
    MR_Word check_hlds__purity__V_46_46;
#line 1236 "purity.m"
    MR_Word check_hlds__purity__V_47_47;
#line 1236 "purity.m"
    MR_Word check_hlds__purity__V_48_48;
#line 1236 "purity.m"
    MR_Word check_hlds__purity__V_49_49;
#line 1236 "purity.m"
    MR_Word check_hlds__purity__V_50_50;
#line 1236 "purity.m"
    MR_Word check_hlds__purity__V_51_51;
#line 1236 "purity.m"
    MR_Word check_hlds__purity__V_52_52;
#line 1265 "purity.m"
    MR_Word check_hlds__purity__PName_18;
#line 1265 "purity.m"
    MR_Word check_hlds__purity__TypePurity_21;
#line 1265 "purity.m"
    MR_Word check_hlds__purity__PredOrFunc_22;
#line 1265 "purity.m"
    MR_Word check_hlds__purity__VarArgTypes_24;
#line 1240 "purity.m"
    MR_Integer check_hlds__purity__V_19_19;
#line 1240 "purity.m"
    MR_Word check_hlds__purity__V_20_20;

#line 1235 "purity.m"
    {
#line 1235 "purity.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__purity__VarTypes_13, check_hlds__purity__Var_9, &check_hlds__purity__TypeOfVar_14);
    }
#line 1236 "purity.m"
    check_hlds__purity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
#line 1236 "purity.m"
    check_hlds__purity__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
#line 1236 "purity.m"
    check_hlds__purity__PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
#line 1236 "purity.m"
    check_hlds__purity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
#line 1236 "purity.m"
    check_hlds__purity__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
#line 1236 "purity.m"
    check_hlds__purity__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
#line 1236 "purity.m"
    check_hlds__purity__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
#line 1236 "purity.m"
    check_hlds__purity__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
#line 1237 "purity.m"
    {
#line 1237 "purity.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__CallerMarkers_16);
    }
#line 1238 "purity.m"
    {
#line 1238 "purity.m"
      check_hlds__purity__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_8);
    }
#line 1240 "purity.m"
    check_hlds__purity__succeeded = ((((MR_tag((MR_Word) check_hlds__purity__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1240 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1240 "purity.m"
      {
#line 1240 "purity.m"
        check_hlds__purity__PName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 1)));
#line 1240 "purity.m"
        check_hlds__purity__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 2)));
#line 1240 "purity.m"
        check_hlds__purity__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 3)));
#line 1241 "purity.m"
        {
#line 1241 "purity.m"
          check_hlds__purity__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__purity__TypeOfVar_14, &check_hlds__purity__TypePurity_21, &check_hlds__purity__PredOrFunc_22, &check_hlds__purity__VarArgTypes_24);
        }
#line 1240 "purity.m"
      }
#line 1265 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1244 "purity.m"
      {
#line 1244 "purity.m"
        MR_Word check_hlds__purity__TVarSet_25;
#line 1244 "purity.m"
        MR_Word check_hlds__purity__ExistQTVars_26;
#line 1244 "purity.m"
        MR_Word check_hlds__purity__HeadTypeParams_27;
#line 1244 "purity.m"
        MR_Word check_hlds__purity__ArgTypes0_28;
#line 1244 "purity.m"
        MR_Word check_hlds__purity__PredArgTypes_29;
#line 1244 "purity.m"
        MR_Word check_hlds__purity__ModuleInfo_30;
#line 1249 "purity.m"
        MR_Word check_hlds__purity__V_53_53;
#line 1249 "purity.m"
        MR_Word check_hlds__purity__V_54_54;
#line 1249 "purity.m"
        MR_Word check_hlds__purity__V_55_55;
#line 1249 "purity.m"
        MR_Word check_hlds__purity__V_56_56;
#line 1249 "purity.m"
        MR_Word check_hlds__purity__V_57_57;
#line 1249 "purity.m"
        MR_Word check_hlds__purity__V_58_58;
#line 1249 "purity.m"
        MR_Word check_hlds__purity__V_59_59;
#line 1259 "purity.m"
        MR_Word check_hlds__purity__CalleePredId_31;
#line 1251 "purity.m"
        MR_Word check_hlds__purity__V_37_37;

#line 1244 "purity.m"
        {
#line 1244 "purity.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__TVarSet_25);
        }
#line 1245 "purity.m"
        {
#line 1245 "purity.m"
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__ExistQTVars_26);
        }
#line 1246 "purity.m"
        {
#line 1246 "purity.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__HeadTypeParams_27);
        }
#line 1247 "purity.m"
        {
#line 1247 "purity.m"
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__purity__VarTypes_13, check_hlds__purity__Args_11, &check_hlds__purity__ArgTypes0_28);
        }
#line 1248 "purity.m"
        {
#line 1248 "purity.m"
          mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__purity__ArgTypes0_28, check_hlds__purity__VarArgTypes_24, &check_hlds__purity__PredArgTypes_29);
        }
#line 1249 "purity.m"
        check_hlds__purity__ModuleInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
#line 1249 "purity.m"
        check_hlds__purity__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
#line 1249 "purity.m"
        check_hlds__purity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
#line 1249 "purity.m"
        check_hlds__purity__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
#line 1249 "purity.m"
        check_hlds__purity__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
#line 1249 "purity.m"
        check_hlds__purity__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
#line 1249 "purity.m"
        check_hlds__purity__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
#line 1249 "purity.m"
        check_hlds__purity__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
#line 1251 "purity.m"
        {
#line 1251 "purity.m"
          check_hlds__purity__V_37_37 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__purity__CallerMarkers_16);
        }
#line 1251 "purity.m"
        {
#line 1251 "purity.m"
          check_hlds__purity__succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(check_hlds__purity__V_37_37, check_hlds__purity__PName_18, check_hlds__purity__PredOrFunc_22, check_hlds__purity__TVarSet_25, check_hlds__purity__ExistQTVars_26, check_hlds__purity__PredArgTypes_29, check_hlds__purity__HeadTypeParams_27, check_hlds__purity__ModuleInfo_30, check_hlds__purity__Context_17, &check_hlds__purity__CalleePredId_31);
        }
#line 1259 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1255 "purity.m"
          {
#line 1255 "purity.m"
            MR_Word check_hlds__purity__CalleePredInfo_32;
#line 1255 "purity.m"
            MR_Word check_hlds__purity__CalleePurity_33;

#line 1255 "purity.m"
            {
#line 1255 "purity.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_30, check_hlds__purity__CalleePredId_31, &check_hlds__purity__CalleePredInfo_32);
            }
#line 1256 "purity.m"
            {
#line 1256 "purity.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__CalleePredInfo_32, &check_hlds__purity__CalleePurity_33);
            }
#line 1257 "purity.m"
            {
#line 1257 "purity.m"
              check_hlds__purity__check_closure_purity_4_p_0(check_hlds__purity__GoalInfo_8, check_hlds__purity__TypePurity_21, check_hlds__purity__CalleePurity_33, &check_hlds__purity__ClosureSpecs_34);
            }
#line 1255 "purity.m"
          }
#line 1259 "purity.m"
        else
#line 1263 "purity.m"
          check_hlds__purity__ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1244 "purity.m"
      }
#line 1265 "purity.m"
    else
#line 1267 "purity.m"
      check_hlds__purity__ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1273 "purity.m"
    {
#line 1273 "purity.m"
      check_hlds__purity__DeclaredPurity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_8);
    }
#line 1286 "purity.m"
#line 1286 "purity.m"
    switch (check_hlds__purity__DeclaredPurity_35) {
#line 1286 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1286 "purity.m"
      case (MR_Integer) 2:
#line 1286 "purity.m"
      case (MR_Integer) 1:
#line 1282 "purity.m"
        {
#line 1280 "purity.m"
          {
#line 1280 "purity.m"
            check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__CallerMarkers_16, (MR_Integer) 22);
          }
#line 1282 "purity.m"
          if (check_hlds__purity__succeeded)
#line 1281 "purity.m"
            *check_hlds__purity__Specs_12 = check_hlds__purity__ClosureSpecs_34;
#line 1282 "purity.m"
          else
#line 1283 "purity.m"
            {
#line 1283 "purity.m"
              MR_Word check_hlds__purity__Spec_36;

#line 1283 "purity.m"
              {
#line 1283 "purity.m"
                check_hlds__purity__Spec_36 = check_hlds__purity__impure_unification_expr_error_2_f_0(check_hlds__purity__Context_17, check_hlds__purity__DeclaredPurity_35);
              }
#line 1284 "purity.m"
              {
#line 1284 "purity.m"
                MR_Word base;
#line 1284 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "purity.m"
                *check_hlds__purity__Specs_12 = base;
#line 1284 "purity.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_36));
#line 1284 "purity.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__ClosureSpecs_34));
#line 1284 "purity.m"
              }
#line 1283 "purity.m"
            }
#line 1282 "purity.m"
        }
#line 1286 "purity.m"
        break;
#line 1286 "purity.m"
      case (MR_Integer) 0:
#line 1288 "purity.m"
        *check_hlds__purity__Specs_12 = check_hlds__purity__ClosureSpecs_34;
#line 1286 "purity.m"
        break;
#line 1286 "purity.m"
    }
#line 1231 "purity.m"
  }
#line 1227 "purity.m"
}

#line 1175 "purity.m"
static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
#line 1175 "purity.m"
  MR_Word check_hlds__purity__Context_7,
#line 1175 "purity.m"
  MR_Word check_hlds__purity__PredId_8,
#line 1175 "purity.m"
  MR_Word check_hlds__purity__DeclaredPurity_9,
#line 1175 "purity.m"
  MR_Word * check_hlds__purity__ActualPurity_10,
#line 1175 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_17,
#line 1175 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_18)
#line 1175 "purity.m"
{
#line 1179 "purity.m"
  {
#line 1179 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1179 "purity.m"
    MR_Word check_hlds__purity__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1179 "purity.m"
    MR_Word check_hlds__purity__PredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1179 "purity.m"
    MR_Word check_hlds__purity__CalleePredInfo_14;
#line 1180 "purity.m"
    MR_Word check_hlds__purity__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1180 "purity.m"
    MR_Word check_hlds__purity__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1180 "purity.m"
    MR_Word check_hlds__purity__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1180 "purity.m"
    MR_Word check_hlds__purity__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1180 "purity.m"
    MR_Word check_hlds__purity__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1180 "purity.m"
    MR_Word check_hlds__purity__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));

#line 1182 "purity.m"
    {
#line 1182 "purity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, &check_hlds__purity__CalleePredInfo_14);
    }
#line 1183 "purity.m"
    {
#line 1183 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__CalleePredInfo_14, check_hlds__purity__ActualPurity_10);
    }
#line 1187 "purity.m"
    check_hlds__purity__succeeded = (*check_hlds__purity__ActualPurity_10 == check_hlds__purity__DeclaredPurity_9);
#line 1190 "purity.m"
    if (check_hlds__purity__succeeded)
#line 1190 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
#line 1190 "purity.m"
    else
#line 1196 "purity.m"
      {
#line 1193 "purity.m"
        {
#line 1193 "purity.m"
          check_hlds__purity__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__purity__PredInfo_13);
        }
#line 1196 "purity.m"
        if (check_hlds__purity__succeeded)
#line 1196 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
#line 1196 "purity.m"
        else
#line 1202 "purity.m"
          {
#line 1197 "purity.m"
            {
#line 1197 "purity.m"
              check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(*check_hlds__purity__ActualPurity_10, check_hlds__purity__DeclaredPurity_9);
            }
#line 1202 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1200 "purity.m"
              {
#line 1200 "purity.m"
                MR_Word check_hlds__purity__Spec_15;
#line 1200 "purity.m"
                MR_Word check_hlds__purity__Msgs0_44;
#line 1200 "purity.m"
                MR_Word check_hlds__purity__Msgs_45;
#line 1200 "purity.m"
                MR_Word check_hlds__purity__V_47_47;
#line 1200 "purity.m"
                MR_Word check_hlds__purity__V_48_48;
#line 1200 "purity.m"
                MR_Word check_hlds__purity__V_49_49;
#line 1200 "purity.m"
                MR_Word check_hlds__purity__V_50_50;
#line 1200 "purity.m"
                MR_Word check_hlds__purity__V_51_51;
#line 1200 "purity.m"
                MR_Word check_hlds__purity__V_52_52;
#line 1200 "purity.m"
                MR_Word check_hlds__purity__V_53_53;

#line 1199 "purity.m"
                {
#line 1199 "purity.m"
                  check_hlds__purity__Spec_15 = check_hlds__purity__error_missing_body_impurity_decl_3_f_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, check_hlds__purity__Context_7);
                }
#line 1609 "purity.m"
                check_hlds__purity__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1609 "purity.m"
                check_hlds__purity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1609 "purity.m"
                check_hlds__purity__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1609 "purity.m"
                check_hlds__purity__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1609 "purity.m"
                check_hlds__purity__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1609 "purity.m"
                check_hlds__purity__Msgs0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1609 "purity.m"
                check_hlds__purity__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1609 "purity.m"
                check_hlds__purity__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1610 "purity.m"
                {
#line 1610 "purity.m"
                  check_hlds__purity__Msgs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "purity.m"
                  MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_45, 0) = ((MR_Box) (check_hlds__purity__Spec_15));
#line 1610 "purity.m"
                  MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_45, 1) = ((MR_Box) (check_hlds__purity__Msgs0_44));
#line 1610 "purity.m"
                }
#line 1611 "purity.m"
                {
#line 1611 "purity.m"
                  MR_Word base;
#line 1611 "purity.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "purity.m"
                  *check_hlds__purity__STATE_VARIABLE_Info_18 = base;
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_49_49));
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_50_50));
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_51_51));
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_45));
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_52_52));
#line 1611 "purity.m"
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1611 "purity.m"
                }
#line 1200 "purity.m"
              }
#line 1202 "purity.m"
            else
#line 1216 "purity.m"
              {
#line 1209 "purity.m"
                MR_Word check_hlds__purity__Markers_16;

#line 1209 "purity.m"
                {
#line 1209 "purity.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_13, &check_hlds__purity__Markers_16);
                }
#line 1210 "purity.m"
                {
#line 1210 "purity.m"
                  check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 9);
                }
#line 1211 "purity.m"
                if (!(check_hlds__purity__succeeded))
#line 1211 "purity.m"
                  {
#line 1211 "purity.m"
                    {
#line 1211 "purity.m"
                      check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 10);
                    }
#line 1211 "purity.m"
                    if (!(check_hlds__purity__succeeded))
#line 1212 "purity.m"
                      {
#line 1212 "purity.m"
                        {
#line 1212 "purity.m"
                          check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 22);
                        }
#line 1212 "purity.m"
                      }
#line 1211 "purity.m"
                  }
#line 1216 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1216 "purity.m"
                  *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
#line 1216 "purity.m"
                else
#line 1218 "purity.m"
                  {
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__Spec_24;
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__Msgs0_66;
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__Msgs_67;
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__V_69_69;
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__V_70_70;
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__V_71_71;
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__V_72_72;
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__V_73_73;
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__V_74_74;
#line 1218 "purity.m"
                    MR_Word check_hlds__purity__V_75_75;

#line 1217 "purity.m"
                    {
#line 1217 "purity.m"
                      check_hlds__purity__Spec_24 = check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, check_hlds__purity__Context_7, check_hlds__purity__DeclaredPurity_9);
                    }
#line 1609 "purity.m"
                    check_hlds__purity__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1609 "purity.m"
                    check_hlds__purity__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1609 "purity.m"
                    check_hlds__purity__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1609 "purity.m"
                    check_hlds__purity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1609 "purity.m"
                    check_hlds__purity__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1609 "purity.m"
                    check_hlds__purity__Msgs0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1609 "purity.m"
                    check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1609 "purity.m"
                    check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1610 "purity.m"
                    {
#line 1610 "purity.m"
                      check_hlds__purity__Msgs_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_67, 0) = ((MR_Box) (check_hlds__purity__Spec_24));
#line 1610 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_67, 1) = ((MR_Box) (check_hlds__purity__Msgs0_66));
#line 1610 "purity.m"
                    }
#line 1611 "purity.m"
                    {
#line 1611 "purity.m"
                      MR_Word base;
#line 1611 "purity.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "purity.m"
                      *check_hlds__purity__STATE_VARIABLE_Info_18 = base;
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_69_69));
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_70_70));
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_71_71));
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_72_72));
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_73_73));
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_67));
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1611 "purity.m"
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1611 "purity.m"
                    }
#line 1218 "purity.m"
                  }
#line 1216 "purity.m"
              }
#line 1202 "purity.m"
          }
#line 1196 "purity.m"
      }
#line 1179 "purity.m"
  }
#line 1175 "purity.m"
}

#line 1142 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
#line 1142 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1142 "purity.m"
  MR_Word check_hlds__purity__Info_2,
#line 1142 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_3,
#line 1142 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_4)
#line 1142 "purity.m"
{
#line 1145 "purity.m"
  while (MR_TRUE)
#line 1145 "purity.m"
    {
#line 1145 "purity.m"
      /* tailcall optimized into a loop */
#line 1145 "purity.m"
      {
#line 1145 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 1145 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Specs_4 = check_hlds__purity__STATE_VARIABLE_Specs_0_3;
#line 1145 "purity.m"
        else
#line 1146 "purity.m"
          {
#line 1146 "purity.m"
            MR_Word check_hlds__purity__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 1146 "purity.m"
            MR_Word check_hlds__purity__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 1146 "purity.m"
            MR_Word check_hlds__purity__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_9, (MR_Integer) 0)));
#line 1146 "purity.m"
            MR_Word check_hlds__purity__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_9, (MR_Integer) 1)));
#line 1146 "purity.m"
            MR_Word check_hlds__purity__XVar_23;
#line 1146 "purity.m"
            MR_Word check_hlds__purity__ConsId_24;
#line 1146 "purity.m"
            MR_Word check_hlds__purity__YVars_25;
#line 1146 "purity.m"
            MR_Word check_hlds__purity__UnifySpecs_26;
#line 1146 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_32_32;
#line 1155 "purity.m"
            MR_Word check_hlds__purity__XVarPrime_15;
#line 1155 "purity.m"
            MR_Word check_hlds__purity__ConsIdPrime_20;
#line 1155 "purity.m"
            MR_Word check_hlds__purity__YVarsPrime_22;
#line 1149 "purity.m"
            MR_Word check_hlds__purity__Y_16;
#line 1149 "purity.m"
            MR_Word check_hlds__purity__V_17_17;
#line 1149 "purity.m"
            MR_Word check_hlds__purity__V_18_18;
#line 1149 "purity.m"
            MR_Word check_hlds__purity__V_19_19;
#line 1150 "purity.m"
            MR_Word check_hlds__purity__V_21_21;

#line 1149 "purity.m"
            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1149 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1149 "purity.m"
              {
#line 1149 "purity.m"
                check_hlds__purity__XVarPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 0)));
#line 1149 "purity.m"
                check_hlds__purity__Y_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 1)));
#line 1149 "purity.m"
                check_hlds__purity__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 2)));
#line 1149 "purity.m"
                check_hlds__purity__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 3)));
#line 1149 "purity.m"
                check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 4)));
#line 1150 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Y_16)) == (MR_mktag((MR_Integer) 1)));
#line 1150 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1150 "purity.m"
                  {
#line 1150 "purity.m"
                    check_hlds__purity__ConsIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 0)));
#line 1150 "purity.m"
                    check_hlds__purity__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 1)));
#line 1150 "purity.m"
                    check_hlds__purity__YVarsPrime_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 2)));
#line 1150 "purity.m"
                  }
#line 1149 "purity.m"
              }
#line 1155 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1152 "purity.m"
              {
#line 1152 "purity.m"
                check_hlds__purity__XVar_23 = check_hlds__purity__XVarPrime_15;
#line 1153 "purity.m"
                check_hlds__purity__ConsId_24 = check_hlds__purity__ConsIdPrime_20;
#line 1154 "purity.m"
                check_hlds__purity__YVars_25 = check_hlds__purity__YVarsPrime_22;
#line 1152 "purity.m"
              }
#line 1155 "purity.m"
            else
#line 1156 "purity.m"
              {
#line 1156 "purity.m"
                {
#line 1156 "purity.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_no_ptc\'/4", (MR_String) "from_ground_term_initial conjunct is not functor unify");
#line 1156 "purity.m"
                  return;
                }
#line 1156 "purity.m"
              }
#line 1159 "purity.m"
            {
#line 1159 "purity.m"
              check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__Info_2, check_hlds__purity__GoalInfo0_14, check_hlds__purity__XVar_23, check_hlds__purity__ConsId_24, check_hlds__purity__YVars_25, &check_hlds__purity__UnifySpecs_26);
            }
#line 1161 "purity.m"
            {
#line 1161 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Specs_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__UnifySpecs_26, check_hlds__purity__STATE_VARIABLE_Specs_0_3);
            }
#line 1162 "purity.m"
            /* direct tailcall eliminated */
#line 1162 "purity.m"
            {
#line 1162 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Goals0_10;
#line 1162 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_3 = check_hlds__purity__STATE_VARIABLE_Specs_32_32;

#line 1162 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Specs_0_3 = check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_3;
#line 1162 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 1162 "purity.m"
            }
#line 1162 "purity.m"
            continue;
#line 1146 "purity.m"
          }
#line 1145 "purity.m"
      }
#line 1145 "purity.m"
      break;
#line 1145 "purity.m"
    }
#line 1142 "purity.m"
}

#line 1047 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
#line 1047 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_7,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9,
#line 1047 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0_10,
#line 1047 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Invariants_11)
#line 1047 "purity.m"
{
#line 1053 "purity.m"
  while (MR_TRUE)
#line 1053 "purity.m"
    {
#line 1053 "purity.m"
      /* tailcall optimized into a loop */
#line 1053 "purity.m"
      {
#line 1053 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 1053 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "purity.m"
          {
#line 1054 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Invariants_11 = check_hlds__purity__STATE_VARIABLE_Invariants_0_10;
#line 1054 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_9 = check_hlds__purity__STATE_VARIABLE_Info_0_8;
#line 1054 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_7 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1054 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1053 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2;
#line 1053 "purity.m"
          }
#line 1053 "purity.m"
        else
#line 1056 "purity.m"
          {
#line 1056 "purity.m"
            MR_Word check_hlds__purity__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 1056 "purity.m"
            MR_Word check_hlds__purity__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 1056 "purity.m"
            MR_Word check_hlds__purity__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 0)));
#line 1056 "purity.m"
            MR_Word check_hlds__purity__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 1)));
#line 1056 "purity.m"
            MR_Word check_hlds__purity__XVar_44;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__Mode_45;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__Unification_46;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__UnifyContext_47;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__ConsId_48;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__YVars_49;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__ModuleInfo_50;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__PredInfo0_51;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__VarTypes0_52;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__VarSet0_53;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__PredInfo_54;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__VarSet_55;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__VarTypes_56;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__Goal1_57;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__IsPlainUnify_58;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__GoalExpr1_59;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__GoalInfo1_60;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__MarkedSubGoal_69;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_100_100;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_102_102;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_118_118;
#line 1056 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121;
#line 1069 "purity.m"
            MR_Word check_hlds__purity__XVarPrime_36;
#line 1069 "purity.m"
            MR_Word check_hlds__purity__ModePrime_38;
#line 1069 "purity.m"
            MR_Word check_hlds__purity__UnificationPrime_39;
#line 1069 "purity.m"
            MR_Word check_hlds__purity__UnifyContextPrime_40;
#line 1069 "purity.m"
            MR_Word check_hlds__purity__ConsIdPrime_41;
#line 1069 "purity.m"
            MR_Word check_hlds__purity__YVarsPrime_43;
#line 1060 "purity.m"
            MR_Word check_hlds__purity__Y_37;
#line 1061 "purity.m"
            MR_Word check_hlds__purity__V_42_42;
#line 1073 "purity.m"
            MR_Word check_hlds__purity__V_134_134;
#line 1073 "purity.m"
            MR_Word check_hlds__purity__V_138_138;
#line 1073 "purity.m"
            MR_Word check_hlds__purity__V_139_139;
#line 1073 "purity.m"
            MR_Word check_hlds__purity__V_140_140;

#line 1059 "purity.m"
            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
#line 1059 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1059 "purity.m"
              {
#line 1059 "purity.m"
                check_hlds__purity__XVarPrime_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 0)));
#line 1059 "purity.m"
                check_hlds__purity__Y_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 1)));
#line 1059 "purity.m"
                check_hlds__purity__ModePrime_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 2)));
#line 1059 "purity.m"
                check_hlds__purity__UnificationPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 3)));
#line 1059 "purity.m"
                check_hlds__purity__UnifyContextPrime_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 4)));
#line 1061 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Y_37)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "purity.m"
                if (check_hlds__purity__succeeded)
#line 1061 "purity.m"
                  {
#line 1061 "purity.m"
                    check_hlds__purity__ConsIdPrime_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 0)));
#line 1061 "purity.m"
                    check_hlds__purity__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 1)));
#line 1061 "purity.m"
                    check_hlds__purity__YVarsPrime_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 2)));
#line 1061 "purity.m"
                  }
#line 1059 "purity.m"
              }
#line 1069 "purity.m"
            if (check_hlds__purity__succeeded)
#line 1063 "purity.m"
              {
#line 1063 "purity.m"
                check_hlds__purity__XVar_44 = check_hlds__purity__XVarPrime_36;
#line 1064 "purity.m"
                check_hlds__purity__Mode_45 = check_hlds__purity__ModePrime_38;
#line 1065 "purity.m"
                check_hlds__purity__Unification_46 = check_hlds__purity__UnificationPrime_39;
#line 1066 "purity.m"
                check_hlds__purity__UnifyContext_47 = check_hlds__purity__UnifyContextPrime_40;
#line 1067 "purity.m"
                check_hlds__purity__ConsId_48 = check_hlds__purity__ConsIdPrime_41;
#line 1068 "purity.m"
                check_hlds__purity__YVars_49 = check_hlds__purity__YVarsPrime_43;
#line 1063 "purity.m"
              }
#line 1069 "purity.m"
            else
#line 1070 "purity.m"
              {
#line 1070 "purity.m"
                {
#line 1070 "purity.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_ptc\'/11", (MR_String) "from_ground_term_initial conjunct is not functor unify");
#line 1070 "purity.m"
                  return;
                }
#line 1070 "purity.m"
              }
#line 1073 "purity.m"
            check_hlds__purity__ModuleInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1073 "purity.m"
            check_hlds__purity__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1073 "purity.m"
            check_hlds__purity__PredInfo0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1073 "purity.m"
            check_hlds__purity__VarTypes0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1073 "purity.m"
            check_hlds__purity__VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1073 "purity.m"
            check_hlds__purity__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1073 "purity.m"
            check_hlds__purity__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1073 "purity.m"
            check_hlds__purity__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1077 "purity.m"
            {
#line 1077 "purity.m"
              check_hlds__post_typecheck__resolve_unify_functor_16_p_0(check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, check_hlds__purity__Mode_45, check_hlds__purity__Unification_46, check_hlds__purity__UnifyContext_47, check_hlds__purity__GoalInfo0_35, check_hlds__purity__ModuleInfo_50, check_hlds__purity__PredInfo0_51, &check_hlds__purity__PredInfo_54, check_hlds__purity__VarSet0_53, &check_hlds__purity__VarSet_55, check_hlds__purity__VarTypes0_52, &check_hlds__purity__VarTypes_56, &check_hlds__purity__Goal1_57, &check_hlds__purity__IsPlainUnify_58);
            }
#line 1081 "purity.m"
            check_hlds__purity__GoalExpr1_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_57, (MR_Integer) 0)));
#line 1081 "purity.m"
            check_hlds__purity__GoalInfo1_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_57, (MR_Integer) 1)));
#line 1110 "purity.m"
#line 1110 "purity.m"
            switch (MR_tag((MR_Word) check_hlds__purity__IsPlainUnify_58)) {
#line 1110 "purity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1110 "purity.m"
              case (MR_Integer) 0:
#line 1110 "purity.m"
#line 1110 "purity.m"
                switch (MR_unmkbody(check_hlds__purity__IsPlainUnify_58)) {
#line 1110 "purity.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1110 "purity.m"
                  case (MR_Integer) 0:
#line 1111 "purity.m"
                    {
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__STATE_VARIABLE_Info_95_95;
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__Goal_133;
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_170_170 = check_hlds__purity__V_162_162;
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_171_171 = check_hlds__purity__V_163_163;
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_173_173 = check_hlds__purity__VarTypes_56;
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_175_175 = check_hlds__purity__V_167_167;
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_176_176 = check_hlds__purity__V_168_168;
#line 1111 "purity.m"
                      MR_Word check_hlds__purity__V_177_177 = check_hlds__purity__V_169_169;
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1112 "purity.m"
                      MR_Word check_hlds__purity__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 1115 "purity.m"
                      MR_Word check_hlds__purity__V_70_70;
#line 1115 "purity.m"
                      MR_Word check_hlds__purity__V_71_71;
#line 1115 "purity.m"
                      MR_Word check_hlds__purity__V_72_72;
#line 1115 "purity.m"
                      MR_Word check_hlds__purity__V_73_73;
#line 1115 "purity.m"
                      MR_Word check_hlds__purity__V_74_74;

#line 1114 "purity.m"
                      {
#line 1114 "purity.m"
                        check_hlds__purity__STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (check_hlds__purity__V_170_170));
#line 1114 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (check_hlds__purity__V_171_171));
#line 1114 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (check_hlds__purity__PredInfo_54));
#line 1114 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (check_hlds__purity__V_173_173));
#line 1114 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (check_hlds__purity__VarSet_55));
#line 1114 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (check_hlds__purity__V_175_175));
#line 1114 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (check_hlds__purity__V_176_176));
#line 1114 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (check_hlds__purity__V_177_177));
#line 1114 "purity.m"
                      }
#line 1115 "purity.m"
                      check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr1_59)) == (MR_mktag((MR_Integer) 1)));
#line 1115 "purity.m"
                      if (check_hlds__purity__succeeded)
#line 1115 "purity.m"
                        {
#line 1115 "purity.m"
                          check_hlds__purity__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 0)));
#line 1115 "purity.m"
                          check_hlds__purity__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 1)));
#line 1115 "purity.m"
                          check_hlds__purity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 2)));
#line 1115 "purity.m"
                          check_hlds__purity__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 3)));
#line 1115 "purity.m"
                          check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 4)));
#line 1117 "purity.m"
                          {
#line 1117 "purity.m"
                            MR_Word check_hlds__purity__UnifySpecs_127;
#line 1117 "purity.m"
                            MR_Word check_hlds__purity__GoalInfo_128;
#line 1117 "purity.m"
                            MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_194;

#line 1116 "purity.m"
                            {
#line 1116 "purity.m"
                              check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_95_95, check_hlds__purity__GoalInfo0_35, check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, &check_hlds__purity__UnifySpecs_127);
                            }
#line 1118 "purity.m"
                            {
#line 1118 "purity.m"
                              check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_127, check_hlds__purity__STATE_VARIABLE_Info_95_95, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                            }
#line 598 "purity.m"
                            {
#line 598 "purity.m"
                              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, check_hlds__purity__GoalInfo1_60, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_194);
                            }
#line 604 "purity.m"
                            {
#line 604 "purity.m"
                              hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_194, &check_hlds__purity__GoalInfo_128);
                            }
#line 1121 "purity.m"
                            {
#line 1121 "purity.m"
                              check_hlds__purity__Goal_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "purity.m"
                              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_133, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_59));
#line 1121 "purity.m"
                              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_133, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_128));
#line 1121 "purity.m"
                            }
#line 1117 "purity.m"
                            check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1117 "purity.m"
                            check_hlds__purity__STATE_VARIABLE_Purity_100_100 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1117 "purity.m"
                          }
#line 1115 "purity.m"
                        }
#line 1115 "purity.m"
                      else
#line 1125 "purity.m"
                        {
#line 1125 "purity.m"
                          MR_Word check_hlds__purity__GoalPurity_75;
#line 1125 "purity.m"
                          MR_Word check_hlds__purity__GoalContainsTrace_76;

#line 1124 "purity.m"
                          {
#line 1124 "purity.m"
                            check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_57, &check_hlds__purity__Goal_133, &check_hlds__purity__GoalPurity_75, &check_hlds__purity__GoalContainsTrace_76, check_hlds__purity__STATE_VARIABLE_Info_95_95, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                          }
#line 1126 "purity.m"
                          {
#line 1126 "purity.m"
                            check_hlds__purity__STATE_VARIABLE_Purity_100_100 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_75, check_hlds__purity__STATE_VARIABLE_Purity_0_4);
                          }
#line 1127 "purity.m"
                          {
#line 1127 "purity.m"
                            check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_76, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6);
                          }
#line 1125 "purity.m"
                        }
#line 1130 "purity.m"
                      {
#line 1130 "purity.m"
                        check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "purity.m"
                        MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal_133));
#line 1130 "purity.m"
                        MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
#line 1130 "purity.m"
                        MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
#line 1130 "purity.m"
                      }
#line 1131 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Invariants_102_102 = (MR_Integer) 1;
#line 1111 "purity.m"
                    }
#line 1110 "purity.m"
                    break;
#line 1110 "purity.m"
                  case (MR_Integer) 1:
#line 1083 "purity.m"
                    {
#line 1083 "purity.m"
                      MR_Word check_hlds__purity__UnifySpecs_66;
#line 1083 "purity.m"
                      MR_Word check_hlds__purity__GoalInfo_67;
#line 1083 "purity.m"
                      MR_Word check_hlds__purity__Goal_68;
#line 1083 "purity.m"
                      MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_204;

#line 1097 "purity.m"
                      {
#line 1097 "purity.m"
                        check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_0_8, check_hlds__purity__GoalInfo0_35, check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, &check_hlds__purity__UnifySpecs_66);
                      }
#line 1099 "purity.m"
                      {
#line 1099 "purity.m"
                        check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_66, check_hlds__purity__STATE_VARIABLE_Info_0_8, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                      }
#line 598 "purity.m"
                      {
#line 598 "purity.m"
                        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, check_hlds__purity__GoalInfo1_60, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_204);
                      }
#line 604 "purity.m"
                      {
#line 604 "purity.m"
                        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_204, &check_hlds__purity__GoalInfo_67);
                      }
#line 1103 "purity.m"
                      {
#line 1103 "purity.m"
                        check_hlds__purity__Goal_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1103 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_68, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_59));
#line 1103 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_68, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_67));
#line 1103 "purity.m"
                      }
#line 1108 "purity.m"
                      {
#line 1108 "purity.m"
                        check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal_68));
#line 1108 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
#line 1108 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
#line 1108 "purity.m"
                      }
#line 1083 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Purity_100_100 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1083 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1083 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Invariants_102_102 = check_hlds__purity__STATE_VARIABLE_Invariants_0_10;
#line 1083 "purity.m"
                    }
#line 1110 "purity.m"
                    break;
#line 1110 "purity.m"
                }
#line 1110 "purity.m"
                break;
#line 1110 "purity.m"
              case (MR_Integer) 1:
#line 1133 "purity.m"
                {
#line 1133 "purity.m"
                  MR_Word check_hlds__purity__Spec_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__IsPlainUnify_58, (MR_Integer) 0)));

#line 1134 "purity.m"
                  {
#line 1134 "purity.m"
                    check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_77, check_hlds__purity__STATE_VARIABLE_Info_0_8, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                  }
#line 1135 "purity.m"
                  {
#line 1135 "purity.m"
                    check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal1_57));
#line 1135 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
#line 1135 "purity.m"
                    MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
#line 1135 "purity.m"
                  }
#line 1136 "purity.m"
                  check_hlds__purity__STATE_VARIABLE_Invariants_102_102 = (MR_Integer) 1;
#line 1133 "purity.m"
                  check_hlds__purity__STATE_VARIABLE_Purity_100_100 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 1133 "purity.m"
                  check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
#line 1133 "purity.m"
                }
#line 1110 "purity.m"
                break;
#line 1110 "purity.m"
            }
#line 1138 "purity.m"
            {
#line 1138 "purity.m"
              check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121, 0) = ((MR_Box) (check_hlds__purity__MarkedSubGoal_69));
#line 1138 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121, 1) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2));
#line 1138 "purity.m"
            }
#line 1139 "purity.m"
            /* direct tailcall eliminated */
#line 1139 "purity.m"
            {
#line 1139 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__Goals0_28;
#line 1139 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0__tmp_copy_2 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121;
#line 1139 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4 = check_hlds__purity__STATE_VARIABLE_Purity_100_100;
#line 1139 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101;
#line 1139 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_8 = check_hlds__purity__STATE_VARIABLE_Info_118_118;
#line 1139 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0__tmp_copy_10 = check_hlds__purity__STATE_VARIABLE_Invariants_102_102;

#line 1139 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Invariants_0_10 = check_hlds__purity__STATE_VARIABLE_Invariants_0__tmp_copy_10;
#line 1139 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Info_0_8 = check_hlds__purity__STATE_VARIABLE_Info_0__tmp_copy_8;
#line 1139 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0__tmp_copy_6;
#line 1139 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Purity_0_4 = check_hlds__purity__STATE_VARIABLE_Purity_0__tmp_copy_4;
#line 1139 "purity.m"
              check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0__tmp_copy_2;
#line 1139 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 1139 "purity.m"
            }
#line 1139 "purity.m"
            continue;
#line 1056 "purity.m"
          }
#line 1053 "purity.m"
      }
#line 1053 "purity.m"
      break;
#line 1053 "purity.m"
    }
#line 1047 "purity.m"
}

#line 988 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
#line 988 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 988 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 988 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_2,
#line 988 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_3)
#line 988 "purity.m"
{
#line 988 "purity.m"
  {
#line 988 "purity.m"
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
#line 988 "purity.m"
    MR_Word check_hlds__purity__conv4_STATE_VARIABLE_Info_9;

#line 988 "purity.m"
    {
#line 988 "purity.m"
      check_hlds__purity__purity_info_add_message_3_p_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2), &check_hlds__purity__conv4_STATE_VARIABLE_Info_9);
    }
#line 988 "purity.m"
    *check_hlds__purity__wrapper_arg_3 = ((MR_Box) (check_hlds__purity__conv4_STATE_VARIABLE_Info_9));
#line 988 "purity.m"
  }
#line 988 "purity.m"
}

#line 996 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
#line 996 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 996 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 996 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2,
#line 996 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_3,
#line 996 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_4)
#line 996 "purity.m"
{
#line 996 "purity.m"
  {
#line 996 "purity.m"
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
#line 996 "purity.m"
    MR_Word check_hlds__purity__conv2_Goal_9;
#line 996 "purity.m"
    MR_Word check_hlds__purity__conv1_STATE_VARIABLE_Info_29;

#line 996 "purity.m"
    {
#line 996 "purity.m"
      check_hlds__purity__wrap_inner_outer_goals_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__purity__wrapper_arg_1), &check_hlds__purity__conv2_Goal_9, ((MR_Word) check_hlds__purity__wrapper_arg_3), &check_hlds__purity__conv1_STATE_VARIABLE_Info_29);
    }
#line 996 "purity.m"
    *check_hlds__purity__wrapper_arg_2 = ((MR_Box) (check_hlds__purity__conv2_Goal_9));
#line 996 "purity.m"
    *check_hlds__purity__wrapper_arg_4 = ((MR_Box) (check_hlds__purity__conv1_STATE_VARIABLE_Info_29));
#line 996 "purity.m"
  }
#line 996 "purity.m"
}

#line 867 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
#line 867 "purity.m"
  MR_Box check_hlds__purity__closure_arg,
#line 867 "purity.m"
  MR_Box check_hlds__purity__wrapper_arg_1,
#line 867 "purity.m"
  MR_Box * check_hlds__purity__wrapper_arg_2)
#line 867 "purity.m"
{
#line 867 "purity.m"
  {
#line 867 "purity.m"
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
#line 867 "purity.m"
    MR_Word check_hlds__purity__conv0_HeadVar__2_2;

#line 867 "purity.m"
    {
#line 867 "purity.m"
      hlds__from_ground_term_util__project_kept_goal_2_p_0(((MR_Word) check_hlds__purity__wrapper_arg_1), &check_hlds__purity__conv0_HeadVar__2_2);
    }
#line 867 "purity.m"
    *check_hlds__purity__wrapper_arg_2 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__2_2));
#line 867 "purity.m"
  }
#line 867 "purity.m"
}

#line 666 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
#line 666 "purity.m"
  MR_Word check_hlds__purity__GoalExpr0_8,
#line 666 "purity.m"
  MR_Word * check_hlds__purity__GoalExpr_9,
#line 666 "purity.m"
  MR_Word check_hlds__purity__GoalInfo_10,
#line 666 "purity.m"
  MR_Word * check_hlds__purity__Purity_11,
#line 666 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_12,
#line 666 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_192,
#line 666 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_193)
#line 666 "purity.m"
{
#line 673 "purity.m"
  {
#line 673 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 673 "purity.m"
#line 673 "purity.m"
    switch (MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) {
#line 673 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 673 "purity.m"
      case (MR_Integer) 0:
#line 827 "purity.m"
        {
#line 827 "purity.m"
          MR_Word check_hlds__purity__Goal0_95 = (MR_Word) MR_body(((MR_Word) check_hlds__purity__GoalExpr0_8), (MR_Integer) 0);
#line 827 "purity.m"
          MR_Word check_hlds__purity__NotGoal0_96;
#line 833 "purity.m"
          MR_Word check_hlds__purity__Goal1_308;
#line 830 "purity.m"
          MR_Word check_hlds__purity__V_239_239;
#line 830 "purity.m"
          MR_Word check_hlds__purity__V_97_97;

#line 829 "purity.m"
          {
#line 829 "purity.m"
            hlds__hlds_goal__negate_goal_3_p_0(check_hlds__purity__Goal0_95, check_hlds__purity__GoalInfo_10, &check_hlds__purity__NotGoal0_96);
          }
#line 830 "purity.m"
          check_hlds__purity__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal0_96, (MR_Integer) 0)));
#line 830 "purity.m"
          check_hlds__purity__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal0_96, (MR_Integer) 1)));
#line 830 "purity.m"
          check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_239_239)) == (MR_mktag((MR_Integer) 0)));
#line 830 "purity.m"
          if (check_hlds__purity__succeeded)
#line 830 "purity.m"
            {
#line 830 "purity.m"
              check_hlds__purity__Goal1_308 = (MR_Word) MR_body(((MR_Word) check_hlds__purity__V_239_239), (MR_Integer) 0);
#line 831 "purity.m"
              {
#line 831 "purity.m"
                MR_Word check_hlds__purity__Goal_307;

#line 831 "purity.m"
                {
#line 831 "purity.m"
                  check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_308, &check_hlds__purity__Goal_307, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                }
#line 832 "purity.m"
                *check_hlds__purity__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__purity__Goal_307);
#line 831 "purity.m"
              }
#line 830 "purity.m"
            }
#line 830 "purity.m"
          else
#line 835 "purity.m"
            {
#line 835 "purity.m"
              MR_Word check_hlds__purity__NotGoal1_98;
#line 836 "purity.m"
              MR_Word check_hlds__purity__V_99_99;

#line 834 "purity.m"
              {
#line 834 "purity.m"
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__NotGoal0_96, &check_hlds__purity__NotGoal1_98, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
              }
#line 836 "purity.m"
              *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal1_98, (MR_Integer) 0)));
#line 836 "purity.m"
              check_hlds__purity__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal1_98, (MR_Integer) 1)));
#line 835 "purity.m"
            }
#line 827 "purity.m"
        }
#line 673 "purity.m"
        break;
#line 673 "purity.m"
      case (MR_Integer) 1:
#line 741 "purity.m"
        {
#line 741 "purity.m"
          MR_Word check_hlds__purity__LHSVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)));
#line 741 "purity.m"
          MR_Word check_hlds__purity__RHS0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 741 "purity.m"
          MR_Word check_hlds__purity__Mode_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 741 "purity.m"
          MR_Word check_hlds__purity__Unification_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 741 "purity.m"
          MR_Word check_hlds__purity__UnifyContext_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));

#line 773 "purity.m"
#line 773 "purity.m"
          switch (MR_tag((MR_Word) check_hlds__purity__RHS0_52)) {
#line 773 "purity.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 773 "purity.m"
            case (MR_Integer) 0:
#line 815 "purity.m"
              {
#line 816 "purity.m"
                *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 817 "purity.m"
                *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 818 "purity.m"
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 815 "purity.m"
                *check_hlds__purity__STATE_VARIABLE_Info_193 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 815 "purity.m"
              }
#line 773 "purity.m"
              break;
#line 773 "purity.m"
            case (MR_Integer) 1:
#line 774 "purity.m"
              {
#line 774 "purity.m"
                MR_Word check_hlds__purity__ConsId_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 0)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 2)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__Goal1_83;
#line 774 "purity.m"
                MR_Word check_hlds__purity__Goal_92;
#line 774 "purity.m"
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_249_249;
#line 774 "purity.m"
                MR_Word check_hlds__purity__RunPostTypecheck_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 774 "purity.m"
                MR_Word check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 1)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 775 "purity.m"
                MR_Word check_hlds__purity__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));
#line 802 "purity.m"
                MR_Word check_hlds__purity__V_251_251;
#line 802 "purity.m"
                MR_Word check_hlds__purity__V_90_90;
#line 802 "purity.m"
                MR_Word check_hlds__purity__V_85_85;
#line 802 "purity.m"
                MR_Word check_hlds__purity__V_86_86;
#line 802 "purity.m"
                MR_Word check_hlds__purity__V_87_87;
#line 802 "purity.m"
                MR_Word check_hlds__purity__V_88_88;
#line 802 "purity.m"
                MR_Word check_hlds__purity__V_89_89;
#line 813 "purity.m"
                MR_Word check_hlds__purity__V_93_93;

#line 798 "purity.m"
#line 798 "purity.m"
                switch (check_hlds__purity__RunPostTypecheck_292) {
#line 798 "purity.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 798 "purity.m"
                  case (MR_Integer) 1:
#line 799 "purity.m"
                    {
#line 800 "purity.m"
                      {
#line 800 "purity.m"
                        check_hlds__purity__Goal1_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 800 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, 0) = ((MR_Box) (check_hlds__purity__GoalExpr0_8));
#line 800 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_10));
#line 800 "purity.m"
                      }
#line 799 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Info_249_249 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 799 "purity.m"
                    }
#line 798 "purity.m"
                    break;
#line 798 "purity.m"
                  case (MR_Integer) 0:
#line 777 "purity.m"
                    {
#line 777 "purity.m"
                      MR_Word check_hlds__purity__VarSet_81;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__VarTypes_82;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__IsPlainUnify_84;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__STATE_VARIABLE_Info_247_247;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__PredInfo_286;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_416_416;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_417_417;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_421_421;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_422_422;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_423_423;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_424_424;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_425_425;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_427_427;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_429_429;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_430_430;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_431_431;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_432_432;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_433_433;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_435_435;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_436_436;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_437_437;
#line 777 "purity.m"
                      MR_Word check_hlds__purity__V_438_438;
#line 786 "purity.m"
                      MR_Word check_hlds__purity__V_418_418;
#line 786 "purity.m"
                      MR_Word check_hlds__purity__V_419_419;
#line 786 "purity.m"
                      MR_Word check_hlds__purity__V_420_420;

#line 782 "purity.m"
                      {
#line 782 "purity.m"
                        check_hlds__post_typecheck__resolve_unify_functor_16_p_0(check_hlds__purity__LHSVar_51, check_hlds__purity__ConsId_75, check_hlds__purity__Args_77, check_hlds__purity__Mode_53, check_hlds__purity__Unification_54, check_hlds__purity__UnifyContext_55, check_hlds__purity__GoalInfo_10, check_hlds__purity__V_381_381, check_hlds__purity__V_382_382, &check_hlds__purity__PredInfo_286, check_hlds__purity__V_384_384, &check_hlds__purity__VarSet_81, check_hlds__purity__V_383_383, &check_hlds__purity__VarTypes_82, &check_hlds__purity__Goal1_83, &check_hlds__purity__IsPlainUnify_84);
                      }
#line 786 "purity.m"
                      check_hlds__purity__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 786 "purity.m"
                      check_hlds__purity__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 786 "purity.m"
                      check_hlds__purity__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 786 "purity.m"
                      check_hlds__purity__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 786 "purity.m"
                      check_hlds__purity__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 786 "purity.m"
                      check_hlds__purity__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 786 "purity.m"
                      check_hlds__purity__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 786 "purity.m"
                      check_hlds__purity__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));
#line 787 "purity.m"
                      check_hlds__purity__V_424_424 = check_hlds__purity__V_416_416;
#line 787 "purity.m"
                      check_hlds__purity__V_425_425 = check_hlds__purity__V_417_417;
#line 787 "purity.m"
                      check_hlds__purity__V_427_427 = check_hlds__purity__VarTypes_82;
#line 787 "purity.m"
                      check_hlds__purity__V_429_429 = check_hlds__purity__V_421_421;
#line 787 "purity.m"
                      check_hlds__purity__V_430_430 = check_hlds__purity__V_422_422;
#line 787 "purity.m"
                      check_hlds__purity__V_431_431 = check_hlds__purity__V_423_423;
#line 788 "purity.m"
                      check_hlds__purity__V_432_432 = check_hlds__purity__V_424_424;
#line 788 "purity.m"
                      check_hlds__purity__V_433_433 = check_hlds__purity__V_425_425;
#line 788 "purity.m"
                      check_hlds__purity__V_435_435 = check_hlds__purity__V_427_427;
#line 788 "purity.m"
                      check_hlds__purity__V_436_436 = check_hlds__purity__VarSet_81;
#line 788 "purity.m"
                      check_hlds__purity__V_437_437 = check_hlds__purity__V_429_429;
#line 788 "purity.m"
                      check_hlds__purity__V_438_438 = check_hlds__purity__V_430_430;
#line 788 "purity.m"
                      {
#line 788 "purity.m"
                        check_hlds__purity__STATE_VARIABLE_Info_247_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 788 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 0) = ((MR_Box) (check_hlds__purity__V_432_432));
#line 788 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 1) = ((MR_Box) (check_hlds__purity__V_433_433));
#line 788 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 2) = ((MR_Box) (check_hlds__purity__PredInfo_286));
#line 788 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 3) = ((MR_Box) (check_hlds__purity__V_435_435));
#line 788 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 4) = ((MR_Box) (check_hlds__purity__V_436_436));
#line 788 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 5) = ((MR_Box) (check_hlds__purity__V_437_437));
#line 788 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 6) = ((MR_Box) (check_hlds__purity__V_438_438));
#line 788 "purity.m"
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_247_247, 7) = ((MR_Box) (check_hlds__purity__V_431_431));
#line 788 "purity.m"
                      }
#line 791 "purity.m"
#line 791 "purity.m"
                      switch (MR_tag((MR_Word) check_hlds__purity__IsPlainUnify_84)) {
#line 791 "purity.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 791 "purity.m"
                        case (MR_Integer) 0:
#line 791 "purity.m"
#line 791 "purity.m"
                          switch (MR_unmkbody(check_hlds__purity__IsPlainUnify_84)) {
#line 791 "purity.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 791 "purity.m"
                            case (MR_Integer) 0:
#line 792 "purity.m"
                              {
#line 793 "purity.m"
                                {
#line 793 "purity.m"
                                  check_hlds__purity__STATE_VARIABLE_Info_249_249 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 793 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 0) = ((MR_Box) (check_hlds__purity__V_432_432));
#line 793 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 1) = ((MR_Box) (check_hlds__purity__V_433_433));
#line 793 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 2) = ((MR_Box) (check_hlds__purity__PredInfo_286));
#line 793 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 3) = ((MR_Box) (check_hlds__purity__V_435_435));
#line 793 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 4) = ((MR_Box) (check_hlds__purity__V_436_436));
#line 793 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 5) = ((MR_Box) (check_hlds__purity__V_437_437));
#line 793 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 6) = ((MR_Box) (check_hlds__purity__V_438_438));
#line 793 "purity.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_249_249, 7) = ((MR_Box) ((MR_Integer) 1));
#line 793 "purity.m"
                                }
#line 792 "purity.m"
                              }
#line 791 "purity.m"
                              break;
#line 791 "purity.m"
                            case (MR_Integer) 1:
#line 790 "purity.m"
                              check_hlds__purity__STATE_VARIABLE_Info_249_249 = check_hlds__purity__STATE_VARIABLE_Info_247_247;
#line 791 "purity.m"
                              break;
#line 791 "purity.m"
                          }
#line 791 "purity.m"
                          break;
#line 791 "purity.m"
                        case (MR_Integer) 1:
#line 795 "purity.m"
                          {
#line 795 "purity.m"
                            MR_Word check_hlds__purity__Spec_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__IsPlainUnify_84, (MR_Integer) 0)));

#line 796 "purity.m"
                            {
#line 796 "purity.m"
                              check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_284, check_hlds__purity__STATE_VARIABLE_Info_247_247, &check_hlds__purity__STATE_VARIABLE_Info_249_249);
                            }
#line 795 "purity.m"
                          }
#line 791 "purity.m"
                          break;
#line 791 "purity.m"
                      }
#line 777 "purity.m"
                    }
#line 798 "purity.m"
                    break;
#line 798 "purity.m"
                }
#line 802 "purity.m"
                check_hlds__purity__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, (MR_Integer) 0)));
#line 802 "purity.m"
                check_hlds__purity__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, (MR_Integer) 1)));
#line 802 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_251_251)) == (MR_mktag((MR_Integer) 1)));
#line 802 "purity.m"
                if (check_hlds__purity__succeeded)
#line 802 "purity.m"
                  {
#line 802 "purity.m"
                    check_hlds__purity__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 0)));
#line 802 "purity.m"
                    check_hlds__purity__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 1)));
#line 802 "purity.m"
                    check_hlds__purity__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 2)));
#line 802 "purity.m"
                    check_hlds__purity__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 3)));
#line 802 "purity.m"
                    check_hlds__purity__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_251_251, (MR_Integer) 4)));
#line 804 "purity.m"
                    {
#line 804 "purity.m"
                      MR_Word check_hlds__purity__UnifySpecs_91;

#line 803 "purity.m"
                      {
#line 803 "purity.m"
                        check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_249_249, check_hlds__purity__GoalInfo_10, check_hlds__purity__LHSVar_51, check_hlds__purity__ConsId_75, check_hlds__purity__Args_77, &check_hlds__purity__UnifySpecs_91);
                      }
#line 805 "purity.m"
                      {
#line 805 "purity.m"
                        check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_91, check_hlds__purity__STATE_VARIABLE_Info_249_249, check_hlds__purity__STATE_VARIABLE_Info_193);
                      }
#line 806 "purity.m"
                      *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 807 "purity.m"
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 808 "purity.m"
                      check_hlds__purity__Goal_92 = check_hlds__purity__Goal1_83;
#line 804 "purity.m"
                    }
#line 802 "purity.m"
                  }
#line 802 "purity.m"
                else
#line 810 "purity.m"
                  {
#line 810 "purity.m"
                    check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_83, &check_hlds__purity__Goal_92, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_249_249, check_hlds__purity__STATE_VARIABLE_Info_193);
                  }
#line 813 "purity.m"
                *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_92, (MR_Integer) 0)));
#line 813 "purity.m"
                check_hlds__purity__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_92, (MR_Integer) 1)));
#line 774 "purity.m"
              }
#line 773 "purity.m"
              break;
#line 773 "purity.m"
            case (MR_Integer) 2:
#line 745 "purity.m"
              {
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaPurity_56 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 745 "purity.m"
                MR_Word check_hlds__purity__Groundness_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 745 "purity.m"
                MR_Word check_hlds__purity__PredOrFunc_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaNonLocals_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 2)));
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaQuantVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 3)));
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaModes_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 4)));
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaDetism_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 5)));
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaGoal0_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 6)));
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaGoalExpr0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal0_64, (MR_Integer) 0)));
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaGoalInfo0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal0_64, (MR_Integer) 1)));
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaGoalExpr_67;
#line 745 "purity.m"
                MR_Word check_hlds__purity__GoalPurity_68;
#line 745 "purity.m"
                MR_Word check_hlds__purity__LambdaGoal_70;
#line 745 "purity.m"
                MR_Word check_hlds__purity__RHS_71;
#line 745 "purity.m"
                MR_Word check_hlds__purity__ClosureSpecs_72;
#line 745 "purity.m"
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_254_254;
#line 745 "purity.m"
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_255_255;
#line 745 "purity.m"
                MR_Word check_hlds__purity__DeclaredPurity_283;
#line 747 "purity.m"
                MR_Word check_hlds__purity__V_69_69;

#line 747 "purity.m"
                {
#line 747 "purity.m"
                  check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__LambdaGoalExpr0_65, &check_hlds__purity__LambdaGoalExpr_67, check_hlds__purity__LambdaGoalInfo0_66, &check_hlds__purity__GoalPurity_68, &check_hlds__purity__V_69_69, check_hlds__purity__STATE_VARIABLE_Info_0_192, &check_hlds__purity__STATE_VARIABLE_Info_254_254);
                }
#line 749 "purity.m"
                {
#line 749 "purity.m"
                  check_hlds__purity__LambdaGoal_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 749 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal_70, 0) = ((MR_Box) (check_hlds__purity__LambdaGoalExpr_67));
#line 749 "purity.m"
                  MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal_70, 1) = ((MR_Box) (check_hlds__purity__LambdaGoalInfo0_66));
#line 749 "purity.m"
                }
#line 750 "purity.m"
                {
#line 750 "purity.m"
                  check_hlds__purity__RHS_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 750 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 0) = ((MR_Box) ((check_hlds__purity__LambdaPurity_56 | ((((check_hlds__purity__Groundness_57 << (MR_Integer) 2)) | ((check_hlds__purity__PredOrFunc_58 << (MR_Integer) 3)))))));
#line 750 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 1) = (MR_Integer) 0;
#line 750 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 2) = ((MR_Box) (check_hlds__purity__LambdaNonLocals_60));
#line 750 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 3) = ((MR_Box) (check_hlds__purity__LambdaQuantVars_61));
#line 750 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 4) = ((MR_Box) (check_hlds__purity__LambdaModes_62));
#line 750 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 5) = ((MR_Box) (check_hlds__purity__LambdaDetism_63));
#line 750 "purity.m"
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 6) = ((MR_Box) (check_hlds__purity__LambdaGoal_70));
#line 750 "purity.m"
                }
#line 754 "purity.m"
                {
#line 754 "purity.m"
                  check_hlds__purity__check_closure_purity_4_p_0(check_hlds__purity__GoalInfo_10, check_hlds__purity__LambdaPurity_56, check_hlds__purity__GoalPurity_68, &check_hlds__purity__ClosureSpecs_72);
                }
#line 756 "purity.m"
                {
#line 756 "purity.m"
                  check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__ClosureSpecs_72, check_hlds__purity__STATE_VARIABLE_Info_254_254, &check_hlds__purity__STATE_VARIABLE_Info_255_255);
                }
#line 757 "purity.m"
                {
#line 757 "purity.m"
                  MR_Word base;
#line 757 "purity.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 757 "purity.m"
                  *check_hlds__purity__GoalExpr_9 = base;
#line 757 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__LHSVar_51));
#line 757 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__RHS_71));
#line 757 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__purity__Mode_53));
#line 757 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__purity__Unification_54));
#line 757 "purity.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__purity__UnifyContext_55));
#line 757 "purity.m"
                }
#line 760 "purity.m"
                {
#line 760 "purity.m"
                  check_hlds__purity__DeclaredPurity_283 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_10);
                }
#line 768 "purity.m"
#line 768 "purity.m"
                switch (check_hlds__purity__DeclaredPurity_283) {
#line 768 "purity.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 768 "purity.m"
                  case (MR_Integer) 2:
#line 768 "purity.m"
                  case (MR_Integer) 1:
#line 764 "purity.m"
                    {
#line 764 "purity.m"
                      MR_Word check_hlds__purity__Context_73;
#line 764 "purity.m"
                      MR_Word check_hlds__purity__Spec_74;

#line 765 "purity.m"
                      {
#line 765 "purity.m"
                        check_hlds__purity__Context_73 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
                      }
#line 766 "purity.m"
                      {
#line 766 "purity.m"
                        check_hlds__purity__Spec_74 = check_hlds__purity__impure_unification_expr_error_2_f_0(check_hlds__purity__Context_73, check_hlds__purity__DeclaredPurity_283);
                      }
#line 767 "purity.m"
                      {
#line 767 "purity.m"
                        check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_74, check_hlds__purity__STATE_VARIABLE_Info_255_255, check_hlds__purity__STATE_VARIABLE_Info_193);
                      }
#line 764 "purity.m"
                    }
#line 768 "purity.m"
                    break;
#line 768 "purity.m"
                  case (MR_Integer) 0:
#line 769 "purity.m"
                    *check_hlds__purity__STATE_VARIABLE_Info_193 = check_hlds__purity__STATE_VARIABLE_Info_255_255;
#line 768 "purity.m"
                    break;
#line 768 "purity.m"
                }
#line 771 "purity.m"
                *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 772 "purity.m"
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 745 "purity.m"
              }
#line 773 "purity.m"
              break;
#line 773 "purity.m"
          }
#line 741 "purity.m"
        }
#line 673 "purity.m"
        break;
#line 673 "purity.m"
      case (MR_Integer) 2:
#line 686 "purity.m"
        {
#line 686 "purity.m"
          MR_Word check_hlds__purity__PredId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)));
#line 686 "purity.m"
          MR_Integer check_hlds__purity__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__Status_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__MaybeUnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__SymName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__RunPostTypecheck_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__PredInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 686 "purity.m"
          MR_Word check_hlds__purity__CallContext_26;
#line 686 "purity.m"
          MR_Word check_hlds__purity__PredId_28;
#line 686 "purity.m"
          MR_Word check_hlds__purity__DeclaredPurity_31;
#line 687 "purity.m"
          MR_Word check_hlds__purity__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 687 "purity.m"
          MR_Word check_hlds__purity__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));

#line 690 "purity.m"
          {
#line 690 "purity.m"
            check_hlds__purity__CallContext_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
          }
#line 709 "purity.m"
#line 709 "purity.m"
          switch (check_hlds__purity__RunPostTypecheck_23) {
#line 709 "purity.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 709 "purity.m"
            case (MR_Integer) 1:
#line 710 "purity.m"
              {
#line 711 "purity.m"
                check_hlds__purity__PredId_28 = check_hlds__purity__PredId0_17;
#line 712 "purity.m"
                *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 710 "purity.m"
              }
#line 709 "purity.m"
              break;
#line 709 "purity.m"
            case (MR_Integer) 0:
#line 692 "purity.m"
              {
#line 692 "purity.m"
                MR_Word check_hlds__purity__SymName_27;
#line 699 "purity.m"
                MR_Word check_hlds__purity__V_260_260;
#line 699 "purity.m"
                MR_String check_hlds__purity__V_261_261;
#line 699 "purity.m"
                MR_Word check_hlds__purity__V_262_262;
#line 699 "purity.m"
                MR_Word check_hlds__purity__V_263_263;
#line 699 "purity.m"
                MR_Word check_hlds__purity__V_517_517;
#line 700 "purity.m"
                MR_Word check_hlds__purity__InputArg_29;
#line 700 "purity.m"
                MR_Word check_hlds__purity__OutputArg_30;

#line 693 "purity.m"
                {
#line 693 "purity.m"
                  check_hlds__post_typecheck__finally_resolve_pred_overloading_8_p_0(check_hlds__purity__ArgVars_19, check_hlds__purity__PredInfo_24, check_hlds__purity__ModuleInfo_25, check_hlds__purity__CallContext_26, check_hlds__purity__SymName0_22, &check_hlds__purity__SymName_27, check_hlds__purity__PredId0_17, &check_hlds__purity__PredId_28);
                }
#line 698 "purity.m"
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__SymName_27)) == (MR_mktag((MR_Integer) 1)));
#line 698 "purity.m"
                if (check_hlds__purity__succeeded)
#line 698 "purity.m"
                  {
#line 698 "purity.m"
                    check_hlds__purity__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__SymName_27, (MR_Integer) 0)));
#line 698 "purity.m"
                    check_hlds__purity__V_261_261 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__purity__SymName_27, (MR_Integer) 1)));
#line 698 "purity.m"
                    {
#line 698 "purity.m"
                      check_hlds__purity__V_517_517 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                    }
#line 698 "purity.m"
                    {
#line 698 "purity.m"
                      check_hlds__purity__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__purity__V_260_260, check_hlds__purity__V_517_517);
                    }
#line 699 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 699 "purity.m"
                      {
#line 699 "purity.m"
                        check_hlds__purity__succeeded = (strcmp(check_hlds__purity__V_261_261, (MR_String) "unsafe_type_cast") == 0);
#line 699 "purity.m"
                        if (check_hlds__purity__succeeded)
#line 699 "purity.m"
                          {
#line 700 "purity.m"
                            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__ArgVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 700 "purity.m"
                            if (check_hlds__purity__succeeded)
#line 700 "purity.m"
                              {
#line 700 "purity.m"
                                check_hlds__purity__InputArg_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ArgVars_19, (MR_Integer) 0)));
#line 700 "purity.m"
                                check_hlds__purity__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ArgVars_19, (MR_Integer) 1)));
#line 700 "purity.m"
                                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_262_262)) == (MR_mktag((MR_Integer) 1)));
#line 700 "purity.m"
                                if (check_hlds__purity__succeeded)
#line 700 "purity.m"
                                  {
#line 700 "purity.m"
                                    check_hlds__purity__OutputArg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_262_262, (MR_Integer) 0)));
#line 700 "purity.m"
                                    check_hlds__purity__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_262_262, (MR_Integer) 1)));
#line 700 "purity.m"
                                    check_hlds__purity__succeeded = (check_hlds__purity__V_263_263 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "purity.m"
                                  }
#line 700 "purity.m"
                              }
#line 699 "purity.m"
                          }
#line 699 "purity.m"
                      }
#line 698 "purity.m"
                  }
#line 705 "purity.m"
                if (check_hlds__purity__succeeded)
#line 702 "purity.m"
                  {
#line 702 "purity.m"
                    MR_Word check_hlds__purity__V_269_269;
#line 702 "purity.m"
                    MR_Word check_hlds__purity__V_270_270;
#line 702 "purity.m"
                    MR_Word check_hlds__purity__V_271_271;
#line 702 "purity.m"
                    MR_Word check_hlds__purity__V_272_272;

#line 703 "purity.m"
                    {
#line 703 "purity.m"
                      check_hlds__purity__V_270_270 = parse_tree__prog_mode__in_mode_0_f_0();
                    }
#line 703 "purity.m"
                    {
#line 703 "purity.m"
                      check_hlds__purity__V_272_272 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
#line 703 "purity.m"
                    {
#line 703 "purity.m"
                      check_hlds__purity__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__V_271_271, 0) = ((MR_Box) (check_hlds__purity__V_272_272));
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__V_271_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "purity.m"
                    }
#line 703 "purity.m"
                    {
#line 703 "purity.m"
                      check_hlds__purity__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__V_269_269, 0) = ((MR_Box) (check_hlds__purity__V_270_270));
#line 703 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__V_269_269, 1) = ((MR_Box) (check_hlds__purity__V_271_271));
#line 703 "purity.m"
                    }
#line 702 "purity.m"
                    {
#line 702 "purity.m"
                      MR_Word base;
#line 702 "purity.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 702 "purity.m"
                      *check_hlds__purity__GoalExpr_9 = base;
#line 702 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 702 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_3[0])));
#line 702 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__ArgVars_19));
#line 702 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__purity__V_269_269));
#line 702 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 702 "purity.m"
                    }
#line 702 "purity.m"
                  }
#line 705 "purity.m"
                else
#line 706 "purity.m"
                  {
#line 706 "purity.m"
                    MR_Word base;
#line 706 "purity.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 706 "purity.m"
                    *check_hlds__purity__GoalExpr_9 = base;
#line 706 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__purity__PredId_28));
#line 706 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__purity__ProcId_18));
#line 706 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__purity__ArgVars_19));
#line 706 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__purity__Status_20));
#line 706 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__purity__MaybeUnifyContext_21));
#line 706 "purity.m"
                    MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__purity__SymName_27));
#line 706 "purity.m"
                  }
#line 692 "purity.m"
              }
#line 709 "purity.m"
              break;
#line 709 "purity.m"
          }
#line 714 "purity.m"
          {
#line 714 "purity.m"
            check_hlds__purity__DeclaredPurity_31 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_10);
          }
#line 715 "purity.m"
          {
#line 715 "purity.m"
            check_hlds__purity__perform_goal_purity_checks_6_p_0(check_hlds__purity__CallContext_26, check_hlds__purity__PredId_28, check_hlds__purity__DeclaredPurity_31, check_hlds__purity__Purity_11, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
          }
#line 718 "purity.m"
          *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 686 "purity.m"
        }
#line 673 "purity.m"
        break;
#line 673 "purity.m"
      case (MR_Integer) 3:
#line 673 "purity.m"
#line 673 "purity.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) {
#line 673 "purity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 673 "purity.m"
          case (MR_Integer) 0:
#line 721 "purity.m"
            {
#line 721 "purity.m"
              MR_Word check_hlds__purity__GenericCall0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 720 "purity.m"
              MR_Word check_hlds__purity___ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 720 "purity.m"
              MR_Word check_hlds__purity___Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 720 "purity.m"
              MR_Word check_hlds__purity___MaybeArgRegs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 720 "purity.m"
              MR_Word check_hlds__purity___Det_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));

#line 722 "purity.m"
              *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 725 "purity.m"
#line 725 "purity.m"
              switch (MR_tag((MR_Word) check_hlds__purity__GenericCall0_33)) {
#line 725 "purity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 725 "purity.m"
                case (MR_Integer) 0:
#line 724 "purity.m"
                  {
#line 724 "purity.m"
                    MR_Word check_hlds__purity__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 0)));
#line 724 "purity.m"
                    MR_Word check_hlds__purity__V_39_39;
#line 724 "purity.m"
                    MR_Integer check_hlds__purity__V_40_40;

#line 724 "purity.m"
                    *check_hlds__purity__Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 1)));
#line 724 "purity.m"
                    check_hlds__purity__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 2)));
#line 724 "purity.m"
                    check_hlds__purity__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 3)));
#line 724 "purity.m"
                  }
#line 725 "purity.m"
                  break;
#line 725 "purity.m"
                case (MR_Integer) 1:
#line 727 "purity.m"
                  *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 725 "purity.m"
                  break;
#line 725 "purity.m"
                case (MR_Integer) 2:
#line 725 "purity.m"
                case (MR_Integer) 3:
#line 732 "purity.m"
                  *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 725 "purity.m"
                  break;
#line 725 "purity.m"
              }
#line 734 "purity.m"
              *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 721 "purity.m"
              *check_hlds__purity__STATE_VARIABLE_Info_193 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 721 "purity.m"
            }
#line 673 "purity.m"
            break;
#line 673 "purity.m"
          case (MR_Integer) 1:
#line 965 "purity.m"
            {
#line 965 "purity.m"
              MR_Word check_hlds__purity__Attributes_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 965 "purity.m"
              MR_Word check_hlds__purity__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 965 "purity.m"
              MR_Integer check_hlds__purity__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 965 "purity.m"
              MR_Word check_hlds__purity__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 965 "purity.m"
              MR_Word check_hlds__purity__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));
#line 965 "purity.m"
              MR_Word check_hlds__purity__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 6)));
#line 965 "purity.m"
              MR_Word check_hlds__purity__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 7)));

#line 966 "purity.m"
              {
#line 966 "purity.m"
                *check_hlds__purity__Purity_11 = parse_tree__prog_data__get_purity_1_f_0(check_hlds__purity__Attributes_157);
              }
#line 967 "purity.m"
              *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 968 "purity.m"
              *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 965 "purity.m"
              *check_hlds__purity__STATE_VARIABLE_Info_193 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 965 "purity.m"
            }
#line 673 "purity.m"
            break;
#line 673 "purity.m"
          case (MR_Integer) 2:
#line 673 "purity.m"
            {
#line 673 "purity.m"
              MR_Word check_hlds__purity__ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 673 "purity.m"
              MR_Word check_hlds__purity__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 673 "purity.m"
              MR_Word check_hlds__purity__Goals_16;

#line 678 "purity.m"
#line 678 "purity.m"
              switch (check_hlds__purity__ConjType_14) {
#line 678 "purity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 678 "purity.m"
                case (MR_Integer) 1:
#line 679 "purity.m"
                  {
#line 680 "purity.m"
                    {
#line 680 "purity.m"
                      check_hlds__purity__compute_parallel_goals_purity_8_p_0(check_hlds__purity__Goals0_15, &check_hlds__purity__Goals_16, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 679 "purity.m"
                  }
#line 678 "purity.m"
                  break;
#line 678 "purity.m"
                case (MR_Integer) 0:
#line 675 "purity.m"
                  {
#line 676 "purity.m"
                    {
#line 676 "purity.m"
                      check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__Goals0_15, &check_hlds__purity__Goals_16, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 675 "purity.m"
                  }
#line 678 "purity.m"
                  break;
#line 678 "purity.m"
              }
#line 683 "purity.m"
              {
#line 683 "purity.m"
                MR_Word base;
#line 683 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 683 "purity.m"
                *check_hlds__purity__GoalExpr_9 = base;
#line 683 "purity.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 683 "purity.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ConjType_14));
#line 683 "purity.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Goals_16));
#line 683 "purity.m"
              }
#line 673 "purity.m"
            }
#line 673 "purity.m"
            break;
#line 673 "purity.m"
          case (MR_Integer) 3:
#line 822 "purity.m"
            {
#line 822 "purity.m"
              MR_Word check_hlds__purity__Goals0_305 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 823 "purity.m"
              MR_Word * check_hlds__purity__AddrGoals_519;

#line 825 "purity.m"
              {
#line 825 "purity.m"
                MR_Word base;
#line 825 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "purity.m"
                *check_hlds__purity__GoalExpr_9 = base;
#line 825 "purity.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 825 "purity.m"
                MR_hl_field(MR_mktag(3), base, 1) = NULL;
#line 825 "purity.m"
              }
#line 825 "purity.m"
              check_hlds__purity__AddrGoals_519 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 1));
#line 823 "purity.m"
              {
#line 823 "purity.m"
                check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(check_hlds__purity__Goals0_305, check_hlds__purity__AddrGoals_519, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
              }
#line 822 "purity.m"
            }
#line 673 "purity.m"
            break;
#line 673 "purity.m"
          case (MR_Integer) 4:
#line 736 "purity.m"
            {
#line 736 "purity.m"
              MR_Word check_hlds__purity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 736 "purity.m"
              MR_Word check_hlds__purity__Canfail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 736 "purity.m"
              MR_Word check_hlds__purity__Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 737 "purity.m"
              MR_Word * check_hlds__purity__AddrCases_522;

#line 739 "purity.m"
              {
#line 739 "purity.m"
                MR_Word base;
#line 739 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 739 "purity.m"
                *check_hlds__purity__GoalExpr_9 = base;
#line 739 "purity.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 739 "purity.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Var_47));
#line 739 "purity.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Canfail_48));
#line 739 "purity.m"
                MR_hl_field(MR_mktag(3), base, 3) = NULL;
#line 739 "purity.m"
              }
#line 739 "purity.m"
              check_hlds__purity__AddrCases_522 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 3));
#line 737 "purity.m"
              {
#line 737 "purity.m"
                check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(check_hlds__purity__Cases0_49, check_hlds__purity__AddrCases_522, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
              }
#line 736 "purity.m"
            }
#line 673 "purity.m"
            break;
#line 673 "purity.m"
          case (MR_Integer) 5:
#line 839 "purity.m"
            {
#line 839 "purity.m"
              MR_Word check_hlds__purity__Reason0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 839 "purity.m"
              MR_Word check_hlds__purity__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));

#line 845 "purity.m"
#line 845 "purity.m"
              switch (MR_tag((MR_Word) check_hlds__purity__Reason0_100)) {
#line 845 "purity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 845 "purity.m"
                case (MR_Integer) 0:
#line 845 "purity.m"
                case (MR_Integer) 1:
#line 931 "purity.m"
                  {
#line 931 "purity.m"
                    MR_Word * check_hlds__purity__AddrSubGoal_520;

#line 933 "purity.m"
                    {
#line 933 "purity.m"
                      MR_Word base;
#line 933 "purity.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 933 "purity.m"
                      *check_hlds__purity__GoalExpr_9 = base;
#line 933 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 933 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 933 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 2) = NULL;
#line 933 "purity.m"
                    }
#line 933 "purity.m"
                    check_hlds__purity__AddrSubGoal_520 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 2));
#line 931 "purity.m"
                    {
#line 931 "purity.m"
                      check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(check_hlds__purity__SubGoal0_101, check_hlds__purity__AddrSubGoal_520, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 931 "purity.m"
                  }
#line 845 "purity.m"
                  break;
#line 845 "purity.m"
                case (MR_Integer) 2:
#line 841 "purity.m"
                  {
#line 841 "purity.m"
                    MR_Word check_hlds__purity__SubGoal_103;
#line 842 "purity.m"
                    MR_Word check_hlds__purity__V_104_104;

#line 841 "purity.m"
                    *check_hlds__purity__Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__Reason0_100, (MR_Integer) 0)));
#line 842 "purity.m"
                    {
#line 842 "purity.m"
                      check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_103, &check_hlds__purity__V_104_104, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 843 "purity.m"
                    {
#line 843 "purity.m"
                      MR_Word base;
#line 843 "purity.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 843 "purity.m"
                      *check_hlds__purity__GoalExpr_9 = base;
#line 843 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 843 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 843 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_103));
#line 843 "purity.m"
                    }
#line 841 "purity.m"
                  }
#line 845 "purity.m"
                  break;
#line 845 "purity.m"
                case (MR_Integer) 3:
#line 845 "purity.m"
#line 845 "purity.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 0)))) {
#line 845 "purity.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 845 "purity.m"
                    case (MR_Integer) 0:
#line 845 "purity.m"
                    case (MR_Integer) 1:
#line 845 "purity.m"
                    case (MR_Integer) 2:
#line 845 "purity.m"
                    case (MR_Integer) 3:
#line 845 "purity.m"
                    case (MR_Integer) 4:
#line 931 "purity.m"
                      {
#line 931 "purity.m"
                        MR_Word * check_hlds__purity__AddrSubGoal_520;

#line 933 "purity.m"
                        {
#line 933 "purity.m"
                          MR_Word base;
#line 933 "purity.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 933 "purity.m"
                          *check_hlds__purity__GoalExpr_9 = base;
#line 933 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 933 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 933 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 2) = NULL;
#line 933 "purity.m"
                        }
#line 933 "purity.m"
                        check_hlds__purity__AddrSubGoal_520 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 2));
#line 931 "purity.m"
                        {
#line 931 "purity.m"
                          check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(check_hlds__purity__SubGoal0_101, check_hlds__purity__AddrSubGoal_520, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                        }
#line 931 "purity.m"
                      }
#line 845 "purity.m"
                      break;
#line 845 "purity.m"
                    case (MR_Integer) 5:
#line 846 "purity.m"
                      {
#line 846 "purity.m"
                        MR_Word check_hlds__purity__TermVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 1)));
#line 846 "purity.m"
                        MR_Word check_hlds__purity__Kind0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 2)));

#line 901 "purity.m"
#line 901 "purity.m"
                        switch (check_hlds__purity__Kind0_106) {
#line 901 "purity.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 901 "purity.m"
                          case (MR_Integer) 1:
#line 901 "purity.m"
                          case (MR_Integer) 0:
#line 850 "purity.m"
                            {
#line 850 "purity.m"
                              MR_Word check_hlds__purity__SubGoalExpr0_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal0_101, (MR_Integer) 0)));
#line 850 "purity.m"
                              MR_Word check_hlds__purity__SubGoalInfo0_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal0_101, (MR_Integer) 1)));
#line 850 "purity.m"
                              MR_Word check_hlds__purity__SubGoals0_110;
#line 850 "purity.m"
                              MR_Word check_hlds__purity__PostTypeCheck_111;
#line 854 "purity.m"
                              MR_Word check_hlds__purity__SubGoals0Prime_109;
#line 852 "purity.m"
                              MR_Word check_hlds__purity__V_225_225;
#line 858 "purity.m"
                              MR_Word check_hlds__purity__V_448_448;
#line 858 "purity.m"
                              MR_Word check_hlds__purity__V_449_449;
#line 858 "purity.m"
                              MR_Word check_hlds__purity__V_450_450;
#line 858 "purity.m"
                              MR_Word check_hlds__purity__V_451_451;
#line 858 "purity.m"
                              MR_Word check_hlds__purity__V_452_452;
#line 858 "purity.m"
                              MR_Word check_hlds__purity__V_453_453;
#line 858 "purity.m"
                              MR_Word check_hlds__purity__V_454_454;

#line 852 "purity.m"
                              check_hlds__purity__succeeded = ((((MR_tag((MR_Word) check_hlds__purity__SubGoalExpr0_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 852 "purity.m"
                              if (check_hlds__purity__succeeded)
#line 852 "purity.m"
                                {
#line 852 "purity.m"
                                  check_hlds__purity__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 1)));
#line 852 "purity.m"
                                  check_hlds__purity__SubGoals0Prime_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 2)));
#line 852 "purity.m"
                                  check_hlds__purity__succeeded = (check_hlds__purity__V_225_225 == (MR_Integer) 0);
#line 852 "purity.m"
                                }
#line 854 "purity.m"
                              if (check_hlds__purity__succeeded)
#line 853 "purity.m"
                                check_hlds__purity__SubGoals0_110 = check_hlds__purity__SubGoals0Prime_109;
#line 854 "purity.m"
                              else
#line 855 "purity.m"
                                {
#line 855 "purity.m"
                                  {
#line 855 "purity.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "from_ground_term_initial goal is not plain conj");
#line 855 "purity.m"
                                    return;
                                  }
#line 855 "purity.m"
                                }
#line 858 "purity.m"
                              check_hlds__purity__V_448_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 858 "purity.m"
                              check_hlds__purity__PostTypeCheck_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 858 "purity.m"
                              check_hlds__purity__V_449_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 858 "purity.m"
                              check_hlds__purity__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 858 "purity.m"
                              check_hlds__purity__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 858 "purity.m"
                              check_hlds__purity__V_452_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 858 "purity.m"
                              check_hlds__purity__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 858 "purity.m"
                              check_hlds__purity__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));
#line 892 "purity.m"
#line 892 "purity.m"
                              switch (check_hlds__purity__PostTypeCheck_111) {
#line 892 "purity.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 892 "purity.m"
                                case (MR_Integer) 1:
#line 893 "purity.m"
                                  {
#line 893 "purity.m"
                                    MR_Word check_hlds__purity__Specs_121;

#line 894 "purity.m"
                                    *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
#line 895 "purity.m"
                                    {
#line 895 "purity.m"
                                      check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(check_hlds__purity__SubGoals0_110, check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__purity__Specs_121);
                                    }
#line 897 "purity.m"
                                    {
#line 897 "purity.m"
                                      check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__Specs_121, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                                    }
#line 898 "purity.m"
                                    *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 899 "purity.m"
                                    *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 893 "purity.m"
                                  }
#line 892 "purity.m"
                                  break;
#line 892 "purity.m"
                                case (MR_Integer) 0:
#line 860 "purity.m"
                                  {
#line 860 "purity.m"
                                    MR_Word check_hlds__purity__RevMarkedSubGoals_112;
#line 860 "purity.m"
                                    MR_Word check_hlds__purity__Invariants_113;

#line 861 "purity.m"
                                    {
#line 861 "purity.m"
                                      check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(check_hlds__purity__SubGoals0_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__purity__RevMarkedSubGoals_112, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 0, &check_hlds__purity__Invariants_113);
                                    }
#line 875 "purity.m"
#line 875 "purity.m"
                                    switch (check_hlds__purity__Invariants_113) {
#line 875 "purity.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 875 "purity.m"
                                      case (MR_Integer) 1:
#line 876 "purity.m"
                                        {
#line 876 "purity.m"
                                          MR_Word check_hlds__purity__ConstructOrderMarkedSubGoals_118;
#line 876 "purity.m"
                                          MR_Word check_hlds__purity__Order_119;
#line 876 "purity.m"
                                          MR_Word check_hlds__purity__SubGoal_313;
#line 890 "purity.m"
                                          MR_Word check_hlds__purity__V_120_120;

#line 881 "purity.m"
#line 881 "purity.m"
                                          switch (check_hlds__purity__Kind0_106) {
#line 881 "purity.m"
                                            default: /*NOTREACHED*/ MR_assert(0);
#line 881 "purity.m"
                                            case (MR_Integer) 1:
#line 882 "purity.m"
                                              {
#line 883 "purity.m"
                                                {
#line 883 "purity.m"
                                                  mercury__list__reverse_2_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, check_hlds__purity__RevMarkedSubGoals_112, &check_hlds__purity__ConstructOrderMarkedSubGoals_118);
                                                }
#line 885 "purity.m"
                                                check_hlds__purity__Order_119 = (MR_Integer) 0;
#line 882 "purity.m"
                                              }
#line 881 "purity.m"
                                              break;
#line 881 "purity.m"
                                            case (MR_Integer) 0:
#line 878 "purity.m"
                                              {
#line 879 "purity.m"
                                                check_hlds__purity__ConstructOrderMarkedSubGoals_118 = check_hlds__purity__RevMarkedSubGoals_112;
#line 880 "purity.m"
                                                check_hlds__purity__Order_119 = (MR_Integer) 1;
#line 878 "purity.m"
                                              }
#line 881 "purity.m"
                                              break;
#line 881 "purity.m"
                                          }
#line 887 "purity.m"
                                          {
#line 887 "purity.m"
                                            hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(check_hlds__purity__GoalInfo_10, check_hlds__purity__SubGoalInfo0_108, check_hlds__purity__ConstructOrderMarkedSubGoals_118, check_hlds__purity__Order_119, &check_hlds__purity__SubGoal_313);
                                          }
#line 890 "purity.m"
                                          *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_313, (MR_Integer) 0)));
#line 890 "purity.m"
                                          check_hlds__purity__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_313, (MR_Integer) 1)));
#line 876 "purity.m"
                                        }
#line 875 "purity.m"
                                        break;
#line 875 "purity.m"
                                      case (MR_Integer) 0:
#line 866 "purity.m"
                                        {
#line 866 "purity.m"
                                          MR_Word check_hlds__purity__TypeCtorInfo_502_502 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 866 "purity.m"
                                          MR_Word check_hlds__purity__RevSubGoals_114;
#line 866 "purity.m"
                                          MR_Word check_hlds__purity__SubGoals_115;
#line 866 "purity.m"
                                          MR_Word check_hlds__purity__SubGoalExpr_116;
#line 866 "purity.m"
                                          MR_Word check_hlds__purity__SubGoalInfo_117;
#line 866 "purity.m"
                                          MR_Word check_hlds__purity__SubGoal_312;

#line 867 "purity.m"
                                          {
#line 867 "purity.m"
                                            mercury__list__map_3_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, check_hlds__purity__TypeCtorInfo_502_502, (MR_Word) &check_hlds__purity_scalar_common_1[2], check_hlds__purity__RevMarkedSubGoals_112, &check_hlds__purity__RevSubGoals_114);
                                          }
#line 869 "purity.m"
                                          {
#line 869 "purity.m"
                                            mercury__list__reverse_2_p_0(check_hlds__purity__TypeCtorInfo_502_502, check_hlds__purity__RevSubGoals_114, &check_hlds__purity__SubGoals_115);
                                          }
#line 870 "purity.m"
                                          {
#line 870 "purity.m"
                                            check_hlds__purity__SubGoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 870 "purity.m"
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 870 "purity.m"
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 1) = ((MR_Box) ((MR_Integer) 0));
#line 870 "purity.m"
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 2) = ((MR_Box) (check_hlds__purity__SubGoals_115));
#line 870 "purity.m"
                                          }
#line 871 "purity.m"
                                          {
#line 871 "purity.m"
                                            check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(*check_hlds__purity__Purity_11, *check_hlds__purity__ContainsTrace_12, check_hlds__purity__SubGoalInfo0_108, &check_hlds__purity__SubGoalInfo_117);
                                          }
#line 873 "purity.m"
                                          {
#line 873 "purity.m"
                                            check_hlds__purity__SubGoal_312 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 873 "purity.m"
                                            MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_312, 0) = ((MR_Box) (check_hlds__purity__SubGoalExpr_116));
#line 873 "purity.m"
                                            MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_312, 1) = ((MR_Box) (check_hlds__purity__SubGoalInfo_117));
#line 873 "purity.m"
                                          }
#line 874 "purity.m"
                                          {
#line 874 "purity.m"
                                            MR_Word base;
#line 874 "purity.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 874 "purity.m"
                                            *check_hlds__purity__GoalExpr_9 = base;
#line 874 "purity.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 874 "purity.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 874 "purity.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_312));
#line 874 "purity.m"
                                          }
#line 866 "purity.m"
                                        }
#line 875 "purity.m"
                                        break;
#line 875 "purity.m"
                                    }
#line 860 "purity.m"
                                  }
#line 892 "purity.m"
                                  break;
#line 892 "purity.m"
                              }
#line 850 "purity.m"
                            }
#line 901 "purity.m"
                            break;
#line 901 "purity.m"
                          case (MR_Integer) 2:
#line 901 "purity.m"
                          case (MR_Integer) 3:
#line 904 "purity.m"
                            {
#line 904 "purity.m"
                              MR_Word check_hlds__purity__HaveConvertedUnify_122;
#line 904 "purity.m"
                              MR_Word check_hlds__purity__STATE_VARIABLE_Info_221_221;
#line 904 "purity.m"
                              MR_Word check_hlds__purity__SubGoal_318;
#line 905 "purity.m"
                              MR_Word check_hlds__purity__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 905 "purity.m"
                              MR_Word check_hlds__purity__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 905 "purity.m"
                              MR_Word check_hlds__purity__V_457_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 905 "purity.m"
                              MR_Word check_hlds__purity__V_458_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 905 "purity.m"
                              MR_Word check_hlds__purity__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 905 "purity.m"
                              MR_Word check_hlds__purity__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 905 "purity.m"
                              MR_Word check_hlds__purity__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 905 "purity.m"
                              MR_Word check_hlds__purity__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));
#line 908 "purity.m"
                              MR_Word check_hlds__purity__V_463_463;
#line 908 "purity.m"
                              MR_Word check_hlds__purity__V_464_464;
#line 908 "purity.m"
                              MR_Word check_hlds__purity__V_465_465;
#line 908 "purity.m"
                              MR_Word check_hlds__purity__V_466_466;
#line 908 "purity.m"
                              MR_Word check_hlds__purity__V_467_467;
#line 908 "purity.m"
                              MR_Word check_hlds__purity__V_468_468;
#line 908 "purity.m"
                              MR_Word check_hlds__purity__V_469_469;

#line 905 "purity.m"
                              {
#line 905 "purity.m"
                                check_hlds__purity__STATE_VARIABLE_Info_221_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 905 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 0) = ((MR_Box) (check_hlds__purity__V_455_455));
#line 905 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 1) = ((MR_Box) (check_hlds__purity__V_456_456));
#line 905 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 2) = ((MR_Box) (check_hlds__purity__V_457_457));
#line 905 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 3) = ((MR_Box) (check_hlds__purity__V_458_458));
#line 905 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 4) = ((MR_Box) (check_hlds__purity__V_459_459));
#line 905 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 5) = ((MR_Box) (check_hlds__purity__V_460_460));
#line 905 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 6) = ((MR_Box) (check_hlds__purity__V_461_461));
#line 905 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_221_221, 7) = ((MR_Box) ((MR_Integer) 0));
#line 905 "purity.m"
                              }
#line 906 "purity.m"
                              {
#line 906 "purity.m"
                                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_318, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_221_221, check_hlds__purity__STATE_VARIABLE_Info_193);
                              }
#line 908 "purity.m"
                              check_hlds__purity__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 0)));
#line 908 "purity.m"
                              check_hlds__purity__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 1)));
#line 908 "purity.m"
                              check_hlds__purity__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 2)));
#line 908 "purity.m"
                              check_hlds__purity__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 3)));
#line 908 "purity.m"
                              check_hlds__purity__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 4)));
#line 908 "purity.m"
                              check_hlds__purity__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 5)));
#line 908 "purity.m"
                              check_hlds__purity__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 6)));
#line 908 "purity.m"
                              check_hlds__purity__HaveConvertedUnify_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_193, (MR_Integer) 7)));
#line 912 "purity.m"
#line 912 "purity.m"
                              switch (check_hlds__purity__HaveConvertedUnify_122) {
#line 912 "purity.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 912 "purity.m"
                                case (MR_Integer) 1:
#line 913 "purity.m"
                                  {
#line 913 "purity.m"
                                    MR_Word check_hlds__purity__Reason_123;

#line 918 "purity.m"
                                    {
#line 918 "purity.m"
                                      check_hlds__purity__Reason_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 918 "purity.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 918 "purity.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 1) = ((MR_Box) (check_hlds__purity__TermVar_105));
#line 918 "purity.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 2) = ((MR_Box) ((MR_Integer) 3));
#line 918 "purity.m"
                                    }
#line 919 "purity.m"
                                    {
#line 919 "purity.m"
                                      MR_Word base;
#line 919 "purity.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 919 "purity.m"
                                      *check_hlds__purity__GoalExpr_9 = base;
#line 919 "purity.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 919 "purity.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason_123));
#line 919 "purity.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_318));
#line 919 "purity.m"
                                    }
#line 913 "purity.m"
                                  }
#line 912 "purity.m"
                                  break;
#line 912 "purity.m"
                                case (MR_Integer) 0:
#line 911 "purity.m"
                                  {
#line 911 "purity.m"
                                    MR_Word base;
#line 911 "purity.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 911 "purity.m"
                                    *check_hlds__purity__GoalExpr_9 = base;
#line 911 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 911 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 911 "purity.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_318));
#line 911 "purity.m"
                                  }
#line 912 "purity.m"
                                  break;
#line 912 "purity.m"
                              }
#line 904 "purity.m"
                            }
#line 901 "purity.m"
                            break;
#line 901 "purity.m"
                        }
#line 846 "purity.m"
                      }
#line 845 "purity.m"
                      break;
#line 845 "purity.m"
                    case (MR_Integer) 6:
#line 935 "purity.m"
                      {
#line 935 "purity.m"
                        MR_Word check_hlds__purity__SubGoal_322;
#line 936 "purity.m"
                        MR_Word check_hlds__purity___SubPurity_138;
#line 936 "purity.m"
                        MR_Word check_hlds__purity__V_139_139;

#line 936 "purity.m"
                        {
#line 936 "purity.m"
                          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_322, &check_hlds__purity___SubPurity_138, &check_hlds__purity__V_139_139, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                        }
#line 937 "purity.m"
                        {
#line 937 "purity.m"
                          MR_Word base;
#line 937 "purity.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 937 "purity.m"
                          *check_hlds__purity__GoalExpr_9 = base;
#line 937 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 937 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
#line 937 "purity.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_322));
#line 937 "purity.m"
                        }
#line 938 "purity.m"
                        *check_hlds__purity__Purity_11 = (MR_Integer) 0;
#line 939 "purity.m"
                        *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
#line 935 "purity.m"
                      }
#line 845 "purity.m"
                      break;
#line 845 "purity.m"
                    case (MR_Integer) 7:
#line 943 "purity.m"
                      {
#line 944 "purity.m"
                        {
#line 944 "purity.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "loop_control");
#line 944 "purity.m"
                          return;
                        }
#line 943 "purity.m"
                      }
#line 845 "purity.m"
                      break;
#line 845 "purity.m"
                  }
#line 845 "purity.m"
                  break;
#line 845 "purity.m"
              }
#line 839 "purity.m"
            }
#line 673 "purity.m"
            break;
#line 673 "purity.m"
          case (MR_Integer) 6:
#line 947 "purity.m"
            {
#line 947 "purity.m"
              MR_Word check_hlds__purity__Vars_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
#line 947 "purity.m"
              MR_Word check_hlds__purity__Cond0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
#line 947 "purity.m"
              MR_Word check_hlds__purity__Then0_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
#line 947 "purity.m"
              MR_Word check_hlds__purity__Else0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
#line 947 "purity.m"
              MR_Word check_hlds__purity__Cond_147;
#line 947 "purity.m"
              MR_Word check_hlds__purity__Purity1_148;
#line 947 "purity.m"
              MR_Word check_hlds__purity__ContainsTrace1_149;
#line 947 "purity.m"
              MR_Word check_hlds__purity__Then_150;
#line 947 "purity.m"
              MR_Word check_hlds__purity__Purity2_151;
#line 947 "purity.m"
              MR_Word check_hlds__purity__ContainsTrace2_152;
#line 947 "purity.m"
              MR_Word check_hlds__purity__Else_153;
#line 947 "purity.m"
              MR_Word check_hlds__purity__Purity3_154;
#line 947 "purity.m"
              MR_Word check_hlds__purity__ContainsTrace3_155;
#line 947 "purity.m"
              MR_Word check_hlds__purity__Purity12_156;
#line 947 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_213_213;
#line 947 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_214_214;

#line 948 "purity.m"
              {
#line 948 "purity.m"
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Cond0_144, &check_hlds__purity__Cond_147, &check_hlds__purity__Purity1_148, &check_hlds__purity__ContainsTrace1_149, check_hlds__purity__STATE_VARIABLE_Info_0_192, &check_hlds__purity__STATE_VARIABLE_Info_213_213);
              }
#line 949 "purity.m"
              {
#line 949 "purity.m"
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Then0_145, &check_hlds__purity__Then_150, &check_hlds__purity__Purity2_151, &check_hlds__purity__ContainsTrace2_152, check_hlds__purity__STATE_VARIABLE_Info_213_213, &check_hlds__purity__STATE_VARIABLE_Info_214_214);
              }
#line 950 "purity.m"
              {
#line 950 "purity.m"
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Else0_146, &check_hlds__purity__Else_153, &check_hlds__purity__Purity3_154, &check_hlds__purity__ContainsTrace3_155, check_hlds__purity__STATE_VARIABLE_Info_214_214, check_hlds__purity__STATE_VARIABLE_Info_193);
              }
#line 951 "purity.m"
              {
#line 951 "purity.m"
                check_hlds__purity__Purity12_156 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity1_148, check_hlds__purity__Purity2_151);
              }
#line 952 "purity.m"
              {
#line 952 "purity.m"
                *check_hlds__purity__Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity12_156, check_hlds__purity__Purity3_154);
              }
#line 954 "purity.m"
              check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace1_149 == (MR_Integer) 0);
#line 955 "purity.m"
              if (!(check_hlds__purity__succeeded))
#line 955 "purity.m"
                {
#line 955 "purity.m"
                  check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace2_152 == (MR_Integer) 0);
#line 955 "purity.m"
                  if (!(check_hlds__purity__succeeded))
#line 956 "purity.m"
                    check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace3_155 == (MR_Integer) 0);
#line 955 "purity.m"
                }
#line 960 "purity.m"
              if (check_hlds__purity__succeeded)
#line 959 "purity.m"
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
#line 960 "purity.m"
              else
#line 961 "purity.m"
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 963 "purity.m"
              {
#line 963 "purity.m"
                MR_Word base;
#line 963 "purity.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 963 "purity.m"
                *check_hlds__purity__GoalExpr_9 = base;
#line 963 "purity.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 963 "purity.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Vars_143));
#line 963 "purity.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Cond_147));
#line 963 "purity.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__purity__Then_150));
#line 963 "purity.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__purity__Else_153));
#line 963 "purity.m"
              }
#line 947 "purity.m"
            }
#line 673 "purity.m"
            break;
#line 673 "purity.m"
          case (MR_Integer) 7:
#line 970 "purity.m"
            {
#line 970 "purity.m"
              MR_Word check_hlds__purity__ShortHand0_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));

#line 1029 "purity.m"
#line 1029 "purity.m"
              switch (MR_tag((MR_Word) check_hlds__purity__ShortHand0_164)) {
#line 1029 "purity.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1029 "purity.m"
                case (MR_Integer) 0:
#line 1036 "purity.m"
                  {
#line 1038 "purity.m"
                    {
#line 1038 "purity.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "bi_implication");
#line 1038 "purity.m"
                      return;
                    }
#line 1036 "purity.m"
                  }
#line 1029 "purity.m"
                  break;
#line 1029 "purity.m"
                case (MR_Integer) 1:
#line 973 "purity.m"
                  {
#line 973 "purity.m"
                    MR_Word check_hlds__purity__GoalType_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 0)));
#line 973 "purity.m"
                    MR_Word check_hlds__purity__Outer_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 1)));
#line 973 "purity.m"
                    MR_Word check_hlds__purity__Inner_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 2)));
#line 973 "purity.m"
                    MR_Word check_hlds__purity__MaybeOutputVars_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 3)));
#line 973 "purity.m"
                    MR_Word check_hlds__purity__MainGoal0_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 4)));
#line 973 "purity.m"
                    MR_Word check_hlds__purity__OrElseGoals0_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 5)));
#line 973 "purity.m"
                    MR_Word check_hlds__purity__OrElseInners_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_164, (MR_Integer) 6)));
#line 973 "purity.m"
                    MR_Word check_hlds__purity__MainGoal1_181;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__OrElseGoals1_182;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__MainGoal_185;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__OrElseGoals_186;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__ShortHand_187;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__STATE_VARIABLE_Info_208_208;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__STATE_VARIABLE_Info_209_209;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__RunPostTypecheck_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 1)));
#line 973 "purity.m"
                    MR_Word check_hlds__purity__Purity1_333;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__ContainsTrace1_334;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__Purity2_335;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__ContainsTrace2_336;
#line 973 "purity.m"
                    MR_Word check_hlds__purity__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 3)));
#line 973 "purity.m"
                    MR_Word check_hlds__purity__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 4)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 0)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 2)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 5)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 6)));
#line 974 "purity.m"
                    MR_Word check_hlds__purity__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_192, (MR_Integer) 7)));

#line 1006 "purity.m"
#line 1006 "purity.m"
                    switch (check_hlds__purity__RunPostTypecheck_329) {
#line 1006 "purity.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1006 "purity.m"
                      case (MR_Integer) 1:
#line 1007 "purity.m"
                        {
#line 1008 "purity.m"
                          check_hlds__purity__MainGoal1_181 = check_hlds__purity__MainGoal0_169;
#line 1009 "purity.m"
                          check_hlds__purity__OrElseGoals1_182 = check_hlds__purity__OrElseGoals0_170;
#line 1007 "purity.m"
                          check_hlds__purity__STATE_VARIABLE_Info_208_208 = check_hlds__purity__STATE_VARIABLE_Info_0_192;
#line 1007 "purity.m"
                        }
#line 1006 "purity.m"
                        break;
#line 1006 "purity.m"
                      case (MR_Integer) 0:
#line 976 "purity.m"
                        {
#line 976 "purity.m"
                          MR_Word check_hlds__purity__TypeCtorInfo_504_504;
#line 976 "purity.m"
                          MR_Word check_hlds__purity__OuterDI_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_166, (MR_Integer) 0)));
#line 976 "purity.m"
                          MR_Word check_hlds__purity__OuterUO_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_166, (MR_Integer) 1)));
#line 976 "purity.m"
                          MR_Word check_hlds__purity__OuterDITypeSpecs_175;
#line 976 "purity.m"
                          MR_Word check_hlds__purity__OuterUOTypeSpecs_177;
#line 976 "purity.m"
                          MR_Word check_hlds__purity__OuterTypeSpecs_178;
#line 976 "purity.m"
                          MR_Word check_hlds__purity__Context_323;
#line 981 "purity.m"
                          MR_Word check_hlds__purity___OuterDIType_174;
#line 983 "purity.m"
                          MR_Word check_hlds__purity___OuterUOType_176;

#line 980 "purity.m"
                          {
#line 980 "purity.m"
                            check_hlds__purity__Context_323 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
                          }
#line 981 "purity.m"
                          {
#line 981 "purity.m"
                            check_hlds__purity__check_outer_var_type_6_p_0(check_hlds__purity__Context_323, check_hlds__purity__V_472_472, check_hlds__purity__V_473_473, check_hlds__purity__OuterDI_172, &check_hlds__purity___OuterDIType_174, &check_hlds__purity__OuterDITypeSpecs_175);
                          }
#line 983 "purity.m"
                          {
#line 983 "purity.m"
                            check_hlds__purity__check_outer_var_type_6_p_0(check_hlds__purity__Context_323, check_hlds__purity__V_472_472, check_hlds__purity__V_473_473, check_hlds__purity__OuterUO_173, &check_hlds__purity___OuterUOType_176, &check_hlds__purity__OuterUOTypeSpecs_177);
                          }
#line 9442 "check_hlds.purity.c"
                          check_hlds__purity__TypeCtorInfo_504_504 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 985 "purity.m"
                          {
#line 985 "purity.m"
                            check_hlds__purity__OuterTypeSpecs_178 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_504_504, check_hlds__purity__OuterDITypeSpecs_175, check_hlds__purity__OuterUOTypeSpecs_177);
                          }
#line 991 "purity.m"
                          if ((check_hlds__purity__OuterTypeSpecs_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "purity.m"
                            {
#line 992 "purity.m"
                              MR_Word check_hlds__purity__TypeCtorInfo_509_509 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 992 "purity.m"
                              MR_Word check_hlds__purity__AtomicGoalsAndInners_183;
#line 992 "purity.m"
                              MR_Word check_hlds__purity__AllAtomicGoals1_184;
#line 992 "purity.m"
                              MR_Word check_hlds__purity__V_198_198;
#line 992 "purity.m"
                              MR_Word check_hlds__purity__V_199_199;
#line 992 "purity.m"
                              MR_Word check_hlds__purity__V_200_200;
#line 992 "purity.m"
                              MR_Word check_hlds__purity__STATE_VARIABLE_Info_201_201;
#line 996 "purity.m"
                              MR_Box check_hlds__purity__conv3_STATE_VARIABLE_Info_201_201;
#line 1004 "purity.m"
                              MR_Word check_hlds__purity__V_491_491;
#line 1004 "purity.m"
                              MR_Word check_hlds__purity__V_492_492;
#line 1004 "purity.m"
                              MR_Word check_hlds__purity__V_493_493;
#line 1004 "purity.m"
                              MR_Word check_hlds__purity__V_494_494;
#line 1004 "purity.m"
                              MR_Word check_hlds__purity__V_495_495;
#line 1004 "purity.m"
                              MR_Word check_hlds__purity__V_496_496;
#line 1004 "purity.m"
                              MR_Word check_hlds__purity__V_498_498;
#line 1004 "purity.m"
                              MR_Word check_hlds__purity__V_497_497;

#line 994 "purity.m"
                              {
#line 994 "purity.m"
                                check_hlds__purity__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__V_198_198, 0) = ((MR_Box) (check_hlds__purity__MainGoal0_169));
#line 994 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__V_198_198, 1) = ((MR_Box) (check_hlds__purity__OrElseGoals0_170));
#line 994 "purity.m"
                              }
#line 995 "purity.m"
                              {
#line 995 "purity.m"
                                check_hlds__purity__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__V_199_199, 0) = ((MR_Box) (check_hlds__purity__Inner_167));
#line 995 "purity.m"
                                MR_hl_field(MR_mktag(1), check_hlds__purity__V_199_199, 1) = ((MR_Box) (check_hlds__purity__OrElseInners_171));
#line 995 "purity.m"
                              }
#line 993 "purity.m"
                              {
#line 993 "purity.m"
                                check_hlds__purity__AtomicGoalsAndInners_183 = mercury__assoc_list__from_corresponding_lists_2_f_0(check_hlds__purity__TypeCtorInfo_509_509, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0, check_hlds__purity__V_198_198, check_hlds__purity__V_199_199);
                              }
#line 996 "purity.m"
                              {
#line 996 "purity.m"
                                check_hlds__purity__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 996 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__V_200_200, 0) = ((MR_Box) (&check_hlds__purity_scalar_common_5[0]));
#line 996 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__V_200_200, 1) = ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_2));
#line 996 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__V_200_200, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 996 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__V_200_200, 3) = ((MR_Box) (check_hlds__purity__Outer_166));
#line 996 "purity.m"
                              }
#line 996 "purity.m"
                              {
#line 996 "purity.m"
                                mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__purity_scalar_common_1[0], check_hlds__purity__TypeCtorInfo_509_509, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, check_hlds__purity__V_200_200, check_hlds__purity__AtomicGoalsAndInners_183, &check_hlds__purity__AllAtomicGoals1_184, ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Info_0_192)), &check_hlds__purity__conv3_STATE_VARIABLE_Info_201_201);
                              }
#line 996 "purity.m"
                              check_hlds__purity__STATE_VARIABLE_Info_201_201 = ((MR_Word) check_hlds__purity__conv3_STATE_VARIABLE_Info_201_201);
#line 1000 "purity.m"
                              if ((check_hlds__purity__AllAtomicGoals1_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "purity.m"
                                {
#line 1002 "purity.m"
                                  {
#line 1002 "purity.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "AllAtomicGoals1 = []");
#line 1002 "purity.m"
                                    return;
                                  }
#line 1001 "purity.m"
                                }
#line 1000 "purity.m"
                              else
#line 999 "purity.m"
                                {
#line 999 "purity.m"
                                  check_hlds__purity__MainGoal1_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__AllAtomicGoals1_184, (MR_Integer) 0)));
#line 999 "purity.m"
                                  check_hlds__purity__OrElseGoals1_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__AllAtomicGoals1_184, (MR_Integer) 1)));
#line 999 "purity.m"
                                }
#line 1004 "purity.m"
                              check_hlds__purity__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 0)));
#line 1004 "purity.m"
                              check_hlds__purity__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 1)));
#line 1004 "purity.m"
                              check_hlds__purity__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 2)));
#line 1004 "purity.m"
                              check_hlds__purity__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 3)));
#line 1004 "purity.m"
                              check_hlds__purity__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 4)));
#line 1004 "purity.m"
                              check_hlds__purity__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 5)));
#line 1004 "purity.m"
                              check_hlds__purity__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 6)));
#line 1004 "purity.m"
                              check_hlds__purity__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_201_201, (MR_Integer) 7)));
#line 1004 "purity.m"
                              {
#line 1004 "purity.m"
                                check_hlds__purity__STATE_VARIABLE_Info_208_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 0) = ((MR_Box) (check_hlds__purity__V_491_491));
#line 1004 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 1) = ((MR_Box) (check_hlds__purity__V_492_492));
#line 1004 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 2) = ((MR_Box) (check_hlds__purity__V_493_493));
#line 1004 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 3) = ((MR_Box) (check_hlds__purity__V_494_494));
#line 1004 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 4) = ((MR_Box) (check_hlds__purity__V_495_495));
#line 1004 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 5) = ((MR_Box) (check_hlds__purity__V_496_496));
#line 1004 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 6) = ((MR_Box) ((MR_Integer) 0));
#line 1004 "purity.m"
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_208_208, 7) = ((MR_Box) (check_hlds__purity__V_498_498));
#line 1004 "purity.m"
                              }
#line 992 "purity.m"
                            }
#line 991 "purity.m"
                          else
#line 987 "purity.m"
                            {
#line 988 "purity.m"
                              MR_Box check_hlds__purity__conv5_STATE_VARIABLE_Info_208_208;

#line 988 "purity.m"
                              {
#line 988 "purity.m"
                                mercury__list__foldl_4_p_0(check_hlds__purity__TypeCtorInfo_504_504, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, (MR_Word) &check_hlds__purity_scalar_common_1[3], check_hlds__purity__OuterTypeSpecs_178, ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Info_0_192)), &check_hlds__purity__conv5_STATE_VARIABLE_Info_208_208);
                              }
#line 988 "purity.m"
                              check_hlds__purity__STATE_VARIABLE_Info_208_208 = ((MR_Word) check_hlds__purity__conv5_STATE_VARIABLE_Info_208_208);
#line 989 "purity.m"
                              check_hlds__purity__MainGoal1_181 = check_hlds__purity__MainGoal0_169;
#line 990 "purity.m"
                              check_hlds__purity__OrElseGoals1_182 = check_hlds__purity__OrElseGoals0_170;
#line 987 "purity.m"
                            }
#line 976 "purity.m"
                        }
#line 1006 "purity.m"
                        break;
#line 1006 "purity.m"
                    }
#line 1011 "purity.m"
                    {
#line 1011 "purity.m"
                      check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__MainGoal1_181, &check_hlds__purity__MainGoal_185, &check_hlds__purity__Purity1_333, &check_hlds__purity__ContainsTrace1_334, check_hlds__purity__STATE_VARIABLE_Info_208_208, &check_hlds__purity__STATE_VARIABLE_Info_209_209);
                    }
#line 1013 "purity.m"
                    {
#line 1013 "purity.m"
                      check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__OrElseGoals1_182, &check_hlds__purity__OrElseGoals_186, (MR_Integer) 0, &check_hlds__purity__Purity2_335, (MR_Integer) 1, &check_hlds__purity__ContainsTrace2_336, check_hlds__purity__STATE_VARIABLE_Info_209_209, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 1016 "purity.m"
                    {
#line 1016 "purity.m"
                      *check_hlds__purity__Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity1_333, check_hlds__purity__Purity2_335);
                    }
#line 1018 "purity.m"
                    check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace1_334 == (MR_Integer) 0);
#line 1019 "purity.m"
                    if (!(check_hlds__purity__succeeded))
#line 1019 "purity.m"
                      check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace2_336 == (MR_Integer) 0);
#line 1023 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 1022 "purity.m"
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
#line 1023 "purity.m"
                    else
#line 1024 "purity.m"
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
#line 1026 "purity.m"
                    {
#line 1026 "purity.m"
                      check_hlds__purity__ShortHand_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 0) = ((MR_Box) (check_hlds__purity__GoalType_165));
#line 1026 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 1) = ((MR_Box) (check_hlds__purity__Outer_166));
#line 1026 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 2) = ((MR_Box) (check_hlds__purity__Inner_167));
#line 1026 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 3) = ((MR_Box) (check_hlds__purity__MaybeOutputVars_168));
#line 1026 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 4) = ((MR_Box) (check_hlds__purity__MainGoal_185));
#line 1026 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 5) = ((MR_Box) (check_hlds__purity__OrElseGoals_186));
#line 1026 "purity.m"
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_187, 6) = ((MR_Box) (check_hlds__purity__OrElseInners_171));
#line 1026 "purity.m"
                    }
#line 1028 "purity.m"
                    {
#line 1028 "purity.m"
                      MR_Word base;
#line 1028 "purity.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "purity.m"
                      *check_hlds__purity__GoalExpr_9 = base;
#line 1028 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1028 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ShortHand_187));
#line 1028 "purity.m"
                    }
#line 973 "purity.m"
                  }
#line 1029 "purity.m"
                  break;
#line 1029 "purity.m"
                case (MR_Integer) 2:
#line 1030 "purity.m"
                  {
#line 1030 "purity.m"
                    MR_Word check_hlds__purity__MaybeIO_188 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_164, (MR_Integer) 0)));
#line 1030 "purity.m"
                    MR_Word check_hlds__purity__ResultVar_189 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_164, (MR_Integer) 1)));
#line 1030 "purity.m"
                    MR_Word check_hlds__purity__SubGoal0_337 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_164, (MR_Integer) 2)));
#line 1031 "purity.m"
                    MR_Word check_hlds__purity__ShortHand_339;
#line 1031 "purity.m"
                    MR_Word * check_hlds__purity__AddrSubGoal_521;

#line 1033 "purity.m"
                    {
#line 1033 "purity.m"
                      check_hlds__purity__ShortHand_339 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "purity.m"
                      MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_339, 0) = ((MR_Box) (check_hlds__purity__MaybeIO_188));
#line 1033 "purity.m"
                      MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_339, 1) = ((MR_Box) (check_hlds__purity__ResultVar_189));
#line 1033 "purity.m"
                      MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_339, 2) = NULL;
#line 1033 "purity.m"
                    }
#line 1033 "purity.m"
                    check_hlds__purity__AddrSubGoal_521 = (MR_Word *) &(MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_339, (MR_Integer) 2));
#line 1034 "purity.m"
                    {
#line 1034 "purity.m"
                      MR_Word base;
#line 1034 "purity.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "purity.m"
                      *check_hlds__purity__GoalExpr_9 = base;
#line 1034 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1034 "purity.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ShortHand_339));
#line 1034 "purity.m"
                    }
#line 1031 "purity.m"
                    {
#line 1031 "purity.m"
                      check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(check_hlds__purity__SubGoal0_337, check_hlds__purity__AddrSubGoal_521, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_192, check_hlds__purity__STATE_VARIABLE_Info_193);
                    }
#line 1030 "purity.m"
                  }
#line 1029 "purity.m"
                  break;
#line 1029 "purity.m"
              }
#line 970 "purity.m"
            }
#line 673 "purity.m"
            break;
#line 673 "purity.m"
        }
#line 673 "purity.m"
        break;
#line 673 "purity.m"
    }
#line 673 "purity.m"
  }
#line 666 "purity.m"
}

#line 640 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
#line 640 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 640 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 640 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 640 "purity.m"
{
#line 644 "purity.m"
  {
#line 644 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 644 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "purity.m"
      {
#line 644 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 644 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 644 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 644 "purity.m"
      }
#line 644 "purity.m"
    else
#line 646 "purity.m"
      {
#line 646 "purity.m"
        MR_Word check_hlds__purity__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 646 "purity.m"
        MR_Word check_hlds__purity__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 646 "purity.m"
        MR_Word check_hlds__purity__Goal_20;
#line 646 "purity.m"
        MR_Word check_hlds__purity__GoalPurity_25;
#line 646 "purity.m"
        MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 646 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 646 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_38_38;
#line 646 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_39_39;
#line 646 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;
#line 661 "purity.m"
        MR_Word * check_hlds__purity__AddrGoals_89;

#line 647 "purity.m"
        {
#line 647 "purity.m"
          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_18, &check_hlds__purity__Goal_20, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
        }
#line 652 "purity.m"
#line 652 "purity.m"
        switch (check_hlds__purity__GoalPurity_25) {
#line 652 "purity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 652 "purity.m"
          case (MR_Integer) 2:
#line 653 "purity.m"
            {
#line 653 "purity.m"
              MR_Word check_hlds__purity__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 1)));
#line 653 "purity.m"
              MR_Word check_hlds__purity__Context_29;
#line 653 "purity.m"
              MR_Word check_hlds__purity__Spec_30;
#line 653 "purity.m"
              MR_String check_hlds__purity__PurityName_47;
#line 653 "purity.m"
              MR_Word check_hlds__purity__Pieces_48;
#line 653 "purity.m"
              MR_Word check_hlds__purity__Msg_49;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_52_52;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_53_53;
#line 653 "purity.m"
              MR_String check_hlds__purity__V_54_54;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_60_60;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_61_61;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_65_65;
#line 653 "purity.m"
              MR_Word check_hlds__purity__Msgs0_71;
#line 653 "purity.m"
              MR_Word check_hlds__purity__Msgs_72;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_74_74;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_75_75;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_76_76;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_77_77;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_78_78;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_79_79;
#line 653 "purity.m"
              MR_Word check_hlds__purity__V_80_80;
#line 654 "purity.m"
              MR_Word check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 0)));

#line 655 "purity.m"
              {
#line 655 "purity.m"
                check_hlds__purity__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_28);
              }
#line 1556 "purity.m"
              {
#line 1556 "purity.m"
                parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__GoalPurity_25, &check_hlds__purity__PurityName_47);
              }
#line 1558 "purity.m"
              {
#line 1558 "purity.m"
                check_hlds__purity__V_54_54 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_47, (MR_String) ",");
              }
#line 1558 "purity.m"
              {
#line 1558 "purity.m"
                check_hlds__purity__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "purity.m"
                MR_hl_field(MR_mktag(2), check_hlds__purity__V_53_53, 0) = ((MR_Box) (check_hlds__purity__V_54_54));
#line 1558 "purity.m"
              }
#line 1558 "purity.m"
              {
#line 1558 "purity.m"
                check_hlds__purity__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 0) = ((MR_Box) (check_hlds__purity__V_53_53));
#line 1558 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[29])));
#line 1558 "purity.m"
              }
#line 1557 "purity.m"
              {
#line 1557 "purity.m"
                check_hlds__purity__Pieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[27])));
#line 1557 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_48, 1) = ((MR_Box) (check_hlds__purity__V_52_52));
#line 1557 "purity.m"
              }
#line 1560 "purity.m"
              {
#line 1560 "purity.m"
                check_hlds__purity__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__V_61_61, 0) = ((MR_Box) (check_hlds__purity__Pieces_48));
#line 1560 "purity.m"
              }
#line 1560 "purity.m"
              {
#line 1560 "purity.m"
                check_hlds__purity__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 0) = ((MR_Box) (check_hlds__purity__V_61_61));
#line 1560 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1560 "purity.m"
              }
#line 1560 "purity.m"
              {
#line 1560 "purity.m"
                check_hlds__purity__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 0) = ((MR_Box) (check_hlds__purity__Context_29));
#line 1560 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 1) = ((MR_Box) (check_hlds__purity__V_60_60));
#line 1560 "purity.m"
              }
#line 1561 "purity.m"
              {
#line 1561 "purity.m"
                check_hlds__purity__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 0) = ((MR_Box) (check_hlds__purity__Msg_49));
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "purity.m"
              }
#line 1561 "purity.m"
              {
#line 1561 "purity.m"
                check_hlds__purity__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1561 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 2) = ((MR_Box) (check_hlds__purity__V_65_65));
#line 1561 "purity.m"
              }
#line 1609 "purity.m"
              check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
#line 1609 "purity.m"
              check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
#line 1609 "purity.m"
              check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
#line 1609 "purity.m"
              check_hlds__purity__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
#line 1609 "purity.m"
              check_hlds__purity__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
#line 1609 "purity.m"
              check_hlds__purity__Msgs0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
#line 1609 "purity.m"
              check_hlds__purity__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 6)));
#line 1609 "purity.m"
              check_hlds__purity__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, (MR_Integer) 7)));
#line 1610 "purity.m"
              {
#line 1610 "purity.m"
                check_hlds__purity__Msgs_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 0) = ((MR_Box) (check_hlds__purity__Spec_30));
#line 1610 "purity.m"
                MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_72, 1) = ((MR_Box) (check_hlds__purity__Msgs0_71));
#line 1610 "purity.m"
              }
#line 1611 "purity.m"
              {
#line 1611 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (check_hlds__purity__V_76_76));
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (check_hlds__purity__V_77_77));
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (check_hlds__purity__V_78_78));
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (check_hlds__purity__Msgs_72));
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) (check_hlds__purity__V_79_79));
#line 1611 "purity.m"
                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_38_38, 7) = ((MR_Box) (check_hlds__purity__V_80_80));
#line 1611 "purity.m"
              }
#line 653 "purity.m"
            }
#line 652 "purity.m"
            break;
#line 652 "purity.m"
          case (MR_Integer) 0:
#line 649 "purity.m"
            check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 652 "purity.m"
            break;
#line 652 "purity.m"
          case (MR_Integer) 1:
#line 650 "purity.m"
            check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 652 "purity.m"
            break;
#line 652 "purity.m"
        }
#line 659 "purity.m"
        {
#line 659 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_39_39 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
        }
#line 660 "purity.m"
        {
#line 660 "purity.m"
          check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
        }
#line 645 "purity.m"
        {
#line 645 "purity.m"
          MR_Word base;
#line 645 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 645 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Goal_20));
#line 645 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 645 "purity.m"
        }
#line 645 "purity.m"
        check_hlds__purity__AddrGoals_89 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__purity__HeadVar__2_2, (MR_Integer) 1));
#line 661 "purity.m"
        {
#line 661 "purity.m"
          check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(check_hlds__purity__Goals0_19, check_hlds__purity__AddrGoals_89, check_hlds__purity__STATE_VARIABLE_Purity_39_39, check_hlds__purity__STATE_VARIABLE_Purity_4, check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40, check_hlds__purity__STATE_VARIABLE_ContainsTrace_6, check_hlds__purity__STATE_VARIABLE_Info_38_38, check_hlds__purity__STATE_VARIABLE_Info_8);
        }
#line 646 "purity.m"
      }
#line 644 "purity.m"
  }
#line 640 "purity.m"
}

#line 611 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
#line 611 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
#line 611 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
#line 611 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
#line 611 "purity.m"
{
#line 615 "purity.m"
  {
#line 615 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 615 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "purity.m"
      {
#line 615 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
#line 615 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
#line 615 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
#line 615 "purity.m"
      }
#line 615 "purity.m"
    else
#line 617 "purity.m"
      {
#line 617 "purity.m"
        MR_Word check_hlds__purity__HeadGoal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 617 "purity.m"
        MR_Word check_hlds__purity__TailGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 617 "purity.m"
        MR_Word check_hlds__purity__HeadGoal_24;
#line 617 "purity.m"
        MR_Word check_hlds__purity__GoalPurity_25;
#line 617 "purity.m"
        MR_Word check_hlds__purity__GoalContainsTrace_26;
#line 617 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_34_34;
#line 617 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_35_35;
#line 617 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36;
#line 622 "purity.m"
        MR_Word * check_hlds__purity__AddrTailGoals_40;

#line 618 "purity.m"
        {
#line 618 "purity.m"
          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__HeadGoal0_18, &check_hlds__purity__HeadGoal_24, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_34_34);
        }
#line 620 "purity.m"
        {
#line 620 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
        }
#line 621 "purity.m"
        {
#line 621 "purity.m"
          check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
        }
#line 624 "purity.m"
        {
#line 624 "purity.m"
          MR_Word base;
#line 624 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 624 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__HeadGoal_24));
#line 624 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 624 "purity.m"
        }
#line 624 "purity.m"
        check_hlds__purity__AddrTailGoals_40 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__purity__HeadVar__2_2, (MR_Integer) 1));
#line 622 "purity.m"
        {
#line 622 "purity.m"
          check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(check_hlds__purity__TailGoals0_19, check_hlds__purity__AddrTailGoals_40, check_hlds__purity__STATE_VARIABLE_Purity_35_35, check_hlds__purity__STATE_VARIABLE_Purity_4, check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36, check_hlds__purity__STATE_VARIABLE_ContainsTrace_6, check_hlds__purity__STATE_VARIABLE_Info_34_34, check_hlds__purity__STATE_VARIABLE_Info_8);
        }
#line 617 "purity.m"
      }
#line 615 "purity.m"
  }
#line 611 "purity.m"
}

#line 594 "purity.m"
static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
#line 594 "purity.m"
  MR_Word check_hlds__purity__Purity_5,
#line 594 "purity.m"
  MR_Word check_hlds__purity__ContainsTrace_6,
#line 594 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8,
#line 594 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_GoalInfo_9)
#line 594 "purity.m"
{
#line 597 "purity.m"
  {
#line 597 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 597 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10;

#line 598 "purity.m"
    {
#line 598 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__Purity_5, check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10);
    }
#line 602 "purity.m"
#line 602 "purity.m"
    switch (check_hlds__purity__ContainsTrace_6) {
#line 602 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 602 "purity.m"
      case (MR_Integer) 1:
#line 603 "purity.m"
        {
#line 604 "purity.m"
          {
#line 604 "purity.m"
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10, check_hlds__purity__STATE_VARIABLE_GoalInfo_9);
          }
#line 603 "purity.m"
        }
#line 602 "purity.m"
        break;
#line 602 "purity.m"
      case (MR_Integer) 0:
#line 600 "purity.m"
        {
#line 601 "purity.m"
          {
#line 601 "purity.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10, check_hlds__purity__STATE_VARIABLE_GoalInfo_9);
          }
#line 600 "purity.m"
        }
#line 602 "purity.m"
        break;
#line 602 "purity.m"
    }
#line 597 "purity.m"
  }
#line 594 "purity.m"
}

#line 584 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
#line 584 "purity.m"
  MR_Word check_hlds__purity__Goal0_7,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__Goal_8,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__Purity_9,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__ContainsTrace_10,
#line 584 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
#line 584 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17)
#line 584 "purity.m"
{
#line 587 "purity.m"
  {
#line 587 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 587 "purity.m"
    MR_Word check_hlds__purity__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
#line 587 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
#line 587 "purity.m"
    MR_Word check_hlds__purity__GoalExpr_14;
#line 587 "purity.m"
    MR_Word check_hlds__purity__GoalInfo_15;
#line 587 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24;

#line 589 "purity.m"
    {
#line 589 "purity.m"
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_12, &check_hlds__purity__GoalExpr_14, check_hlds__purity__GoalInfo0_13, check_hlds__purity__Purity_9, check_hlds__purity__ContainsTrace_10, check_hlds__purity__STATE_VARIABLE_Info_0_16, check_hlds__purity__STATE_VARIABLE_Info_17);
    }
#line 598 "purity.m"
    {
#line 598 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_9, check_hlds__purity__GoalInfo0_13, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24);
    }
#line 602 "purity.m"
#line 602 "purity.m"
    switch (*check_hlds__purity__ContainsTrace_10) {
#line 602 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 602 "purity.m"
      case (MR_Integer) 1:
#line 603 "purity.m"
        {
#line 604 "purity.m"
          {
#line 604 "purity.m"
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
#line 603 "purity.m"
        }
#line 602 "purity.m"
        break;
#line 602 "purity.m"
      case (MR_Integer) 0:
#line 600 "purity.m"
        {
#line 601 "purity.m"
          {
#line 601 "purity.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
#line 600 "purity.m"
        }
#line 602 "purity.m"
        break;
#line 602 "purity.m"
    }
#line 592 "purity.m"
    {
#line 592 "purity.m"
      MR_Word base;
#line 592 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 592 "purity.m"
      *check_hlds__purity__Goal_8 = base;
#line 592 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_14));
#line 592 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_15));
#line 592 "purity.m"
    }
#line 587 "purity.m"
  }
#line 584 "purity.m"
}

#line 568 "purity.m"
static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
#line 568 "purity.m"
  MR_Word check_hlds__purity__Clause_3,
#line 568 "purity.m"
  MR_Word check_hlds__purity__AllProcIds_4)
#line 568 "purity.m"
{
#line 570 "purity.m"
  {
#line 570 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 570 "purity.m"
    MR_Word check_hlds__purity__ApplicableProcIds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 0)));
#line 571 "purity.m"
    MR_Word check_hlds__purity__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 1)));
#line 571 "purity.m"
    MR_Word check_hlds__purity__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 2)));
#line 571 "purity.m"
    MR_Word check_hlds__purity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 3)));
#line 571 "purity.m"
    MR_Word check_hlds__purity__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 4)));

#line 574 "purity.m"
    if ((check_hlds__purity__ApplicableProcIds_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "purity.m"
      check_hlds__purity__succeeded = MR_TRUE;
#line 574 "purity.m"
    else
#line 575 "purity.m"
      {
#line 575 "purity.m"
        MR_Word check_hlds__purity__ClauseProcIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ApplicableProcIds_5, (MR_Integer) 0)));
#line 575 "purity.m"
        MR_Word check_hlds__purity__SortedClauseProcIds_7;

#line 578 "purity.m"
        {
#line 578 "purity.m"
          mercury__list__sort_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__purity__ClauseProcIds_6, &check_hlds__purity__SortedClauseProcIds_7);
        }
#line 579 "purity.m"
        {
#line 579 "purity.m"
          check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__purity_scalar_common_2[3], ((MR_Box) (check_hlds__purity__SortedClauseProcIds_7)), ((MR_Box) (check_hlds__purity__AllProcIds_4)));
        }
#line 575 "purity.m"
      }
#line 570 "purity.m"
    return check_hlds__purity__succeeded;
#line 570 "purity.m"
  }
#line 568 "purity.m"
}

#line 510 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
#line 510 "purity.m"
  MR_Word check_hlds__purity__Clause0_7,
#line 510 "purity.m"
  MR_Word * check_hlds__purity__Clause_8,
#line 510 "purity.m"
  MR_Word check_hlds__purity__PredInfo_9,
#line 510 "purity.m"
  MR_Word * check_hlds__purity__Purity_10,
#line 510 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_35,
#line 510 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_36)
#line 510 "purity.m"
{
#line 513 "purity.m"
  {
#line 513 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 513 "purity.m"
    MR_Word check_hlds__purity__Goal0_12;
#line 513 "purity.m"
    MR_Word check_hlds__purity__GoalExpr0_13;
#line 513 "purity.m"
    MR_Word check_hlds__purity__GoalInfo0_14;
#line 513 "purity.m"
    MR_Word check_hlds__purity__GoalExpr1_15;
#line 513 "purity.m"
    MR_Word check_hlds__purity__BodyPurity0_16;
#line 513 "purity.m"
    MR_Word check_hlds__purity__ClausePurity_21;
#line 513 "purity.m"
    MR_Word check_hlds__purity__GoalInfo1_22;
#line 513 "purity.m"
    MR_Word check_hlds__purity__Goal1_23;
#line 513 "purity.m"
    MR_Word check_hlds__purity__NeedToRequantify_24;
#line 513 "purity.m"
    MR_Word check_hlds__purity__Goal_31;
#line 513 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
#line 513 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_Info_39_39;
#line 516 "purity.m"
    MR_Word check_hlds__purity__V_44_44;
#line 516 "purity.m"
    MR_Word check_hlds__purity__V_45_45;
#line 516 "purity.m"
    MR_Word check_hlds__purity__V_46_46;
#line 516 "purity.m"
    MR_Word check_hlds__purity__V_47_47;
#line 516 "purity.m"
    MR_Word check_hlds__purity__V_48_48;
#line 516 "purity.m"
    MR_Word check_hlds__purity__V_49_49;
#line 516 "purity.m"
    MR_Word check_hlds__purity__V_51_51;
#line 516 "purity.m"
    MR_Word check_hlds__purity__V_50_50;
#line 517 "purity.m"
    MR_Word check_hlds__purity__V_17_17;
#line 546 "purity.m"
    MR_Word check_hlds__purity__V_52_52;
#line 546 "purity.m"
    MR_Word check_hlds__purity__V_53_53;
#line 546 "purity.m"
    MR_Word check_hlds__purity__V_54_54;
#line 546 "purity.m"
    MR_Word check_hlds__purity__V_55_55;
#line 546 "purity.m"
    MR_Word check_hlds__purity__V_56_56;
#line 546 "purity.m"
    MR_Word check_hlds__purity__V_57_57;
#line 546 "purity.m"
    MR_Word check_hlds__purity__V_58_58;
#line 566 "purity.m"
    MR_Word check_hlds__purity__V_89_89;
#line 566 "purity.m"
    MR_Word check_hlds__purity__V_91_91;
#line 566 "purity.m"
    MR_Word check_hlds__purity__V_92_92;
#line 566 "purity.m"
    MR_Word check_hlds__purity__V_93_93;
#line 566 "purity.m"
    MR_Word check_hlds__purity__V_90_90;

#line 514 "purity.m"
    {
#line 514 "purity.m"
      check_hlds__purity__Goal0_12 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__purity__Clause0_7);
    }
#line 515 "purity.m"
    check_hlds__purity__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_12, (MR_Integer) 0)));
#line 515 "purity.m"
    check_hlds__purity__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_12, (MR_Integer) 1)));
#line 516 "purity.m"
    check_hlds__purity__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
#line 516 "purity.m"
    check_hlds__purity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 516 "purity.m"
    check_hlds__purity__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 516 "purity.m"
    check_hlds__purity__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 516 "purity.m"
    check_hlds__purity__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 516 "purity.m"
    check_hlds__purity__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 516 "purity.m"
    check_hlds__purity__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 516 "purity.m"
    check_hlds__purity__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 516 "purity.m"
    {
#line 516 "purity.m"
      check_hlds__purity__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 516 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (check_hlds__purity__V_44_44));
#line 516 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (check_hlds__purity__V_45_45));
#line 516 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (check_hlds__purity__V_46_46));
#line 516 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (check_hlds__purity__V_47_47));
#line 516 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (check_hlds__purity__V_48_48));
#line 516 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (check_hlds__purity__V_49_49));
#line 516 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) ((MR_Integer) 1));
#line 516 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 7) = ((MR_Box) (check_hlds__purity__V_51_51));
#line 516 "purity.m"
    }
#line 517 "purity.m"
    {
#line 517 "purity.m"
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_13, &check_hlds__purity__GoalExpr1_15, check_hlds__purity__GoalInfo0_14, &check_hlds__purity__BodyPurity0_16, &check_hlds__purity__V_17_17, check_hlds__purity__STATE_VARIABLE_Info_37_37, &check_hlds__purity__STATE_VARIABLE_Info_39_39);
    }
#line 529 "purity.m"
    {
#line 529 "purity.m"
      MR_Word check_hlds__purity__ProcIds_18;

#line 529 "purity.m"
      {
#line 529 "purity.m"
        check_hlds__purity__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__purity__PredInfo_9);
      }
#line 530 "purity.m"
      {
#line 530 "purity.m"
        check_hlds__purity__succeeded = check_hlds__purity__applies_to_all_modes_2_p_0(check_hlds__purity__Clause0_7, check_hlds__purity__ProcIds_18);
      }
#line 529 "purity.m"
    }
#line 531 "purity.m"
    if (!(check_hlds__purity__succeeded))
#line 531 "purity.m"
      {
#line 532 "purity.m"
        {
#line 532 "purity.m"
          MR_Word check_hlds__purity__Markers_19;

#line 532 "purity.m"
          {
#line 532 "purity.m"
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__Markers_19);
          }
#line 533 "purity.m"
          {
#line 533 "purity.m"
            check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_19, (MR_Integer) 16);
          }
#line 532 "purity.m"
        }
#line 531 "purity.m"
        if (!(check_hlds__purity__succeeded))
#line 535 "purity.m"
          {
#line 535 "purity.m"
            MR_Word check_hlds__purity__GoalType_20;

#line 535 "purity.m"
            {
#line 535 "purity.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__GoalType_20);
            }
#line 536 "purity.m"
            check_hlds__purity__succeeded = (check_hlds__purity__GoalType_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 535 "purity.m"
          }
#line 531 "purity.m"
      }
#line 540 "purity.m"
    if (check_hlds__purity__succeeded)
#line 539 "purity.m"
      check_hlds__purity__ClausePurity_21 = (MR_Integer) 0;
#line 540 "purity.m"
    else
#line 541 "purity.m"
      check_hlds__purity__ClausePurity_21 = (MR_Integer) 2;
#line 543 "purity.m"
    {
#line 543 "purity.m"
      *check_hlds__purity__Purity_10 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__BodyPurity0_16, check_hlds__purity__ClausePurity_21);
    }
#line 544 "purity.m"
    {
#line 544 "purity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_10, check_hlds__purity__GoalInfo0_14, &check_hlds__purity__GoalInfo1_22);
    }
#line 545 "purity.m"
    {
#line 545 "purity.m"
      check_hlds__purity__Goal1_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 545 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_23, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_15));
#line 545 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_23, 1) = ((MR_Box) (check_hlds__purity__GoalInfo1_22));
#line 545 "purity.m"
    }
#line 546 "purity.m"
    check_hlds__purity__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 546 "purity.m"
    check_hlds__purity__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 546 "purity.m"
    check_hlds__purity__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 546 "purity.m"
    check_hlds__purity__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 546 "purity.m"
    check_hlds__purity__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 546 "purity.m"
    check_hlds__purity__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 546 "purity.m"
    check_hlds__purity__NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 546 "purity.m"
    check_hlds__purity__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 562 "purity.m"
#line 562 "purity.m"
    switch (check_hlds__purity__NeedToRequantify_24) {
#line 562 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 562 "purity.m"
      case (MR_Integer) 1:
#line 563 "purity.m"
        {
#line 564 "purity.m"
          check_hlds__purity__Goal_31 = check_hlds__purity__Goal1_23;
#line 563 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_Info_36 = check_hlds__purity__STATE_VARIABLE_Info_39_39;
#line 563 "purity.m"
        }
#line 562 "purity.m"
        break;
#line 562 "purity.m"
      case (MR_Integer) 0:
#line 548 "purity.m"
        {
#line 548 "purity.m"
          MR_Word check_hlds__purity__ClausesInfo_25;
#line 548 "purity.m"
          MR_Word check_hlds__purity__HeadVars_26;
#line 548 "purity.m"
          MR_Word check_hlds__purity__VarTypes1_27;
#line 548 "purity.m"
          MR_Word check_hlds__purity__VarSet1_28;
#line 548 "purity.m"
          MR_Word check_hlds__purity__EmptyRttiVarmaps_29;
#line 548 "purity.m"
          MR_Word check_hlds__purity__VarSet_32;
#line 548 "purity.m"
          MR_Word check_hlds__purity__VarTypes_33;
#line 548 "purity.m"
          MR_Word check_hlds__purity__V_73_73;
#line 548 "purity.m"
          MR_Word check_hlds__purity__V_74_74;
#line 548 "purity.m"
          MR_Word check_hlds__purity__V_75_75;
#line 548 "purity.m"
          MR_Word check_hlds__purity__V_78_78;
#line 548 "purity.m"
          MR_Word check_hlds__purity__V_79_79;
#line 548 "purity.m"
          MR_Word check_hlds__purity__V_80_80;
#line 551 "purity.m"
          MR_Word check_hlds__purity__V_59_59;
#line 551 "purity.m"
          MR_Word check_hlds__purity__V_60_60;
#line 551 "purity.m"
          MR_Word check_hlds__purity__V_61_61;
#line 551 "purity.m"
          MR_Word check_hlds__purity__V_63_63;
#line 551 "purity.m"
          MR_Word check_hlds__purity__V_64_64;
#line 551 "purity.m"
          MR_Word check_hlds__purity__V_65_65;
#line 556 "purity.m"
          MR_Word check_hlds__purity___Warnings_30;
#line 556 "purity.m"
          MR_Word check_hlds__purity__V_34_34;
#line 560 "purity.m"
          MR_Word check_hlds__purity__V_76_76;
#line 560 "purity.m"
          MR_Word check_hlds__purity__V_77_77;

#line 549 "purity.m"
          {
#line 549 "purity.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__ClausesInfo_25);
          }
#line 550 "purity.m"
          {
#line 550 "purity.m"
            hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__purity__ClausesInfo_25, &check_hlds__purity__HeadVars_26);
          }
#line 551 "purity.m"
          check_hlds__purity__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 551 "purity.m"
          check_hlds__purity__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 551 "purity.m"
          check_hlds__purity__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 551 "purity.m"
          check_hlds__purity__VarTypes1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 551 "purity.m"
          check_hlds__purity__VarSet1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 551 "purity.m"
          check_hlds__purity__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 551 "purity.m"
          check_hlds__purity__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 551 "purity.m"
          check_hlds__purity__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 555 "purity.m"
          {
#line 555 "purity.m"
            hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__purity__EmptyRttiVarmaps_29);
          }
#line 556 "purity.m"
          {
#line 556 "purity.m"
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__purity__HeadVars_26, &check_hlds__purity___Warnings_30, check_hlds__purity__Goal1_23, &check_hlds__purity__Goal_31, check_hlds__purity__VarSet1_28, &check_hlds__purity__VarSet_32, check_hlds__purity__VarTypes1_27, &check_hlds__purity__VarTypes_33, check_hlds__purity__EmptyRttiVarmaps_29, &check_hlds__purity__V_34_34);
          }
#line 560 "purity.m"
          check_hlds__purity__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 560 "purity.m"
          check_hlds__purity__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 560 "purity.m"
          check_hlds__purity__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 560 "purity.m"
          check_hlds__purity__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 560 "purity.m"
          check_hlds__purity__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 560 "purity.m"
          check_hlds__purity__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 560 "purity.m"
          check_hlds__purity__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 560 "purity.m"
          check_hlds__purity__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 561 "purity.m"
          {
#line 561 "purity.m"
            MR_Word base;
#line 561 "purity.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 561 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Info_36 = base;
#line 561 "purity.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_73_73));
#line 561 "purity.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__V_74_74));
#line 561 "purity.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_75_75));
#line 561 "purity.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__VarTypes_33));
#line 561 "purity.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__VarSet_32));
#line 561 "purity.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__V_78_78));
#line 561 "purity.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__V_79_79));
#line 561 "purity.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__V_80_80));
#line 561 "purity.m"
          }
#line 548 "purity.m"
        }
#line 562 "purity.m"
        break;
#line 562 "purity.m"
    }
#line 566 "purity.m"
    check_hlds__purity__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 0)));
#line 566 "purity.m"
    check_hlds__purity__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 1)));
#line 566 "purity.m"
    check_hlds__purity__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 2)));
#line 566 "purity.m"
    check_hlds__purity__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 3)));
#line 566 "purity.m"
    check_hlds__purity__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 4)));
#line 566 "purity.m"
    {
#line 566 "purity.m"
      MR_Word base;
#line 566 "purity.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 566 "purity.m"
      *check_hlds__purity__Clause_8 = base;
#line 566 "purity.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__V_89_89));
#line 566 "purity.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__Goal_31));
#line 566 "purity.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__V_91_91));
#line 566 "purity.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__V_92_92));
#line 566 "purity.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__V_93_93));
#line 566 "purity.m"
    }
#line 513 "purity.m"
  }
#line 510 "purity.m"
}

#line 497 "purity.m"
static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
#line 497 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__HeadVar__2_2,
#line 497 "purity.m"
  MR_Word check_hlds__purity__PredInfo_3,
#line 497 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
#line 497 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
#line 497 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7)
#line 497 "purity.m"
{
#line 501 "purity.m"
  {
#line 501 "purity.m"
    MR_bool check_hlds__purity__succeeded;

#line 501 "purity.m"
    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 501 "purity.m"
      {
#line 501 "purity.m"
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Info_7 = check_hlds__purity__STATE_VARIABLE_Info_0_6;
#line 501 "purity.m"
        *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
#line 501 "purity.m"
      }
#line 501 "purity.m"
    else
#line 503 "purity.m"
      {
#line 503 "purity.m"
        MR_Word check_hlds__purity__Clause0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 503 "purity.m"
        MR_Word check_hlds__purity__Clauses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 503 "purity.m"
        MR_Word check_hlds__purity__Clause_17;
#line 503 "purity.m"
        MR_Word check_hlds__purity__ClausePurity_22;
#line 503 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_27_27;
#line 503 "purity.m"
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_28_28;
#line 506 "purity.m"
        MR_Word * check_hlds__purity__AddrClauses_31;

#line 504 "purity.m"
        {
#line 504 "purity.m"
          check_hlds__purity__compute_purity_for_clause_6_p_0(check_hlds__purity__Clause0_15, &check_hlds__purity__Clause_17, check_hlds__purity__PredInfo_3, &check_hlds__purity__ClausePurity_22, check_hlds__purity__STATE_VARIABLE_Info_0_6, &check_hlds__purity__STATE_VARIABLE_Info_27_27);
        }
#line 505 "purity.m"
        {
#line 505 "purity.m"
          check_hlds__purity__STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__STATE_VARIABLE_Purity_0_4, check_hlds__purity__ClausePurity_22);
        }
#line 502 "purity.m"
        {
#line 502 "purity.m"
          MR_Word base;
#line 502 "purity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "purity.m"
          *check_hlds__purity__HeadVar__2_2 = base;
#line 502 "purity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Clause_17));
#line 502 "purity.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 502 "purity.m"
        }
#line 502 "purity.m"
        check_hlds__purity__AddrClauses_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__purity__HeadVar__2_2, (MR_Integer) 1));
#line 506 "purity.m"
        {
#line 506 "purity.m"
          check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(check_hlds__purity__Clauses0_16, check_hlds__purity__AddrClauses_31, check_hlds__purity__PredInfo_3, check_hlds__purity__STATE_VARIABLE_Purity_28_28, check_hlds__purity__STATE_VARIABLE_Purity_5, check_hlds__purity__STATE_VARIABLE_Info_27_27, check_hlds__purity__STATE_VARIABLE_Info_7);
        }
#line 503 "purity.m"
      }
#line 501 "purity.m"
  }
#line 497 "purity.m"
}

#line 336 "purity.m"
static MR_Word MR_CALL 
check_hlds__purity__workaround_gcc_bug_1_f_0(
#line 336 "purity.m"
  MR_Word check_hlds__purity__X_3)
#line 336 "purity.m"
{
#line 339 "purity.m"
  {
#line 339 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 339 "purity.m"
    MR_Word check_hlds__purity__X_2 = check_hlds__purity__X_3;

#line 339 "purity.m"
    return check_hlds__purity__X_2;
#line 339 "purity.m"
  }
#line 336 "purity.m"
}

#line 280 "purity.m"
static void MR_CALL 
check_hlds__purity__puritycheck_pred_6_p_0(
#line 280 "purity.m"
  MR_Word check_hlds__purity__PredId_7,
#line 280 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_35,
#line 280 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_36,
#line 280 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_9,
#line 280 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_37,
#line 280 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_38)
#line 280 "purity.m"
{
#line 283 "purity.m"
  {
#line 283 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 283 "purity.m"
    MR_Word check_hlds__purity__DeclPurity_11;
#line 283 "purity.m"
    MR_Word check_hlds__purity__PromisedPurity_12;
#line 283 "purity.m"
    MR_Word check_hlds__purity__Clauses0_14;
#line 283 "purity.m"
    MR_Word check_hlds__purity__ItemNumbers_15;
#line 283 "purity.m"
    MR_Word check_hlds__purity__VarTypes0_16;
#line 283 "purity.m"
    MR_Word check_hlds__purity__VarSet0_17;
#line 283 "purity.m"
    MR_Word check_hlds__purity__PurityInfo0_18;
#line 283 "purity.m"
    MR_Word check_hlds__purity__Clauses_19;
#line 283 "purity.m"
    MR_Word check_hlds__purity__PurityInfo_21;
#line 283 "purity.m"
    MR_Word check_hlds__purity__VarTypes_24;
#line 283 "purity.m"
    MR_Word check_hlds__purity__VarSet_25;
#line 283 "purity.m"
    MR_Word check_hlds__purity__GoalSpecs_26;
#line 283 "purity.m"
    MR_Word check_hlds__purity__ClausesRep_29;
#line 283 "purity.m"
    MR_Word check_hlds__purity__WorstPurity_30;
#line 283 "purity.m"
    MR_Word check_hlds__purity__PurityCheckResult0_31;
#line 283 "purity.m"
    MR_Word check_hlds__purity__PurityCheckResult_32;
#line 283 "purity.m"
    MR_Word check_hlds__purity__PredSpecs_34;
#line 283 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_39_39;
#line 283 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40;
#line 283 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_46_46;
#line 283 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_47_47;
#line 283 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_48_48;
#line 283 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_49_49;
#line 296 "purity.m"
    MR_Word check_hlds__purity__V_22_22;
#line 296 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 296 "purity.m"
    MR_Word check_hlds__purity__V_27_27;
#line 296 "purity.m"
    MR_Word check_hlds__purity__V_28_28;

#line 284 "purity.m"
    {
#line 284 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, &check_hlds__purity__DeclPurity_11);
    }
#line 285 "purity.m"
    {
#line 285 "purity.m"
      hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, &check_hlds__purity__PromisedPurity_12);
    }
#line 287 "purity.m"
    {
#line 287 "purity.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_39_39);
    }
#line 288 "purity.m"
    {
#line 288 "purity.m"
      hlds__hlds_clauses__clauses_info_clauses_4_p_0(&check_hlds__purity__Clauses0_14, &check_hlds__purity__ItemNumbers_15, check_hlds__purity__STATE_VARIABLE_ClausesInfo_39_39, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40);
    }
#line 289 "purity.m"
    {
#line 289 "purity.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__purity__VarTypes0_16);
    }
#line 290 "purity.m"
    {
#line 290 "purity.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__purity__VarSet0_17);
    }
#line 291 "purity.m"
    {
#line 291 "purity.m"
      check_hlds__purity__PurityInfo0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 291 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 0) = ((MR_Box) (check_hlds__purity__ModuleInfo_9));
#line 291 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 291 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 2) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_PredInfo_0_35));
#line 291 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 3) = ((MR_Box) (check_hlds__purity__VarTypes0_16));
#line 291 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 4) = ((MR_Box) (check_hlds__purity__VarSet0_17));
#line 291 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 6) = ((MR_Box) ((MR_Integer) 1));
#line 291 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_18, 7) = ((MR_Box) ((MR_Integer) 0));
#line 291 "purity.m"
    }
#line 294 "purity.m"
    {
#line 294 "purity.m"
      check_hlds__purity__compute_purity_for_clauses_7_p_0(check_hlds__purity__Clauses0_14, &check_hlds__purity__Clauses_19, check_hlds__purity__STATE_VARIABLE_PredInfo_0_35, (MR_Integer) 0, &check_hlds__purity__WorstPurity_30, check_hlds__purity__PurityInfo0_18, &check_hlds__purity__PurityInfo_21);
    }
#line 296 "purity.m"
    check_hlds__purity__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 0)));
#line 296 "purity.m"
    check_hlds__purity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 1)));
#line 296 "purity.m"
    check_hlds__purity__STATE_VARIABLE_PredInfo_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 2)));
#line 296 "purity.m"
    check_hlds__purity__VarTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 3)));
#line 296 "purity.m"
    check_hlds__purity__VarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 4)));
#line 296 "purity.m"
    check_hlds__purity__GoalSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 5)));
#line 296 "purity.m"
    check_hlds__purity__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 6)));
#line 296 "purity.m"
    check_hlds__purity__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_21, (MR_Integer) 7)));
#line 298 "purity.m"
    {
#line 298 "purity.m"
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__purity__VarTypes_24, check_hlds__purity__STATE_VARIABLE_ClausesInfo_40_40, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_47_47);
    }
#line 299 "purity.m"
    {
#line 299 "purity.m"
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__purity__VarSet_25, check_hlds__purity__STATE_VARIABLE_ClausesInfo_47_47, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_48_48);
    }
#line 300 "purity.m"
    {
#line 300 "purity.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__purity__Clauses_19, &check_hlds__purity__ClausesRep_29);
    }
#line 301 "purity.m"
    {
#line 301 "purity.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__purity__ClausesRep_29, check_hlds__purity__ItemNumbers_15, check_hlds__purity__STATE_VARIABLE_ClausesInfo_48_48, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_49_49);
    }
#line 302 "purity.m"
    {
#line 302 "purity.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_49_49, check_hlds__purity__STATE_VARIABLE_PredInfo_46_46, check_hlds__purity__STATE_VARIABLE_PredInfo_36);
    }
#line 356 "purity.m"
    check_hlds__purity__succeeded = (check_hlds__purity__PromisedPurity_12 == (MR_Integer) 2);
#line 356 "purity.m"
    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 356 "purity.m"
    if (check_hlds__purity__succeeded)
#line 356 "purity.m"
      {
#line 357 "purity.m"
        check_hlds__purity__succeeded = (check_hlds__purity__DeclPurity_11 == check_hlds__purity__PromisedPurity_12);
#line 357 "purity.m"
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 356 "purity.m"
      }
#line 360 "purity.m"
    if (check_hlds__purity__succeeded)
#line 359 "purity.m"
      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 2;
#line 360 "purity.m"
    else
#line 375 "purity.m"
      {
#line 364 "purity.m"
        MR_Word check_hlds__purity__Origin_61;

#line 364 "purity.m"
        check_hlds__purity__succeeded = (check_hlds__purity__PromisedPurity_12 == (MR_Integer) 2);
#line 364 "purity.m"
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 364 "purity.m"
        if (check_hlds__purity__succeeded)
#line 364 "purity.m"
          {
#line 365 "purity.m"
            check_hlds__purity__succeeded = (check_hlds__purity__WorstPurity_30 == check_hlds__purity__PromisedPurity_12);
#line 364 "purity.m"
            if (check_hlds__purity__succeeded)
#line 364 "purity.m"
              {
#line 366 "purity.m"
                {
#line 366 "purity.m"
                  check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36);
                }
#line 366 "purity.m"
                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 364 "purity.m"
                if (check_hlds__purity__succeeded)
#line 364 "purity.m"
                  {
#line 367 "purity.m"
                    {
#line 367 "purity.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36, &check_hlds__purity__Origin_61);
                    }
#line 370 "purity.m"
                    if (((MR_tag((MR_Word) check_hlds__purity__Origin_61)) == (MR_mktag((MR_Integer) 2))))
#line 369 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 370 "purity.m"
                    else
#line 370 "purity.m"
                    if (((((MR_tag((MR_Word) check_hlds__purity__Origin_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Origin_61, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 371 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 370 "purity.m"
                    else
#line 370 "purity.m"
                      check_hlds__purity__succeeded = MR_FALSE;
#line 368 "purity.m"
                    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
#line 364 "purity.m"
                  }
#line 364 "purity.m"
              }
#line 364 "purity.m"
          }
#line 375 "purity.m"
        if (check_hlds__purity__succeeded)
#line 374 "purity.m"
          check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 3;
#line 375 "purity.m"
        else
#line 380 "purity.m"
          {
#line 377 "purity.m"
            check_hlds__purity__succeeded = (check_hlds__purity__WorstPurity_30 == check_hlds__purity__DeclPurity_11);
#line 380 "purity.m"
            if (check_hlds__purity__succeeded)
#line 379 "purity.m"
              check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 0;
#line 380 "purity.m"
            else
#line 392 "purity.m"
              {
#line 381 "purity.m"
                {
#line 381 "purity.m"
                  check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__WorstPurity_30, check_hlds__purity__DeclPurity_11);
                }
#line 392 "purity.m"
                if (check_hlds__purity__succeeded)
#line 386 "purity.m"
#line 386 "purity.m"
                  switch (check_hlds__purity__PromisedPurity_12) {
#line 386 "purity.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 386 "purity.m"
                    case (MR_Integer) 2:
#line 385 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 1;
#line 386 "purity.m"
                      break;
#line 386 "purity.m"
                    case (MR_Integer) 0:
#line 386 "purity.m"
                    case (MR_Integer) 1:
#line 390 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 0;
#line 386 "purity.m"
                      break;
#line 386 "purity.m"
                  }
#line 392 "purity.m"
                else
#line 414 "purity.m"
                  {
#line 404 "purity.m"
                    MR_Word check_hlds__purity__Markers_66;
#line 404 "purity.m"
                    MR_Word check_hlds__purity__GoalType_67;

#line 404 "purity.m"
                    {
#line 404 "purity.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36, &check_hlds__purity__Markers_66);
                    }
#line 405 "purity.m"
                    {
#line 405 "purity.m"
                      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(*check_hlds__purity__STATE_VARIABLE_PredInfo_36, &check_hlds__purity__GoalType_67);
                    }
#line 407 "purity.m"
                    if ((check_hlds__purity__GoalType_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 407 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 407 "purity.m"
                    else
#line 407 "purity.m"
                    if ((check_hlds__purity__GoalType_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 406 "purity.m"
                      check_hlds__purity__succeeded = MR_TRUE;
#line 407 "purity.m"
                    else
#line 407 "purity.m"
                      check_hlds__purity__succeeded = MR_FALSE;
#line 407 "purity.m"
                    if (!(check_hlds__purity__succeeded))
#line 407 "purity.m"
                      {
#line 410 "purity.m"
                        {
#line 410 "purity.m"
                          check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_66, (MR_Integer) 0);
                        }
#line 407 "purity.m"
                        if (!(check_hlds__purity__succeeded))
#line 407 "purity.m"
                          {
#line 409 "purity.m"
                            {
#line 409 "purity.m"
                              check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_66, (MR_Integer) 10);
                            }
#line 407 "purity.m"
                            if (!(check_hlds__purity__succeeded))
#line 408 "purity.m"
                              {
#line 408 "purity.m"
                                {
#line 408 "purity.m"
                                  check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_66, (MR_Integer) 9);
                                }
#line 408 "purity.m"
                              }
#line 407 "purity.m"
                          }
#line 407 "purity.m"
                      }
#line 414 "purity.m"
                    if (check_hlds__purity__succeeded)
#line 413 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 0;
#line 414 "purity.m"
                    else
#line 415 "purity.m"
                      check_hlds__purity__PurityCheckResult0_31 = (MR_Integer) 4;
#line 414 "purity.m"
                  }
#line 392 "purity.m"
              }
#line 380 "purity.m"
          }
#line 375 "purity.m"
      }
#line 310 "purity.m"
    {
#line 310 "purity.m"
      check_hlds__purity__PurityCheckResult_32 = check_hlds__purity__workaround_gcc_bug_1_f_0(check_hlds__purity__PurityCheckResult0_31);
    }
#line 316 "purity.m"
#line 316 "purity.m"
    switch (check_hlds__purity__PurityCheckResult_32) {
#line 316 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 316 "purity.m"
      case (MR_Integer) 2:
#line 312 "purity.m"
        {
#line 312 "purity.m"
          MR_Word check_hlds__purity__Spec_33;

#line 313 "purity.m"
          {
#line 313 "purity.m"
            check_hlds__purity__Spec_33 = check_hlds__purity__error_inconsistent_promise_4_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__DeclPurity_11);
          }
#line 315 "purity.m"
          {
#line 315 "purity.m"
            check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_33));
#line 315 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 315 "purity.m"
          }
#line 312 "purity.m"
        }
#line 316 "purity.m"
        break;
#line 316 "purity.m"
      case (MR_Integer) 1:
#line 322 "purity.m"
        {
#line 322 "purity.m"
          MR_Word check_hlds__purity__Spec_53;

#line 323 "purity.m"
          {
#line 323 "purity.m"
            check_hlds__purity__Spec_53 = check_hlds__purity__error_inferred_impure_4_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__WorstPurity_30);
          }
#line 324 "purity.m"
          {
#line 324 "purity.m"
            check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_53));
#line 324 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 324 "purity.m"
          }
#line 322 "purity.m"
        }
#line 316 "purity.m"
        break;
#line 316 "purity.m"
      case (MR_Integer) 0:
#line 332 "purity.m"
        check_hlds__purity__PredSpecs_34 = check_hlds__purity__GoalSpecs_26;
#line 316 "purity.m"
        break;
#line 316 "purity.m"
      case (MR_Integer) 4:
#line 317 "purity.m"
        {
#line 317 "purity.m"
          MR_Word check_hlds__purity__Spec_52;

#line 318 "purity.m"
          {
#line 318 "purity.m"
            check_hlds__purity__Spec_52 = check_hlds__purity__warn_exaggerated_impurity_decl_5_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__DeclPurity_11, check_hlds__purity__WorstPurity_30);
          }
#line 320 "purity.m"
          {
#line 320 "purity.m"
            check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_52));
#line 320 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 320 "purity.m"
          }
#line 317 "purity.m"
        }
#line 316 "purity.m"
        break;
#line 316 "purity.m"
      case (MR_Integer) 3:
#line 326 "purity.m"
        {
#line 326 "purity.m"
          MR_Word check_hlds__purity__Spec_54;

#line 327 "purity.m"
          {
#line 327 "purity.m"
            check_hlds__purity__Spec_54 = check_hlds__purity__warn_unnecessary_promise_pure_4_f_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__STATE_VARIABLE_PredInfo_36, check_hlds__purity__PredId_7, check_hlds__purity__PromisedPurity_12);
          }
#line 329 "purity.m"
          {
#line 329 "purity.m"
            check_hlds__purity__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 0) = ((MR_Box) (check_hlds__purity__Spec_54));
#line 329 "purity.m"
            MR_hl_field(MR_mktag(1), check_hlds__purity__PredSpecs_34, 1) = ((MR_Box) (check_hlds__purity__GoalSpecs_26));
#line 329 "purity.m"
          }
#line 326 "purity.m"
        }
#line 316 "purity.m"
        break;
#line 316 "purity.m"
    }
#line 334 "purity.m"
    {
#line 334 "purity.m"
      *check_hlds__purity__STATE_VARIABLE_Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__PredSpecs_34, check_hlds__purity__STATE_VARIABLE_Specs_0_37);
    }
#line 283 "purity.m"
  }
#line 280 "purity.m"
}

#line 225 "purity.m"
static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
#line 225 "purity.m"
  MR_Word check_hlds__purity__HeadVar__1_1,
#line 225 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2,
#line 225 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_3,
#line 225 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_4,
#line 225 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_5)
#line 225 "purity.m"
{
#line 229 "purity.m"
  while (MR_TRUE)
#line 229 "purity.m"
    {
#line 229 "purity.m"
      /* tailcall optimized into a loop */
#line 229 "purity.m"
      {
#line 229 "purity.m"
        MR_bool check_hlds__purity__succeeded;

#line 229 "purity.m"
        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "purity.m"
          {
#line 229 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_Specs_5 = check_hlds__purity__STATE_VARIABLE_Specs_0_4;
#line 229 "purity.m"
            *check_hlds__purity__STATE_VARIABLE_ModuleInfo_3 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2;
#line 229 "purity.m"
          }
#line 229 "purity.m"
        else
#line 230 "purity.m"
          {
#line 230 "purity.m"
            MR_Word check_hlds__purity__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
#line 230 "purity.m"
            MR_Word check_hlds__purity__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
#line 230 "purity.m"
            MR_Word check_hlds__purity__PredInfo0_16;
#line 230 "purity.m"
            MR_Word check_hlds__purity__PredInfo_17;
#line 230 "purity.m"
            MR_Word check_hlds__purity__GoalType_19;
#line 230 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 230 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 230 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30;
#line 230 "purity.m"
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_31_31;

#line 231 "purity.m"
            {
#line 231 "purity.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__purity__PredId_12, &check_hlds__purity__PredInfo0_16);
            }
#line 233 "purity.m"
            {
#line 233 "purity.m"
              check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__purity__PredInfo0_16);
            }
#line 234 "purity.m"
            if (!(check_hlds__purity__succeeded))
#line 234 "purity.m"
              {
#line 234 "purity.m"
                check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__purity__PredInfo0_16);
              }
#line 238 "purity.m"
            if (check_hlds__purity__succeeded)
#line 237 "purity.m"
              {
#line 237 "purity.m"
                check_hlds__purity__PredInfo_17 = check_hlds__purity__PredInfo0_16;
#line 237 "purity.m"
                check_hlds__purity__STATE_VARIABLE_Specs_28_28 = check_hlds__purity__STATE_VARIABLE_Specs_0_4;
#line 237 "purity.m"
                check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2;
#line 237 "purity.m"
              }
#line 238 "purity.m"
            else
#line 242 "purity.m"
              {
#line 240 "purity.m"
                {
#line 240 "purity.m"
                  hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Purity-checking ", check_hlds__purity__PredId_12, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2);
                }
#line 243 "purity.m"
                {
#line 243 "purity.m"
                  check_hlds__purity__puritycheck_pred_6_p_0(check_hlds__purity__PredId_12, check_hlds__purity__PredInfo0_16, &check_hlds__purity__PredInfo_17, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__purity__STATE_VARIABLE_Specs_0_4, &check_hlds__purity__STATE_VARIABLE_Specs_28_28);
                }
#line 244 "purity.m"
                {
#line 244 "purity.m"
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__purity__PredId_12, check_hlds__purity__PredInfo_17, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29);
                }
#line 242 "purity.m"
              }
#line 248 "purity.m"
            {
#line 248 "purity.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__purity__PredInfo_17, &check_hlds__purity__GoalType_19);
            }
#line 252 "purity.m"
#line 252 "purity.m"
            switch (MR_tag((MR_Word) check_hlds__purity__GoalType_19)) {
#line 252 "purity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 252 "purity.m"
              case (MR_Integer) 0:
#line 252 "purity.m"
#line 252 "purity.m"
                switch (MR_unmkbody(check_hlds__purity__GoalType_19)) {
#line 252 "purity.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 252 "purity.m"
                  case (MR_Integer) 0:
#line 253 "purity.m"
                    {
#line 253 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 253 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 253 "purity.m"
                    }
#line 252 "purity.m"
                    break;
#line 252 "purity.m"
                  case (MR_Integer) 1:
#line 254 "purity.m"
                    {
#line 254 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 254 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 254 "purity.m"
                    }
#line 252 "purity.m"
                    break;
#line 252 "purity.m"
                  case (MR_Integer) 2:
#line 255 "purity.m"
                    {
#line 255 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 255 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 255 "purity.m"
                    }
#line 252 "purity.m"
                    break;
#line 252 "purity.m"
                  case (MR_Integer) 3:
#line 256 "purity.m"
                    {
#line 256 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
#line 256 "purity.m"
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
#line 256 "purity.m"
                    }
#line 252 "purity.m"
                    break;
#line 252 "purity.m"
                }
#line 252 "purity.m"
                break;
#line 252 "purity.m"
              case (MR_Integer) 1:
#line 250 "purity.m"
                {
#line 250 "purity.m"
                  MR_Word check_hlds__purity__PromiseType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalType_19, (MR_Integer) 0)));

#line 251 "purity.m"
                  {
#line 251 "purity.m"
                    check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0(check_hlds__purity__PromiseType_20, check_hlds__purity__PredId_12, check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30, check_hlds__purity__STATE_VARIABLE_Specs_28_28, &check_hlds__purity__STATE_VARIABLE_Specs_31_31);
                  }
#line 250 "purity.m"
                }
#line 252 "purity.m"
                break;
#line 252 "purity.m"
            }
#line 259 "purity.m"
            /* direct tailcall eliminated */
#line 259 "purity.m"
            {
#line 259 "purity.m"
              MR_Word check_hlds__purity__HeadVar__1__tmp_copy_1 = check_hlds__purity__PredIds_13;
#line 259 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30;
#line 259 "purity.m"
              MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__purity__STATE_VARIABLE_Specs_31_31;

#line 259 "purity.m"
              check_hlds__purity__STATE_VARIABLE_Specs_0_4 = check_hlds__purity__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 259 "purity.m"
              check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 259 "purity.m"
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__HeadVar__1__tmp_copy_1;
#line 259 "purity.m"
            }
#line 259 "purity.m"
            continue;
#line 230 "purity.m"
          }
#line 229 "purity.m"
      }
#line 229 "purity.m"
      break;
#line 229 "purity.m"
    }
#line 225 "purity.m"
}

#line 162 "purity.m"
MR_Word MR_CALL 
check_hlds__purity__impure_unification_expr_error_2_f_0(
#line 162 "purity.m"
  MR_Word check_hlds__purity__Context_4,
#line 162 "purity.m"
  MR_Word check_hlds__purity__Purity_5)
#line 162 "purity.m"
{
#line 1545 "purity.m"
  {
#line 1545 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 1545 "purity.m"
    MR_Word check_hlds__purity__Spec_6;
#line 1545 "purity.m"
    MR_String check_hlds__purity__PurityName_7;
#line 1545 "purity.m"
    MR_Word check_hlds__purity__Pieces_8;
#line 1545 "purity.m"
    MR_Word check_hlds__purity__Msg_9;
#line 1545 "purity.m"
    MR_Word check_hlds__purity__V_12_12;
#line 1545 "purity.m"
    MR_Word check_hlds__purity__V_15_15;
#line 1545 "purity.m"
    MR_Word check_hlds__purity__V_16_16;
#line 1545 "purity.m"
    MR_String check_hlds__purity__V_17_17;
#line 1545 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 1545 "purity.m"
    MR_Word check_hlds__purity__V_24_24;
#line 1545 "purity.m"
    MR_Word check_hlds__purity__V_28_28;

#line 1546 "purity.m"
    {
#line 1546 "purity.m"
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_5, &check_hlds__purity__PurityName_7);
    }
#line 1548 "purity.m"
    {
#line 1548 "purity.m"
      check_hlds__purity__V_17_17 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_7, (MR_String) ",");
    }
#line 1548 "purity.m"
    {
#line 1548 "purity.m"
      check_hlds__purity__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "purity.m"
      MR_hl_field(MR_mktag(2), check_hlds__purity__V_16_16, 0) = ((MR_Box) (check_hlds__purity__V_17_17));
#line 1548 "purity.m"
    }
#line 1548 "purity.m"
    {
#line 1548 "purity.m"
      check_hlds__purity__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_15_15, 0) = ((MR_Box) (check_hlds__purity__V_16_16));
#line 1548 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[26])));
#line 1548 "purity.m"
    }
#line 1548 "purity.m"
    {
#line 1548 "purity.m"
      check_hlds__purity__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[24])));
#line 1548 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_12_12, 1) = ((MR_Box) (check_hlds__purity__V_15_15));
#line 1548 "purity.m"
    }
#line 1547 "purity.m"
    {
#line 1547 "purity.m"
      check_hlds__purity__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1547 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[23])));
#line 1547 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_8, 1) = ((MR_Box) (check_hlds__purity__V_12_12));
#line 1547 "purity.m"
    }
#line 1550 "purity.m"
    {
#line 1550 "purity.m"
      check_hlds__purity__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__V_24_24, 0) = ((MR_Box) (check_hlds__purity__Pieces_8));
#line 1550 "purity.m"
    }
#line 1550 "purity.m"
    {
#line 1550 "purity.m"
      check_hlds__purity__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 0) = ((MR_Box) (check_hlds__purity__V_24_24));
#line 1550 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1550 "purity.m"
    }
#line 1550 "purity.m"
    {
#line 1550 "purity.m"
      check_hlds__purity__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_9, 0) = ((MR_Box) (check_hlds__purity__Context_4));
#line 1550 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_9, 1) = ((MR_Box) (check_hlds__purity__V_23_23));
#line 1550 "purity.m"
    }
#line 1551 "purity.m"
    {
#line 1551 "purity.m"
      check_hlds__purity__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 0) = ((MR_Box) (check_hlds__purity__Msg_9));
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(1), check_hlds__purity__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1551 "purity.m"
    }
#line 1551 "purity.m"
    {
#line 1551 "purity.m"
      check_hlds__purity__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1551 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 2) = ((MR_Box) (check_hlds__purity__V_28_28));
#line 1551 "purity.m"
    }
#line 1545 "purity.m"
    return check_hlds__purity__Spec_6;
#line 1545 "purity.m"
  }
#line 162 "purity.m"
}

#line 156 "purity.m"
void MR_CALL 
check_hlds__purity__repuritycheck_proc_4_p_0(
#line 156 "purity.m"
  MR_Word check_hlds__purity__ModuleInfo_5,
#line 156 "purity.m"
  MR_Word check_hlds__purity__HeadVar__2_2,
#line 156 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_36,
#line 156 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_37)
#line 156 "purity.m"
{
#line 420 "purity.m"
  {
#line 420 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 420 "purity.m"
    MR_Word check_hlds__purity__TypeCtorInfo_64_64;
#line 420 "purity.m"
    MR_Integer check_hlds__purity__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
#line 420 "purity.m"
    MR_Word check_hlds__purity__Procs0_9;
#line 420 "purity.m"
    MR_Word check_hlds__purity__ProcInfo0_10;
#line 420 "purity.m"
    MR_Word check_hlds__purity__Goal0_11;
#line 420 "purity.m"
    MR_Word check_hlds__purity__VarTypes0_12;
#line 420 "purity.m"
    MR_Word check_hlds__purity__VarSet0_13;
#line 420 "purity.m"
    MR_Word check_hlds__purity__PurityInfo0_14;
#line 420 "purity.m"
    MR_Word check_hlds__purity__Goal_15;
#line 420 "purity.m"
    MR_Word check_hlds__purity__Bodypurity_16;
#line 420 "purity.m"
    MR_Word check_hlds__purity__PurityInfo_18;
#line 420 "purity.m"
    MR_Word check_hlds__purity__VarTypes_21;
#line 420 "purity.m"
    MR_Word check_hlds__purity__VarSet_22;
#line 420 "purity.m"
    MR_Word check_hlds__purity__NeedToRequantify_24;
#line 420 "purity.m"
    MR_Word check_hlds__purity__ProcInfo1_26;
#line 420 "purity.m"
    MR_Word check_hlds__purity__ProcInfo2_27;
#line 420 "purity.m"
    MR_Word check_hlds__purity__ProcInfo3_28;
#line 420 "purity.m"
    MR_Word check_hlds__purity__ProcInfo_29;
#line 420 "purity.m"
    MR_Word check_hlds__purity__Procs_30;
#line 420 "purity.m"
    MR_Word check_hlds__purity__OldPurity_31;
#line 420 "purity.m"
    MR_Word check_hlds__purity__Markers0_32;
#line 420 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_42_42;
#line 420 "purity.m"
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_44_44;
#line 420 "purity.m"
    MR_Word check_hlds__purity___PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
#line 422 "purity.m"
    MR_Box check_hlds__purity__conv0_ProcInfo0_10;
#line 429 "purity.m"
    MR_Word check_hlds__purity__V_17_17;
#line 430 "purity.m"
    MR_Word check_hlds__purity__V_19_19;
#line 430 "purity.m"
    MR_Word check_hlds__purity__V_20_20;
#line 430 "purity.m"
    MR_Word check_hlds__purity__V_23_23;
#line 430 "purity.m"
    MR_Word check_hlds__purity__V_25_25;

#line 421 "purity.m"
    {
#line 421 "purity.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_36, &check_hlds__purity__Procs0_9);
    }
#line 11901 "check_hlds.purity.c"
    check_hlds__purity__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 422 "purity.m"
    {
#line 422 "purity.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__purity__TypeCtorInfo_64_64, check_hlds__purity__Procs0_9, check_hlds__purity__ProcId_7, &check_hlds__purity__conv0_ProcInfo0_10);
    }
#line 422 "purity.m"
    check_hlds__purity__ProcInfo0_10 = ((MR_Word) check_hlds__purity__conv0_ProcInfo0_10);
#line 423 "purity.m"
    {
#line 423 "purity.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__Goal0_11);
    }
#line 424 "purity.m"
    {
#line 424 "purity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__VarTypes0_12);
    }
#line 425 "purity.m"
    {
#line 425 "purity.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__VarSet0_13);
    }
#line 426 "purity.m"
    {
#line 426 "purity.m"
      check_hlds__purity__PurityInfo0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 426 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 0) = ((MR_Box) (check_hlds__purity__ModuleInfo_5));
#line 426 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 1) = ((MR_Box) ((MR_Integer) 1));
#line 426 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 2) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_PredInfo_0_36));
#line 426 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 3) = ((MR_Box) (check_hlds__purity__VarTypes0_12));
#line 426 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 4) = ((MR_Box) (check_hlds__purity__VarSet0_13));
#line 426 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 6) = ((MR_Box) ((MR_Integer) 1));
#line 426 "purity.m"
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 7) = ((MR_Box) ((MR_Integer) 0));
#line 426 "purity.m"
    }
#line 429 "purity.m"
    {
#line 429 "purity.m"
      check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal0_11, &check_hlds__purity__Goal_15, &check_hlds__purity__Bodypurity_16, &check_hlds__purity__V_17_17, check_hlds__purity__PurityInfo0_14, &check_hlds__purity__PurityInfo_18);
    }
#line 430 "purity.m"
    check_hlds__purity__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 0)));
#line 430 "purity.m"
    check_hlds__purity__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 1)));
#line 430 "purity.m"
    check_hlds__purity__STATE_VARIABLE_PredInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 2)));
#line 430 "purity.m"
    check_hlds__purity__VarTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 3)));
#line 430 "purity.m"
    check_hlds__purity__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 4)));
#line 430 "purity.m"
    check_hlds__purity__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 5)));
#line 430 "purity.m"
    check_hlds__purity__NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 6)));
#line 430 "purity.m"
    check_hlds__purity__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 7)));
#line 432 "purity.m"
    {
#line 432 "purity.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__purity__Goal_15, check_hlds__purity__ProcInfo0_10, &check_hlds__purity__ProcInfo1_26);
    }
#line 433 "purity.m"
    {
#line 433 "purity.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__purity__VarTypes_21, check_hlds__purity__ProcInfo1_26, &check_hlds__purity__ProcInfo2_27);
    }
#line 434 "purity.m"
    {
#line 434 "purity.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__purity__VarSet_22, check_hlds__purity__ProcInfo2_27, &check_hlds__purity__ProcInfo3_28);
    }
#line 439 "purity.m"
#line 439 "purity.m"
    switch (check_hlds__purity__NeedToRequantify_24) {
#line 439 "purity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 439 "purity.m"
      case (MR_Integer) 1:
#line 441 "purity.m"
        check_hlds__purity__ProcInfo_29 = check_hlds__purity__ProcInfo3_28;
#line 439 "purity.m"
        break;
#line 439 "purity.m"
      case (MR_Integer) 0:
#line 436 "purity.m"
        {
#line 437 "purity.m"
          {
#line 437 "purity.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__purity__ProcInfo3_28, &check_hlds__purity__ProcInfo_29);
          }
#line 436 "purity.m"
        }
#line 439 "purity.m"
        break;
#line 439 "purity.m"
    }
#line 443 "purity.m"
    {
#line 443 "purity.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__purity__TypeCtorInfo_64_64, check_hlds__purity__ProcId_7, ((MR_Box) (check_hlds__purity__ProcInfo_29)), check_hlds__purity__Procs0_9, &check_hlds__purity__Procs_30);
    }
#line 444 "purity.m"
    {
#line 444 "purity.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__purity__Procs_30, check_hlds__purity__STATE_VARIABLE_PredInfo_42_42, &check_hlds__purity__STATE_VARIABLE_PredInfo_44_44);
    }
#line 450 "purity.m"
    {
#line 450 "purity.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, &check_hlds__purity__OldPurity_31);
    }
#line 451 "purity.m"
    {
#line 451 "purity.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, &check_hlds__purity__Markers0_32);
    }
#line 453 "purity.m"
    {
#line 453 "purity.m"
      check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__Bodypurity_16, check_hlds__purity__OldPurity_31);
    }
#line 467 "purity.m"
    if (check_hlds__purity__succeeded)
#line 465 "purity.m"
      {
#line 465 "purity.m"
        MR_Word check_hlds__purity__Markers_34;

#line 459 "purity.m"
#line 459 "purity.m"
        switch (check_hlds__purity__OldPurity_31) {
#line 459 "purity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 459 "purity.m"
          case (MR_Integer) 2:
#line 464 "purity.m"
            check_hlds__purity__Markers_34 = check_hlds__purity__Markers0_32;
#line 459 "purity.m"
            break;
#line 459 "purity.m"
          case (MR_Integer) 0:
#line 456 "purity.m"
            {
#line 456 "purity.m"
              MR_Word check_hlds__purity__Markers1_33;

#line 457 "purity.m"
              {
#line 457 "purity.m"
                hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 15, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_33);
              }
#line 458 "purity.m"
              {
#line 458 "purity.m"
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 14, check_hlds__purity__Markers1_33, &check_hlds__purity__Markers_34);
              }
#line 456 "purity.m"
            }
#line 459 "purity.m"
            break;
#line 459 "purity.m"
          case (MR_Integer) 1:
#line 460 "purity.m"
            {
#line 461 "purity.m"
              {
#line 461 "purity.m"
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 15, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers_34);
              }
#line 460 "purity.m"
            }
#line 459 "purity.m"
            break;
#line 459 "purity.m"
        }
#line 466 "purity.m"
        {
#line 466 "purity.m"
          hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__purity__Markers_34, check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, check_hlds__purity__STATE_VARIABLE_PredInfo_37);
        }
#line 465 "purity.m"
      }
#line 467 "purity.m"
    else
#line 489 "purity.m"
      {
#line 468 "purity.m"
        MR_Word check_hlds__purity__TypeCtorInfo_66_66;
#line 468 "purity.m"
        MR_Word check_hlds__purity__V_49_49;
#line 468 "purity.m"
        MR_Word check_hlds__purity__V_50_50;
#line 468 "purity.m"
        MR_Word check_hlds__purity__V_65_65;
#line 468 "purity.m"
        MR_Word check_hlds__purity__V_70_70;
#line 468 "purity.m"
        MR_Integer check_hlds__purity__V_71_71;
#line 468 "purity.m"
        MR_Word check_hlds__purity__V_72_72;
#line 469 "purity.m"
        MR_Integer check_hlds__purity__V_35_35;

#line 468 "purity.m"
        {
#line 468 "purity.m"
          check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__OldPurity_31, check_hlds__purity__Bodypurity_16);
        }
#line 468 "purity.m"
        if (check_hlds__purity__succeeded)
#line 468 "purity.m"
          {
#line 469 "purity.m"
            check_hlds__purity__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "purity.m"
            {
#line 469 "purity.m"
              check_hlds__purity__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, 0) = NULL;
#line 469 "purity.m"
              MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, 1) = ((MR_Box) (check_hlds__purity__V_50_50));
#line 469 "purity.m"
            }
#line 469 "purity.m"
            {
#line 469 "purity.m"
              check_hlds__purity__V_65_65 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44);
            }
#line 12142 "check_hlds.purity.c"
            check_hlds__purity__TypeCtorInfo_66_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 469 "purity.m"
            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 469 "purity.m"
            if (check_hlds__purity__succeeded)
#line 469 "purity.m"
              {
#line 469 "purity.m"
                check_hlds__purity__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, (MR_Integer) 0)));
#line 469 "purity.m"
                check_hlds__purity__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_65_65, (MR_Integer) 1)));
#line 469 "purity.m"
                (MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, (MR_Integer) 0)) = ((MR_Box) (check_hlds__purity__V_71_71));
#line 469 "purity.m"
                check_hlds__purity__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__V_49_49, (MR_Integer) 1)));
#line 469 "purity.m"
                {
#line 469 "purity.m"
                  check_hlds__purity__succeeded = mercury__list____Unify____list_1_0(check_hlds__purity__TypeCtorInfo_66_66, check_hlds__purity__V_70_70, check_hlds__purity__V_72_72);
                }
#line 469 "purity.m"
              }
#line 468 "purity.m"
          }
#line 489 "purity.m"
        if (check_hlds__purity__succeeded)
#line 487 "purity.m"
          {
#line 487 "purity.m"
            MR_Word check_hlds__purity__Markers_60;

#line 480 "purity.m"
#line 480 "purity.m"
            switch (check_hlds__purity__Bodypurity_16) {
#line 480 "purity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 480 "purity.m"
              case (MR_Integer) 2:
#line 486 "purity.m"
                check_hlds__purity__Markers_60 = check_hlds__purity__Markers0_32;
#line 480 "purity.m"
                break;
#line 480 "purity.m"
              case (MR_Integer) 0:
#line 477 "purity.m"
                {
#line 477 "purity.m"
                  MR_Word check_hlds__purity__Markers1_56;

#line 478 "purity.m"
                  {
#line 478 "purity.m"
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 12, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_56);
                  }
#line 479 "purity.m"
                  {
#line 479 "purity.m"
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 13, check_hlds__purity__Markers1_56, &check_hlds__purity__Markers_60);
                  }
#line 477 "purity.m"
                }
#line 480 "purity.m"
                break;
#line 480 "purity.m"
              case (MR_Integer) 1:
#line 481 "purity.m"
                {
#line 481 "purity.m"
                  MR_Word check_hlds__purity__Markers1_57;

#line 482 "purity.m"
                  {
#line 482 "purity.m"
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 12, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_57);
                  }
#line 483 "purity.m"
                  {
#line 483 "purity.m"
                    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 13, check_hlds__purity__Markers1_57, &check_hlds__purity__Markers_60);
                  }
#line 481 "purity.m"
                }
#line 480 "purity.m"
                break;
#line 480 "purity.m"
            }
#line 488 "purity.m"
            {
#line 488 "purity.m"
              hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__purity__Markers_60, check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, check_hlds__purity__STATE_VARIABLE_PredInfo_37);
            }
#line 487 "purity.m"
          }
#line 489 "purity.m"
        else
#line 489 "purity.m"
          *check_hlds__purity__STATE_VARIABLE_PredInfo_37 = check_hlds__purity__STATE_VARIABLE_PredInfo_44_44;
#line 489 "purity.m"
      }
#line 420 "purity.m"
  }
#line 156 "purity.m"
}

#line 146 "purity.m"
void MR_CALL 
check_hlds__purity__puritycheck_module_4_p_0(
#line 146 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8,
#line 146 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_9,
#line 146 "purity.m"
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_10,
#line 146 "purity.m"
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_11)
#line 146 "purity.m"
{
#line 221 "purity.m"
  {
#line 221 "purity.m"
    MR_bool check_hlds__purity__succeeded;
#line 221 "purity.m"
    MR_Word check_hlds__purity__PredIds_7;

#line 222 "purity.m"
    {
#line 222 "purity.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__purity__PredIds_7);
    }
#line 223 "purity.m"
    {
#line 223 "purity.m"
      check_hlds__purity__check_preds_purity_5_p_0(check_hlds__purity__PredIds_7, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__purity__STATE_VARIABLE_ModuleInfo_9, check_hlds__purity__STATE_VARIABLE_Specs_0_10, check_hlds__purity__STATE_VARIABLE_Specs_11);
    }
#line 221 "purity.m"
  }
#line 146 "purity.m"
}

void mercury__check_hlds__purity__init(void)
{
}

void mercury__check_hlds__purity__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_check_result_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0);
}

void mercury__check_hlds__purity__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.purity. */
