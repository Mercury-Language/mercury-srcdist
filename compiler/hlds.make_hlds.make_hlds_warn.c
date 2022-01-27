/*
** Automatically generated from `make_hlds_warn.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


/* :- module hlds.make_hlds.make_hlds_warn. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_warn__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_warn.mih"


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
#include "hlds.goal_util.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 604 "make_hlds_warn.m"
struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s {
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6;
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7;
#line 607 "make_hlds_warn.m"
  MR_bool hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded;
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14;
#line 607 "make_hlds_warn.m"
  MR_String hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9;
#line 613 "make_hlds_warn.m"
  jmp_buf hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0;
#line 613 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10;
#line 613 "make_hlds_warn.m"
  MR_String hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__V_15_15;
#line 604 "make_hlds_warn.m"
};


#line 172 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 178 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_warn__pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 181 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 184 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 190 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0;

#line 196 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0;

#line 199 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1;

#line 202 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0[2];

#line 205 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0[2];

#line 208 "hlds.make_hlds.make_hlds_warn.c"
static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0[2];

#line 211 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 214 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 217 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 220 "hlds.make_hlds.make_hlds_warn.c"
static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[7];

#line 223 "hlds.make_hlds.make_hlds_warn.c"
static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0[7];

#line 226 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0;

#line 229 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[1];

#line 232 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0[1];

#line 235 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0[1];

#line 238 "hlds.make_hlds.make_hlds_warn.c"
static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0[1];

#line 241 "hlds.make_hlds.make_hlds_warn.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
#line 244 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 246 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

#line 249 "hlds.make_hlds.make_hlds_warn.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001(
#line 252 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 254 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 256 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3);

#line 259 "hlds.make_hlds.make_hlds_warn.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001(
#line 262 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 264 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

#line 267 "hlds.make_hlds.make_hlds_warn.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001(
#line 270 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 272 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 274 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3);

#line 461 "make_hlds_warn.m"
static MR_String MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__461__1_2_f_0(
#line 461 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
#line 461 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_82);

#line 170 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(
#line 170 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 170 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 170 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

#line 170 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(
#line 170 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 170 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2);

#line 444 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(
#line 444 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 444 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 444 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

#line 444 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(
#line 444 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_1,
#line 444 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2);

#line 875 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(
#line 875 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
#line 875 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_7,
#line 875 "make_hlds_warn.m"
  MR_String hlds__make_hlds__make_hlds_warn__Message_8,
#line 875 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_13,
#line 875 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_14);

#line 843 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(
#line 843 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
#line 843 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goals_7,
#line 843 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__CallUsed_8,
#line 843 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23,
#line 843 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24);

#line 828 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(
#line 828 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
#line 828 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList_6,
#line 828 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10,
#line 828 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_11);

#line 815 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(
#line 815 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
#line 815 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4);

#line 801 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(
#line 801 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
#line 801 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4);

#line 786 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1(
#line 786 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 786 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 786 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

#line 778 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(
#line 778 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
#line 778 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_6,
#line 778 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18,
#line 778 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19);

#line 644 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
#line 644 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27,
#line 644 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28);

#line 625 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
#line 625 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21,
#line 625 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22);

#line 617 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(
#line 617 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_4,
#line 617 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_5,
#line 617 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Var_6);

#line 613 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(
#line 613 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg);

#line 613 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
#line 613 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg);

#line 613 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(
#line 613 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg);

#line 604 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_5,
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_7,
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Var_8);

#line 589 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(
#line 589 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 589 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 589 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

#line 575 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(
#line 575 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 575 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 575 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

#line 560 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(
#line 560 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__C_Code_3,
#line 560 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__List_4);

#line 540 "make_hlds_warn.m"
static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(
#line 540 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__UnmentionedVars_3);

#line 511 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(
#line 511 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NameList1_4,
#line 511 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__MaybeArg_5,
#line 511 "make_hlds_warn.m"
  MR_String * hlds__make_hlds__make_hlds_warn__Name_6);

#line 478 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(
#line 478 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Spec_4,
#line 478 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8,
#line 478 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_9);

#line 461 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1(
#line 461 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 461 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

#line 448 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0(
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SingleMulti_7,
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_8,
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__CallId_9,
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Vars_11,
#line 448 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__Spec_12);

#line 427 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2(
#line 427 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 427 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

#line 399 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1(
#line 399 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 399 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

#line 385 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalVars_7,
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_8,
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_9,
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25,
#line 385 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26);

#line 343 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__X_7,
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__RHS_8,
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_9,
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29,
#line 343 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);

#line 334 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(
#line 334 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 334 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
#line 334 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
#line 334 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4);

#line 326 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(
#line 326 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 326 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
#line 326 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
#line 326 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4);

#line 304 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2(
#line 304 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 304 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 304 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 304 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_3);

#line 300 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1(
#line 300 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 300 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

#line 201 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(
#line 201 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_5,
#line 201 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
#line 201 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93,
#line 201 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);

#line 95 "make_hlds_warn.m"
static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
#line 95 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_5,
#line 95 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_6,
#line 95 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Warning_7);

#line 492 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1(
#line 492 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 492 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 492 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

#line 92 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1(
#line 92 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 92 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_1[4][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_2[53][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_3[3][4];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_4[2][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_5[4][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_6[2][5];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_2[53][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "code."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in this scope."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it cannot fail."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it can fail."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "statement."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "return"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may contain a"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "code for"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not occur in the"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: variable"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has overlapping scopes."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: variables"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "each have overlapping scopes."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occurs"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occur"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "do"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may set"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "SUCCESS_INDICATOR"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[16])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not appear to set"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[19])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 40)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1118 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1126 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1134 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_warn__pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 1143 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 1151 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1159 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1167 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1175 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0
  }
};

#line 1183 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0 = {
  (MR_String) "sm_single",
  (MR_Integer) 0
};

#line 1189 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1 = {
  (MR_String) "sm_multi",
  (MR_Integer) 1
};

#line 1195 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1
};

#line 1201 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0
};

#line 1207 "hlds.make_hlds.make_hlds_warn.c"
static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1213 "hlds.make_hlds.make_hlds_warn.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_single_or_multi_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "single_or_multi",
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0 },
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0
};

#line 1230 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1238 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1246 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1254 "hlds.make_hlds.make_hlds_warn.c"
static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1265 "hlds.make_hlds.make_hlds_warn.c"
static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0[7] = {
  (MR_String) "wi_module_info",
  (MR_String) "wi_pred_call_id",
  (MR_String) "wi_varset",
  (MR_String) "wi_specs",
  (MR_String) "wi_singleton_headvars",
  (MR_String) "wi_multi_headvars",
  (MR_String) "wi_head_context"
};

#line 1276 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0 = {
  (MR_String) "warn_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0,
  NULL,
  NULL
};

#line 1291 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[1] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0
};

#line 1296 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0
  }
};

#line 1305 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0[1] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0
};

#line 1310 "hlds.make_hlds.make_hlds_warn.c"
static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0[1] = {
  (MR_Integer) 0
};

#line 1315 "hlds.make_hlds.make_hlds_warn.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "warn_info",
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0 },
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0
};

#line 1332 "hlds.make_hlds.make_hlds_warn.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
#line 1335 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 1337 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
#line 1339 "hlds.make_hlds.make_hlds_warn.c"
{
#line 1341 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1343 "hlds.make_hlds.make_hlds_warn.c"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 1346 "hlds.make_hlds.make_hlds_warn.c"
    {
#line 1348 "hlds.make_hlds.make_hlds_warn.c"
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2));
    }
#line 1351 "hlds.make_hlds.make_hlds_warn.c"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 1353 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 1355 "hlds.make_hlds.make_hlds_warn.c"
}

#line 1358 "hlds.make_hlds.make_hlds_warn.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001(
#line 1361 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 1363 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 1365 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3)
#line 1367 "hlds.make_hlds.make_hlds_warn.c"
{
#line 1369 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1371 "hlds.make_hlds.make_hlds_warn.c"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1;

#line 1374 "hlds.make_hlds.make_hlds_warn.c"
    {
#line 1376 "hlds.make_hlds.make_hlds_warn.c"
      hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(&hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_3));
    }
#line 1379 "hlds.make_hlds.make_hlds_warn.c"
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1));
#line 1381 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 1383 "hlds.make_hlds.make_hlds_warn.c"
}

#line 1386 "hlds.make_hlds.make_hlds_warn.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001(
#line 1389 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 1391 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
#line 1393 "hlds.make_hlds.make_hlds_warn.c"
{
#line 1395 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1397 "hlds.make_hlds.make_hlds_warn.c"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 1400 "hlds.make_hlds.make_hlds_warn.c"
    {
#line 1402 "hlds.make_hlds.make_hlds_warn.c"
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2));
    }
#line 1405 "hlds.make_hlds.make_hlds_warn.c"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 1407 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 1409 "hlds.make_hlds.make_hlds_warn.c"
}

#line 1412 "hlds.make_hlds.make_hlds_warn.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001(
#line 1415 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 1417 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 1419 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3)
#line 1421 "hlds.make_hlds.make_hlds_warn.c"
{
#line 1423 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1425 "hlds.make_hlds.make_hlds_warn.c"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1;

#line 1428 "hlds.make_hlds.make_hlds_warn.c"
    {
#line 1430 "hlds.make_hlds.make_hlds_warn.c"
      hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(&hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_3));
    }
#line 1433 "hlds.make_hlds.make_hlds_warn.c"
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1));
#line 1435 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 1437 "hlds.make_hlds.make_hlds_warn.c"
}

#line 461 "make_hlds_warn.m"
static MR_String MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__461__1_2_f_0(
#line 461 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
#line 461 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_82)
#line 461 "make_hlds_warn.m"
{
#line 461 "make_hlds_warn.m"
  {
#line 461 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 461 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__HeadVar__3_83;

#line 461 "make_hlds_warn.m"
    {
#line 461 "make_hlds_warn.m"
      return hlds__make_hlds__make_hlds_warn__HeadVar__3_83 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__VarSet_10, hlds__make_hlds__make_hlds_warn__HeadVar__2_82);
    }
#line 461 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__HeadVar__3_83;
#line 461 "make_hlds_warn.m"
  }
#line 461 "make_hlds_warn.m"
}

#line 170 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(
#line 170 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 170 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 170 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
#line 170 "make_hlds_warn.m"
{
#line 170 "make_hlds_warn.m"
  {
#line 170 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 170 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__CastX_24 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__2_2;
#line 170 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__CastY_25 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__3_3;

#line 170 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__CastX_24 == hlds__make_hlds__make_hlds_warn__CastY_25);
#line 170 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 1492 "hlds.make_hlds.make_hlds_warn.c"
      *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "make_hlds_warn.m"
    else
#line 170 "make_hlds_warn.m"
      {
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 3)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 4)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 5)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 6)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 0)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 2)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 3)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 4)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 5)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 6)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_18_18;

#line 170 "make_hlds_warn.m"
        {
#line 170 "make_hlds_warn.m"
          hlds__hlds_module____Compare____module_info_0_0(&hlds__make_hlds__make_hlds_warn__V_18_18, hlds__make_hlds__make_hlds_warn__V_4_4, hlds__make_hlds__make_hlds_warn__V_11_11);
        }
#line 1534 "hlds.make_hlds.make_hlds_warn.c"
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_18_18 == (MR_Integer) 0);
#line 170 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 170 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_18_18;
#line 170 "make_hlds_warn.m"
        else
#line 170 "make_hlds_warn.m"
          {
#line 170 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_19_19;

#line 170 "make_hlds_warn.m"
            {
#line 170 "make_hlds_warn.m"
              parse_tree__prog_data____Compare____simple_call_id_0_0(&hlds__make_hlds__make_hlds_warn__V_19_19, hlds__make_hlds__make_hlds_warn__V_5_5, hlds__make_hlds__make_hlds_warn__V_12_12);
            }
#line 1554 "hlds.make_hlds.make_hlds_warn.c"
            hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_19_19 == (MR_Integer) 0);
#line 170 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 170 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
              *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_19_19;
#line 170 "make_hlds_warn.m"
            else
#line 170 "make_hlds_warn.m"
              {
#line 170 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_20_20;

#line 170 "make_hlds_warn.m"
                {
#line 170 "make_hlds_warn.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[3], &hlds__make_hlds__make_hlds_warn__V_20_20, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_6_6)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_13_13)));
                }
#line 1574 "hlds.make_hlds.make_hlds_warn.c"
                hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_20_20 == (MR_Integer) 0);
#line 170 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 170 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
                  *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_20_20;
#line 170 "make_hlds_warn.m"
                else
#line 170 "make_hlds_warn.m"
                  {
#line 170 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_21_21;

#line 170 "make_hlds_warn.m"
                    {
#line 170 "make_hlds_warn.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[4], &hlds__make_hlds__make_hlds_warn__V_21_21, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_7_7)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_14_14)));
                    }
#line 1594 "hlds.make_hlds.make_hlds_warn.c"
                    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_21_21 == (MR_Integer) 0);
#line 170 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 170 "make_hlds_warn.m"
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
                      *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_21_21;
#line 170 "make_hlds_warn.m"
                    else
#line 170 "make_hlds_warn.m"
                      {
#line 170 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_22_22;

#line 170 "make_hlds_warn.m"
                        {
#line 170 "make_hlds_warn.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[5], &hlds__make_hlds__make_hlds_warn__V_22_22, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_8_8)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_15_15)));
                        }
#line 1614 "hlds.make_hlds.make_hlds_warn.c"
                        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_22_22 == (MR_Integer) 0);
#line 170 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 170 "make_hlds_warn.m"
                        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
                          *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_22_22;
#line 170 "make_hlds_warn.m"
                        else
#line 170 "make_hlds_warn.m"
                          {
#line 170 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__V_23_23;

#line 170 "make_hlds_warn.m"
                            {
#line 170 "make_hlds_warn.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[5], &hlds__make_hlds__make_hlds_warn__V_23_23, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_9_9)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_16_16)));
                            }
#line 1634 "hlds.make_hlds.make_hlds_warn.c"
                            hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_23_23 == (MR_Integer) 0);
#line 170 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 170 "make_hlds_warn.m"
                            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
                              *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_23_23;
#line 170 "make_hlds_warn.m"
                            else
#line 170 "make_hlds_warn.m"
                              {
#line 170 "make_hlds_warn.m"
                                mercury__term____Compare____context_0_0(hlds__make_hlds__make_hlds_warn__HeadVar__1_1, hlds__make_hlds__make_hlds_warn__V_10_10, hlds__make_hlds__make_hlds_warn__V_17_17);
#line 170 "make_hlds_warn.m"
                                return;
                              }
#line 170 "make_hlds_warn.m"
                          }
#line 170 "make_hlds_warn.m"
                      }
#line 170 "make_hlds_warn.m"
                  }
#line 170 "make_hlds_warn.m"
              }
#line 170 "make_hlds_warn.m"
          }
#line 170 "make_hlds_warn.m"
      }
#line 170 "make_hlds_warn.m"
  }
#line 170 "make_hlds_warn.m"
}

#line 170 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(
#line 170 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 170 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2)
#line 170 "make_hlds_warn.m"
{
#line 170 "make_hlds_warn.m"
  {
#line 170 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 170 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__CastX_17 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__1_1;
#line 170 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__CastY_18 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__2_2;

#line 170 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__CastX_17 == hlds__make_hlds__make_hlds_warn__CastY_18);
#line 170 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__succeeded = MR_TRUE;
#line 170 "make_hlds_warn.m"
    else
#line 170 "make_hlds_warn.m"
      {
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_21_21;
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_22_22;
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_23_23;
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_24_24;
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 3)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 4)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 5)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 6)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 3)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 4)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 5)));
#line 170 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 6)));

#line 1733 "hlds.make_hlds.make_hlds_warn.c"
        {
#line 1735 "hlds.make_hlds.make_hlds_warn.c"
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__make_hlds__make_hlds_warn__V_3_3, hlds__make_hlds__make_hlds_warn__V_10_10);
        }
#line 170 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
          {
#line 1742 "hlds.make_hlds.make_hlds_warn.c"
            {
#line 1744 "hlds.make_hlds.make_hlds_warn.c"
              hlds__make_hlds__make_hlds_warn__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(hlds__make_hlds__make_hlds_warn__V_4_4, hlds__make_hlds__make_hlds_warn__V_11_11);
            }
#line 170 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
              {
#line 1751 "hlds.make_hlds.make_hlds_warn.c"
                hlds__make_hlds__make_hlds_warn__TypeInfo_21_21 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[3];
#line 1753 "hlds.make_hlds.make_hlds_warn.c"
                {
#line 1755 "hlds.make_hlds.make_hlds_warn.c"
                  hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_21_21, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_5_5)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_12_12)));
                }
#line 170 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
                  {
#line 1762 "hlds.make_hlds.make_hlds_warn.c"
                    hlds__make_hlds__make_hlds_warn__TypeInfo_22_22 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[4];
#line 1764 "hlds.make_hlds.make_hlds_warn.c"
                    {
#line 1766 "hlds.make_hlds.make_hlds_warn.c"
                      hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_22_22, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_6_6)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_13_13)));
                    }
#line 170 "make_hlds_warn.m"
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
                      {
#line 1773 "hlds.make_hlds.make_hlds_warn.c"
                        hlds__make_hlds__make_hlds_warn__TypeInfo_23_23 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[5];
#line 1775 "hlds.make_hlds.make_hlds_warn.c"
                        {
#line 1777 "hlds.make_hlds.make_hlds_warn.c"
                          hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_23_23, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_7_7)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_14_14)));
                        }
#line 170 "make_hlds_warn.m"
                        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 170 "make_hlds_warn.m"
                          {
#line 1784 "hlds.make_hlds.make_hlds_warn.c"
                            hlds__make_hlds__make_hlds_warn__TypeInfo_24_24 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[5];
#line 1786 "hlds.make_hlds.make_hlds_warn.c"
                            {
#line 1788 "hlds.make_hlds.make_hlds_warn.c"
                              hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_24_24, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_8_8)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_15_15)));
                            }
#line 170 "make_hlds_warn.m"
                            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 1793 "hlds.make_hlds.make_hlds_warn.c"
                              {
#line 1795 "hlds.make_hlds.make_hlds_warn.c"
                                return hlds__make_hlds__make_hlds_warn__succeeded = mercury__term____Unify____context_0_0(hlds__make_hlds__make_hlds_warn__V_9_9, hlds__make_hlds__make_hlds_warn__V_16_16);
                              }
#line 170 "make_hlds_warn.m"
                          }
#line 170 "make_hlds_warn.m"
                      }
#line 170 "make_hlds_warn.m"
                  }
#line 170 "make_hlds_warn.m"
              }
#line 170 "make_hlds_warn.m"
          }
#line 170 "make_hlds_warn.m"
      }
#line 170 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 170 "make_hlds_warn.m"
  }
#line 170 "make_hlds_warn.m"
}

#line 444 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(
#line 444 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 444 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 444 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
#line 444 "make_hlds_warn.m"
{
#line 444 "make_hlds_warn.m"
  {
#line 444 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 444 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__2_2;
#line 444 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__3_3;

#line 444 "make_hlds_warn.m"
    {
#line 444 "make_hlds_warn.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__make_hlds_warn__HeadVar__1_1, hlds__make_hlds__make_hlds_warn__Cast_HeadVar1_4, hlds__make_hlds__make_hlds_warn__Cast_HeadVar2_5);
#line 444 "make_hlds_warn.m"
      return;
    }
#line 444 "make_hlds_warn.m"
  }
#line 444 "make_hlds_warn.m"
}

#line 444 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(
#line 444 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_1,
#line 444 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2)
#line 444 "make_hlds_warn.m"
{
#line 1858 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1860 "hlds.make_hlds.make_hlds_warn.c"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__HeadVar__2_1 == hlds__make_hlds__make_hlds_warn__HeadVar__2_2);

#line 1863 "hlds.make_hlds.make_hlds_warn.c"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 1865 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 444 "make_hlds_warn.m"
}

#line 875 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(
#line 875 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
#line 875 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_7,
#line 875 "make_hlds_warn.m"
  MR_String hlds__make_hlds__make_hlds_warn__Message_8,
#line 875 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_13,
#line 875 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_14)
#line 875 "make_hlds_warn.m"
{
#line 878 "make_hlds_warn.m"
  {
#line 878 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_10;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Msg_11;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Spec_12;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_17_17;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_18_18;
#line 878 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_19_19;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_20_20;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_23_23;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_25_25;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_28_28;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_29_29;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_33_33;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_34_34;
#line 878 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_38_38;

#line 879 "make_hlds_warn.m"
    {
#line 879 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_19_19 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__make_hlds__make_hlds_warn__PromiseType_6);
    }
#line 879 "make_hlds_warn.m"
    {
#line 879 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 879 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_19_19));
#line 879 "make_hlds_warn.m"
    }
#line 881 "make_hlds_warn.m"
    {
#line 881 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 881 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_29_29, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Message_8));
#line 881 "make_hlds_warn.m"
    }
#line 881 "make_hlds_warn.m"
    {
#line 881 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_29_29));
#line 881 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])));
#line 881 "make_hlds_warn.m"
    }
#line 881 "make_hlds_warn.m"
    {
#line 881 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[52])));
#line 881 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_28_28));
#line 881 "make_hlds_warn.m"
    }
#line 880 "make_hlds_warn.m"
    {
#line 880 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 880 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_25_25));
#line 880 "make_hlds_warn.m"
    }
#line 880 "make_hlds_warn.m"
    {
#line 880 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[51])));
#line 880 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_23_23));
#line 880 "make_hlds_warn.m"
    }
#line 879 "make_hlds_warn.m"
    {
#line 879 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_18_18));
#line 879 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_20_20));
#line 879 "make_hlds_warn.m"
    }
#line 879 "make_hlds_warn.m"
    {
#line 879 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[50])));
#line 879 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_17_17));
#line 879 "make_hlds_warn.m"
    }
#line 882 "make_hlds_warn.m"
    {
#line 882 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 882 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_10));
#line 882 "make_hlds_warn.m"
    }
#line 882 "make_hlds_warn.m"
    {
#line 882 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_34_34));
#line 882 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "make_hlds_warn.m"
    }
#line 882 "make_hlds_warn.m"
    {
#line 882 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 882 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_7));
#line 882 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_33_33));
#line 882 "make_hlds_warn.m"
    }
#line 883 "make_hlds_warn.m"
    {
#line 883 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_11));
#line 883 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "make_hlds_warn.m"
    }
#line 883 "make_hlds_warn.m"
    {
#line 883 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 883 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 883 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_38_38));
#line 883 "make_hlds_warn.m"
    }
#line 884 "make_hlds_warn.m"
    {
#line 884 "make_hlds_warn.m"
      MR_Word base;
#line 884 "make_hlds_warn.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_14 = base;
#line 884 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_12));
#line 884 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_13));
#line 884 "make_hlds_warn.m"
    }
#line 878 "make_hlds_warn.m"
  }
#line 875 "make_hlds_warn.m"
}

#line 843 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(
#line 843 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
#line 843 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goals_7,
#line 843 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__CallUsed_8,
#line 843 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23,
#line 843 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24)
#line 843 "make_hlds_warn.m"
{
#line 848 "make_hlds_warn.m"
  while (MR_TRUE)
#line 848 "make_hlds_warn.m"
    {
#line 848 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 848 "make_hlds_warn.m"
      {
#line 848 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 848 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__Goals_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23;
#line 848 "make_hlds_warn.m"
        else
#line 850 "make_hlds_warn.m"
          {
#line 850 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__HeadGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_7, (MR_Integer) 0)));
#line 850 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__TailGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_7, (MR_Integer) 1)));
#line 851 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_12_12;
#line 851 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_13_13;
#line 851 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_14_14;
#line 851 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_15_15;

#line 851 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__HeadGoal_10)) == (MR_mktag((MR_Integer) 0)));
#line 851 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 851 "make_hlds_warn.m"
              {
#line 851 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 0)));
#line 851 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)));
#line 851 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 2)));
#line 851 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 3)));
#line 852 "make_hlds_warn.m"
                /* direct tailcall eliminated */
#line 852 "make_hlds_warn.m"
                {
#line 852 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7 = hlds__make_hlds__make_hlds_warn__TailGoals_11;

#line 852 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7;
#line 852 "make_hlds_warn.m"
                }
#line 852 "make_hlds_warn.m"
                continue;
#line 851 "make_hlds_warn.m"
              }
#line 851 "make_hlds_warn.m"
            else
#line 857 "make_hlds_warn.m"
              {
#line 857 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__HeadSubGoal_18;
#line 854 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_16_16;
#line 854 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_17_17;

#line 854 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__HeadGoal_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 854 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 854 "make_hlds_warn.m"
                  {
#line 854 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)));
#line 854 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 2)));
#line 854 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__HeadSubGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 3)));
#line 855 "make_hlds_warn.m"
                    {
#line 855 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__V_26_26;

#line 855 "make_hlds_warn.m"
                      {
#line 855 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "make_hlds_warn.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__HeadSubGoal_18));
#line 855 "make_hlds_warn.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__TailGoals_11));
#line 855 "make_hlds_warn.m"
                      }
#line 855 "make_hlds_warn.m"
                      /* direct tailcall eliminated */
#line 855 "make_hlds_warn.m"
                      {
#line 855 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7 = hlds__make_hlds__make_hlds_warn__V_26_26;

#line 855 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7;
#line 855 "make_hlds_warn.m"
                      }
#line 855 "make_hlds_warn.m"
                      continue;
#line 855 "make_hlds_warn.m"
                    }
#line 854 "make_hlds_warn.m"
                  }
#line 854 "make_hlds_warn.m"
                else
#line 866 "make_hlds_warn.m"
                  {
#line 866 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Context_19;
#line 857 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_20_20;
#line 857 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_21_21;
#line 857 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_22_22;

#line 857 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__HeadGoal_10)) == (MR_mktag((MR_Integer) 1)));
#line 857 "make_hlds_warn.m"
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 857 "make_hlds_warn.m"
                      {
#line 857 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 0)));
#line 857 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)));
#line 857 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 2)));
#line 857 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 3)));
#line 864 "make_hlds_warn.m"
                        {
#line 864 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_29_29;

#line 860 "make_hlds_warn.m"
#line 860 "make_hlds_warn.m"
                          switch (hlds__make_hlds__make_hlds_warn__CallUsed_8) {
#line 860 "make_hlds_warn.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 860 "make_hlds_warn.m"
                            case (MR_Integer) 0:
#line 859 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_29_29 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23;
#line 860 "make_hlds_warn.m"
                              break;
#line 860 "make_hlds_warn.m"
                            case (MR_Integer) 1:
#line 861 "make_hlds_warn.m"
                              {
#line 862 "make_hlds_warn.m"
                                {
#line 862 "make_hlds_warn.m"
                                  hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_6, hlds__make_hlds__make_hlds_warn__Context_19, (MR_String) "disjunct contains more than one call", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_29_29);
                                }
#line 861 "make_hlds_warn.m"
                              }
#line 860 "make_hlds_warn.m"
                              break;
#line 860 "make_hlds_warn.m"
                          }
#line 865 "make_hlds_warn.m"
                          /* direct tailcall eliminated */
#line 865 "make_hlds_warn.m"
                          {
#line 865 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7 = hlds__make_hlds__make_hlds_warn__TailGoals_11;
#line 865 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_29_29;

#line 865 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_23;
#line 865 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__CallUsed_8 = (MR_Integer) 1;
#line 865 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7;
#line 865 "make_hlds_warn.m"
                          }
#line 865 "make_hlds_warn.m"
                          continue;
#line 864 "make_hlds_warn.m"
                        }
#line 857 "make_hlds_warn.m"
                      }
#line 857 "make_hlds_warn.m"
                    else
#line 868 "make_hlds_warn.m"
                      {
#line 868 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;
#line 868 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_34_34;

#line 867 "make_hlds_warn.m"
                        {
#line 867 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__V_32_32 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__HeadGoal_10);
                        }
#line 867 "make_hlds_warn.m"
                        {
#line 867 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_6, hlds__make_hlds__make_hlds_warn__V_32_32, (MR_String) "disjunct is not a call or unification", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_34_34);
                        }
#line 869 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 869 "make_hlds_warn.m"
                        {
#line 869 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7 = hlds__make_hlds__make_hlds_warn__TailGoals_11;
#line 869 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_34_34;

#line 869 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_23;
#line 869 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7;
#line 869 "make_hlds_warn.m"
                        }
#line 869 "make_hlds_warn.m"
                        continue;
#line 868 "make_hlds_warn.m"
                      }
#line 866 "make_hlds_warn.m"
                  }
#line 857 "make_hlds_warn.m"
              }
#line 850 "make_hlds_warn.m"
          }
#line 848 "make_hlds_warn.m"
      }
#line 848 "make_hlds_warn.m"
      break;
#line 848 "make_hlds_warn.m"
    }
#line 843 "make_hlds_warn.m"
}

#line 828 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(
#line 828 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
#line 828 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList_6,
#line 828 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10,
#line 828 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_11)
#line 828 "make_hlds_warn.m"
{
#line 833 "make_hlds_warn.m"
  while (MR_TRUE)
#line 833 "make_hlds_warn.m"
    {
#line 833 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 833 "make_hlds_warn.m"
      {
#line 833 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 833 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__DisjConjList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_11 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10;
#line 833 "make_hlds_warn.m"
        else
#line 835 "make_hlds_warn.m"
          {
#line 835 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__ConjList_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__DisjConjList_6, (MR_Integer) 0)));
#line 835 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__DisjConjList_6, (MR_Integer) 1)));
#line 835 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_13_13;

#line 836 "make_hlds_warn.m"
            {
#line 836 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__ConjList_8, (MR_Integer) 0, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_13_13);
            }
#line 837 "make_hlds_warn.m"
            /* direct tailcall eliminated */
#line 837 "make_hlds_warn.m"
            {
#line 837 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__Rest_9;
#line 837 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_10 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_13_13;

#line 837 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_10;
#line 837 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__DisjConjList_6 = hlds__make_hlds__make_hlds_warn__DisjConjList__tmp_copy_6;
#line 837 "make_hlds_warn.m"
            }
#line 837 "make_hlds_warn.m"
            continue;
#line 835 "make_hlds_warn.m"
          }
#line 833 "make_hlds_warn.m"
      }
#line 833 "make_hlds_warn.m"
      break;
#line 833 "make_hlds_warn.m"
    }
#line 828 "make_hlds_warn.m"
}

#line 815 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(
#line 815 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
#line 815 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4)
#line 815 "make_hlds_warn.m"
{
#line 822 "make_hlds_warn.m"
  {
#line 822 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_3)) == (MR_mktag((MR_Integer) 2)));
#line 822 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__GoalA_6;
#line 822 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__GoalB_7;
#line 818 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_5_5;

#line 818 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 818 "make_hlds_warn.m"
      {
#line 818 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 0)));
#line 818 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__GoalA_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 1)));
#line 818 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 2)));
#line 819 "make_hlds_warn.m"
        {
#line 819 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListA_8;
#line 819 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListB_9;

#line 819 "make_hlds_warn.m"
          {
#line 819 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalA_6, &hlds__make_hlds__make_hlds_warn__GoalListA_8);
          }
#line 820 "make_hlds_warn.m"
          {
#line 820 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalB_7, &hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
#line 821 "make_hlds_warn.m"
          {
#line 821 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, hlds__make_hlds__make_hlds_warn__GoalListA_8, hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
#line 819 "make_hlds_warn.m"
        }
#line 818 "make_hlds_warn.m"
      }
#line 818 "make_hlds_warn.m"
    else
#line 823 "make_hlds_warn.m"
      {
#line 823 "make_hlds_warn.m"
        {
#line 823 "make_hlds_warn.m"
          MR_Word base;
#line 823 "make_hlds_warn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__GoalList_4 = base;
#line 823 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Goal_3));
#line 823 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "make_hlds_warn.m"
        }
#line 823 "make_hlds_warn.m"
      }
#line 822 "make_hlds_warn.m"
  }
#line 815 "make_hlds_warn.m"
}

#line 801 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(
#line 801 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
#line 801 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4)
#line 801 "make_hlds_warn.m"
{
#line 808 "make_hlds_warn.m"
  {
#line 808 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 808 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__GoalA_6;
#line 808 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__GoalB_7;
#line 804 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_5_5;

#line 804 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 804 "make_hlds_warn.m"
      {
#line 804 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 1)));
#line 804 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__GoalA_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 2)));
#line 804 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 3)));
#line 805 "make_hlds_warn.m"
        {
#line 805 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListA_8;
#line 805 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListB_9;

#line 805 "make_hlds_warn.m"
          {
#line 805 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalA_6, &hlds__make_hlds__make_hlds_warn__GoalListA_8);
          }
#line 806 "make_hlds_warn.m"
          {
#line 806 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalB_7, &hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
#line 807 "make_hlds_warn.m"
          {
#line 807 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, hlds__make_hlds__make_hlds_warn__GoalListA_8, hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
#line 805 "make_hlds_warn.m"
        }
#line 804 "make_hlds_warn.m"
      }
#line 804 "make_hlds_warn.m"
    else
#line 809 "make_hlds_warn.m"
      {
#line 809 "make_hlds_warn.m"
        {
#line 809 "make_hlds_warn.m"
          MR_Word base;
#line 809 "make_hlds_warn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__GoalList_4 = base;
#line 809 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Goal_3));
#line 809 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 809 "make_hlds_warn.m"
        }
#line 809 "make_hlds_warn.m"
      }
#line 808 "make_hlds_warn.m"
  }
#line 801 "make_hlds_warn.m"
}

#line 786 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1(
#line 786 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 786 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 786 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
#line 786 "make_hlds_warn.m"
{
#line 786 "make_hlds_warn.m"
  {
#line 786 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 786 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_GoalList_4;

#line 786 "make_hlds_warn.m"
    {
#line 786 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), &hlds__make_hlds__make_hlds_warn__conv0_GoalList_4);
    }
#line 786 "make_hlds_warn.m"
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_GoalList_4));
#line 786 "make_hlds_warn.m"
  }
#line 786 "make_hlds_warn.m"
}

#line 778 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(
#line 778 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
#line 778 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_6,
#line 778 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18,
#line 778 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19)
#line 778 "make_hlds_warn.m"
{
#line 784 "make_hlds_warn.m"
  while (MR_TRUE)
#line 784 "make_hlds_warn.m"
    {
#line 784 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 784 "make_hlds_warn.m"
      {
#line 784 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 784 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_10;
#line 782 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_8_8;
#line 782 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_9_9;

#line 782 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 782 "make_hlds_warn.m"
          {
#line 782 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)));
#line 782 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 2)));
#line 782 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__SubGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 3)));
#line 783 "make_hlds_warn.m"
            /* direct tailcall eliminated */
#line 783 "make_hlds_warn.m"
            {
#line 783 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__SubGoal_10;

#line 783 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__Goal_6 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_6;
#line 783 "make_hlds_warn.m"
            }
#line 783 "make_hlds_warn.m"
            continue;
#line 782 "make_hlds_warn.m"
          }
#line 782 "make_hlds_warn.m"
        else
#line 788 "make_hlds_warn.m"
          {
#line 784 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_11_11;
#line 784 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_12_12;
#line 784 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_13_13;

#line 784 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 784 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 784 "make_hlds_warn.m"
              {
#line 784 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)));
#line 784 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 2)));
#line 784 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 3)));
#line 785 "make_hlds_warn.m"
                {
#line 785 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__DisjList_14;
#line 785 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList_15;

#line 785 "make_hlds_warn.m"
                  {
#line 785 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(hlds__make_hlds__make_hlds_warn__Goal_6, &hlds__make_hlds__make_hlds_warn__DisjList_14);
                  }
#line 786 "make_hlds_warn.m"
                  {
#line 786 "make_hlds_warn.m"
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[2], (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[3], hlds__make_hlds__make_hlds_warn__DisjList_14, &hlds__make_hlds__make_hlds_warn__DisjConjList_15);
                  }
#line 787 "make_hlds_warn.m"
                  {
#line 787 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__DisjConjList_15, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19);
#line 787 "make_hlds_warn.m"
                    return;
                  }
#line 785 "make_hlds_warn.m"
                }
#line 784 "make_hlds_warn.m"
              }
#line 784 "make_hlds_warn.m"
            else
#line 793 "make_hlds_warn.m"
              {
#line 793 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__Context_16;
#line 793 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_31;
#line 788 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn___UnivVars_17;

#line 788 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 788 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 788 "make_hlds_warn.m"
                  {
#line 788 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)));
#line 788 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn___UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 2)));
#line 788 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__SubGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 3)));
#line 791 "make_hlds_warn.m"
                    {
#line 791 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24_24;

#line 789 "make_hlds_warn.m"
                      {
#line 789 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__Context_16, (MR_String) "universal quantification should come before the declaration name", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24_24);
                      }
#line 792 "make_hlds_warn.m"
                      /* direct tailcall eliminated */
#line 792 "make_hlds_warn.m"
                      {
#line 792 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__SubGoal_31;
#line 792 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_18 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24_24;

#line 792 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_18;
#line 792 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__Goal_6 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_6;
#line 792 "make_hlds_warn.m"
                      }
#line 792 "make_hlds_warn.m"
                      continue;
#line 791 "make_hlds_warn.m"
                    }
#line 788 "make_hlds_warn.m"
                  }
#line 788 "make_hlds_warn.m"
                else
#line 794 "make_hlds_warn.m"
                  {
#line 794 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_28_28;

#line 794 "make_hlds_warn.m"
                    {
#line 794 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_28_28 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__Goal_6);
                    }
#line 794 "make_hlds_warn.m"
                    {
#line 794 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__V_28_28, (MR_String) "goal in declaration is not a disjunction", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19);
#line 794 "make_hlds_warn.m"
                      return;
                    }
#line 794 "make_hlds_warn.m"
                  }
#line 793 "make_hlds_warn.m"
              }
#line 788 "make_hlds_warn.m"
          }
#line 784 "make_hlds_warn.m"
      }
#line 784 "make_hlds_warn.m"
      break;
#line 784 "make_hlds_warn.m"
    }
#line 778 "make_hlds_warn.m"
}

#line 644 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
#line 644 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
#line 644 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27,
#line 644 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28)
#line 644 "make_hlds_warn.m"
{
#line 650 "make_hlds_warn.m"
  {
#line 650 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 650 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__ProcInfo_18;
#line 650 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19;

#line 651 "make_hlds_warn.m"
    {
#line 651 "make_hlds_warn.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_10, hlds__make_hlds__make_hlds_warn__PredId_14, hlds__make_hlds__make_hlds_warn__ProcId_15, &hlds__make_hlds__make_hlds_warn__ProcInfo_18);
    }
#line 652 "make_hlds_warn.m"
    {
#line 652 "make_hlds_warn.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__make_hlds__make_hlds_warn__ProcInfo_18, &hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19);
    }
#line 719 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 719 "make_hlds_warn.m"
    else
#line 654 "make_hlds_warn.m"
      {
#line 654 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Detism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19, (MR_Integer) 0)));

#line 687 "make_hlds_warn.m"
#line 687 "make_hlds_warn.m"
        switch (hlds__make_hlds__make_hlds_warn__Detism_20) {
#line 687 "make_hlds_warn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 687 "make_hlds_warn.m"
          case (MR_Integer) 4:
#line 687 "make_hlds_warn.m"
          case (MR_Integer) 0:
#line 687 "make_hlds_warn.m"
          case (MR_Integer) 6:
#line 684 "make_hlds_warn.m"
            {
#line 667 "make_hlds_warn.m"
              {
#line 667 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), hlds__make_hlds__make_hlds_warn__BodyPieces_16);
              }
#line 684 "make_hlds_warn.m"
              if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 668 "make_hlds_warn.m"
                {
#line 668 "make_hlds_warn.m"
                  MR_String hlds__make_hlds__make_hlds_warn__LangStr_22;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Pieces_23;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Msg_24;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Spec_26;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_68_68;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_69_69;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_70_70;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_73_73;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_74_74;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_87_87;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_88_88;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_91_91;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_92_92;
#line 668 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_100_100;

#line 668 "make_hlds_warn.m"
                  {
#line 668 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__LangStr_22 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_11);
                  }
#line 670 "make_hlds_warn.m"
                  {
#line 670 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_22));
#line 670 "make_hlds_warn.m"
                  }
#line 671 "make_hlds_warn.m"
                  {
#line 671 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 671 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_13));
#line 671 "make_hlds_warn.m"
                  }
#line 671 "make_hlds_warn.m"
                  {
#line 671 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_74_74));
#line 671 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[46])));
#line 671 "make_hlds_warn.m"
                  }
#line 671 "make_hlds_warn.m"
                  {
#line 671 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[27])));
#line 671 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_73_73));
#line 671 "make_hlds_warn.m"
                  }
#line 670 "make_hlds_warn.m"
                  {
#line 670 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_69_69));
#line 670 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_70_70));
#line 670 "make_hlds_warn.m"
                  }
#line 670 "make_hlds_warn.m"
                  {
#line 670 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[42])));
#line 670 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_68_68));
#line 670 "make_hlds_warn.m"
                  }
#line 677 "make_hlds_warn.m"
                  {
#line 677 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 677 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_23));
#line 677 "make_hlds_warn.m"
                  }
#line 677 "make_hlds_warn.m"
                  {
#line 677 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_92_92));
#line 677 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "make_hlds_warn.m"
                  }
#line 676 "make_hlds_warn.m"
                  {
#line 676 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_88_88, 0) = ((MR_Box) (((MR_Integer) 40 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 676 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_88_88, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_91_91));
#line 676 "make_hlds_warn.m"
                  }
#line 677 "make_hlds_warn.m"
                  {
#line 677 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_88_88));
#line 677 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "make_hlds_warn.m"
                  }
#line 675 "make_hlds_warn.m"
                  {
#line 675 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 675 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_12));
#line 675 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_87_87));
#line 675 "make_hlds_warn.m"
                  }
#line 682 "make_hlds_warn.m"
                  {
#line 682 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_24));
#line 682 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "make_hlds_warn.m"
                  }
#line 681 "make_hlds_warn.m"
                  {
#line 681 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 681 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[2])));
#line 681 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 681 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_26, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_100_100));
#line 681 "make_hlds_warn.m"
                  }
#line 683 "make_hlds_warn.m"
                  {
#line 683 "make_hlds_warn.m"
                    MR_Word base;
#line 683 "make_hlds_warn.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "make_hlds_warn.m"
                    *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = base;
#line 683 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_26));
#line 683 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27));
#line 683 "make_hlds_warn.m"
                  }
#line 668 "make_hlds_warn.m"
                }
#line 684 "make_hlds_warn.m"
              else
#line 684 "make_hlds_warn.m"
                *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 684 "make_hlds_warn.m"
            }
#line 687 "make_hlds_warn.m"
            break;
#line 687 "make_hlds_warn.m"
          case (MR_Integer) 5:
#line 687 "make_hlds_warn.m"
          case (MR_Integer) 1:
#line 693 "make_hlds_warn.m"
            {
#line 691 "make_hlds_warn.m"
              {
#line 691 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), hlds__make_hlds__make_hlds_warn__BodyPieces_16);
              }
#line 693 "make_hlds_warn.m"
              if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 693 "make_hlds_warn.m"
                *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 693 "make_hlds_warn.m"
              else
#line 694 "make_hlds_warn.m"
                {
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_31_31;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_33_33;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_36_36;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_37_37;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_50_50;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_51_51;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_54_54;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_55_55;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_63_63;
#line 694 "make_hlds_warn.m"
                  MR_String hlds__make_hlds__make_hlds_warn__LangStr_103;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Pieces_104;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Msg_105;
#line 694 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Spec_107;

#line 694 "make_hlds_warn.m"
                  {
#line 694 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__LangStr_103 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_11);
                  }
#line 696 "make_hlds_warn.m"
                  {
#line 696 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_103));
#line 696 "make_hlds_warn.m"
                  }
#line 697 "make_hlds_warn.m"
                  {
#line 697 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 697 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_13));
#line 697 "make_hlds_warn.m"
                  }
#line 697 "make_hlds_warn.m"
                  {
#line 697 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_37_37));
#line 697 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[49])));
#line 697 "make_hlds_warn.m"
                  }
#line 697 "make_hlds_warn.m"
                  {
#line 697 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[27])));
#line 697 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_36_36));
#line 697 "make_hlds_warn.m"
                  }
#line 696 "make_hlds_warn.m"
                  {
#line 696 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_32_32));
#line 696 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_33_33));
#line 696 "make_hlds_warn.m"
                  }
#line 696 "make_hlds_warn.m"
                  {
#line 696 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Pieces_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[42])));
#line 696 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_104, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_31_31));
#line 696 "make_hlds_warn.m"
                  }
#line 704 "make_hlds_warn.m"
                  {
#line 704 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 704 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_104));
#line 704 "make_hlds_warn.m"
                  }
#line 704 "make_hlds_warn.m"
                  {
#line 704 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_55_55));
#line 704 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 704 "make_hlds_warn.m"
                  }
#line 703 "make_hlds_warn.m"
                  {
#line 703 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_51_51, 0) = ((MR_Box) (((MR_Integer) 40 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 703 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_54_54));
#line 703 "make_hlds_warn.m"
                  }
#line 704 "make_hlds_warn.m"
                  {
#line 704 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_51_51));
#line 704 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 704 "make_hlds_warn.m"
                  }
#line 702 "make_hlds_warn.m"
                  {
#line 702 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Msg_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 702 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_105, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_12));
#line 702 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_105, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_50_50));
#line 702 "make_hlds_warn.m"
                  }
#line 709 "make_hlds_warn.m"
                  {
#line 709 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_105));
#line 709 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "make_hlds_warn.m"
                  }
#line 708 "make_hlds_warn.m"
                  {
#line 708 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Spec_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 708 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[2])));
#line 708 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 708 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_107, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_63_63));
#line 708 "make_hlds_warn.m"
                  }
#line 710 "make_hlds_warn.m"
                  {
#line 710 "make_hlds_warn.m"
                    MR_Word base;
#line 710 "make_hlds_warn.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "make_hlds_warn.m"
                    *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = base;
#line 710 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_107));
#line 710 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27));
#line 710 "make_hlds_warn.m"
                  }
#line 694 "make_hlds_warn.m"
                }
#line 693 "make_hlds_warn.m"
            }
#line 687 "make_hlds_warn.m"
            break;
#line 687 "make_hlds_warn.m"
          case (MR_Integer) 7:
#line 715 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 687 "make_hlds_warn.m"
            break;
#line 687 "make_hlds_warn.m"
          case (MR_Integer) 2:
#line 713 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 687 "make_hlds_warn.m"
            break;
#line 687 "make_hlds_warn.m"
          case (MR_Integer) 3:
#line 714 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 687 "make_hlds_warn.m"
            break;
#line 687 "make_hlds_warn.m"
        }
#line 654 "make_hlds_warn.m"
      }
#line 650 "make_hlds_warn.m"
  }
#line 644 "make_hlds_warn.m"
}

#line 625 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
#line 625 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
#line 625 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21,
#line 625 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22)
#line 625 "make_hlds_warn.m"
{
#line 630 "make_hlds_warn.m"
  {
#line 630 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 630 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__PredInfo_18;
#line 630 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__PredStatus_19;
#line 630 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__IsImported_20;

#line 631 "make_hlds_warn.m"
    {
#line 631 "make_hlds_warn.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_10, hlds__make_hlds__make_hlds_warn__PredId_14, &hlds__make_hlds__make_hlds_warn__PredInfo_18);
    }
#line 632 "make_hlds_warn.m"
    {
#line 632 "make_hlds_warn.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__make_hlds_warn__PredInfo_18, &hlds__make_hlds__make_hlds_warn__PredStatus_19);
    }
#line 633 "make_hlds_warn.m"
    {
#line 633 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__IsImported_20 = hlds__status__pred_status_is_imported_1_f_0(hlds__make_hlds__make_hlds_warn__PredStatus_19);
    }
#line 636 "make_hlds_warn.m"
#line 636 "make_hlds_warn.m"
    switch (hlds__make_hlds__make_hlds_warn__IsImported_20) {
#line 636 "make_hlds_warn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 636 "make_hlds_warn.m"
      case (MR_Integer) 0:
#line 637 "make_hlds_warn.m"
        {
#line 637 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23;

#line 638 "make_hlds_warn.m"
          {
#line 638 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_10, hlds__make_hlds__make_hlds_warn__Lang_11, hlds__make_hlds__make_hlds_warn__Context_12, hlds__make_hlds__make_hlds_warn__SimpleCallId_13, hlds__make_hlds__make_hlds_warn__PredId_14, hlds__make_hlds__make_hlds_warn__ProcId_15, hlds__make_hlds__make_hlds_warn__BodyPieces_16, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23);
          }
#line 735 "make_hlds_warn.m"
#line 735 "make_hlds_warn.m"
          switch (hlds__make_hlds__make_hlds_warn__Lang_11) {
#line 735 "make_hlds_warn.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 735 "make_hlds_warn.m"
            case (MR_Integer) 0:
#line 735 "make_hlds_warn.m"
            case (MR_Integer) 1:
#line 735 "make_hlds_warn.m"
            case (MR_Integer) 2:
#line 752 "make_hlds_warn.m"
              {
#line 736 "make_hlds_warn.m"
                {
#line 736 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "return")), hlds__make_hlds__make_hlds_warn__BodyPieces_16);
                }
#line 752 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 737 "make_hlds_warn.m"
                  {
#line 737 "make_hlds_warn.m"
                    MR_String hlds__make_hlds__make_hlds_warn__LangStr_32;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_33;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Msg_34;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Spec_36;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_40_40;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_41_41;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_42_42;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_45_45;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_46_46;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_59_59;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_60_60;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_63_63;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_64_64;
#line 737 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_72_72;

#line 737 "make_hlds_warn.m"
                    {
#line 737 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__LangStr_32 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_11);
                    }
#line 739 "make_hlds_warn.m"
                    {
#line 739 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 739 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_32));
#line 739 "make_hlds_warn.m"
                    }
#line 740 "make_hlds_warn.m"
                    {
#line 740 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 740 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_13));
#line 740 "make_hlds_warn.m"
                    }
#line 740 "make_hlds_warn.m"
                    {
#line 740 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_46_46));
#line 740 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[25])));
#line 740 "make_hlds_warn.m"
                    }
#line 740 "make_hlds_warn.m"
                    {
#line 740 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[27])));
#line 740 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_45_45));
#line 740 "make_hlds_warn.m"
                    }
#line 739 "make_hlds_warn.m"
                    {
#line 739 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_41_41));
#line 739 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_42_42));
#line 739 "make_hlds_warn.m"
                    }
#line 739 "make_hlds_warn.m"
                    {
#line 739 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[42])));
#line 739 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_40_40));
#line 739 "make_hlds_warn.m"
                    }
#line 746 "make_hlds_warn.m"
                    {
#line 746 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 746 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_33));
#line 746 "make_hlds_warn.m"
                    }
#line 746 "make_hlds_warn.m"
                    {
#line 746 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_64_64));
#line 746 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "make_hlds_warn.m"
                    }
#line 745 "make_hlds_warn.m"
                    {
#line 745 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_60_60, 0) = ((MR_Box) (((MR_Integer) 40 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 745 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_63_63));
#line 745 "make_hlds_warn.m"
                    }
#line 746 "make_hlds_warn.m"
                    {
#line 746 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_60_60));
#line 746 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "make_hlds_warn.m"
                    }
#line 744 "make_hlds_warn.m"
                    {
#line 744 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 744 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_12));
#line 744 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_59_59));
#line 744 "make_hlds_warn.m"
                    }
#line 750 "make_hlds_warn.m"
                    {
#line 750 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_34));
#line 750 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "make_hlds_warn.m"
                    }
#line 750 "make_hlds_warn.m"
                    {
#line 750 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 750 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[2])));
#line 750 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 750 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_72_72));
#line 750 "make_hlds_warn.m"
                    }
#line 751 "make_hlds_warn.m"
                    {
#line 751 "make_hlds_warn.m"
                      MR_Word base;
#line 751 "make_hlds_warn.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "make_hlds_warn.m"
                      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = base;
#line 751 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_36));
#line 751 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23));
#line 751 "make_hlds_warn.m"
                    }
#line 737 "make_hlds_warn.m"
                  }
#line 752 "make_hlds_warn.m"
                else
#line 752 "make_hlds_warn.m"
                  *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23;
#line 752 "make_hlds_warn.m"
              }
#line 735 "make_hlds_warn.m"
              break;
#line 735 "make_hlds_warn.m"
            case (MR_Integer) 3:
#line 756 "make_hlds_warn.m"
              *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23;
#line 735 "make_hlds_warn.m"
              break;
#line 735 "make_hlds_warn.m"
          }
#line 637 "make_hlds_warn.m"
        }
#line 636 "make_hlds_warn.m"
        break;
#line 636 "make_hlds_warn.m"
      case (MR_Integer) 1:
#line 635 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21;
#line 636 "make_hlds_warn.m"
        break;
#line 636 "make_hlds_warn.m"
    }
#line 630 "make_hlds_warn.m"
  }
#line 625 "make_hlds_warn.m"
}

#line 617 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(
#line 617 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_4,
#line 617 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_5,
#line 617 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Var_6)
#line 617 "make_hlds_warn.m"
{
#line 620 "make_hlds_warn.m"
  {
#line 620 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 620 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 620 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__Name_7;
#line 620 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_8_8;

#line 621 "make_hlds_warn.m"
    {
#line 621 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__succeeded = parse_tree__set_of_var__member_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_9_9, hlds__make_hlds__make_hlds_warn__NonLocals_4, hlds__make_hlds__make_hlds_warn__Var_6);
    }
#line 620 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 620 "make_hlds_warn.m"
      {
#line 622 "make_hlds_warn.m"
        {
#line 622 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = mercury__varset__search_name_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_9_9, hlds__make_hlds__make_hlds_warn__VarSet_5, hlds__make_hlds__make_hlds_warn__Var_6, &hlds__make_hlds__make_hlds_warn__Name_7);
        }
#line 620 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 620 "make_hlds_warn.m"
          {
#line 623 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_8_8 = (MR_String) "_";
#line 623 "make_hlds_warn.m"
            {
#line 623 "make_hlds_warn.m"
              return hlds__make_hlds__make_hlds_warn__succeeded = mercury__string__prefix_2_p_0(hlds__make_hlds__make_hlds_warn__Name_7, hlds__make_hlds__make_hlds_warn__V_8_8);
            }
#line 620 "make_hlds_warn.m"
          }
#line 620 "make_hlds_warn.m"
      }
#line 620 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 620 "make_hlds_warn.m"
  }
#line 617 "make_hlds_warn.m"
}

#line 613 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(
#line 613 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg)
#line 613 "make_hlds_warn.m"
{
#line 613 "make_hlds_warn.m"
  {
#line 613 "make_hlds_warn.m"
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * hlds__make_hlds__make_hlds_warn__env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) hlds__make_hlds__make_hlds_warn__env_ptr_arg;

#line 613 "make_hlds_warn.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0, 1);
#line 613 "make_hlds_warn.m"
  }
#line 613 "make_hlds_warn.m"
}

#line 613 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
#line 613 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg)
#line 613 "make_hlds_warn.m"
{
#line 613 "make_hlds_warn.m"
  {
#line 613 "make_hlds_warn.m"
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * hlds__make_hlds__make_hlds_warn__env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) hlds__make_hlds__make_hlds_warn__env_ptr_arg;

#line 614 "make_hlds_warn.m"
    {
#line 614 "make_hlds_warn.m"
      (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10, &(hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__V_15_15);
    }
#line 613 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 613 "make_hlds_warn.m"
      {
#line 614 "make_hlds_warn.m"
        (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = (strcmp((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__V_15_15) == 0);
#line 614 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 614 "make_hlds_warn.m"
          {
#line 614 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(hlds__make_hlds__make_hlds_warn__env_ptr);
#line 614 "make_hlds_warn.m"
            return;
          }
#line 613 "make_hlds_warn.m"
      }
#line 613 "make_hlds_warn.m"
  }
#line 613 "make_hlds_warn.m"
}

#line 613 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(
#line 613 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg)
#line 613 "make_hlds_warn.m"
{
#line 613 "make_hlds_warn.m"
  {
#line 613 "make_hlds_warn.m"
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * hlds__make_hlds__make_hlds_warn__env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) hlds__make_hlds__make_hlds_warn__env_ptr_arg;

#line 613 "make_hlds_warn.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0) == 0)
#line 613 "make_hlds_warn.m"
      {
#line 613 "make_hlds_warn.m"
        {
#line 613 "make_hlds_warn.m"
          parse_tree__set_of_var__member_2_p_1((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6, &(hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10, hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2, hlds__make_hlds__make_hlds_warn__env_ptr);
        }
#line 613 "make_hlds_warn.m"
        (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = MR_FALSE;
#line 613 "make_hlds_warn.m"
      }
#line 613 "make_hlds_warn.m"
    else
#line 613 "make_hlds_warn.m"
      (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = MR_TRUE;
#line 613 "make_hlds_warn.m"
  }
#line 613 "make_hlds_warn.m"
}

#line 604 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_5,
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_7,
#line 604 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Var_8)
#line 604 "make_hlds_warn.m"
{
#line 604 "make_hlds_warn.m"
  {
#line 604 "make_hlds_warn.m"
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s hlds__make_hlds__make_hlds_warn__env;

#line 604 "make_hlds_warn.m"
    (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6 = hlds__make_hlds__make_hlds_warn__QuantVars_6;
#line 604 "make_hlds_warn.m"
    (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7 = hlds__make_hlds__make_hlds_warn__VarSet_7;
#line 607 "make_hlds_warn.m"
    {
#line 610 "make_hlds_warn.m"
      MR_String hlds__make_hlds__make_hlds_warn__V_11_11;
#line 611 "make_hlds_warn.m"
      MR_String hlds__make_hlds__make_hlds_warn__V_12_12;

#line 608 "make_hlds_warn.m"
      {
#line 608 "make_hlds_warn.m"
        (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__NonLocals_5, hlds__make_hlds__make_hlds_warn__Var_8);
      }
#line 608 "make_hlds_warn.m"
      (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
#line 607 "make_hlds_warn.m"
      if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 607 "make_hlds_warn.m"
        {
#line 3773 "hlds.make_hlds.make_hlds_warn.c"
          (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 609 "make_hlds_warn.m"
          {
#line 609 "make_hlds_warn.m"
            (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7, hlds__make_hlds__make_hlds_warn__Var_8, &(hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9);
          }
#line 607 "make_hlds_warn.m"
          if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 607 "make_hlds_warn.m"
            {
#line 610 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__V_11_11 = (MR_String) "_";
#line 610 "make_hlds_warn.m"
              {
#line 610 "make_hlds_warn.m"
                (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, hlds__make_hlds__make_hlds_warn__V_11_11);
              }
#line 610 "make_hlds_warn.m"
              (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
#line 607 "make_hlds_warn.m"
              if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 607 "make_hlds_warn.m"
                {
#line 611 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_12_12 = (MR_String) "DCG_";
#line 611 "make_hlds_warn.m"
                  {
#line 611 "make_hlds_warn.m"
                    (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, hlds__make_hlds__make_hlds_warn__V_12_12);
                  }
#line 611 "make_hlds_warn.m"
                  (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
#line 607 "make_hlds_warn.m"
                  if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 607 "make_hlds_warn.m"
                    {
#line 613 "make_hlds_warn.m"
                      {
#line 613 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(&hlds__make_hlds__make_hlds_warn__env);
                      }
#line 612 "make_hlds_warn.m"
                      (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
#line 607 "make_hlds_warn.m"
                    }
#line 607 "make_hlds_warn.m"
                }
#line 607 "make_hlds_warn.m"
            }
#line 607 "make_hlds_warn.m"
        }
#line 607 "make_hlds_warn.m"
      return (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded;
#line 607 "make_hlds_warn.m"
    }
#line 604 "make_hlds_warn.m"
  }
#line 604 "make_hlds_warn.m"
}

#line 589 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(
#line 589 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 589 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 589 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
#line 589 "make_hlds_warn.m"
{
#line 592 "make_hlds_warn.m"
  {
#line 592 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 592 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "make_hlds_warn.m"
      {
#line 592 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "make_hlds_warn.m"
      }
#line 592 "make_hlds_warn.m"
    else
#line 593 "make_hlds_warn.m"
      {
#line 593 "make_hlds_warn.m"
        MR_Char hlds__make_hlds__make_hlds_warn__C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 593 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__CodeChars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));

#line 594 "make_hlds_warn.m"
        {
#line 594 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(hlds__make_hlds__make_hlds_warn__C_4);
        }
#line 598 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 596 "make_hlds_warn.m"
          {
#line 596 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__NameCharList0_8;

#line 596 "make_hlds_warn.m"
            {
#line 596 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(hlds__make_hlds__make_hlds_warn__CodeChars_5, &hlds__make_hlds__make_hlds_warn__NameCharList0_8, hlds__make_hlds__make_hlds_warn__HeadVar__3_3);
            }
#line 597 "make_hlds_warn.m"
            {
#line 597 "make_hlds_warn.m"
              MR_Word base;
#line 597 "make_hlds_warn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "make_hlds_warn.m"
              *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = base;
#line 597 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (hlds__make_hlds__make_hlds_warn__C_4));
#line 597 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NameCharList0_8));
#line 597 "make_hlds_warn.m"
            }
#line 596 "make_hlds_warn.m"
          }
#line 598 "make_hlds_warn.m"
        else
#line 600 "make_hlds_warn.m"
          {
#line 600 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__HeadVar__3_3 = hlds__make_hlds__make_hlds_warn__CodeChars_5;
#line 600 "make_hlds_warn.m"
          }
#line 593 "make_hlds_warn.m"
      }
#line 592 "make_hlds_warn.m"
  }
#line 589 "make_hlds_warn.m"
}

#line 575 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(
#line 575 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 575 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 575 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
#line 575 "make_hlds_warn.m"
{
#line 578 "make_hlds_warn.m"
  while (MR_TRUE)
#line 578 "make_hlds_warn.m"
    {
#line 578 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 578 "make_hlds_warn.m"
      {
#line 578 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 578 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "make_hlds_warn.m"
          {
#line 578 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "make_hlds_warn.m"
          }
#line 578 "make_hlds_warn.m"
        else
#line 579 "make_hlds_warn.m"
          {
#line 579 "make_hlds_warn.m"
            MR_Char hlds__make_hlds__make_hlds_warn__C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 579 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__CodeChars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));

#line 580 "make_hlds_warn.m"
            {
#line 580 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(hlds__make_hlds__make_hlds_warn__C_4);
            }
#line 583 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 581 "make_hlds_warn.m"
              {
#line 581 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__NameCharList0_8;

#line 581 "make_hlds_warn.m"
                {
#line 581 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(hlds__make_hlds__make_hlds_warn__CodeChars_5, &hlds__make_hlds__make_hlds_warn__NameCharList0_8, hlds__make_hlds__make_hlds_warn__HeadVar__3_3);
                }
#line 582 "make_hlds_warn.m"
                {
#line 582 "make_hlds_warn.m"
                  MR_Word base;
#line 582 "make_hlds_warn.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "make_hlds_warn.m"
                  *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = base;
#line 582 "make_hlds_warn.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (hlds__make_hlds__make_hlds_warn__C_4));
#line 582 "make_hlds_warn.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NameCharList0_8));
#line 582 "make_hlds_warn.m"
                }
#line 581 "make_hlds_warn.m"
              }
#line 583 "make_hlds_warn.m"
            else
#line 586 "make_hlds_warn.m"
              {
#line 586 "make_hlds_warn.m"
                /* direct tailcall eliminated */
#line 586 "make_hlds_warn.m"
                {
#line 586 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_warn__CodeChars_5;

#line 586 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1;
#line 586 "make_hlds_warn.m"
                }
#line 586 "make_hlds_warn.m"
                continue;
#line 586 "make_hlds_warn.m"
              }
#line 579 "make_hlds_warn.m"
          }
#line 578 "make_hlds_warn.m"
      }
#line 578 "make_hlds_warn.m"
      break;
#line 578 "make_hlds_warn.m"
    }
#line 575 "make_hlds_warn.m"
}

#line 560 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(
#line 560 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__C_Code_3,
#line 560 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__List_4)
#line 560 "make_hlds_warn.m"
{
#line 562 "make_hlds_warn.m"
  {
#line 562 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 562 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__NameCharList_5;
#line 562 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TheRest_6;

#line 563 "make_hlds_warn.m"
    {
#line 563 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(hlds__make_hlds__make_hlds_warn__C_Code_3, &hlds__make_hlds__make_hlds_warn__NameCharList_5, &hlds__make_hlds__make_hlds_warn__TheRest_6);
    }
#line 568 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__NameCharList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__List_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "make_hlds_warn.m"
    else
#line 569 "make_hlds_warn.m"
      {
#line 569 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Names_9;
#line 569 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__Name_10;

#line 570 "make_hlds_warn.m"
        {
#line 570 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(hlds__make_hlds__make_hlds_warn__TheRest_6, &hlds__make_hlds__make_hlds_warn__Names_9);
        }
#line 571 "make_hlds_warn.m"
        {
#line 571 "make_hlds_warn.m"
          mercury__string__from_char_list_2_p_0(hlds__make_hlds__make_hlds_warn__NameCharList_5, &hlds__make_hlds__make_hlds_warn__Name_10);
        }
#line 572 "make_hlds_warn.m"
        {
#line 572 "make_hlds_warn.m"
          MR_Word base;
#line 572 "make_hlds_warn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__List_4 = base;
#line 572 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Name_10));
#line 572 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Names_9));
#line 572 "make_hlds_warn.m"
        }
#line 569 "make_hlds_warn.m"
      }
#line 562 "make_hlds_warn.m"
  }
#line 560 "make_hlds_warn.m"
}

#line 540 "make_hlds_warn.m"
static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(
#line 540 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__UnmentionedVars_3)
#line 540 "make_hlds_warn.m"
{
#line 545 "make_hlds_warn.m"
  {
#line 545 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__UnmentionedVars_3)) == (MR_mktag((MR_Integer) 1)));
#line 545 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_4;
#line 545 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__Var_5;
#line 543 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_6_6;

#line 543 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 543 "make_hlds_warn.m"
      {
#line 543 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__UnmentionedVars_3, (MR_Integer) 0)));
#line 543 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__UnmentionedVars_3, (MR_Integer) 1)));
#line 543 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "make_hlds_warn.m"
      }
#line 545 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 544 "make_hlds_warn.m"
      {
#line 544 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_9_9;
#line 544 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_10_10;

#line 544 "make_hlds_warn.m"
        {
#line 544 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_10_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 544 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_10_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_5));
#line 544 "make_hlds_warn.m"
        }
#line 544 "make_hlds_warn.m"
        {
#line 544 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_9_9, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_10_10));
#line 544 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_9_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[39])));
#line 544 "make_hlds_warn.m"
        }
#line 544 "make_hlds_warn.m"
        {
#line 544 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[30])));
#line 544 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_9_9));
#line 544 "make_hlds_warn.m"
        }
#line 544 "make_hlds_warn.m"
      }
#line 545 "make_hlds_warn.m"
    else
#line 546 "make_hlds_warn.m"
      {
#line 546 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_17_17;
#line 546 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_18_18;
#line 546 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__V_19_19;
#line 546 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__V_20_20;

#line 547 "make_hlds_warn.m"
        {
#line 547 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_20_20 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__make_hlds__make_hlds_warn__UnmentionedVars_3);
        }
#line 547 "make_hlds_warn.m"
        {
#line 547 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_19_19 = parse_tree__error_util__add_quotes_1_f_0(hlds__make_hlds__make_hlds_warn__V_20_20);
        }
#line 547 "make_hlds_warn.m"
        {
#line 547 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_19_19));
#line 547 "make_hlds_warn.m"
        }
#line 547 "make_hlds_warn.m"
        {
#line 547 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_18_18));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[41])));
#line 547 "make_hlds_warn.m"
        }
#line 546 "make_hlds_warn.m"
        {
#line 546 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[33])));
#line 546 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_17_17));
#line 546 "make_hlds_warn.m"
        }
#line 546 "make_hlds_warn.m"
      }
#line 545 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__Pieces_4;
#line 545 "make_hlds_warn.m"
  }
#line 540 "make_hlds_warn.m"
}

#line 511 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(
#line 511 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NameList1_4,
#line 511 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__MaybeArg_5,
#line 511 "make_hlds_warn.m"
  MR_String * hlds__make_hlds__make_hlds_warn__Name_6)
#line 511 "make_hlds_warn.m"
{
#line 514 "make_hlds_warn.m"
  {
#line 514 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__MaybeArg_5)) == (MR_mktag((MR_Integer) 1)));
#line 514 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_8_8;
#line 515 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn___Mode_7;
#line 516 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_9_9;
#line 517 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_10_10;

#line 515 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 515 "make_hlds_warn.m"
      {
#line 515 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__MaybeArg_5, (MR_Integer) 0)));
#line 515 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_8_8, (MR_Integer) 0)));
#line 515 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn___Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_8_8, (MR_Integer) 1)));
#line 516 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_9_9 = (MR_String) "_";
#line 516 "make_hlds_warn.m"
        {
#line 516 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = mercury__string__prefix_2_p_0(*hlds__make_hlds__make_hlds_warn__Name_6, hlds__make_hlds__make_hlds_warn__V_9_9);
        }
#line 516 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 514 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 514 "make_hlds_warn.m"
          {
#line 4270 "hlds.make_hlds.make_hlds_warn.c"
            hlds__make_hlds__make_hlds_warn__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 517 "make_hlds_warn.m"
            {
#line 517 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_10_10, ((MR_Box) (*hlds__make_hlds__make_hlds_warn__Name_6)), hlds__make_hlds__make_hlds_warn__NameList1_4);
            }
#line 517 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 514 "make_hlds_warn.m"
          }
#line 515 "make_hlds_warn.m"
      }
#line 514 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 514 "make_hlds_warn.m"
  }
#line 511 "make_hlds_warn.m"
}

#line 478 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(
#line 478 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Spec_4,
#line 478 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8,
#line 478 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_9)
#line 478 "make_hlds_warn.m"
{
#line 480 "make_hlds_warn.m"
  {
#line 480 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 480 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 480 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Specs_7;
#line 480 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 480 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 480 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 480 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 480 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 480 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));

#line 482 "make_hlds_warn.m"
    {
#line 482 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Specs_7, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_4));
#line 482 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Specs_7, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Specs0_6));
#line 482 "make_hlds_warn.m"
    }
#line 483 "make_hlds_warn.m"
    {
#line 483 "make_hlds_warn.m"
      MR_Word base;
#line 483 "make_hlds_warn.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 483 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_9 = base;
#line 483 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_11_11));
#line 483 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_12_12));
#line 483 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_13_13));
#line 483 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Specs_7));
#line 483 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_14_14));
#line 483 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_15_15));
#line 483 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_16_16));
#line 483 "make_hlds_warn.m"
    }
#line 480 "make_hlds_warn.m"
  }
#line 478 "make_hlds_warn.m"
}

#line 461 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1(
#line 461 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 461 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 461 "make_hlds_warn.m"
{
#line 461 "make_hlds_warn.m"
  {
#line 461 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 461 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 461 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__conv0_HeadVar__3_83;

#line 461 "make_hlds_warn.m"
    {
#line 461 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__conv0_HeadVar__3_83 = hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__461__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 461 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__3_83));
#line 461 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 461 "make_hlds_warn.m"
  }
#line 461 "make_hlds_warn.m"
}

#line 448 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0(
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SingleMulti_7,
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_8,
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__CallId_9,
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
#line 448 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Vars_11,
#line 448 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__Spec_12)
#line 448 "make_hlds_warn.m"
{
#line 452 "make_hlds_warn.m"
  {
#line 452 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81;
#line 452 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__Count_13;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Preamble_14;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__VarStrs0_15;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__VarStrs_16;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__VarsPiece_17;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_19;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Msg_20;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_24_24;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_25_25;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;
#line 452 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_33_33;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_64_64;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_65_65;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_68_68;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_69_69;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_70_70;
#line 452 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_78_78;
#line 464 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_35_35;
#line 464 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_18_18;

#line 456 "make_hlds_warn.m"
#line 456 "make_hlds_warn.m"
    switch (hlds__make_hlds__make_hlds_warn__SingleMulti_7) {
#line 456 "make_hlds_warn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 456 "make_hlds_warn.m"
      case (MR_Integer) 1:
#line 458 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__Count_13 = (MR_String) "more than once";
#line 456 "make_hlds_warn.m"
        break;
#line 456 "make_hlds_warn.m"
      case (MR_Integer) 0:
#line 455 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__Count_13 = (MR_String) "only once";
#line 456 "make_hlds_warn.m"
        break;
#line 456 "make_hlds_warn.m"
    }
#line 460 "make_hlds_warn.m"
    {
#line 460 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 460 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__CallId_9));
#line 460 "make_hlds_warn.m"
    }
#line 460 "make_hlds_warn.m"
    {
#line 460 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_25_25));
#line 460 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[8])));
#line 460 "make_hlds_warn.m"
    }
#line 460 "make_hlds_warn.m"
    {
#line 460 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Preamble_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Preamble_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[29])));
#line 460 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Preamble_14, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_24_24));
#line 460 "make_hlds_warn.m"
    }
#line 4504 "hlds.make_hlds.make_hlds_warn.c"
    hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 461 "make_hlds_warn.m"
    {
#line 461 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 461 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_32_32, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[3]));
#line 461 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1));
#line 461 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 461 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_32_32, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_10));
#line 461 "make_hlds_warn.m"
    }
#line 461 "make_hlds_warn.m"
    {
#line 461 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__VarStrs0_15 = mercury__list__map_2_f_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[1], hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81, hlds__make_hlds__make_hlds_warn__V_32_32, hlds__make_hlds__make_hlds_warn__Vars_11);
    }
#line 462 "make_hlds_warn.m"
    {
#line 462 "make_hlds_warn.m"
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81, hlds__make_hlds__make_hlds_warn__VarStrs0_15, &hlds__make_hlds__make_hlds_warn__VarStrs_16);
    }
#line 463 "make_hlds_warn.m"
    {
#line 463 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_33_33 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__make_hlds__make_hlds_warn__VarStrs_16);
    }
#line 463 "make_hlds_warn.m"
    {
#line 463 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__VarsPiece_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__VarsPiece_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 463 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__VarsPiece_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_33_33));
#line 463 "make_hlds_warn.m"
    }
#line 464 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__VarStrs_16)) == (MR_mktag((MR_Integer) 1)));
#line 464 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 464 "make_hlds_warn.m"
      {
#line 464 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__VarStrs_16, (MR_Integer) 0)));
#line 464 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__VarStrs_16, (MR_Integer) 1)));
#line 464 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 464 "make_hlds_warn.m"
      }
#line 467 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 465 "make_hlds_warn.m"
      {
#line 465 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_38_38;
#line 465 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_39_39;
#line 465 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_42_42;
#line 465 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_43_43;

#line 466 "make_hlds_warn.m"
        {
#line 466 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 466 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Count_13));
#line 466 "make_hlds_warn.m"
        }
#line 466 "make_hlds_warn.m"
        {
#line 466 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_43_43));
#line 466 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[12])));
#line 466 "make_hlds_warn.m"
        }
#line 466 "make_hlds_warn.m"
        {
#line 466 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[36])));
#line 466 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_42_42));
#line 466 "make_hlds_warn.m"
        }
#line 465 "make_hlds_warn.m"
        {
#line 465 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarsPiece_17));
#line 465 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_39_39));
#line 465 "make_hlds_warn.m"
        }
#line 465 "make_hlds_warn.m"
        {
#line 465 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[30])));
#line 465 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_38_38));
#line 465 "make_hlds_warn.m"
        }
#line 465 "make_hlds_warn.m"
      }
#line 467 "make_hlds_warn.m"
    else
#line 468 "make_hlds_warn.m"
      {
#line 468 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_52_52;
#line 468 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_53_53;
#line 468 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_56_56;
#line 468 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_57_57;

#line 469 "make_hlds_warn.m"
        {
#line 469 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Count_13));
#line 469 "make_hlds_warn.m"
        }
#line 469 "make_hlds_warn.m"
        {
#line 469 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_57_57));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[12])));
#line 469 "make_hlds_warn.m"
        }
#line 469 "make_hlds_warn.m"
        {
#line 469 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[37])));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_56_56));
#line 469 "make_hlds_warn.m"
        }
#line 468 "make_hlds_warn.m"
        {
#line 468 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarsPiece_17));
#line 468 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_53_53));
#line 468 "make_hlds_warn.m"
        }
#line 468 "make_hlds_warn.m"
        {
#line 468 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[33])));
#line 468 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_52_52));
#line 468 "make_hlds_warn.m"
        }
#line 468 "make_hlds_warn.m"
      }
#line 473 "make_hlds_warn.m"
    {
#line 473 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_warn__Preamble_14, hlds__make_hlds__make_hlds_warn__Pieces_19);
    }
#line 473 "make_hlds_warn.m"
    {
#line 473 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 473 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_70_70));
#line 473 "make_hlds_warn.m"
    }
#line 473 "make_hlds_warn.m"
    {
#line 473 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_69_69));
#line 473 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "make_hlds_warn.m"
    }
#line 472 "make_hlds_warn.m"
    {
#line 472 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_65_65, 0) = ((MR_Box) (((MR_Integer) 5 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 472 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_68_68));
#line 472 "make_hlds_warn.m"
    }
#line 473 "make_hlds_warn.m"
    {
#line 473 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_65_65));
#line 473 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "make_hlds_warn.m"
    }
#line 471 "make_hlds_warn.m"
    {
#line 471 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 471 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_20, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_8));
#line 471 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_64_64));
#line 471 "make_hlds_warn.m"
    }
#line 476 "make_hlds_warn.m"
    {
#line 476 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_20));
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "make_hlds_warn.m"
    }
#line 476 "make_hlds_warn.m"
    {
#line 476 "make_hlds_warn.m"
      MR_Word base;
#line 476 "make_hlds_warn.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 476 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__Spec_12 = base;
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[0])));
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_78_78));
#line 476 "make_hlds_warn.m"
    }
#line 452 "make_hlds_warn.m"
  }
#line 448 "make_hlds_warn.m"
}

#line 427 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2(
#line 427 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 427 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 427 "make_hlds_warn.m"
{
#line 427 "make_hlds_warn.m"
  {
#line 427 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 427 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;

#line 427 "make_hlds_warn.m"
    {
#line 427 "make_hlds_warn.m"
      return hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 427 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 427 "make_hlds_warn.m"
  }
#line 427 "make_hlds_warn.m"
}

#line 399 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1(
#line 399 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 399 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 399 "make_hlds_warn.m"
{
#line 399 "make_hlds_warn.m"
  {
#line 399 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 399 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;

#line 399 "make_hlds_warn.m"
    {
#line 399 "make_hlds_warn.m"
      return hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 399 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 399 "make_hlds_warn.m"
  }
#line 399 "make_hlds_warn.m"
}

#line 385 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalVars_7,
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_8,
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_9,
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
#line 385 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25,
#line 385 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26)
#line 385 "make_hlds_warn.m"
{
#line 389 "make_hlds_warn.m"
  {
#line 389 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 389 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_95_95;
#line 389 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 389 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__CallId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 389 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Context_14;
#line 389 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__SingleVars_15;
#line 389 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__MultiVars_19;
#line 389 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_27_27;
#line 389 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31;
#line 389 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_35_35;
#line 395 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 395 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 395 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 395 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 395 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));

#line 397 "make_hlds_warn.m"
    {
#line 397 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8);
    }
#line 399 "make_hlds_warn.m"
    {
#line 399 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 399 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[1]));
#line 399 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1));
#line 399 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 399 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NonLocals_9));
#line 399 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__QuantVars_10));
#line 399 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_12));
#line 399 "make_hlds_warn.m"
    }
#line 4902 "hlds.make_hlds.make_hlds_warn.c"
    hlds__make_hlds__make_hlds_warn__TypeInfo_95_95 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[1];
#line 399 "make_hlds_warn.m"
    {
#line 399 "make_hlds_warn.m"
      mercury__list__filter_3_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_95_95, hlds__make_hlds__make_hlds_warn__V_27_27, hlds__make_hlds__make_hlds_warn__GoalVars_7, &hlds__make_hlds__make_hlds_warn__SingleVars_15);
    }
#line 404 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__SingleVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "make_hlds_warn.m"
    if (!(hlds__make_hlds__make_hlds_warn__succeeded))
#line 405 "make_hlds_warn.m"
      {
#line 405 "make_hlds_warn.m"
        {
#line 405 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8, (MR_Integer) 12);
        }
#line 405 "make_hlds_warn.m"
      }
#line 409 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 409 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25;
#line 409 "make_hlds_warn.m"
    else
#line 416 "make_hlds_warn.m"
      {
#line 410 "make_hlds_warn.m"
        {
#line 410 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8, (MR_Integer) 1);
        }
#line 416 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 411 "make_hlds_warn.m"
          {
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__SingleHeadVars0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__SingleHeadVars_17;
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30;
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 411 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_60_60;
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_61_61;
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_62_62;
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_63_63;
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_65_65;
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_66_66;
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_64_64;
#line 415 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_67_67;
#line 415 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_68_68;
#line 415 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_69_69;
#line 415 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_70_70;
#line 415 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_71_71;
#line 415 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_72_72;
#line 415 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_73_73;

#line 412 "make_hlds_warn.m"
            {
#line 412 "make_hlds_warn.m"
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__SingleVars_15, hlds__make_hlds__make_hlds_warn__SingleHeadVars0_16, &hlds__make_hlds__make_hlds_warn__SingleHeadVars_17);
            }
#line 414 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 414 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 414 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 414 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 414 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 414 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 414 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 414 "make_hlds_warn.m"
            {
#line 414 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 414 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_60_60));
#line 414 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_61_61));
#line 414 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_62_62));
#line 414 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_63_63));
#line 414 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SingleHeadVars_17));
#line 414 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_65_65));
#line 414 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_66_66));
#line 414 "make_hlds_warn.m"
            }
#line 415 "make_hlds_warn.m"
            {
#line 415 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__V_32_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8);
            }
#line 415 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 0)));
#line 415 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 1)));
#line 415 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 2)));
#line 415 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 3)));
#line 415 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 4)));
#line 415 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 5)));
#line 415 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 6)));
#line 415 "make_hlds_warn.m"
            {
#line 415 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 415 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_67_67));
#line 415 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_68_68));
#line 415 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_69_69));
#line 415 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_70_70));
#line 415 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_71_71));
#line 415 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_72_72));
#line 415 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_32_32));
#line 415 "make_hlds_warn.m"
            }
#line 411 "make_hlds_warn.m"
          }
#line 416 "make_hlds_warn.m"
        else
#line 418 "make_hlds_warn.m"
          {
#line 418 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__SingleSpec_18;

#line 417 "make_hlds_warn.m"
            {
#line 417 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 0, hlds__make_hlds__make_hlds_warn__Context_14, hlds__make_hlds__make_hlds_warn__CallId_13, hlds__make_hlds__make_hlds_warn__VarSet_12, hlds__make_hlds__make_hlds_warn__SingleVars_15, &hlds__make_hlds__make_hlds_warn__SingleSpec_18);
            }
#line 419 "make_hlds_warn.m"
            {
#line 419 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(hlds__make_hlds__make_hlds_warn__SingleSpec_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31);
            }
#line 418 "make_hlds_warn.m"
          }
#line 416 "make_hlds_warn.m"
      }
#line 427 "make_hlds_warn.m"
    {
#line 427 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 427 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[2]));
#line 427 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2));
#line 427 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NonLocals_9));
#line 427 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_12));
#line 427 "make_hlds_warn.m"
    }
#line 427 "make_hlds_warn.m"
    {
#line 427 "make_hlds_warn.m"
      mercury__list__filter_3_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_95_95, hlds__make_hlds__make_hlds_warn__V_35_35, hlds__make_hlds__make_hlds_warn__GoalVars_7, &hlds__make_hlds__make_hlds_warn__MultiVars_19);
    }
#line 430 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__MultiVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31;
#line 430 "make_hlds_warn.m"
    else
#line 437 "make_hlds_warn.m"
      {
#line 432 "make_hlds_warn.m"
        {
#line 432 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8, (MR_Integer) 1);
        }
#line 437 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 433 "make_hlds_warn.m"
          {
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 5)));
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVars_23;
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37;
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_39_39;
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 0)));
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 1)));
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 2)));
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 3)));
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 4)));
#line 433 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 6)));
#line 435 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_80_80;
#line 435 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_81_81;
#line 435 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_82_82;
#line 435 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_83_83;
#line 435 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_84_84;
#line 435 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_86_86;
#line 435 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_85_85;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_87_87;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_88_88;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_89_89;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_90_90;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_91_91;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_92_92;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_93_93;

#line 434 "make_hlds_warn.m"
            {
#line 434 "make_hlds_warn.m"
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__MultiVars_19, hlds__make_hlds__make_hlds_warn__MultiHeadVars0_22, &hlds__make_hlds__make_hlds_warn__MultiHeadVars_23);
            }
#line 435 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 0)));
#line 435 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 1)));
#line 435 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 2)));
#line 435 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 3)));
#line 435 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 4)));
#line 435 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 5)));
#line 435 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 6)));
#line 435 "make_hlds_warn.m"
            {
#line 435 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 435 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_80_80));
#line 435 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_81_81));
#line 435 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_82_82));
#line 435 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_83_83));
#line 435 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_84_84));
#line 435 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__MultiHeadVars_23));
#line 435 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_86_86));
#line 435 "make_hlds_warn.m"
            }
#line 436 "make_hlds_warn.m"
            {
#line 436 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__V_39_39 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8);
            }
#line 436 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
#line 436 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
#line 436 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
#line 436 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
#line 436 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
#line 436 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
#line 436 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 6)));
#line 436 "make_hlds_warn.m"
            {
#line 436 "make_hlds_warn.m"
              MR_Word base;
#line 436 "make_hlds_warn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 436 "make_hlds_warn.m"
              *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26 = base;
#line 436 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_87_87));
#line 436 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_88_88));
#line 436 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_89_89));
#line 436 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_90_90));
#line 436 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_91_91));
#line 436 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_92_92));
#line 436 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_39_39));
#line 436 "make_hlds_warn.m"
            }
#line 433 "make_hlds_warn.m"
          }
#line 437 "make_hlds_warn.m"
        else
#line 439 "make_hlds_warn.m"
          {
#line 439 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__MultiSpec_24;

#line 438 "make_hlds_warn.m"
            {
#line 438 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 1, hlds__make_hlds__make_hlds_warn__Context_14, hlds__make_hlds__make_hlds_warn__CallId_13, hlds__make_hlds__make_hlds_warn__VarSet_12, hlds__make_hlds__make_hlds_warn__MultiVars_19, &hlds__make_hlds__make_hlds_warn__MultiSpec_24);
            }
#line 440 "make_hlds_warn.m"
            {
#line 440 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(hlds__make_hlds__make_hlds_warn__MultiSpec_24, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26);
#line 440 "make_hlds_warn.m"
              return;
            }
#line 439 "make_hlds_warn.m"
          }
#line 437 "make_hlds_warn.m"
      }
#line 389 "make_hlds_warn.m"
  }
#line 385 "make_hlds_warn.m"
}

#line 343 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__X_7,
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__RHS_8,
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_9,
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
#line 343 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29,
#line 343 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30)
#line 343 "make_hlds_warn.m"
{
#line 349 "make_hlds_warn.m"
  {
#line 349 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 349 "make_hlds_warn.m"
#line 349 "make_hlds_warn.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__RHS_8)) {
#line 349 "make_hlds_warn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 349 "make_hlds_warn.m"
      case (MR_Integer) 0:
#line 349 "make_hlds_warn.m"
        {
#line 349 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)));
#line 349 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_13;
#line 349 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_38_38;
#line 349 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_40_40;

#line 350 "make_hlds_warn.m"
          {
#line 350 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
          }
#line 351 "make_hlds_warn.m"
          {
#line 351 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Y_12));
#line 351 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "make_hlds_warn.m"
          }
#line 351 "make_hlds_warn.m"
          {
#line 351 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__X_7));
#line 351 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_40_40));
#line 351 "make_hlds_warn.m"
          }
#line 351 "make_hlds_warn.m"
          {
#line 351 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__V_38_38, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_13, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);
#line 351 "make_hlds_warn.m"
            return;
          }
#line 349 "make_hlds_warn.m"
        }
#line 349 "make_hlds_warn.m"
        break;
#line 349 "make_hlds_warn.m"
      case (MR_Integer) 1:
#line 354 "make_hlds_warn.m"
        {
#line 354 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__Ys_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 2)));
#line 354 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_36_36;
#line 354 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_42;
#line 354 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)));
#line 354 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 1)));

#line 355 "make_hlds_warn.m"
          {
#line 355 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
          }
#line 356 "make_hlds_warn.m"
          {
#line 356 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__X_7));
#line 356 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Ys_16));
#line 356 "make_hlds_warn.m"
          }
#line 356 "make_hlds_warn.m"
          {
#line 356 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__V_36_36, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_42, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);
#line 356 "make_hlds_warn.m"
            return;
          }
#line 354 "make_hlds_warn.m"
        }
#line 349 "make_hlds_warn.m"
        break;
#line 349 "make_hlds_warn.m"
      case (MR_Integer) 2:
#line 360 "make_hlds_warn.m"
        {
#line 360 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__LambdaVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 3)));
#line 360 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__LambdaGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 6)));
#line 360 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__LambdaGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__LambdaGoal_25, (MR_Integer) 1)));
#line 360 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__LambdaNonLocals_28;
#line 360 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31;
#line 360 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;
#line 360 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_33_33;
#line 360 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_43;
#line 359 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___Purity_17 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 359 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___Groundness_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 359 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___PredOrFunc_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 359 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___NonLocals_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 2)));
#line 359 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 4)));
#line 359 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 5)));
#line 362 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__LambdaGoal_25, (MR_Integer) 0)));

#line 363 "make_hlds_warn.m"
          {
#line 363 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__LambdaNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__LambdaGoalInfo_27);
          }
#line 364 "make_hlds_warn.m"
          {
#line 364 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__LambdaVars_22, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__LambdaNonLocals_28, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31);
          }
#line 369 "make_hlds_warn.m"
          {
#line 369 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
          }
#line 370 "make_hlds_warn.m"
          {
#line 370 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__X_7));
#line 370 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "make_hlds_warn.m"
          }
#line 370 "make_hlds_warn.m"
          {
#line 370 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__V_32_32, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_43, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_33_33);
          }
#line 373 "make_hlds_warn.m"
          {
#line 373 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__LambdaGoal_25, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_33_33, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);
#line 373 "make_hlds_warn.m"
            return;
          }
#line 360 "make_hlds_warn.m"
        }
#line 349 "make_hlds_warn.m"
        break;
#line 349 "make_hlds_warn.m"
    }
#line 349 "make_hlds_warn.m"
  }
#line 343 "make_hlds_warn.m"
}

#line 334 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(
#line 334 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 334 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
#line 334 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
#line 334 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4)
#line 334 "make_hlds_warn.m"
{
#line 337 "make_hlds_warn.m"
  while (MR_TRUE)
#line 337 "make_hlds_warn.m"
    {
#line 337 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 337 "make_hlds_warn.m"
      {
#line 337 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 337 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3;
#line 337 "make_hlds_warn.m"
        else
#line 338 "make_hlds_warn.m"
          {
#line 338 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 338 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));
#line 338 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Case_9, (MR_Integer) 2)));
#line 338 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_18_18;
#line 339 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn___MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Case_9, (MR_Integer) 0)));
#line 339 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn___OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Case_9, (MR_Integer) 1)));

#line 340 "make_hlds_warn.m"
            {
#line 340 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Goal_15, hlds__make_hlds__make_hlds_warn__QuantVars_2, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_18_18);
            }
#line 341 "make_hlds_warn.m"
            /* direct tailcall eliminated */
#line 341 "make_hlds_warn.m"
            {
#line 341 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_warn__Cases_10;
#line 341 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_18_18;

#line 341 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_3;
#line 341 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1;
#line 341 "make_hlds_warn.m"
            }
#line 341 "make_hlds_warn.m"
            continue;
#line 338 "make_hlds_warn.m"
          }
#line 337 "make_hlds_warn.m"
      }
#line 337 "make_hlds_warn.m"
      break;
#line 337 "make_hlds_warn.m"
    }
#line 334 "make_hlds_warn.m"
}

#line 326 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(
#line 326 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 326 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
#line 326 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
#line 326 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4)
#line 326 "make_hlds_warn.m"
{
#line 329 "make_hlds_warn.m"
  while (MR_TRUE)
#line 329 "make_hlds_warn.m"
    {
#line 329 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 329 "make_hlds_warn.m"
      {
#line 329 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 329 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3;
#line 329 "make_hlds_warn.m"
        else
#line 330 "make_hlds_warn.m"
          {
#line 330 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 330 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));
#line 330 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_15;

#line 331 "make_hlds_warn.m"
            {
#line 331 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Goal_9, hlds__make_hlds__make_hlds_warn__QuantVars_2, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_15);
            }
#line 332 "make_hlds_warn.m"
            /* direct tailcall eliminated */
#line 332 "make_hlds_warn.m"
            {
#line 332 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_warn__Goals_10;
#line 332 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_15;

#line 332 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_3;
#line 332 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1;
#line 332 "make_hlds_warn.m"
            }
#line 332 "make_hlds_warn.m"
            continue;
#line 330 "make_hlds_warn.m"
          }
#line 329 "make_hlds_warn.m"
      }
#line 329 "make_hlds_warn.m"
      break;
#line 329 "make_hlds_warn.m"
    }
#line 326 "make_hlds_warn.m"
}

#line 304 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2(
#line 304 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 304 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 304 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 304 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_3)
#line 304 "make_hlds_warn.m"
{
#line 304 "make_hlds_warn.m"
  {
#line 304 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 304 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__conv1_STATE_VARIABLE_Info_9;

#line 304 "make_hlds_warn.m"
    {
#line 304 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2), &hlds__make_hlds__make_hlds_warn__conv1_STATE_VARIABLE_Info_9);
    }
#line 304 "make_hlds_warn.m"
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv1_STATE_VARIABLE_Info_9));
#line 304 "make_hlds_warn.m"
  }
#line 304 "make_hlds_warn.m"
}

#line 300 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1(
#line 300 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 300 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 300 "make_hlds_warn.m"
{
#line 300 "make_hlds_warn.m"
  {
#line 300 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 300 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 300 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_HeadVar__2_2;

#line 300 "make_hlds_warn.m"
    {
#line 300 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 300 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__2_2));
#line 300 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 300 "make_hlds_warn.m"
  }
#line 300 "make_hlds_warn.m"
}

#line 201 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(
#line 201 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_5,
#line 201 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
#line 201 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93,
#line 201 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94)
#line 201 "make_hlds_warn.m"
{
#line 204 "make_hlds_warn.m"
  while (MR_TRUE)
#line 204 "make_hlds_warn.m"
    {
#line 204 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 204 "make_hlds_warn.m"
      {
#line 204 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 204 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Goal_5, (MR_Integer) 0)));
#line 204 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Goal_5, (MR_Integer) 1)));

#line 209 "make_hlds_warn.m"
#line 209 "make_hlds_warn.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__GoalExpr_8)) {
#line 209 "make_hlds_warn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 209 "make_hlds_warn.m"
          case (MR_Integer) 0:
#line 216 "make_hlds_warn.m"
            {
#line 216 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_warn__GoalExpr_8), (MR_Integer) 0);

#line 217 "make_hlds_warn.m"
              /* direct tailcall eliminated */
#line 217 "make_hlds_warn.m"
              {
#line 217 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_15;

#line 217 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 217 "make_hlds_warn.m"
              }
#line 217 "make_hlds_warn.m"
              continue;
#line 216 "make_hlds_warn.m"
            }
#line 209 "make_hlds_warn.m"
            break;
#line 209 "make_hlds_warn.m"
          case (MR_Integer) 1:
#line 293 "make_hlds_warn.m"
            {
#line 293 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 0)));
#line 293 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__RHS_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 293 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 293 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 293 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));

#line 294 "make_hlds_warn.m"
              {
#line 294 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(hlds__make_hlds__make_hlds_warn__Var_63, hlds__make_hlds__make_hlds_warn__RHS_64, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
#line 294 "make_hlds_warn.m"
                return;
              }
#line 293 "make_hlds_warn.m"
            }
#line 209 "make_hlds_warn.m"
            break;
#line 209 "make_hlds_warn.m"
          case (MR_Integer) 2:
#line 283 "make_hlds_warn.m"
            {
#line 283 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 283 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_137;
#line 283 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 0)));
#line 283 "make_hlds_warn.m"
              MR_Integer hlds__make_hlds__make_hlds_warn__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 283 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 283 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
#line 283 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 5)));

#line 284 "make_hlds_warn.m"
              {
#line 284 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__NonLocals_137 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
              }
#line 285 "make_hlds_warn.m"
              {
#line 285 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Args_53, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_137, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
#line 285 "make_hlds_warn.m"
                return;
              }
#line 283 "make_hlds_warn.m"
            }
#line 209 "make_hlds_warn.m"
            break;
#line 209 "make_hlds_warn.m"
          case (MR_Integer) 3:
#line 209 "make_hlds_warn.m"
#line 209 "make_hlds_warn.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 0)))) {
#line 209 "make_hlds_warn.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 209 "make_hlds_warn.m"
              case (MR_Integer) 0:
#line 287 "make_hlds_warn.m"
                {
#line 287 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__GenericCall_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 287 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Args0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 287 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Args1_62;
#line 287 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_138;
#line 287 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Args_139;
#line 287 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 287 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
#line 287 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 5)));

#line 288 "make_hlds_warn.m"
                  {
#line 288 "make_hlds_warn.m"
                    hlds__goal_util__generic_call_vars_2_p_0(hlds__make_hlds__make_hlds_warn__GenericCall_57, &hlds__make_hlds__make_hlds_warn__Args1_62);
                  }
#line 289 "make_hlds_warn.m"
                  {
#line 289 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Args_139 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[1], hlds__make_hlds__make_hlds_warn__Args0_58, hlds__make_hlds__make_hlds_warn__Args1_62);
                  }
#line 290 "make_hlds_warn.m"
                  {
#line 290 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__NonLocals_138 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
                  }
#line 291 "make_hlds_warn.m"
                  {
#line 291 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Args_139, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_138, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
#line 291 "make_hlds_warn.m"
                    return;
                  }
#line 287 "make_hlds_warn.m"
                }
#line 209 "make_hlds_warn.m"
                break;
#line 209 "make_hlds_warn.m"
              case (MR_Integer) 1:
#line 297 "make_hlds_warn.m"
                {
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Attrs_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 297 "make_hlds_warn.m"
                  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__PragmaImpl_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 7)));
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Context_74;
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Lang_75;
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__NamesModes_76;
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__PragmaSpecs_77;
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_106_106;
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Args_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
#line 297 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_144_144;
#line 296 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 5)));
#line 296 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 6)));
#line 301 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_145_145;
#line 301 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_146_146;
#line 301 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_147_147;
#line 301 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_148_148;
#line 301 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_149_149;
#line 304 "make_hlds_warn.m"
                  MR_Box hlds__make_hlds__make_hlds_warn__conv2_STATE_VARIABLE_Info_94;

#line 298 "make_hlds_warn.m"
                  {
#line 298 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Context_74 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
                  }
#line 299 "make_hlds_warn.m"
                  {
#line 299 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Lang_75 = parse_tree__prog_data__get_foreign_language_1_f_0(hlds__make_hlds__make_hlds_warn__Attrs_68);
                  }
#line 300 "make_hlds_warn.m"
                  {
#line 300 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__NamesModes_76 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[0], (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[1], hlds__make_hlds__make_hlds_warn__Args_140);
                  }
#line 301 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 0)));
#line 301 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 1)));
#line 301 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 2)));
#line 301 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 3)));
#line 301 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 4)));
#line 301 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 5)));
#line 301 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 6)));
#line 301 "make_hlds_warn.m"
                  {
#line 301 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(hlds__make_hlds__make_hlds_warn__V_106_106, hlds__make_hlds__make_hlds_warn__PragmaImpl_73, hlds__make_hlds__make_hlds_warn__Lang_75, hlds__make_hlds__make_hlds_warn__NamesModes_76, hlds__make_hlds__make_hlds_warn__Context_74, hlds__make_hlds__make_hlds_warn__V_144_144, hlds__make_hlds__make_hlds_warn__PredId_69, hlds__make_hlds__make_hlds_warn__ProcId_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_warn__PragmaSpecs_77);
                  }
#line 304 "make_hlds_warn.m"
                  {
#line 304 "make_hlds_warn.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[2], hlds__make_hlds__make_hlds_warn__PragmaSpecs_77, ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93)), &hlds__make_hlds__make_hlds_warn__conv2_STATE_VARIABLE_Info_94);
                  }
#line 304 "make_hlds_warn.m"
                  *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94 = ((MR_Word) hlds__make_hlds__make_hlds_warn__conv2_STATE_VARIABLE_Info_94);
#line 297 "make_hlds_warn.m"
                }
#line 209 "make_hlds_warn.m"
                break;
#line 209 "make_hlds_warn.m"
              case (MR_Integer) 2:
#line 207 "make_hlds_warn.m"
                {
#line 207 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 207 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn___ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

#line 208 "make_hlds_warn.m"
                  {
#line 208 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__Goals_11, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
#line 208 "make_hlds_warn.m"
                    return;
                  }
#line 207 "make_hlds_warn.m"
                }
#line 209 "make_hlds_warn.m"
                break;
#line 209 "make_hlds_warn.m"
              case (MR_Integer) 3:
#line 210 "make_hlds_warn.m"
                {
#line 210 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Goals_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

#line 211 "make_hlds_warn.m"
                  {
#line 211 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__Goals_131, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
#line 211 "make_hlds_warn.m"
                    return;
                  }
#line 210 "make_hlds_warn.m"
                }
#line 209 "make_hlds_warn.m"
                break;
#line 209 "make_hlds_warn.m"
              case (MR_Integer) 4:
#line 213 "make_hlds_warn.m"
                {
#line 213 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 213 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn___Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 213 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn___CanFail_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));

#line 214 "make_hlds_warn.m"
                  {
#line 214 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(hlds__make_hlds__make_hlds_warn__Cases_14, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
#line 214 "make_hlds_warn.m"
                    return;
                  }
#line 213 "make_hlds_warn.m"
                }
#line 209 "make_hlds_warn.m"
                break;
#line 209 "make_hlds_warn.m"
              case (MR_Integer) 5:
#line 219 "make_hlds_warn.m"
                {
#line 219 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Reason_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 219 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));

#line 237 "make_hlds_warn.m"
#line 237 "make_hlds_warn.m"
                  switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Reason_16)) {
#line 237 "make_hlds_warn.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 237 "make_hlds_warn.m"
                    case (MR_Integer) 0:
#line 224 "make_hlds_warn.m"
                      {
#line 224 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)));
#line 224 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__SubQuantVars_23;
#line 224 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_125;

#line 232 "make_hlds_warn.m"
                        if ((hlds__make_hlds__make_hlds_warn__Vars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 233 "make_hlds_warn.m"
                          {
#line 234 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__SubQuantVars_23 = hlds__make_hlds__make_hlds_warn__QuantVars_6;
#line 233 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_125 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93;
#line 233 "make_hlds_warn.m"
                          }
#line 232 "make_hlds_warn.m"
                        else
#line 226 "make_hlds_warn.m"
                          {
#line 226 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_156;
#line 226 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__SubGoalVars_21;
#line 226 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__EmptySet_22;

#line 227 "make_hlds_warn.m"
                            {
#line 227 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__SubGoalVars_21 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__SubGoal_132);
                            }
#line 6073 "hlds.make_hlds.make_hlds_warn.c"
                            hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_156 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 228 "make_hlds_warn.m"
                            {
#line 228 "make_hlds_warn.m"
                              parse_tree__set_of_var__init_1_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_156, &hlds__make_hlds__make_hlds_warn__EmptySet_22);
                            }
#line 229 "make_hlds_warn.m"
                            {
#line 229 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Vars_17, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__EmptySet_22, hlds__make_hlds__make_hlds_warn__SubGoalVars_21, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_125);
                            }
#line 231 "make_hlds_warn.m"
                            {
#line 231 "make_hlds_warn.m"
                              parse_tree__set_of_var__insert_list_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_156, hlds__make_hlds__make_hlds_warn__Vars_17, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__SubQuantVars_23);
                            }
#line 226 "make_hlds_warn.m"
                          }
#line 236 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 236 "make_hlds_warn.m"
                        {
#line 236 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_132;
#line 236 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__QuantVars__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__SubQuantVars_23;
#line 236 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_125;

#line 236 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93;
#line 236 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__QuantVars_6 = hlds__make_hlds__make_hlds_warn__QuantVars__tmp_copy_6;
#line 236 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 236 "make_hlds_warn.m"
                        }
#line 236 "make_hlds_warn.m"
                        continue;
#line 224 "make_hlds_warn.m"
                      }
#line 237 "make_hlds_warn.m"
                      break;
#line 237 "make_hlds_warn.m"
                    case (MR_Integer) 1:
#line 224 "make_hlds_warn.m"
                      {
#line 224 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Vars_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)));
#line 224 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__SubQuantVars_187;
#line 224 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_188;
#line 223 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 1)));

#line 232 "make_hlds_warn.m"
                        if ((hlds__make_hlds__make_hlds_warn__Vars_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 233 "make_hlds_warn.m"
                          {
#line 234 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__SubQuantVars_187 = hlds__make_hlds__make_hlds_warn__QuantVars_6;
#line 233 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_188 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93;
#line 233 "make_hlds_warn.m"
                          }
#line 232 "make_hlds_warn.m"
                        else
#line 226 "make_hlds_warn.m"
                          {
#line 226 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_176;
#line 226 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__SubGoalVars_174;
#line 226 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__EmptySet_175;

#line 227 "make_hlds_warn.m"
                            {
#line 227 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__SubGoalVars_174 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__SubGoal_132);
                            }
#line 6156 "hlds.make_hlds.make_hlds_warn.c"
                            hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_176 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 228 "make_hlds_warn.m"
                            {
#line 228 "make_hlds_warn.m"
                              parse_tree__set_of_var__init_1_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_176, &hlds__make_hlds__make_hlds_warn__EmptySet_175);
                            }
#line 229 "make_hlds_warn.m"
                            {
#line 229 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Vars_182, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__EmptySet_175, hlds__make_hlds__make_hlds_warn__SubGoalVars_174, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_188);
                            }
#line 231 "make_hlds_warn.m"
                            {
#line 231 "make_hlds_warn.m"
                              parse_tree__set_of_var__insert_list_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_176, hlds__make_hlds__make_hlds_warn__Vars_182, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__SubQuantVars_187);
                            }
#line 226 "make_hlds_warn.m"
                          }
#line 236 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 236 "make_hlds_warn.m"
                        {
#line 236 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_132;
#line 236 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__QuantVars__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__SubQuantVars_187;
#line 236 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_188;

#line 236 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93;
#line 236 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__QuantVars_6 = hlds__make_hlds__make_hlds_warn__QuantVars__tmp_copy_6;
#line 236 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 236 "make_hlds_warn.m"
                        }
#line 236 "make_hlds_warn.m"
                        continue;
#line 224 "make_hlds_warn.m"
                      }
#line 237 "make_hlds_warn.m"
                      break;
#line 237 "make_hlds_warn.m"
                    case (MR_Integer) 2:
#line 246 "make_hlds_warn.m"
                      {
#line 246 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 246 "make_hlds_warn.m"
                        {
#line 246 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_132;

#line 246 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 246 "make_hlds_warn.m"
                        }
#line 246 "make_hlds_warn.m"
                        continue;
#line 246 "make_hlds_warn.m"
                      }
#line 237 "make_hlds_warn.m"
                      break;
#line 237 "make_hlds_warn.m"
                    case (MR_Integer) 3:
#line 237 "make_hlds_warn.m"
#line 237 "make_hlds_warn.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)))) {
#line 237 "make_hlds_warn.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 237 "make_hlds_warn.m"
                        case (MR_Integer) 0:
#line 237 "make_hlds_warn.m"
                        case (MR_Integer) 1:
#line 237 "make_hlds_warn.m"
                        case (MR_Integer) 2:
#line 237 "make_hlds_warn.m"
                        case (MR_Integer) 3:
#line 237 "make_hlds_warn.m"
                        case (MR_Integer) 4:
#line 237 "make_hlds_warn.m"
                        case (MR_Integer) 6:
#line 246 "make_hlds_warn.m"
                          {
#line 246 "make_hlds_warn.m"
                            /* direct tailcall eliminated */
#line 246 "make_hlds_warn.m"
                            {
#line 246 "make_hlds_warn.m"
                              MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_132;

#line 246 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 246 "make_hlds_warn.m"
                            }
#line 246 "make_hlds_warn.m"
                            continue;
#line 246 "make_hlds_warn.m"
                          }
#line 237 "make_hlds_warn.m"
                          break;
#line 237 "make_hlds_warn.m"
                        case (MR_Integer) 5:
#line 248 "make_hlds_warn.m"
                          {
#line 248 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__TermVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 1)));
#line 248 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_38;
#line 248 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__V_121_121;
#line 248 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn___Kind_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 2)));

#line 253 "make_hlds_warn.m"
                            {
#line 253 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__NonLocals_38 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
                            }
#line 254 "make_hlds_warn.m"
                            {
#line 254 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "make_hlds_warn.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__TermVar_36));
#line 254 "make_hlds_warn.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "make_hlds_warn.m"
                            }
#line 254 "make_hlds_warn.m"
                            {
#line 254 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__V_121_121, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_38, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
#line 254 "make_hlds_warn.m"
                              return;
                            }
#line 248 "make_hlds_warn.m"
                          }
#line 237 "make_hlds_warn.m"
                          break;
#line 237 "make_hlds_warn.m"
                        case (MR_Integer) 7:
#line 257 "make_hlds_warn.m"
                          {
#line 260 "make_hlds_warn.m"
                            {
#line 260 "make_hlds_warn.m"
                              mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.make_hlds_warn", (MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal\'/4", (MR_String) "loop_control");
#line 260 "make_hlds_warn.m"
                              return;
                            }
#line 257 "make_hlds_warn.m"
                          }
#line 237 "make_hlds_warn.m"
                          break;
#line 237 "make_hlds_warn.m"
                      }
#line 237 "make_hlds_warn.m"
                      break;
#line 237 "make_hlds_warn.m"
                  }
#line 219 "make_hlds_warn.m"
                }
#line 209 "make_hlds_warn.m"
                break;
#line 209 "make_hlds_warn.m"
              case (MR_Integer) 6:
#line 263 "make_hlds_warn.m"
                {
#line 263 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Cond_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 263 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Then_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 263 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Else_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
#line 263 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__CondThenQuantVars_50;
#line 263 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_114_114;
#line 263 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_115_115;
#line 263 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116;
#line 263 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Vars_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

#line 275 "make_hlds_warn.m"
                  if ((hlds__make_hlds__make_hlds_warn__Vars_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_114_114 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93;
#line 275 "make_hlds_warn.m"
                  else
#line 268 "make_hlds_warn.m"
                    {
#line 268 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_157_157;
#line 268 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__CondVars_47;
#line 268 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__ThenVars_48;
#line 268 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__CondThenVars_49;
#line 268 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__EmptySet_133;

#line 269 "make_hlds_warn.m"
                      {
#line 269 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__CondVars_47 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__Cond_42);
                      }
#line 270 "make_hlds_warn.m"
                      {
#line 270 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__ThenVars_48 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__Then_43);
                      }
#line 6373 "hlds.make_hlds.make_hlds_warn.c"
                      hlds__make_hlds__make_hlds_warn__TypeCtorInfo_157_157 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 271 "make_hlds_warn.m"
                      {
#line 271 "make_hlds_warn.m"
                        parse_tree__set_of_var__union_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_157_157, hlds__make_hlds__make_hlds_warn__CondVars_47, hlds__make_hlds__make_hlds_warn__ThenVars_48, &hlds__make_hlds__make_hlds_warn__CondThenVars_49);
                      }
#line 272 "make_hlds_warn.m"
                      {
#line 272 "make_hlds_warn.m"
                        parse_tree__set_of_var__init_1_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_157_157, &hlds__make_hlds__make_hlds_warn__EmptySet_133);
                      }
#line 273 "make_hlds_warn.m"
                      {
#line 273 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Vars_135, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__EmptySet_133, hlds__make_hlds__make_hlds_warn__CondThenVars_49, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_114_114);
                      }
#line 268 "make_hlds_warn.m"
                    }
#line 278 "make_hlds_warn.m"
                  {
#line 278 "make_hlds_warn.m"
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__Vars_135, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__CondThenQuantVars_50);
                  }
#line 279 "make_hlds_warn.m"
                  {
#line 279 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Cond_42, hlds__make_hlds__make_hlds_warn__CondThenQuantVars_50, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_114_114, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_115_115);
                  }
#line 280 "make_hlds_warn.m"
                  {
#line 280 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Then_43, hlds__make_hlds__make_hlds_warn__CondThenQuantVars_50, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_115_115, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116);
                  }
#line 281 "make_hlds_warn.m"
                  /* direct tailcall eliminated */
#line 281 "make_hlds_warn.m"
                  {
#line 281 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__Else_44;
#line 281 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116;

#line 281 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93;
#line 281 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 281 "make_hlds_warn.m"
                  }
#line 281 "make_hlds_warn.m"
                  continue;
#line 263 "make_hlds_warn.m"
                }
#line 209 "make_hlds_warn.m"
                break;
#line 209 "make_hlds_warn.m"
              case (MR_Integer) 7:
#line 306 "make_hlds_warn.m"
                {
#line 306 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__ShortHand_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

#line 317 "make_hlds_warn.m"
#line 317 "make_hlds_warn.m"
                  switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__ShortHand_78)) {
#line 317 "make_hlds_warn.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 317 "make_hlds_warn.m"
                    case (MR_Integer) 0:
#line 321 "make_hlds_warn.m"
                      {
#line 321 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__GoalB_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 1)));
#line 321 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Goal_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 0)));
#line 321 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Goals_195;
#line 321 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_200;

#line 322 "make_hlds_warn.m"
                        {
#line 322 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goals_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_195, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__GoalB_92));
#line 322 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "make_hlds_warn.m"
                        }
#line 331 "make_hlds_warn.m"
                        {
#line 331 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Goal_194, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_200);
                        }
#line 332 "make_hlds_warn.m"
                        {
#line 332 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__Goals_195, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_200, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
#line 332 "make_hlds_warn.m"
                          return;
                        }
#line 321 "make_hlds_warn.m"
                      }
#line 317 "make_hlds_warn.m"
                      break;
#line 317 "make_hlds_warn.m"
                    case (MR_Integer) 1:
#line 311 "make_hlds_warn.m"
                      {
#line 311 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Inner_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 2)));
#line 311 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__MainGoal_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 4)));
#line 311 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__OrElseGoals_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 5)));
#line 311 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__InnerDI_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Inner_81, (MR_Integer) 0)));
#line 311 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__InnerUO_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Inner_81, (MR_Integer) 1)));
#line 311 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__InsideQuantVars_88;
#line 311 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_100_100;
#line 311 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_101_101;
#line 311 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_103_103;
#line 310 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn___GoalType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 0)));
#line 310 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn___Outer_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 1)));
#line 310 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn___MaybeOutputVars_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 3)));
#line 310 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn___OrElseInners_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 6)));

#line 313 "make_hlds_warn.m"
                        {
#line 313 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__InnerUO_87));
#line 313 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "make_hlds_warn.m"
                        }
#line 313 "make_hlds_warn.m"
                        {
#line 313 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__InnerDI_86));
#line 313 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_101_101));
#line 313 "make_hlds_warn.m"
                        }
#line 313 "make_hlds_warn.m"
                        {
#line 313 "make_hlds_warn.m"
                          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__V_100_100, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__InsideQuantVars_88);
                        }
#line 315 "make_hlds_warn.m"
                        {
#line 315 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__MainGoal_83, hlds__make_hlds__make_hlds_warn__InsideQuantVars_88, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_103_103);
                        }
#line 316 "make_hlds_warn.m"
                        {
#line 316 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__OrElseGoals_84, hlds__make_hlds__make_hlds_warn__InsideQuantVars_88, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_103_103, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
#line 316 "make_hlds_warn.m"
                          return;
                        }
#line 311 "make_hlds_warn.m"
                      }
#line 317 "make_hlds_warn.m"
                      break;
#line 317 "make_hlds_warn.m"
                    case (MR_Integer) 2:
#line 318 "make_hlds_warn.m"
                      {
#line 318 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_141 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 2)));
#line 318 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 0)));
#line 318 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 1)));

#line 319 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 319 "make_hlds_warn.m"
                        {
#line 319 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_141;

#line 319 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 319 "make_hlds_warn.m"
                        }
#line 319 "make_hlds_warn.m"
                        continue;
#line 318 "make_hlds_warn.m"
                      }
#line 317 "make_hlds_warn.m"
                      break;
#line 317 "make_hlds_warn.m"
                  }
#line 306 "make_hlds_warn.m"
                }
#line 209 "make_hlds_warn.m"
                break;
#line 209 "make_hlds_warn.m"
            }
#line 209 "make_hlds_warn.m"
            break;
#line 209 "make_hlds_warn.m"
        }
#line 204 "make_hlds_warn.m"
      }
#line 204 "make_hlds_warn.m"
      break;
#line 204 "make_hlds_warn.m"
    }
#line 201 "make_hlds_warn.m"
}

#line 95 "make_hlds_warn.m"
static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
#line 95 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_5,
#line 95 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_6,
#line 95 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Warning_7)
#line 95 "make_hlds_warn.m"
{
#line 98 "make_hlds_warn.m"
  {
#line 98 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Spec_8;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Warning_7, (MR_Integer) 0)));
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Warning_7, (MR_Integer) 1)));
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces1_11;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces2_13;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Msg_14;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_18_18;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_19_19;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_45_45;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_46_46;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_49_49;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_50_50;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_51_51;
#line 98 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_59_59;
#line 106 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Var_12;
#line 102 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_26_26;

#line 101 "make_hlds_warn.m"
    {
#line 101 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 101 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__PredCallId_5));
#line 101 "make_hlds_warn.m"
    }
#line 101 "make_hlds_warn.m"
    {
#line 101 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_19_19));
#line 101 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[8])));
#line 101 "make_hlds_warn.m"
    }
#line 101 "make_hlds_warn.m"
    {
#line 101 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Pieces1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces1_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[29])));
#line 101 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces1_11, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_18_18));
#line 101 "make_hlds_warn.m"
    }
#line 102 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Vars_9)) == (MR_mktag((MR_Integer) 1)));
#line 102 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 102 "make_hlds_warn.m"
      {
#line 102 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Vars_9, (MR_Integer) 0)));
#line 102 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Vars_9, (MR_Integer) 1)));
#line 102 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 102 "make_hlds_warn.m"
      }
#line 106 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 103 "make_hlds_warn.m"
      {
#line 103 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_29_29;
#line 103 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_30_30;
#line 103 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__V_31_31;

#line 104 "make_hlds_warn.m"
        {
#line 104 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_31_31 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__VarSet_6, hlds__make_hlds__make_hlds_warn__Var_12);
        }
#line 104 "make_hlds_warn.m"
        {
#line 104 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 104 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_31_31));
#line 104 "make_hlds_warn.m"
        }
#line 104 "make_hlds_warn.m"
        {
#line 104 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_30_30));
#line 104 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[32])));
#line 104 "make_hlds_warn.m"
        }
#line 103 "make_hlds_warn.m"
        {
#line 103 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[30])));
#line 103 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_29_29));
#line 103 "make_hlds_warn.m"
        }
#line 103 "make_hlds_warn.m"
      }
#line 106 "make_hlds_warn.m"
    else
#line 107 "make_hlds_warn.m"
      {
#line 107 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_38_38;
#line 107 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_39_39;
#line 107 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__V_40_40;

#line 108 "make_hlds_warn.m"
        {
#line 108 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_40_40 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__VarSet_6, hlds__make_hlds__make_hlds_warn__Vars_9);
        }
#line 108 "make_hlds_warn.m"
        {
#line 108 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 108 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_40_40));
#line 108 "make_hlds_warn.m"
        }
#line 108 "make_hlds_warn.m"
        {
#line 108 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_39_39));
#line 108 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[35])));
#line 108 "make_hlds_warn.m"
        }
#line 107 "make_hlds_warn.m"
        {
#line 107 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[33])));
#line 107 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_38_38));
#line 107 "make_hlds_warn.m"
        }
#line 107 "make_hlds_warn.m"
      }
#line 113 "make_hlds_warn.m"
    {
#line 113 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_warn__Pieces1_11, hlds__make_hlds__make_hlds_warn__Pieces2_13);
    }
#line 113 "make_hlds_warn.m"
    {
#line 113 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 113 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_51_51));
#line 113 "make_hlds_warn.m"
    }
#line 113 "make_hlds_warn.m"
    {
#line 113 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_50_50));
#line 113 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 113 "make_hlds_warn.m"
    }
#line 112 "make_hlds_warn.m"
    {
#line 112 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_46_46, 0) = ((MR_Box) (((MR_Integer) 6 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 112 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_49_49));
#line 112 "make_hlds_warn.m"
    }
#line 113 "make_hlds_warn.m"
    {
#line 113 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_46_46));
#line 113 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 113 "make_hlds_warn.m"
    }
#line 111 "make_hlds_warn.m"
    {
#line 111 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_14, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_10));
#line 111 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_14, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_45_45));
#line 111 "make_hlds_warn.m"
    }
#line 116 "make_hlds_warn.m"
    {
#line 116 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_14));
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "make_hlds_warn.m"
    }
#line 116 "make_hlds_warn.m"
    {
#line 116 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[1])));
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_8, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_59_59));
#line 116 "make_hlds_warn.m"
    }
#line 98 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__Spec_8;
#line 98 "make_hlds_warn.m"
  }
#line 95 "make_hlds_warn.m"
}

#line 66 "make_hlds_warn.m"
void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(
#line 66 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__UnivVars_7,
#line 66 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_8,
#line 66 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_9,
#line 66 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_10,
#line 66 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_14,
#line 66 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_15)
#line 66 "make_hlds_warn.m"
{
#line 764 "make_hlds_warn.m"
  {
#line 764 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 764 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17;

#line 770 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__UnivVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "make_hlds_warn.m"
      {
#line 768 "make_hlds_warn.m"
        {
#line 768 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_8, hlds__make_hlds__make_hlds_warn__Context_10, (MR_String) "declaration has no universally quantified variables", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17);
        }
#line 767 "make_hlds_warn.m"
      }
#line 770 "make_hlds_warn.m"
    else
#line 771 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_14;
#line 773 "make_hlds_warn.m"
    {
#line 773 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_8, hlds__make_hlds__make_hlds_warn__Goal_9, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_15);
#line 773 "make_hlds_warn.m"
      return;
    }
#line 764 "make_hlds_warn.m"
  }
#line 66 "make_hlds_warn.m"
}

#line 492 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1(
#line 492 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 492 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 492 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
#line 492 "make_hlds_warn.m"
{
#line 492 "make_hlds_warn.m"
  {
#line 492 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 492 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 492 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__conv0_Name_6;

#line 492 "make_hlds_warn.m"
    {
#line 492 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), &hlds__make_hlds__make_hlds_warn__conv0_Name_6);
    }
#line 492 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 492 "make_hlds_warn.m"
      {
#line 492 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_Name_6));
#line 492 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = MR_TRUE;
#line 492 "make_hlds_warn.m"
      }
#line 492 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 492 "make_hlds_warn.m"
  }
#line 492 "make_hlds_warn.m"
}

#line 51 "make_hlds_warn.m"
void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(
#line 51 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_11,
#line 51 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PragmaImpl_12,
#line 51 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_13,
#line 51 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Args_14,
#line 51 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_15,
#line 51 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_16,
#line 51 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_17,
#line 51 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_18,
#line 51 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_31,
#line 51 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_32)
#line 51 "make_hlds_warn.m"
{
#line 488 "make_hlds_warn.m"
  {
#line 488 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 488 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__LangStr_20;
#line 488 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__Code_21;
#line 488 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__C_CodeList_23;
#line 488 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__UnmentionedVars_24;
#line 488 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_33_33;
#line 488 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78;
#line 488 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__CharList_87;
#line 490 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_22_22;

#line 489 "make_hlds_warn.m"
    {
#line 489 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__LangStr_20 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_13);
    }
#line 490 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__PragmaImpl_12, (MR_Integer) 0)));
#line 490 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__PragmaImpl_12, (MR_Integer) 1)));
#line 557 "make_hlds_warn.m"
    {
#line 557 "make_hlds_warn.m"
      mercury__string__to_char_list_2_p_0(hlds__make_hlds__make_hlds_warn__Code_21, &hlds__make_hlds__make_hlds_warn__CharList_87);
    }
#line 558 "make_hlds_warn.m"
    {
#line 558 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(hlds__make_hlds__make_hlds_warn__CharList_87, &hlds__make_hlds__make_hlds_warn__C_CodeList_23);
    }
#line 492 "make_hlds_warn.m"
    {
#line 492 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 492 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_33_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[0]));
#line 492 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1));
#line 492 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 492 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_33_33, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__C_CodeList_23));
#line 492 "make_hlds_warn.m"
    }
#line 492 "make_hlds_warn.m"
    {
#line 492 "make_hlds_warn.m"
      mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__make_hlds_warn__V_33_33, hlds__make_hlds__make_hlds_warn__Args_14, &hlds__make_hlds__make_hlds_warn__UnmentionedVars_24);
    }
#line 495 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__UnmentionedVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_31;
#line 495 "make_hlds_warn.m"
    else
#line 496 "make_hlds_warn.m"
      {
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Pieces_27;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Msg_28;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Spec_30;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_34_34;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_37_37;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_38_38;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_39_39;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_42_42;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_43_43;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_50_50;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_51_51;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_52_52;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_55_55;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_63_63;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_64_64;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_67_67;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_68_68;
#line 496 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_76_76;

#line 497 "make_hlds_warn.m"
        {
#line 497 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 497 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_20));
#line 497 "make_hlds_warn.m"
        }
#line 498 "make_hlds_warn.m"
        {
#line 498 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 498 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_16));
#line 498 "make_hlds_warn.m"
        }
#line 498 "make_hlds_warn.m"
        {
#line 498 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_43_43));
#line 498 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[8])));
#line 498 "make_hlds_warn.m"
        }
#line 497 "make_hlds_warn.m"
        {
#line 497 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[27])));
#line 497 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_42_42));
#line 497 "make_hlds_warn.m"
        }
#line 497 "make_hlds_warn.m"
        {
#line 497 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_38_38));
#line 497 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_39_39));
#line 497 "make_hlds_warn.m"
        }
#line 497 "make_hlds_warn.m"
        {
#line 497 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[26])));
#line 497 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_37_37));
#line 497 "make_hlds_warn.m"
        }
#line 499 "make_hlds_warn.m"
        {
#line 499 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_51_51 = hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(hlds__make_hlds__make_hlds_warn__UnmentionedVars_24);
        }
#line 500 "make_hlds_warn.m"
        {
#line 500 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_38_38));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[10])));
#line 500 "make_hlds_warn.m"
        }
#line 500 "make_hlds_warn.m"
        {
#line 500 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[28])));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_55_55));
#line 500 "make_hlds_warn.m"
        }
#line 499 "make_hlds_warn.m"
        {
#line 499 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_50_50 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_84_84, hlds__make_hlds__make_hlds_warn__V_51_51, hlds__make_hlds__make_hlds_warn__V_52_52);
        }
#line 498 "make_hlds_warn.m"
        {
#line 498 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_27 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_84_84, hlds__make_hlds__make_hlds_warn__V_34_34, hlds__make_hlds__make_hlds_warn__V_50_50);
        }
#line 502 "make_hlds_warn.m"
        {
#line 502 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 502 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_27));
#line 502 "make_hlds_warn.m"
        }
#line 502 "make_hlds_warn.m"
        {
#line 502 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_68_68));
#line 502 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "make_hlds_warn.m"
        }
#line 502 "make_hlds_warn.m"
        {
#line 502 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_64_64, 0) = ((MR_Box) (((MR_Integer) 5 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 502 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_67_67));
#line 502 "make_hlds_warn.m"
        }
#line 502 "make_hlds_warn.m"
        {
#line 502 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_64_64));
#line 502 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "make_hlds_warn.m"
        }
#line 501 "make_hlds_warn.m"
        {
#line 501 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Msg_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_28, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_15));
#line 501 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_28, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_63_63));
#line 501 "make_hlds_warn.m"
        }
#line 505 "make_hlds_warn.m"
        {
#line 505 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_28));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "make_hlds_warn.m"
        }
#line 505 "make_hlds_warn.m"
        {
#line 505 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[0])));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_76_76));
#line 505 "make_hlds_warn.m"
        }
#line 506 "make_hlds_warn.m"
        {
#line 506 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_30));
#line 506 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_31));
#line 506 "make_hlds_warn.m"
        }
#line 496 "make_hlds_warn.m"
      }
#line 508 "make_hlds_warn.m"
    {
#line 508 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_11, hlds__make_hlds__make_hlds_warn__Lang_13, hlds__make_hlds__make_hlds_warn__Context_15, hlds__make_hlds__make_hlds_warn__SimpleCallId_16, hlds__make_hlds__make_hlds_warn__PredId_17, hlds__make_hlds__make_hlds_warn__ProcId_18, hlds__make_hlds__make_hlds_warn__C_CodeList_23, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_32);
#line 508 "make_hlds_warn.m"
      return;
    }
#line 488 "make_hlds_warn.m"
  }
#line 51 "make_hlds_warn.m"
}

#line 40 "make_hlds_warn.m"
void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(
#line 40 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_7,
#line 40 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_8,
#line 40 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_9,
#line 40 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Body_10,
#line 40 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_30,
#line 40 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31)
#line 40 "make_hlds_warn.m"
{
#line 120 "make_hlds_warn.m"
  {
#line 120 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Info0_12;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_13;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Info_14;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__NewSpecs_18;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__SingletonHeadVarsSet_19;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVarsSet_20;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__HeadContext_21;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVars_23;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_33_33;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_34_34;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_35_35;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;
#line 120 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38;
#line 148 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn___ModuleInfo_15;
#line 148 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn___PredCallId_16;
#line 148 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn___VarSet_17;

#line 145 "make_hlds_warn.m"
    {
#line 145 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_33_33 = parse_tree__set_of_var__init_0_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41);
    }
#line 145 "make_hlds_warn.m"
    {
#line 145 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_34_34 = parse_tree__set_of_var__init_0_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41);
    }
#line 145 "make_hlds_warn.m"
    {
#line 145 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_35_35 = mercury__term__context_init_0_f_0();
    }
#line 144 "make_hlds_warn.m"
    {
#line 144 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 144 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__ModuleInfo_7));
#line 144 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__PredCallId_8));
#line 144 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_9));
#line 144 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 144 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_33_33));
#line 144 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_34_34));
#line 144 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_35_35));
#line 144 "make_hlds_warn.m"
    }
#line 146 "make_hlds_warn.m"
    {
#line 146 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__QuantVars_13 = parse_tree__set_of_var__init_0_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41);
    }
#line 147 "make_hlds_warn.m"
    {
#line 147 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Body_10, hlds__make_hlds__make_hlds_warn__QuantVars_13, hlds__make_hlds__make_hlds_warn__Info0_12, &hlds__make_hlds__make_hlds_warn__Info_14);
    }
#line 148 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn___ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 0)));
#line 148 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn___PredCallId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 1)));
#line 148 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn___VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 2)));
#line 148 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__NewSpecs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 3)));
#line 148 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__SingletonHeadVarsSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 4)));
#line 148 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__MultiHeadVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 5)));
#line 148 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__HeadContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 6)));
#line 150 "make_hlds_warn.m"
    {
#line 150 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__make_hlds_warn__NewSpecs_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_30);
    }
#line 151 "make_hlds_warn.m"
    {
#line 151 "make_hlds_warn.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41, hlds__make_hlds__make_hlds_warn__SingletonHeadVarsSet_19, &hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22);
    }
#line 152 "make_hlds_warn.m"
    {
#line 152 "make_hlds_warn.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41, hlds__make_hlds__make_hlds_warn__MultiHeadVarsSet_20, &hlds__make_hlds__make_hlds_warn__MultiHeadVars_23);
    }
#line 155 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;
#line 155 "make_hlds_warn.m"
    else
#line 156 "make_hlds_warn.m"
      {
#line 156 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__SingleSpec_26;

#line 157 "make_hlds_warn.m"
        {
#line 157 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 0, hlds__make_hlds__make_hlds_warn__HeadContext_21, hlds__make_hlds__make_hlds_warn__PredCallId_8, hlds__make_hlds__make_hlds_warn__VarSet_9, hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22, &hlds__make_hlds__make_hlds_warn__SingleSpec_26);
        }
#line 159 "make_hlds_warn.m"
        {
#line 159 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SingleSpec_26));
#line 159 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36));
#line 159 "make_hlds_warn.m"
        }
#line 156 "make_hlds_warn.m"
      }
#line 163 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__MultiHeadVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 162 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38;
#line 163 "make_hlds_warn.m"
    else
#line 164 "make_hlds_warn.m"
      {
#line 164 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__MultiSpec_29;

#line 165 "make_hlds_warn.m"
        {
#line 165 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 1, hlds__make_hlds__make_hlds_warn__HeadContext_21, hlds__make_hlds__make_hlds_warn__PredCallId_8, hlds__make_hlds__make_hlds_warn__VarSet_9, hlds__make_hlds__make_hlds_warn__MultiHeadVars_23, &hlds__make_hlds__make_hlds_warn__MultiSpec_29);
        }
#line 167 "make_hlds_warn.m"
        {
#line 167 "make_hlds_warn.m"
          MR_Word base;
#line 167 "make_hlds_warn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31 = base;
#line 167 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__MultiSpec_29));
#line 167 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38));
#line 167 "make_hlds_warn.m"
        }
#line 164 "make_hlds_warn.m"
      }
#line 120 "make_hlds_warn.m"
  }
#line 40 "make_hlds_warn.m"
}

#line 92 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1(
#line 92 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 92 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 92 "make_hlds_warn.m"
{
#line 92 "make_hlds_warn.m"
  {
#line 92 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 92 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 92 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_Spec_8;

#line 92 "make_hlds_warn.m"
    {
#line 92 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__conv0_Spec_8 = hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 92 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_Spec_8));
#line 92 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 92 "make_hlds_warn.m"
  }
#line 92 "make_hlds_warn.m"
}

#line 31 "make_hlds_warn.m"
void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(
#line 31 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_6,
#line 31 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_7,
#line 31 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Warnings_8,
#line 31 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_11,
#line 31 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_12)
#line 31 "make_hlds_warn.m"
{
#line 90 "make_hlds_warn.m"
  {
#line 90 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 90 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 90 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__WarningSpecs_10;
#line 90 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_13_13;

#line 92 "make_hlds_warn.m"
    {
#line 92 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 92 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[0]));
#line 92 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1));
#line 92 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 92 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__PredCallId_6));
#line 92 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_7));
#line 92 "make_hlds_warn.m"
    }
#line 92 "make_hlds_warn.m"
    {
#line 92 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__WarningSpecs_10 = mercury__list__map_2_f_0((MR_Word) &hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0, hlds__make_hlds__make_hlds_warn__TypeCtorInfo_16_16, hlds__make_hlds__make_hlds_warn__V_13_13, hlds__make_hlds__make_hlds_warn__Warnings_8);
    }
#line 93 "make_hlds_warn.m"
    {
#line 93 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_16_16, hlds__make_hlds__make_hlds_warn__WarningSpecs_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_11);
    }
#line 90 "make_hlds_warn.m"
  }
#line 31 "make_hlds_warn.m"
}

void mercury__hlds__make_hlds__make_hlds_warn__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_warn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_single_or_multi_0);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0);
}

void mercury__hlds__make_hlds__make_hlds_warn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.make_hlds_warn. */
