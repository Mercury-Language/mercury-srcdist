/*
** Automatically generated from `make_hlds_warn.m'
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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



#line 607 "make_hlds_warn.m"
struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s {
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6;
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7;
#line 610 "make_hlds_warn.m"
  MR_bool hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded;
#line 610 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14;
#line 610 "make_hlds_warn.m"
  MR_String hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9;
#line 616 "make_hlds_warn.m"
  jmp_buf hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0;
#line 616 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10;
#line 616 "make_hlds_warn.m"
  MR_String hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__V_15_15;
#line 607 "make_hlds_warn.m"
};


#line 174 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 180 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_warn__pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 183 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 186 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 195 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0;

#line 198 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0;

#line 201 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1;

#line 204 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0[2];

#line 207 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0[2];

#line 210 "hlds.make_hlds.make_hlds_warn.c"
static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0[2];

#line 213 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 219 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "hlds.make_hlds.make_hlds_warn.c"
static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[7];

#line 225 "hlds.make_hlds.make_hlds_warn.c"
static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0[7];

#line 228 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0;

#line 231 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[1];

#line 234 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0[1];

#line 237 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0[1];

#line 240 "hlds.make_hlds.make_hlds_warn.c"
static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0[1];

#line 243 "hlds.make_hlds.make_hlds_warn.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
#line 246 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 248 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

#line 251 "hlds.make_hlds.make_hlds_warn.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001(
#line 254 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 256 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 258 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3);

#line 261 "hlds.make_hlds.make_hlds_warn.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001(
#line 264 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 266 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

#line 269 "hlds.make_hlds.make_hlds_warn.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001(
#line 272 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 274 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 276 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3);

#line 464 "make_hlds_warn.m"
static MR_String MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__464__1_2_f_0(
#line 464 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
#line 464 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_82);

#line 173 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(
#line 173 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 173 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 173 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

#line 173 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(
#line 173 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 173 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2);

#line 447 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(
#line 447 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 447 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 447 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

#line 447 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(
#line 447 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_1,
#line 447 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2);

#line 890 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(
#line 890 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
#line 890 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_7,
#line 890 "make_hlds_warn.m"
  MR_String hlds__make_hlds__make_hlds_warn__Message_8,
#line 890 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_13,
#line 890 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_14);

#line 851 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(
#line 851 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
#line 851 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goals_7,
#line 851 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__CallUsed_8,
#line 851 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23,
#line 851 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24);

#line 836 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(
#line 836 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
#line 836 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList_6,
#line 836 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10,
#line 836 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_11);

#line 823 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(
#line 823 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
#line 823 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4);

#line 809 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(
#line 809 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
#line 809 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4);

#line 791 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1(
#line 791 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 791 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 791 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

#line 779 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(
#line 779 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
#line 779 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_6,
#line 779 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18,
#line 779 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19);

#line 647 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
#line 647 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27,
#line 647 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28);

#line 628 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
#line 628 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21,
#line 628 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22);

#line 620 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(
#line 620 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_4,
#line 620 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_5,
#line 620 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Var_6);

#line 616 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(
#line 616 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg);

#line 616 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
#line 616 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg);

#line 616 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(
#line 616 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg);

#line 607 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_5,
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_7,
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Var_8);

#line 592 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(
#line 592 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 592 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 592 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

#line 578 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(
#line 578 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 578 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 578 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

#line 563 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(
#line 563 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__C_Code_3,
#line 563 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__List_4);

#line 543 "make_hlds_warn.m"
static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(
#line 543 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__UnmentionedVars_3);

#line 514 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(
#line 514 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NameList1_4,
#line 514 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__MaybeArg_5,
#line 514 "make_hlds_warn.m"
  MR_String * hlds__make_hlds__make_hlds_warn__Name_6);

#line 481 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(
#line 481 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Spec_4,
#line 481 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8,
#line 481 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_9);

#line 464 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1(
#line 464 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 464 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

#line 451 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0(
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SingleMulti_7,
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_8,
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__CallId_9,
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Vars_11,
#line 451 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__Spec_12);

#line 430 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2(
#line 430 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 430 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

#line 402 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1(
#line 402 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 402 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

#line 388 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalVars_7,
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_8,
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_9,
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25,
#line 388 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26);

#line 346 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__X_7,
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__RHS_8,
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_9,
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29,
#line 346 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);

#line 337 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(
#line 337 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 337 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
#line 337 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
#line 337 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4);

#line 329 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(
#line 329 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 329 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
#line 329 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
#line 329 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4);

#line 307 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2(
#line 307 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 307 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 307 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 307 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_3);

#line 303 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1(
#line 303 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 303 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

#line 204 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(
#line 204 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_5,
#line 204 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
#line 204 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93,
#line 204 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);

#line 98 "make_hlds_warn.m"
static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
#line 98 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_5,
#line 98 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_6,
#line 98 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Warning_7);

#line 495 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1(
#line 495 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 495 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 495 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

#line 95 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1(
#line 95 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 95 "make_hlds_warn.m"
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
    ((MR_Box) ((MR_String) "has overlapping scopes."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "each have overlapping scopes."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in this scope."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it cannot fail."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it can fail."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "statement."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "return"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may contain a"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "code for"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not occur in the"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: variable"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: variables"))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[20])))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[23])))
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
    ((MR_Box) ((MR_Integer) 41)),
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



#line 1120 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1128 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1136 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_warn__pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 1145 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__pair__ti_pair_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 1153 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1161 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1169 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1177 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0
  }
};

#line 1185 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0 = {
  (MR_String) "sm_single",
  (MR_Integer) 0
};

#line 1191 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1 = {
  (MR_String) "sm_multi",
  (MR_Integer) 1
};

#line 1197 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1
};

#line 1203 "hlds.make_hlds.make_hlds_warn.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0
};

#line 1209 "hlds.make_hlds.make_hlds_warn.c"
static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1215 "hlds.make_hlds.make_hlds_warn.c"
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

#line 1232 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1240 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1248 "hlds.make_hlds.make_hlds_warn.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1256 "hlds.make_hlds.make_hlds_warn.c"
static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1267 "hlds.make_hlds.make_hlds_warn.c"
static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0[7] = {
  (MR_String) "wi_module_info",
  (MR_String) "wi_pred_call_id",
  (MR_String) "wi_varset",
  (MR_String) "wi_specs",
  (MR_String) "wi_singleton_headvars",
  (MR_String) "wi_multi_headvars",
  (MR_String) "wi_head_context"
};

#line 1278 "hlds.make_hlds.make_hlds_warn.c"
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

#line 1293 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[1] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0
};

#line 1298 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0
  }
};

#line 1307 "hlds.make_hlds.make_hlds_warn.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0[1] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0
};

#line 1312 "hlds.make_hlds.make_hlds_warn.c"
static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0[1] = {
  (MR_Integer) 0
};

#line 1317 "hlds.make_hlds.make_hlds_warn.c"
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

#line 1334 "hlds.make_hlds.make_hlds_warn.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
#line 1337 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 1339 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
#line 1341 "hlds.make_hlds.make_hlds_warn.c"
{
#line 1343 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1345 "hlds.make_hlds.make_hlds_warn.c"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 1348 "hlds.make_hlds.make_hlds_warn.c"
    {
#line 1350 "hlds.make_hlds.make_hlds_warn.c"
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2));
    }
#line 1353 "hlds.make_hlds.make_hlds_warn.c"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 1355 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 1357 "hlds.make_hlds.make_hlds_warn.c"
}

#line 1360 "hlds.make_hlds.make_hlds_warn.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001(
#line 1363 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 1365 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 1367 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3)
#line 1369 "hlds.make_hlds.make_hlds_warn.c"
{
#line 1371 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1373 "hlds.make_hlds.make_hlds_warn.c"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1;

#line 1376 "hlds.make_hlds.make_hlds_warn.c"
    {
#line 1378 "hlds.make_hlds.make_hlds_warn.c"
      hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(&hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_3));
    }
#line 1381 "hlds.make_hlds.make_hlds_warn.c"
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1));
#line 1383 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 1385 "hlds.make_hlds.make_hlds_warn.c"
}

#line 1388 "hlds.make_hlds.make_hlds_warn.c"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001(
#line 1391 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 1393 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
#line 1395 "hlds.make_hlds.make_hlds_warn.c"
{
#line 1397 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1399 "hlds.make_hlds.make_hlds_warn.c"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 1402 "hlds.make_hlds.make_hlds_warn.c"
    {
#line 1404 "hlds.make_hlds.make_hlds_warn.c"
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2));
    }
#line 1407 "hlds.make_hlds.make_hlds_warn.c"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 1409 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 1411 "hlds.make_hlds.make_hlds_warn.c"
}

#line 1414 "hlds.make_hlds.make_hlds_warn.c"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001(
#line 1417 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 1419 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 1421 "hlds.make_hlds.make_hlds_warn.c"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3)
#line 1423 "hlds.make_hlds.make_hlds_warn.c"
{
#line 1425 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1427 "hlds.make_hlds.make_hlds_warn.c"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1;

#line 1430 "hlds.make_hlds.make_hlds_warn.c"
    {
#line 1432 "hlds.make_hlds.make_hlds_warn.c"
      hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(&hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_3));
    }
#line 1435 "hlds.make_hlds.make_hlds_warn.c"
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1));
#line 1437 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 1439 "hlds.make_hlds.make_hlds_warn.c"
}

#line 464 "make_hlds_warn.m"
static MR_String MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__464__1_2_f_0(
#line 464 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
#line 464 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_82)
#line 464 "make_hlds_warn.m"
{
#line 464 "make_hlds_warn.m"
  {
#line 464 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 464 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__HeadVar__3_83;

#line 464 "make_hlds_warn.m"
    {
#line 464 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__HeadVar__3_83 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__VarSet_10, hlds__make_hlds__make_hlds_warn__HeadVar__2_82);
    }
#line 464 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__HeadVar__3_83;
#line 464 "make_hlds_warn.m"
  }
#line 464 "make_hlds_warn.m"
}

#line 173 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(
#line 173 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 173 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 173 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
#line 173 "make_hlds_warn.m"
{
#line 173 "make_hlds_warn.m"
  {
#line 173 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 173 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__CastX_24 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__2_2;
#line 173 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__CastY_25 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__3_3;

#line 173 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__CastX_24 == hlds__make_hlds__make_hlds_warn__CastY_25);
#line 173 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 1494 "hlds.make_hlds.make_hlds_warn.c"
      *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = (MR_Integer) 0;
#line 173 "make_hlds_warn.m"
    else
#line 173 "make_hlds_warn.m"
      {
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 0)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 2)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 3)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 4)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 5)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 6)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 0)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 1)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 2)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 3)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 4)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 5)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 6)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_18_18;

#line 173 "make_hlds_warn.m"
        {
#line 173 "make_hlds_warn.m"
          hlds__hlds_module____Compare____module_info_0_0(&hlds__make_hlds__make_hlds_warn__V_18_18, hlds__make_hlds__make_hlds_warn__V_4_4, hlds__make_hlds__make_hlds_warn__V_11_11);
        }
#line 1536 "hlds.make_hlds.make_hlds_warn.c"
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_18_18 == (MR_Integer) 0);
#line 173 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 173 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_18_18;
#line 173 "make_hlds_warn.m"
        else
#line 173 "make_hlds_warn.m"
          {
#line 173 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_19_19;

#line 173 "make_hlds_warn.m"
            {
#line 173 "make_hlds_warn.m"
              parse_tree__prog_data____Compare____simple_call_id_0_0(&hlds__make_hlds__make_hlds_warn__V_19_19, hlds__make_hlds__make_hlds_warn__V_5_5, hlds__make_hlds__make_hlds_warn__V_12_12);
            }
#line 1556 "hlds.make_hlds.make_hlds_warn.c"
            hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_19_19 == (MR_Integer) 0);
#line 173 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 173 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
              *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_19_19;
#line 173 "make_hlds_warn.m"
            else
#line 173 "make_hlds_warn.m"
              {
#line 173 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_20_20;

#line 173 "make_hlds_warn.m"
                {
#line 173 "make_hlds_warn.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[3], &hlds__make_hlds__make_hlds_warn__V_20_20, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_6_6)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_13_13)));
                }
#line 1576 "hlds.make_hlds.make_hlds_warn.c"
                hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_20_20 == (MR_Integer) 0);
#line 173 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 173 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
                  *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_20_20;
#line 173 "make_hlds_warn.m"
                else
#line 173 "make_hlds_warn.m"
                  {
#line 173 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_21_21;

#line 173 "make_hlds_warn.m"
                    {
#line 173 "make_hlds_warn.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[4], &hlds__make_hlds__make_hlds_warn__V_21_21, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_7_7)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_14_14)));
                    }
#line 1596 "hlds.make_hlds.make_hlds_warn.c"
                    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_21_21 == (MR_Integer) 0);
#line 173 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 173 "make_hlds_warn.m"
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
                      *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_21_21;
#line 173 "make_hlds_warn.m"
                    else
#line 173 "make_hlds_warn.m"
                      {
#line 173 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_22_22;

#line 173 "make_hlds_warn.m"
                        {
#line 173 "make_hlds_warn.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[5], &hlds__make_hlds__make_hlds_warn__V_22_22, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_8_8)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_15_15)));
                        }
#line 1616 "hlds.make_hlds.make_hlds_warn.c"
                        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_22_22 == (MR_Integer) 0);
#line 173 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 173 "make_hlds_warn.m"
                        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
                          *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_22_22;
#line 173 "make_hlds_warn.m"
                        else
#line 173 "make_hlds_warn.m"
                          {
#line 173 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__V_23_23;

#line 173 "make_hlds_warn.m"
                            {
#line 173 "make_hlds_warn.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[5], &hlds__make_hlds__make_hlds_warn__V_23_23, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_9_9)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_16_16)));
                            }
#line 1636 "hlds.make_hlds.make_hlds_warn.c"
                            hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_23_23 == (MR_Integer) 0);
#line 173 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 173 "make_hlds_warn.m"
                            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
                              *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__V_23_23;
#line 173 "make_hlds_warn.m"
                            else
#line 173 "make_hlds_warn.m"
                              {
#line 173 "make_hlds_warn.m"
                                mercury__term____Compare____context_0_0(hlds__make_hlds__make_hlds_warn__HeadVar__1_1, hlds__make_hlds__make_hlds_warn__V_10_10, hlds__make_hlds__make_hlds_warn__V_17_17);
                              }
#line 173 "make_hlds_warn.m"
                          }
#line 173 "make_hlds_warn.m"
                      }
#line 173 "make_hlds_warn.m"
                  }
#line 173 "make_hlds_warn.m"
              }
#line 173 "make_hlds_warn.m"
          }
#line 173 "make_hlds_warn.m"
      }
#line 173 "make_hlds_warn.m"
  }
#line 173 "make_hlds_warn.m"
}

#line 173 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(
#line 173 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 173 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2)
#line 173 "make_hlds_warn.m"
{
#line 173 "make_hlds_warn.m"
  {
#line 173 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 173 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__CastX_17 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__1_1;
#line 173 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__CastY_18 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__2_2;

#line 173 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__CastX_17 == hlds__make_hlds__make_hlds_warn__CastY_18);
#line 173 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__succeeded = MR_TRUE;
#line 173 "make_hlds_warn.m"
    else
#line 173 "make_hlds_warn.m"
      {
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_21_21;
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_22_22;
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_23_23;
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_24_24;
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 2)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 3)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 4)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 5)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 6)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 0)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 1)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 2)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 3)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 4)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 5)));
#line 173 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 6)));

#line 1733 "hlds.make_hlds.make_hlds_warn.c"
        {
#line 1735 "hlds.make_hlds.make_hlds_warn.c"
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__make_hlds__make_hlds_warn__V_3_3, hlds__make_hlds__make_hlds_warn__V_10_10);
        }
#line 173 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
          {
#line 1742 "hlds.make_hlds.make_hlds_warn.c"
            {
#line 1744 "hlds.make_hlds.make_hlds_warn.c"
              hlds__make_hlds__make_hlds_warn__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(hlds__make_hlds__make_hlds_warn__V_4_4, hlds__make_hlds__make_hlds_warn__V_11_11);
            }
#line 173 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
              {
#line 1751 "hlds.make_hlds.make_hlds_warn.c"
                hlds__make_hlds__make_hlds_warn__TypeInfo_21_21 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[3];
#line 1753 "hlds.make_hlds.make_hlds_warn.c"
                {
#line 1755 "hlds.make_hlds.make_hlds_warn.c"
                  hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_21_21, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_5_5)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_12_12)));
                }
#line 173 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
                  {
#line 1762 "hlds.make_hlds.make_hlds_warn.c"
                    hlds__make_hlds__make_hlds_warn__TypeInfo_22_22 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[4];
#line 1764 "hlds.make_hlds.make_hlds_warn.c"
                    {
#line 1766 "hlds.make_hlds.make_hlds_warn.c"
                      hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_22_22, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_6_6)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_13_13)));
                    }
#line 173 "make_hlds_warn.m"
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
                      {
#line 1773 "hlds.make_hlds.make_hlds_warn.c"
                        hlds__make_hlds__make_hlds_warn__TypeInfo_23_23 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[5];
#line 1775 "hlds.make_hlds.make_hlds_warn.c"
                        {
#line 1777 "hlds.make_hlds.make_hlds_warn.c"
                          hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_23_23, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_7_7)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_14_14)));
                        }
#line 173 "make_hlds_warn.m"
                        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 173 "make_hlds_warn.m"
                          {
#line 1784 "hlds.make_hlds.make_hlds_warn.c"
                            hlds__make_hlds__make_hlds_warn__TypeInfo_24_24 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[5];
#line 1786 "hlds.make_hlds.make_hlds_warn.c"
                            {
#line 1788 "hlds.make_hlds.make_hlds_warn.c"
                              hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_24_24, ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_8_8)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_15_15)));
                            }
#line 173 "make_hlds_warn.m"
                            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 1793 "hlds.make_hlds.make_hlds_warn.c"
                              {
#line 1795 "hlds.make_hlds.make_hlds_warn.c"
                                hlds__make_hlds__make_hlds_warn__succeeded = mercury__term____Unify____context_0_0(hlds__make_hlds__make_hlds_warn__V_9_9, hlds__make_hlds__make_hlds_warn__V_16_16);
                              }
#line 173 "make_hlds_warn.m"
                          }
#line 173 "make_hlds_warn.m"
                      }
#line 173 "make_hlds_warn.m"
                  }
#line 173 "make_hlds_warn.m"
              }
#line 173 "make_hlds_warn.m"
          }
#line 173 "make_hlds_warn.m"
      }
#line 173 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 173 "make_hlds_warn.m"
  }
#line 173 "make_hlds_warn.m"
}

#line 447 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(
#line 447 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 447 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 447 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
#line 447 "make_hlds_warn.m"
{
#line 447 "make_hlds_warn.m"
  {
#line 447 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 447 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__2_2;
#line 447 "make_hlds_warn.m"
    MR_Integer hlds__make_hlds__make_hlds_warn__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__3_3;

#line 447 "make_hlds_warn.m"
    {
#line 447 "make_hlds_warn.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__make_hlds_warn__HeadVar__1_1, hlds__make_hlds__make_hlds_warn__Cast_HeadVar1_4, hlds__make_hlds__make_hlds_warn__Cast_HeadVar2_5);
    }
#line 447 "make_hlds_warn.m"
  }
#line 447 "make_hlds_warn.m"
}

#line 447 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(
#line 447 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_1,
#line 447 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2)
#line 447 "make_hlds_warn.m"
{
#line 1856 "hlds.make_hlds.make_hlds_warn.c"
  {
#line 1858 "hlds.make_hlds.make_hlds_warn.c"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__HeadVar__2_1 == hlds__make_hlds__make_hlds_warn__HeadVar__2_2);

#line 1861 "hlds.make_hlds.make_hlds_warn.c"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 1863 "hlds.make_hlds.make_hlds_warn.c"
  }
#line 447 "make_hlds_warn.m"
}

#line 890 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(
#line 890 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
#line 890 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_7,
#line 890 "make_hlds_warn.m"
  MR_String hlds__make_hlds__make_hlds_warn__Message_8,
#line 890 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_13,
#line 890 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_14)
#line 890 "make_hlds_warn.m"
{
#line 893 "make_hlds_warn.m"
  {
#line 893 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_10;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Msg_11;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Spec_12;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_17_17;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_18_18;
#line 893 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_19_19;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_20_20;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_23_23;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_25_25;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_28_28;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_29_29;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_33_33;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_34_34;
#line 893 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_38_38;

#line 894 "make_hlds_warn.m"
    {
#line 894 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_19_19 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__make_hlds__make_hlds_warn__PromiseType_6);
    }
#line 894 "make_hlds_warn.m"
    {
#line 894 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 894 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_19_19));
#line 894 "make_hlds_warn.m"
    }
#line 896 "make_hlds_warn.m"
    {
#line 896 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 896 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_29_29, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Message_8));
#line 896 "make_hlds_warn.m"
    }
#line 896 "make_hlds_warn.m"
    {
#line 896 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_29_29));
#line 896 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[6])));
#line 896 "make_hlds_warn.m"
    }
#line 896 "make_hlds_warn.m"
    {
#line 896 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[52])));
#line 896 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_28_28));
#line 896 "make_hlds_warn.m"
    }
#line 895 "make_hlds_warn.m"
    {
#line 895 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 895 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_25_25));
#line 895 "make_hlds_warn.m"
    }
#line 895 "make_hlds_warn.m"
    {
#line 895 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[51])));
#line 895 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_23_23));
#line 895 "make_hlds_warn.m"
    }
#line 894 "make_hlds_warn.m"
    {
#line 894 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_18_18));
#line 894 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_20_20));
#line 894 "make_hlds_warn.m"
    }
#line 894 "make_hlds_warn.m"
    {
#line 894 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[50])));
#line 894 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_17_17));
#line 894 "make_hlds_warn.m"
    }
#line 897 "make_hlds_warn.m"
    {
#line 897 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 897 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_10));
#line 897 "make_hlds_warn.m"
    }
#line 897 "make_hlds_warn.m"
    {
#line 897 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_34_34));
#line 897 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "make_hlds_warn.m"
    }
#line 897 "make_hlds_warn.m"
    {
#line 897 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 897 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_7));
#line 897 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_33_33));
#line 897 "make_hlds_warn.m"
    }
#line 898 "make_hlds_warn.m"
    {
#line 898 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_11));
#line 898 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "make_hlds_warn.m"
    }
#line 898 "make_hlds_warn.m"
    {
#line 898 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 898 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 898 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_38_38));
#line 898 "make_hlds_warn.m"
    }
#line 899 "make_hlds_warn.m"
    {
#line 899 "make_hlds_warn.m"
      MR_Word base;
#line 899 "make_hlds_warn.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_14 = base;
#line 899 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_12));
#line 899 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_13));
#line 899 "make_hlds_warn.m"
    }
#line 893 "make_hlds_warn.m"
  }
#line 890 "make_hlds_warn.m"
}

#line 851 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(
#line 851 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
#line 851 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goals_7,
#line 851 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__CallUsed_8,
#line 851 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23,
#line 851 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24)
#line 851 "make_hlds_warn.m"
{
#line 856 "make_hlds_warn.m"
  while (MR_TRUE)
#line 856 "make_hlds_warn.m"
    {
#line 856 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 856 "make_hlds_warn.m"
      {
#line 856 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 856 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__Goals_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 856 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23;
#line 856 "make_hlds_warn.m"
        else
#line 858 "make_hlds_warn.m"
          {
#line 858 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__HeadGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_7, (MR_Integer) 0)));
#line 858 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__TailGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_7, (MR_Integer) 1)));
#line 860 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_12_12;
#line 860 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_13_13;
#line 860 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_14_14;
#line 860 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_15_15;

#line 860 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__HeadGoal_10)) == (MR_mktag((MR_Integer) 0)));
#line 860 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 860 "make_hlds_warn.m"
              {
#line 860 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 0)));
#line 860 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)));
#line 860 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 2)));
#line 860 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 3)));
#line 862 "make_hlds_warn.m"
                /* direct tailcall eliminated */
#line 862 "make_hlds_warn.m"
                {
#line 862 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7 = hlds__make_hlds__make_hlds_warn__TailGoals_11;

#line 862 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7;
#line 862 "make_hlds_warn.m"
                }
#line 862 "make_hlds_warn.m"
                continue;
#line 860 "make_hlds_warn.m"
              }
#line 860 "make_hlds_warn.m"
            else
#line 864 "make_hlds_warn.m"
              {
#line 864 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__HeadSubGoal_18;
#line 865 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_26_26;
#line 865 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_27_27;
#line 865 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_16_16;
#line 865 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_17_17;

#line 865 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__HeadGoal_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 865 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 865 "make_hlds_warn.m"
                  {
#line 865 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 865 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 865 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 2)));
#line 865 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 3)));
#line 865 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__HeadSubGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 4)));
#line 865 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_26_26 == (MR_Integer) 0);
#line 865 "make_hlds_warn.m"
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 865 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_27_27 == (MR_Integer) 0);
#line 865 "make_hlds_warn.m"
                  }
#line 864 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 868 "make_hlds_warn.m"
                  {
#line 868 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_28_28;

#line 868 "make_hlds_warn.m"
                    {
#line 868 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__HeadSubGoal_18));
#line 868 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__TailGoals_11));
#line 868 "make_hlds_warn.m"
                    }
#line 868 "make_hlds_warn.m"
                    /* direct tailcall eliminated */
#line 868 "make_hlds_warn.m"
                    {
#line 868 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7 = hlds__make_hlds__make_hlds_warn__V_28_28;

#line 868 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7;
#line 868 "make_hlds_warn.m"
                    }
#line 868 "make_hlds_warn.m"
                    continue;
#line 868 "make_hlds_warn.m"
                  }
#line 864 "make_hlds_warn.m"
                else
#line 870 "make_hlds_warn.m"
                  {
#line 870 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Context_19;
#line 871 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_20_20;
#line 871 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_21_21;
#line 871 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_22_22;

#line 871 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__HeadGoal_10)) == (MR_mktag((MR_Integer) 1)));
#line 871 "make_hlds_warn.m"
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 871 "make_hlds_warn.m"
                      {
#line 871 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 0)));
#line 871 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)));
#line 871 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 2)));
#line 871 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 3)));
#line 879 "make_hlds_warn.m"
                        {
#line 879 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31_31;

#line 875 "make_hlds_warn.m"
#line 875 "make_hlds_warn.m"
                          switch (hlds__make_hlds__make_hlds_warn__CallUsed_8) {
#line 875 "make_hlds_warn.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 875 "make_hlds_warn.m"
                            case (MR_Integer) 0:
#line 874 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31_31 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23;
#line 875 "make_hlds_warn.m"
                              break;
#line 875 "make_hlds_warn.m"
                            case (MR_Integer) 1:
#line 876 "make_hlds_warn.m"
                              {
#line 877 "make_hlds_warn.m"
                                {
#line 877 "make_hlds_warn.m"
                                  hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_6, hlds__make_hlds__make_hlds_warn__Context_19, (MR_String) "disjunct contains more than one call", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31_31);
                                }
#line 876 "make_hlds_warn.m"
                              }
#line 875 "make_hlds_warn.m"
                              break;
#line 875 "make_hlds_warn.m"
                          }
#line 880 "make_hlds_warn.m"
                          /* direct tailcall eliminated */
#line 880 "make_hlds_warn.m"
                          {
#line 880 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7 = hlds__make_hlds__make_hlds_warn__TailGoals_11;
#line 880 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31_31;

#line 880 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_23;
#line 880 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__CallUsed_8 = (MR_Integer) 1;
#line 880 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7;
#line 880 "make_hlds_warn.m"
                          }
#line 880 "make_hlds_warn.m"
                          continue;
#line 879 "make_hlds_warn.m"
                        }
#line 871 "make_hlds_warn.m"
                      }
#line 871 "make_hlds_warn.m"
                    else
#line 883 "make_hlds_warn.m"
                      {
#line 883 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_34_34;
#line 883 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;

#line 882 "make_hlds_warn.m"
                        {
#line 882 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__V_34_34 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__HeadGoal_10);
                        }
#line 882 "make_hlds_warn.m"
                        {
#line 882 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_6, hlds__make_hlds__make_hlds_warn__V_34_34, (MR_String) "disjunct is not a call or unification", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36);
                        }
#line 884 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 884 "make_hlds_warn.m"
                        {
#line 884 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7 = hlds__make_hlds__make_hlds_warn__TailGoals_11;
#line 884 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;

#line 884 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_23;
#line 884 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__Goals__tmp_copy_7;
#line 884 "make_hlds_warn.m"
                        }
#line 884 "make_hlds_warn.m"
                        continue;
#line 883 "make_hlds_warn.m"
                      }
#line 870 "make_hlds_warn.m"
                  }
#line 864 "make_hlds_warn.m"
              }
#line 858 "make_hlds_warn.m"
          }
#line 856 "make_hlds_warn.m"
      }
#line 856 "make_hlds_warn.m"
      break;
#line 856 "make_hlds_warn.m"
    }
#line 851 "make_hlds_warn.m"
}

#line 836 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(
#line 836 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
#line 836 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList_6,
#line 836 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10,
#line 836 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_11)
#line 836 "make_hlds_warn.m"
{
#line 841 "make_hlds_warn.m"
  while (MR_TRUE)
#line 841 "make_hlds_warn.m"
    {
#line 841 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 841 "make_hlds_warn.m"
      {
#line 841 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 841 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__DisjConjList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 841 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_11 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10;
#line 841 "make_hlds_warn.m"
        else
#line 843 "make_hlds_warn.m"
          {
#line 843 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__ConjList_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__DisjConjList_6, (MR_Integer) 0)));
#line 843 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__DisjConjList_6, (MR_Integer) 1)));
#line 843 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_13_13;

#line 844 "make_hlds_warn.m"
            {
#line 844 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__ConjList_8, (MR_Integer) 0, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_13_13);
            }
#line 845 "make_hlds_warn.m"
            /* direct tailcall eliminated */
#line 845 "make_hlds_warn.m"
            {
#line 845 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__Rest_9;
#line 845 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_10 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_13_13;

#line 845 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_10;
#line 845 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__DisjConjList_6 = hlds__make_hlds__make_hlds_warn__DisjConjList__tmp_copy_6;
#line 845 "make_hlds_warn.m"
            }
#line 845 "make_hlds_warn.m"
            continue;
#line 843 "make_hlds_warn.m"
          }
#line 841 "make_hlds_warn.m"
      }
#line 841 "make_hlds_warn.m"
      break;
#line 841 "make_hlds_warn.m"
    }
#line 836 "make_hlds_warn.m"
}

#line 823 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(
#line 823 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
#line 823 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4)
#line 823 "make_hlds_warn.m"
{
#line 826 "make_hlds_warn.m"
  {
#line 826 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_3)) == (MR_mktag((MR_Integer) 2)));
#line 826 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__GoalA_6;
#line 826 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__GoalB_7;
#line 826 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_5_5;

#line 826 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 826 "make_hlds_warn.m"
      {
#line 826 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 0)));
#line 826 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__GoalA_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 1)));
#line 826 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 2)));
#line 827 "make_hlds_warn.m"
        {
#line 827 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListA_8;
#line 827 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListB_9;

#line 827 "make_hlds_warn.m"
          {
#line 827 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalA_6, &hlds__make_hlds__make_hlds_warn__GoalListA_8);
          }
#line 828 "make_hlds_warn.m"
          {
#line 828 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalB_7, &hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
#line 829 "make_hlds_warn.m"
          {
#line 829 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, hlds__make_hlds__make_hlds_warn__GoalListA_8, hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
#line 827 "make_hlds_warn.m"
        }
#line 826 "make_hlds_warn.m"
      }
#line 826 "make_hlds_warn.m"
    else
#line 831 "make_hlds_warn.m"
      {
#line 831 "make_hlds_warn.m"
        {
#line 831 "make_hlds_warn.m"
          MR_Word base;
#line 831 "make_hlds_warn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__GoalList_4 = base;
#line 831 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Goal_3));
#line 831 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 831 "make_hlds_warn.m"
        }
#line 831 "make_hlds_warn.m"
      }
#line 826 "make_hlds_warn.m"
  }
#line 823 "make_hlds_warn.m"
}

#line 809 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(
#line 809 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
#line 809 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4)
#line 809 "make_hlds_warn.m"
{
#line 812 "make_hlds_warn.m"
  {
#line 812 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 812 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__GoalA_6;
#line 812 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__GoalB_7;
#line 812 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_5_5;

#line 812 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 812 "make_hlds_warn.m"
      {
#line 812 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 1)));
#line 812 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__GoalA_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 2)));
#line 812 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 3)));
#line 813 "make_hlds_warn.m"
        {
#line 813 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListA_8;
#line 813 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListB_9;

#line 813 "make_hlds_warn.m"
          {
#line 813 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalA_6, &hlds__make_hlds__make_hlds_warn__GoalListA_8);
          }
#line 814 "make_hlds_warn.m"
          {
#line 814 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalB_7, &hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
#line 815 "make_hlds_warn.m"
          {
#line 815 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, hlds__make_hlds__make_hlds_warn__GoalListA_8, hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
#line 813 "make_hlds_warn.m"
        }
#line 812 "make_hlds_warn.m"
      }
#line 812 "make_hlds_warn.m"
    else
#line 817 "make_hlds_warn.m"
      {
#line 817 "make_hlds_warn.m"
        {
#line 817 "make_hlds_warn.m"
          MR_Word base;
#line 817 "make_hlds_warn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__GoalList_4 = base;
#line 817 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Goal_3));
#line 817 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "make_hlds_warn.m"
        }
#line 817 "make_hlds_warn.m"
      }
#line 812 "make_hlds_warn.m"
  }
#line 809 "make_hlds_warn.m"
}

#line 791 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1(
#line 791 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 791 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 791 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
#line 791 "make_hlds_warn.m"
{
#line 791 "make_hlds_warn.m"
  {
#line 791 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 791 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_GoalList_4;

#line 791 "make_hlds_warn.m"
    {
#line 791 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), &hlds__make_hlds__make_hlds_warn__conv0_GoalList_4);
    }
#line 791 "make_hlds_warn.m"
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_GoalList_4));
#line 791 "make_hlds_warn.m"
  }
#line 791 "make_hlds_warn.m"
}

#line 779 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(
#line 779 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
#line 779 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_6,
#line 779 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18,
#line 779 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19)
#line 779 "make_hlds_warn.m"
{
#line 783 "make_hlds_warn.m"
  while (MR_TRUE)
#line 783 "make_hlds_warn.m"
    {
#line 783 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 783 "make_hlds_warn.m"
      {
#line 783 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 783 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_10;
#line 784 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_20_20;
#line 784 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_21_21;
#line 784 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_8_8;
#line 784 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_9_9;

#line 784 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 784 "make_hlds_warn.m"
          {
#line 784 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 784 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 784 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 2)));
#line 784 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 3)));
#line 784 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__SubGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 4)));
#line 784 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_20_20 == (MR_Integer) 0);
#line 784 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 784 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_21_21 == (MR_Integer) 0);
#line 784 "make_hlds_warn.m"
          }
#line 783 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 786 "make_hlds_warn.m"
          {
#line 786 "make_hlds_warn.m"
            /* direct tailcall eliminated */
#line 786 "make_hlds_warn.m"
            {
#line 786 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__SubGoal_10;

#line 786 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__Goal_6 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_6;
#line 786 "make_hlds_warn.m"
            }
#line 786 "make_hlds_warn.m"
            continue;
#line 786 "make_hlds_warn.m"
          }
#line 783 "make_hlds_warn.m"
        else
#line 787 "make_hlds_warn.m"
          {
#line 788 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_11_11;
#line 788 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_12_12;
#line 788 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_13_13;

#line 788 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 788 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 788 "make_hlds_warn.m"
              {
#line 788 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)));
#line 788 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 2)));
#line 788 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 3)));
#line 790 "make_hlds_warn.m"
                {
#line 790 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__DisjList_14;
#line 790 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList_15;

#line 790 "make_hlds_warn.m"
                  {
#line 790 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(hlds__make_hlds__make_hlds_warn__Goal_6, &hlds__make_hlds__make_hlds_warn__DisjList_14);
                  }
#line 791 "make_hlds_warn.m"
                  {
#line 791 "make_hlds_warn.m"
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[2], (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[3], hlds__make_hlds__make_hlds_warn__DisjList_14, &hlds__make_hlds__make_hlds_warn__DisjConjList_15);
                  }
#line 792 "make_hlds_warn.m"
                  {
#line 792 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__DisjConjList_15, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19);
                  }
#line 790 "make_hlds_warn.m"
                }
#line 788 "make_hlds_warn.m"
              }
#line 788 "make_hlds_warn.m"
            else
#line 793 "make_hlds_warn.m"
              {
#line 793 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__Context_16;
#line 793 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_35;
#line 794 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_25_25;
#line 794 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__V_26_26;
#line 794 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn___UnivVars_17;

#line 794 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 794 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 794 "make_hlds_warn.m"
                  {
#line 794 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 794 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 794 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 2)));
#line 794 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn___UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 3)));
#line 794 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__SubGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 4)));
#line 794 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_25_25 == (MR_Integer) 1);
#line 794 "make_hlds_warn.m"
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 794 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_26_26 == (MR_Integer) 0);
#line 794 "make_hlds_warn.m"
                  }
#line 793 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 799 "make_hlds_warn.m"
                  {
#line 799 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28_28;

#line 797 "make_hlds_warn.m"
                    {
#line 797 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__Context_16, (MR_String) "universal quantification should come before the declaration name", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28_28);
                    }
#line 800 "make_hlds_warn.m"
                    /* direct tailcall eliminated */
#line 800 "make_hlds_warn.m"
                    {
#line 800 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__SubGoal_35;
#line 800 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_18 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28_28;

#line 800 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0__tmp_copy_18;
#line 800 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__Goal_6 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_6;
#line 800 "make_hlds_warn.m"
                    }
#line 800 "make_hlds_warn.m"
                    continue;
#line 799 "make_hlds_warn.m"
                  }
#line 793 "make_hlds_warn.m"
                else
#line 802 "make_hlds_warn.m"
                  {
#line 802 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;

#line 802 "make_hlds_warn.m"
                    {
#line 802 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_32_32 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__Goal_6);
                    }
#line 802 "make_hlds_warn.m"
                    {
#line 802 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__V_32_32, (MR_String) "goal in declaration is not a disjunction", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19);
                    }
#line 802 "make_hlds_warn.m"
                  }
#line 793 "make_hlds_warn.m"
              }
#line 787 "make_hlds_warn.m"
          }
#line 783 "make_hlds_warn.m"
      }
#line 783 "make_hlds_warn.m"
      break;
#line 783 "make_hlds_warn.m"
    }
#line 779 "make_hlds_warn.m"
}

#line 647 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
#line 647 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
#line 647 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27,
#line 647 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28)
#line 647 "make_hlds_warn.m"
{
#line 653 "make_hlds_warn.m"
  {
#line 653 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 653 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__ProcInfo_18;
#line 653 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19;

#line 654 "make_hlds_warn.m"
    {
#line 654 "make_hlds_warn.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_10, hlds__make_hlds__make_hlds_warn__PredId_14, hlds__make_hlds__make_hlds_warn__ProcId_15, &hlds__make_hlds__make_hlds_warn__ProcInfo_18);
    }
#line 655 "make_hlds_warn.m"
    {
#line 655 "make_hlds_warn.m"
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__make_hlds__make_hlds_warn__ProcInfo_18, &hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19);
    }
#line 722 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 722 "make_hlds_warn.m"
    else
#line 657 "make_hlds_warn.m"
      {
#line 657 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Detism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19, (MR_Integer) 0)));

#line 690 "make_hlds_warn.m"
#line 690 "make_hlds_warn.m"
        switch (hlds__make_hlds__make_hlds_warn__Detism_20) {
#line 690 "make_hlds_warn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 690 "make_hlds_warn.m"
          case (MR_Integer) 4:
#line 690 "make_hlds_warn.m"
          case (MR_Integer) 0:
#line 690 "make_hlds_warn.m"
          case (MR_Integer) 6:
#line 670 "make_hlds_warn.m"
            {
#line 670 "make_hlds_warn.m"
              {
#line 670 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), hlds__make_hlds__make_hlds_warn__BodyPieces_16);
              }
#line 670 "make_hlds_warn.m"
              if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 671 "make_hlds_warn.m"
                {
#line 671 "make_hlds_warn.m"
                  MR_String hlds__make_hlds__make_hlds_warn__LangStr_22;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Pieces_23;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Msg_24;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Spec_26;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_68_68;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_69_69;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_70_70;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_73_73;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_74_74;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_87_87;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_88_88;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_91_91;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_92_92;
#line 671 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_100_100;

#line 671 "make_hlds_warn.m"
                  {
#line 671 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__LangStr_22 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_11);
                  }
#line 673 "make_hlds_warn.m"
                  {
#line 673 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 673 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_22));
#line 673 "make_hlds_warn.m"
                  }
#line 674 "make_hlds_warn.m"
                  {
#line 674 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 674 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_13));
#line 674 "make_hlds_warn.m"
                  }
#line 674 "make_hlds_warn.m"
                  {
#line 674 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_74_74));
#line 674 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[46])));
#line 674 "make_hlds_warn.m"
                  }
#line 674 "make_hlds_warn.m"
                  {
#line 674 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[31])));
#line 674 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_73_73));
#line 674 "make_hlds_warn.m"
                  }
#line 673 "make_hlds_warn.m"
                  {
#line 673 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_69_69));
#line 673 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_70_70));
#line 673 "make_hlds_warn.m"
                  }
#line 673 "make_hlds_warn.m"
                  {
#line 673 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[42])));
#line 673 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_68_68));
#line 673 "make_hlds_warn.m"
                  }
#line 680 "make_hlds_warn.m"
                  {
#line 680 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 680 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_92_92, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_23));
#line 680 "make_hlds_warn.m"
                  }
#line 680 "make_hlds_warn.m"
                  {
#line 680 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_92_92));
#line 680 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "make_hlds_warn.m"
                  }
#line 679 "make_hlds_warn.m"
                  {
#line 679 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_88_88, 0) = ((MR_Box) (((MR_Integer) 41 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 679 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_88_88, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_91_91));
#line 679 "make_hlds_warn.m"
                  }
#line 680 "make_hlds_warn.m"
                  {
#line 680 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_88_88));
#line 680 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "make_hlds_warn.m"
                  }
#line 678 "make_hlds_warn.m"
                  {
#line 678 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 678 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_12));
#line 678 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_87_87));
#line 678 "make_hlds_warn.m"
                  }
#line 685 "make_hlds_warn.m"
                  {
#line 685 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_24));
#line 685 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "make_hlds_warn.m"
                  }
#line 684 "make_hlds_warn.m"
                  {
#line 684 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 684 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[2])));
#line 684 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 684 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_26, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_100_100));
#line 684 "make_hlds_warn.m"
                  }
#line 686 "make_hlds_warn.m"
                  {
#line 686 "make_hlds_warn.m"
                    MR_Word base;
#line 686 "make_hlds_warn.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "make_hlds_warn.m"
                    *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = base;
#line 686 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_26));
#line 686 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27));
#line 686 "make_hlds_warn.m"
                  }
#line 671 "make_hlds_warn.m"
                }
#line 670 "make_hlds_warn.m"
              else
#line 670 "make_hlds_warn.m"
                *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 670 "make_hlds_warn.m"
            }
#line 690 "make_hlds_warn.m"
            break;
#line 690 "make_hlds_warn.m"
          case (MR_Integer) 5:
#line 690 "make_hlds_warn.m"
          case (MR_Integer) 1:
#line 694 "make_hlds_warn.m"
            {
#line 694 "make_hlds_warn.m"
              {
#line 694 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), hlds__make_hlds__make_hlds_warn__BodyPieces_16);
              }
#line 694 "make_hlds_warn.m"
              if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 694 "make_hlds_warn.m"
                *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 694 "make_hlds_warn.m"
              else
#line 697 "make_hlds_warn.m"
                {
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_31_31;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_33_33;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_36_36;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_37_37;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_50_50;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_51_51;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_54_54;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_55_55;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_63_63;
#line 697 "make_hlds_warn.m"
                  MR_String hlds__make_hlds__make_hlds_warn__LangStr_103;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Pieces_104;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Msg_105;
#line 697 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Spec_107;

#line 697 "make_hlds_warn.m"
                  {
#line 697 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__LangStr_103 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_11);
                  }
#line 699 "make_hlds_warn.m"
                  {
#line 699 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_103));
#line 699 "make_hlds_warn.m"
                  }
#line 700 "make_hlds_warn.m"
                  {
#line 700 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 700 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_13));
#line 700 "make_hlds_warn.m"
                  }
#line 700 "make_hlds_warn.m"
                  {
#line 700 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_37_37));
#line 700 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[49])));
#line 700 "make_hlds_warn.m"
                  }
#line 700 "make_hlds_warn.m"
                  {
#line 700 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[31])));
#line 700 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_36_36));
#line 700 "make_hlds_warn.m"
                  }
#line 699 "make_hlds_warn.m"
                  {
#line 699 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_32_32));
#line 699 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_33_33));
#line 699 "make_hlds_warn.m"
                  }
#line 699 "make_hlds_warn.m"
                  {
#line 699 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Pieces_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[42])));
#line 699 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_104, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_31_31));
#line 699 "make_hlds_warn.m"
                  }
#line 707 "make_hlds_warn.m"
                  {
#line 707 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_104));
#line 707 "make_hlds_warn.m"
                  }
#line 707 "make_hlds_warn.m"
                  {
#line 707 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_55_55));
#line 707 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "make_hlds_warn.m"
                  }
#line 706 "make_hlds_warn.m"
                  {
#line 706 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_51_51, 0) = ((MR_Box) (((MR_Integer) 41 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 706 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_54_54));
#line 706 "make_hlds_warn.m"
                  }
#line 707 "make_hlds_warn.m"
                  {
#line 707 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_51_51));
#line 707 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "make_hlds_warn.m"
                  }
#line 705 "make_hlds_warn.m"
                  {
#line 705 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Msg_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_105, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_12));
#line 705 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_105, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_50_50));
#line 705 "make_hlds_warn.m"
                  }
#line 712 "make_hlds_warn.m"
                  {
#line 712 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_105));
#line 712 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "make_hlds_warn.m"
                  }
#line 711 "make_hlds_warn.m"
                  {
#line 711 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Spec_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 711 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[2])));
#line 711 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 711 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_107, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_63_63));
#line 711 "make_hlds_warn.m"
                  }
#line 713 "make_hlds_warn.m"
                  {
#line 713 "make_hlds_warn.m"
                    MR_Word base;
#line 713 "make_hlds_warn.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "make_hlds_warn.m"
                    *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = base;
#line 713 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_107));
#line 713 "make_hlds_warn.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27));
#line 713 "make_hlds_warn.m"
                  }
#line 697 "make_hlds_warn.m"
                }
#line 694 "make_hlds_warn.m"
            }
#line 690 "make_hlds_warn.m"
            break;
#line 690 "make_hlds_warn.m"
          case (MR_Integer) 7:
#line 718 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 690 "make_hlds_warn.m"
            break;
#line 690 "make_hlds_warn.m"
          case (MR_Integer) 2:
#line 716 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 690 "make_hlds_warn.m"
            break;
#line 690 "make_hlds_warn.m"
          case (MR_Integer) 3:
#line 717 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
#line 690 "make_hlds_warn.m"
            break;
#line 690 "make_hlds_warn.m"
        }
#line 657 "make_hlds_warn.m"
      }
#line 653 "make_hlds_warn.m"
  }
#line 647 "make_hlds_warn.m"
}

#line 628 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
#line 628 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
#line 628 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21,
#line 628 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22)
#line 628 "make_hlds_warn.m"
{
#line 633 "make_hlds_warn.m"
  {
#line 633 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 633 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__PredInfo_18;
#line 633 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__PredStatus_19;
#line 633 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__IsImported_20;

#line 634 "make_hlds_warn.m"
    {
#line 634 "make_hlds_warn.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_10, hlds__make_hlds__make_hlds_warn__PredId_14, &hlds__make_hlds__make_hlds_warn__PredInfo_18);
    }
#line 635 "make_hlds_warn.m"
    {
#line 635 "make_hlds_warn.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__make_hlds_warn__PredInfo_18, &hlds__make_hlds__make_hlds_warn__PredStatus_19);
    }
#line 636 "make_hlds_warn.m"
    {
#line 636 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__IsImported_20 = hlds__status__pred_status_is_imported_1_f_0(hlds__make_hlds__make_hlds_warn__PredStatus_19);
    }
#line 639 "make_hlds_warn.m"
#line 639 "make_hlds_warn.m"
    switch (hlds__make_hlds__make_hlds_warn__IsImported_20) {
#line 639 "make_hlds_warn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 639 "make_hlds_warn.m"
      case (MR_Integer) 0:
#line 640 "make_hlds_warn.m"
        {
#line 640 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23;

#line 641 "make_hlds_warn.m"
          {
#line 641 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_10, hlds__make_hlds__make_hlds_warn__Lang_11, hlds__make_hlds__make_hlds_warn__Context_12, hlds__make_hlds__make_hlds_warn__SimpleCallId_13, hlds__make_hlds__make_hlds_warn__PredId_14, hlds__make_hlds__make_hlds_warn__ProcId_15, hlds__make_hlds__make_hlds_warn__BodyPieces_16, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23);
          }
#line 738 "make_hlds_warn.m"
#line 738 "make_hlds_warn.m"
          switch (hlds__make_hlds__make_hlds_warn__Lang_11) {
#line 738 "make_hlds_warn.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 738 "make_hlds_warn.m"
            case (MR_Integer) 0:
#line 738 "make_hlds_warn.m"
            case (MR_Integer) 1:
#line 738 "make_hlds_warn.m"
            case (MR_Integer) 2:
#line 739 "make_hlds_warn.m"
              {
#line 739 "make_hlds_warn.m"
                {
#line 739 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "return")), hlds__make_hlds__make_hlds_warn__BodyPieces_16);
                }
#line 739 "make_hlds_warn.m"
                if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 740 "make_hlds_warn.m"
                  {
#line 740 "make_hlds_warn.m"
                    MR_String hlds__make_hlds__make_hlds_warn__LangStr_32;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_33;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Msg_34;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Spec_36;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_40_40;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_41_41;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_42_42;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_45_45;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_46_46;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_59_59;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_60_60;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_63_63;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_64_64;
#line 740 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__V_72_72;

#line 740 "make_hlds_warn.m"
                    {
#line 740 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__LangStr_32 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_11);
                    }
#line 741 "make_hlds_warn.m"
                    {
#line 741 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 741 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_32));
#line 741 "make_hlds_warn.m"
                    }
#line 742 "make_hlds_warn.m"
                    {
#line 742 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 742 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_13));
#line 742 "make_hlds_warn.m"
                    }
#line 742 "make_hlds_warn.m"
                    {
#line 742 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_46_46));
#line 742 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[29])));
#line 742 "make_hlds_warn.m"
                    }
#line 742 "make_hlds_warn.m"
                    {
#line 742 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[31])));
#line 742 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_45_45));
#line 742 "make_hlds_warn.m"
                    }
#line 741 "make_hlds_warn.m"
                    {
#line 741 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_41_41));
#line 741 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_42_42));
#line 741 "make_hlds_warn.m"
                    }
#line 741 "make_hlds_warn.m"
                    {
#line 741 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[42])));
#line 741 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_40_40));
#line 741 "make_hlds_warn.m"
                    }
#line 747 "make_hlds_warn.m"
                    {
#line 747 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 747 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_33));
#line 747 "make_hlds_warn.m"
                    }
#line 747 "make_hlds_warn.m"
                    {
#line 747 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_64_64));
#line 747 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "make_hlds_warn.m"
                    }
#line 746 "make_hlds_warn.m"
                    {
#line 746 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_60_60, 0) = ((MR_Box) (((MR_Integer) 41 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 746 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_63_63));
#line 746 "make_hlds_warn.m"
                    }
#line 747 "make_hlds_warn.m"
                    {
#line 747 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_60_60));
#line 747 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "make_hlds_warn.m"
                    }
#line 745 "make_hlds_warn.m"
                    {
#line 745 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 745 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_12));
#line 745 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_59_59));
#line 745 "make_hlds_warn.m"
                    }
#line 751 "make_hlds_warn.m"
                    {
#line 751 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_34));
#line 751 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 751 "make_hlds_warn.m"
                    }
#line 751 "make_hlds_warn.m"
                    {
#line 751 "make_hlds_warn.m"
                      hlds__make_hlds__make_hlds_warn__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 751 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[2])));
#line 751 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 751 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_72_72));
#line 751 "make_hlds_warn.m"
                    }
#line 752 "make_hlds_warn.m"
                    {
#line 752 "make_hlds_warn.m"
                      MR_Word base;
#line 752 "make_hlds_warn.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "make_hlds_warn.m"
                      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = base;
#line 752 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_36));
#line 752 "make_hlds_warn.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23));
#line 752 "make_hlds_warn.m"
                    }
#line 740 "make_hlds_warn.m"
                  }
#line 739 "make_hlds_warn.m"
                else
#line 739 "make_hlds_warn.m"
                  *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23;
#line 739 "make_hlds_warn.m"
              }
#line 738 "make_hlds_warn.m"
              break;
#line 738 "make_hlds_warn.m"
            case (MR_Integer) 3:
#line 757 "make_hlds_warn.m"
              *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23;
#line 738 "make_hlds_warn.m"
              break;
#line 738 "make_hlds_warn.m"
          }
#line 640 "make_hlds_warn.m"
        }
#line 639 "make_hlds_warn.m"
        break;
#line 639 "make_hlds_warn.m"
      case (MR_Integer) 1:
#line 638 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21;
#line 639 "make_hlds_warn.m"
        break;
#line 639 "make_hlds_warn.m"
    }
#line 633 "make_hlds_warn.m"
  }
#line 628 "make_hlds_warn.m"
}

#line 620 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(
#line 620 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_4,
#line 620 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_5,
#line 620 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Var_6)
#line 620 "make_hlds_warn.m"
{
#line 623 "make_hlds_warn.m"
  {
#line 623 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 623 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 623 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__Name_7;
#line 623 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_8_8;

#line 624 "make_hlds_warn.m"
    {
#line 624 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__succeeded = parse_tree__set_of_var__member_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_9_9, hlds__make_hlds__make_hlds_warn__NonLocals_4, hlds__make_hlds__make_hlds_warn__Var_6);
    }
#line 623 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 623 "make_hlds_warn.m"
      {
#line 625 "make_hlds_warn.m"
        {
#line 625 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = mercury__varset__search_name_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_9_9, hlds__make_hlds__make_hlds_warn__VarSet_5, hlds__make_hlds__make_hlds_warn__Var_6, &hlds__make_hlds__make_hlds_warn__Name_7);
        }
#line 623 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 623 "make_hlds_warn.m"
          {
#line 626 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_8_8 = (MR_String) "_";
#line 626 "make_hlds_warn.m"
            {
#line 626 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__succeeded = mercury__string__prefix_2_p_0(hlds__make_hlds__make_hlds_warn__Name_7, hlds__make_hlds__make_hlds_warn__V_8_8);
            }
#line 623 "make_hlds_warn.m"
          }
#line 623 "make_hlds_warn.m"
      }
#line 623 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 623 "make_hlds_warn.m"
  }
#line 620 "make_hlds_warn.m"
}

#line 616 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(
#line 616 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg)
#line 616 "make_hlds_warn.m"
{
#line 616 "make_hlds_warn.m"
  {
#line 616 "make_hlds_warn.m"
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * hlds__make_hlds__make_hlds_warn__env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) hlds__make_hlds__make_hlds_warn__env_ptr_arg;

#line 616 "make_hlds_warn.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0, 1);
#line 616 "make_hlds_warn.m"
  }
#line 616 "make_hlds_warn.m"
}

#line 616 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
#line 616 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg)
#line 616 "make_hlds_warn.m"
{
#line 616 "make_hlds_warn.m"
  {
#line 616 "make_hlds_warn.m"
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * hlds__make_hlds__make_hlds_warn__env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) hlds__make_hlds__make_hlds_warn__env_ptr_arg;

#line 617 "make_hlds_warn.m"
    {
#line 617 "make_hlds_warn.m"
      (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10, &(hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__V_15_15);
    }
#line 616 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 616 "make_hlds_warn.m"
      {
#line 617 "make_hlds_warn.m"
        (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = (strcmp((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__V_15_15) == 0);
#line 617 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 617 "make_hlds_warn.m"
          {
#line 617 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(hlds__make_hlds__make_hlds_warn__env_ptr);
          }
#line 616 "make_hlds_warn.m"
      }
#line 616 "make_hlds_warn.m"
  }
#line 616 "make_hlds_warn.m"
}

#line 616 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(
#line 616 "make_hlds_warn.m"
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg)
#line 616 "make_hlds_warn.m"
{
#line 616 "make_hlds_warn.m"
  {
#line 616 "make_hlds_warn.m"
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * hlds__make_hlds__make_hlds_warn__env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) hlds__make_hlds__make_hlds_warn__env_ptr_arg;

#line 616 "make_hlds_warn.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0) == 0)
#line 616 "make_hlds_warn.m"
      {
#line 616 "make_hlds_warn.m"
        {
#line 616 "make_hlds_warn.m"
          parse_tree__set_of_var__member_2_p_1((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6, &(hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10, hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2, hlds__make_hlds__make_hlds_warn__env_ptr);
        }
#line 616 "make_hlds_warn.m"
        (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = MR_FALSE;
#line 616 "make_hlds_warn.m"
      }
#line 616 "make_hlds_warn.m"
    else
#line 616 "make_hlds_warn.m"
      (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = MR_TRUE;
#line 616 "make_hlds_warn.m"
  }
#line 616 "make_hlds_warn.m"
}

#line 607 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_5,
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_7,
#line 607 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Var_8)
#line 607 "make_hlds_warn.m"
{
#line 607 "make_hlds_warn.m"
  {
#line 607 "make_hlds_warn.m"
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s hlds__make_hlds__make_hlds_warn__env;

#line 607 "make_hlds_warn.m"
    (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6 = hlds__make_hlds__make_hlds_warn__QuantVars_6;
#line 607 "make_hlds_warn.m"
    (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7 = hlds__make_hlds__make_hlds_warn__VarSet_7;
#line 610 "make_hlds_warn.m"
    {
#line 613 "make_hlds_warn.m"
      MR_String hlds__make_hlds__make_hlds_warn__V_11_11;
#line 614 "make_hlds_warn.m"
      MR_String hlds__make_hlds__make_hlds_warn__V_12_12;

#line 611 "make_hlds_warn.m"
      {
#line 611 "make_hlds_warn.m"
        (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__NonLocals_5, hlds__make_hlds__make_hlds_warn__Var_8);
      }
#line 611 "make_hlds_warn.m"
      (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
#line 610 "make_hlds_warn.m"
      if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 610 "make_hlds_warn.m"
        {
#line 3817 "hlds.make_hlds.make_hlds_warn.c"
          (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 612 "make_hlds_warn.m"
          {
#line 612 "make_hlds_warn.m"
            (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7, hlds__make_hlds__make_hlds_warn__Var_8, &(hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9);
          }
#line 610 "make_hlds_warn.m"
          if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 610 "make_hlds_warn.m"
            {
#line 613 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__V_11_11 = (MR_String) "_";
#line 613 "make_hlds_warn.m"
              {
#line 613 "make_hlds_warn.m"
                (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, hlds__make_hlds__make_hlds_warn__V_11_11);
              }
#line 613 "make_hlds_warn.m"
              (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
#line 610 "make_hlds_warn.m"
              if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 610 "make_hlds_warn.m"
                {
#line 614 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_12_12 = (MR_String) "DCG_";
#line 614 "make_hlds_warn.m"
                  {
#line 614 "make_hlds_warn.m"
                    (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, hlds__make_hlds__make_hlds_warn__V_12_12);
                  }
#line 614 "make_hlds_warn.m"
                  (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
#line 610 "make_hlds_warn.m"
                  if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
#line 610 "make_hlds_warn.m"
                    {
#line 616 "make_hlds_warn.m"
                      {
#line 616 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(&hlds__make_hlds__make_hlds_warn__env);
                      }
#line 615 "make_hlds_warn.m"
                      (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
#line 610 "make_hlds_warn.m"
                    }
#line 610 "make_hlds_warn.m"
                }
#line 610 "make_hlds_warn.m"
            }
#line 610 "make_hlds_warn.m"
        }
#line 610 "make_hlds_warn.m"
      return (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded;
#line 610 "make_hlds_warn.m"
    }
#line 607 "make_hlds_warn.m"
  }
#line 607 "make_hlds_warn.m"
}

#line 592 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(
#line 592 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 592 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 592 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
#line 592 "make_hlds_warn.m"
{
#line 595 "make_hlds_warn.m"
  {
#line 595 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 595 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "make_hlds_warn.m"
      {
#line 595 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "make_hlds_warn.m"
      }
#line 595 "make_hlds_warn.m"
    else
#line 596 "make_hlds_warn.m"
      {
#line 596 "make_hlds_warn.m"
        MR_Char hlds__make_hlds__make_hlds_warn__C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 596 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__CodeChars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));

#line 597 "make_hlds_warn.m"
        {
#line 597 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(hlds__make_hlds__make_hlds_warn__C_4);
        }
#line 597 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 599 "make_hlds_warn.m"
          {
#line 599 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__NameCharList0_8;

#line 599 "make_hlds_warn.m"
            {
#line 599 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(hlds__make_hlds__make_hlds_warn__CodeChars_5, &hlds__make_hlds__make_hlds_warn__NameCharList0_8, hlds__make_hlds__make_hlds_warn__HeadVar__3_3);
            }
#line 600 "make_hlds_warn.m"
            {
#line 600 "make_hlds_warn.m"
              MR_Word base;
#line 600 "make_hlds_warn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "make_hlds_warn.m"
              *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = base;
#line 600 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (hlds__make_hlds__make_hlds_warn__C_4));
#line 600 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NameCharList0_8));
#line 600 "make_hlds_warn.m"
            }
#line 599 "make_hlds_warn.m"
          }
#line 597 "make_hlds_warn.m"
        else
#line 603 "make_hlds_warn.m"
          {
#line 603 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__HeadVar__3_3 = hlds__make_hlds__make_hlds_warn__CodeChars_5;
#line 603 "make_hlds_warn.m"
          }
#line 596 "make_hlds_warn.m"
      }
#line 595 "make_hlds_warn.m"
  }
#line 592 "make_hlds_warn.m"
}

#line 578 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(
#line 578 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 578 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
#line 578 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
#line 578 "make_hlds_warn.m"
{
#line 581 "make_hlds_warn.m"
  while (MR_TRUE)
#line 581 "make_hlds_warn.m"
    {
#line 581 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 581 "make_hlds_warn.m"
      {
#line 581 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 581 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "make_hlds_warn.m"
          {
#line 581 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "make_hlds_warn.m"
            *hlds__make_hlds__make_hlds_warn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "make_hlds_warn.m"
          }
#line 581 "make_hlds_warn.m"
        else
#line 582 "make_hlds_warn.m"
          {
#line 582 "make_hlds_warn.m"
            MR_Char hlds__make_hlds__make_hlds_warn__C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 582 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__CodeChars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));

#line 583 "make_hlds_warn.m"
            {
#line 583 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(hlds__make_hlds__make_hlds_warn__C_4);
            }
#line 583 "make_hlds_warn.m"
            if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 584 "make_hlds_warn.m"
              {
#line 584 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__NameCharList0_8;

#line 584 "make_hlds_warn.m"
                {
#line 584 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(hlds__make_hlds__make_hlds_warn__CodeChars_5, &hlds__make_hlds__make_hlds_warn__NameCharList0_8, hlds__make_hlds__make_hlds_warn__HeadVar__3_3);
                }
#line 585 "make_hlds_warn.m"
                {
#line 585 "make_hlds_warn.m"
                  MR_Word base;
#line 585 "make_hlds_warn.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "make_hlds_warn.m"
                  *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = base;
#line 585 "make_hlds_warn.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (hlds__make_hlds__make_hlds_warn__C_4));
#line 585 "make_hlds_warn.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NameCharList0_8));
#line 585 "make_hlds_warn.m"
                }
#line 584 "make_hlds_warn.m"
              }
#line 583 "make_hlds_warn.m"
            else
#line 589 "make_hlds_warn.m"
              {
#line 589 "make_hlds_warn.m"
                /* direct tailcall eliminated */
#line 589 "make_hlds_warn.m"
                {
#line 589 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_warn__CodeChars_5;

#line 589 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1;
#line 589 "make_hlds_warn.m"
                }
#line 589 "make_hlds_warn.m"
                continue;
#line 589 "make_hlds_warn.m"
              }
#line 582 "make_hlds_warn.m"
          }
#line 581 "make_hlds_warn.m"
      }
#line 581 "make_hlds_warn.m"
      break;
#line 581 "make_hlds_warn.m"
    }
#line 578 "make_hlds_warn.m"
}

#line 563 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(
#line 563 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__C_Code_3,
#line 563 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__List_4)
#line 563 "make_hlds_warn.m"
{
#line 565 "make_hlds_warn.m"
  {
#line 565 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 565 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__NameCharList_5;
#line 565 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TheRest_6;

#line 566 "make_hlds_warn.m"
    {
#line 566 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(hlds__make_hlds__make_hlds_warn__C_Code_3, &hlds__make_hlds__make_hlds_warn__NameCharList_5, &hlds__make_hlds__make_hlds_warn__TheRest_6);
    }
#line 571 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__NameCharList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__List_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 571 "make_hlds_warn.m"
    else
#line 572 "make_hlds_warn.m"
      {
#line 572 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Names_9;
#line 572 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__Name_10;

#line 573 "make_hlds_warn.m"
        {
#line 573 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(hlds__make_hlds__make_hlds_warn__TheRest_6, &hlds__make_hlds__make_hlds_warn__Names_9);
        }
#line 574 "make_hlds_warn.m"
        {
#line 574 "make_hlds_warn.m"
          mercury__string__from_char_list_2_p_0(hlds__make_hlds__make_hlds_warn__NameCharList_5, &hlds__make_hlds__make_hlds_warn__Name_10);
        }
#line 575 "make_hlds_warn.m"
        {
#line 575 "make_hlds_warn.m"
          MR_Word base;
#line 575 "make_hlds_warn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__List_4 = base;
#line 575 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Name_10));
#line 575 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Names_9));
#line 575 "make_hlds_warn.m"
        }
#line 572 "make_hlds_warn.m"
      }
#line 565 "make_hlds_warn.m"
  }
#line 563 "make_hlds_warn.m"
}

#line 543 "make_hlds_warn.m"
static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(
#line 543 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__UnmentionedVars_3)
#line 543 "make_hlds_warn.m"
{
#line 546 "make_hlds_warn.m"
  {
#line 546 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__UnmentionedVars_3)) == (MR_mktag((MR_Integer) 1)));
#line 546 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_4;
#line 546 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__Var_5;
#line 546 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_6_6;

#line 546 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 546 "make_hlds_warn.m"
      {
#line 546 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__UnmentionedVars_3, (MR_Integer) 0)));
#line 546 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__UnmentionedVars_3, (MR_Integer) 1)));
#line 546 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "make_hlds_warn.m"
      }
#line 546 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 547 "make_hlds_warn.m"
      {
#line 547 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_9_9;
#line 547 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_10_10;

#line 547 "make_hlds_warn.m"
        {
#line 547 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_10_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_10_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_5));
#line 547 "make_hlds_warn.m"
        }
#line 547 "make_hlds_warn.m"
        {
#line 547 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_9_9, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_10_10));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_9_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[39])));
#line 547 "make_hlds_warn.m"
        }
#line 547 "make_hlds_warn.m"
        {
#line 547 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[34])));
#line 547 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_9_9));
#line 547 "make_hlds_warn.m"
        }
#line 547 "make_hlds_warn.m"
      }
#line 546 "make_hlds_warn.m"
    else
#line 549 "make_hlds_warn.m"
      {
#line 549 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_17_17;
#line 549 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_18_18;
#line 549 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__V_19_19;
#line 549 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__V_20_20;

#line 550 "make_hlds_warn.m"
        {
#line 550 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_20_20 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__make_hlds__make_hlds_warn__UnmentionedVars_3);
        }
#line 550 "make_hlds_warn.m"
        {
#line 550 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_19_19 = parse_tree__error_util__add_quotes_1_f_0(hlds__make_hlds__make_hlds_warn__V_20_20);
        }
#line 550 "make_hlds_warn.m"
        {
#line 550 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 550 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_19_19));
#line 550 "make_hlds_warn.m"
        }
#line 550 "make_hlds_warn.m"
        {
#line 550 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_18_18));
#line 550 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[41])));
#line 550 "make_hlds_warn.m"
        }
#line 549 "make_hlds_warn.m"
        {
#line 549 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[35])));
#line 549 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_17_17));
#line 549 "make_hlds_warn.m"
        }
#line 549 "make_hlds_warn.m"
      }
#line 546 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__Pieces_4;
#line 546 "make_hlds_warn.m"
  }
#line 543 "make_hlds_warn.m"
}

#line 514 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(
#line 514 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NameList1_4,
#line 514 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__MaybeArg_5,
#line 514 "make_hlds_warn.m"
  MR_String * hlds__make_hlds__make_hlds_warn__Name_6)
#line 514 "make_hlds_warn.m"
{
#line 517 "make_hlds_warn.m"
  {
#line 517 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__MaybeArg_5)) == (MR_mktag((MR_Integer) 1)));
#line 517 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_8_8;
#line 518 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn___Mode_7;
#line 519 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_9_9;
#line 520 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_10_10;

#line 518 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 518 "make_hlds_warn.m"
      {
#line 518 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__MaybeArg_5, (MR_Integer) 0)));
#line 518 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_8_8, (MR_Integer) 0)));
#line 518 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn___Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_8_8, (MR_Integer) 1)));
#line 519 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_9_9 = (MR_String) "_";
#line 519 "make_hlds_warn.m"
        {
#line 519 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = mercury__string__prefix_2_p_0(*hlds__make_hlds__make_hlds_warn__Name_6, hlds__make_hlds__make_hlds_warn__V_9_9);
        }
#line 519 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 517 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 517 "make_hlds_warn.m"
          {
#line 4314 "hlds.make_hlds.make_hlds_warn.c"
            hlds__make_hlds__make_hlds_warn__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 520 "make_hlds_warn.m"
            {
#line 520 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_10_10, ((MR_Box) (*hlds__make_hlds__make_hlds_warn__Name_6)), hlds__make_hlds__make_hlds_warn__NameList1_4);
            }
#line 520 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
#line 517 "make_hlds_warn.m"
          }
#line 518 "make_hlds_warn.m"
      }
#line 517 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 517 "make_hlds_warn.m"
  }
#line 514 "make_hlds_warn.m"
}

#line 481 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(
#line 481 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Spec_4,
#line 481 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8,
#line 481 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_9)
#line 481 "make_hlds_warn.m"
{
#line 483 "make_hlds_warn.m"
  {
#line 483 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 483 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 483 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Specs_7;
#line 483 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 483 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 483 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 483 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 483 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 483 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));

#line 485 "make_hlds_warn.m"
    {
#line 485 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Specs_7, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_4));
#line 485 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Specs_7, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Specs0_6));
#line 485 "make_hlds_warn.m"
    }
#line 486 "make_hlds_warn.m"
    {
#line 486 "make_hlds_warn.m"
      MR_Word base;
#line 486 "make_hlds_warn.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 486 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_9 = base;
#line 486 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_11_11));
#line 486 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_12_12));
#line 486 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_13_13));
#line 486 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Specs_7));
#line 486 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_14_14));
#line 486 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_15_15));
#line 486 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_16_16));
#line 486 "make_hlds_warn.m"
    }
#line 483 "make_hlds_warn.m"
  }
#line 481 "make_hlds_warn.m"
}

#line 464 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1(
#line 464 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 464 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 464 "make_hlds_warn.m"
{
#line 464 "make_hlds_warn.m"
  {
#line 464 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 464 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 464 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__conv0_HeadVar__3_83;

#line 464 "make_hlds_warn.m"
    {
#line 464 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__conv0_HeadVar__3_83 = hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__464__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 464 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__3_83));
#line 464 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 464 "make_hlds_warn.m"
  }
#line 464 "make_hlds_warn.m"
}

#line 451 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0(
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SingleMulti_7,
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_8,
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__CallId_9,
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
#line 451 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Vars_11,
#line 451 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__Spec_12)
#line 451 "make_hlds_warn.m"
{
#line 455 "make_hlds_warn.m"
  {
#line 455 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81;
#line 455 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__Count_13;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Preamble_14;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__VarStrs0_15;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__VarStrs_16;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__VarsPiece_17;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_19;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Msg_20;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_24_24;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_25_25;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;
#line 455 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_33_33;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_64_64;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_65_65;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_68_68;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_69_69;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_70_70;
#line 455 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_78_78;
#line 467 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_35_35;
#line 467 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__V_18_18;

#line 459 "make_hlds_warn.m"
#line 459 "make_hlds_warn.m"
    switch (hlds__make_hlds__make_hlds_warn__SingleMulti_7) {
#line 459 "make_hlds_warn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 459 "make_hlds_warn.m"
      case (MR_Integer) 1:
#line 461 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__Count_13 = (MR_String) "more than once";
#line 459 "make_hlds_warn.m"
        break;
#line 459 "make_hlds_warn.m"
      case (MR_Integer) 0:
#line 458 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__Count_13 = (MR_String) "only once";
#line 459 "make_hlds_warn.m"
        break;
#line 459 "make_hlds_warn.m"
    }
#line 463 "make_hlds_warn.m"
    {
#line 463 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 463 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__CallId_9));
#line 463 "make_hlds_warn.m"
    }
#line 463 "make_hlds_warn.m"
    {
#line 463 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_25_25));
#line 463 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[8])));
#line 463 "make_hlds_warn.m"
    }
#line 463 "make_hlds_warn.m"
    {
#line 463 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Preamble_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Preamble_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[33])));
#line 463 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Preamble_14, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_24_24));
#line 463 "make_hlds_warn.m"
    }
#line 4548 "hlds.make_hlds.make_hlds_warn.c"
    hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 464 "make_hlds_warn.m"
    {
#line 464 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_32_32, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[3]));
#line 464 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1));
#line 464 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 464 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_32_32, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_10));
#line 464 "make_hlds_warn.m"
    }
#line 464 "make_hlds_warn.m"
    {
#line 464 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__VarStrs0_15 = mercury__list__map_2_f_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[1], hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81, hlds__make_hlds__make_hlds_warn__V_32_32, hlds__make_hlds__make_hlds_warn__Vars_11);
    }
#line 465 "make_hlds_warn.m"
    {
#line 465 "make_hlds_warn.m"
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81, hlds__make_hlds__make_hlds_warn__VarStrs0_15, &hlds__make_hlds__make_hlds_warn__VarStrs_16);
    }
#line 466 "make_hlds_warn.m"
    {
#line 466 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_33_33 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__make_hlds__make_hlds_warn__VarStrs_16);
    }
#line 466 "make_hlds_warn.m"
    {
#line 466 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__VarsPiece_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__VarsPiece_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 466 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__VarsPiece_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_33_33));
#line 466 "make_hlds_warn.m"
    }
#line 467 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__VarStrs_16)) == (MR_mktag((MR_Integer) 1)));
#line 467 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 467 "make_hlds_warn.m"
      {
#line 467 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__VarStrs_16, (MR_Integer) 0)));
#line 467 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__VarStrs_16, (MR_Integer) 1)));
#line 467 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "make_hlds_warn.m"
      }
#line 467 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 468 "make_hlds_warn.m"
      {
#line 468 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_38_38;
#line 468 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_39_39;
#line 468 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_42_42;
#line 468 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_43_43;

#line 469 "make_hlds_warn.m"
        {
#line 469 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Count_13));
#line 469 "make_hlds_warn.m"
        }
#line 469 "make_hlds_warn.m"
        {
#line 469 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_43_43));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[16])));
#line 469 "make_hlds_warn.m"
        }
#line 469 "make_hlds_warn.m"
        {
#line 469 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[36])));
#line 469 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_42_42));
#line 469 "make_hlds_warn.m"
        }
#line 468 "make_hlds_warn.m"
        {
#line 468 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarsPiece_17));
#line 468 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_39_39));
#line 468 "make_hlds_warn.m"
        }
#line 468 "make_hlds_warn.m"
        {
#line 468 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[34])));
#line 468 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_38_38));
#line 468 "make_hlds_warn.m"
        }
#line 468 "make_hlds_warn.m"
      }
#line 467 "make_hlds_warn.m"
    else
#line 471 "make_hlds_warn.m"
      {
#line 471 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_52_52;
#line 471 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_53_53;
#line 471 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_56_56;
#line 471 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_57_57;

#line 472 "make_hlds_warn.m"
        {
#line 472 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 472 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Count_13));
#line 472 "make_hlds_warn.m"
        }
#line 472 "make_hlds_warn.m"
        {
#line 472 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_57_57));
#line 472 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[16])));
#line 472 "make_hlds_warn.m"
        }
#line 472 "make_hlds_warn.m"
        {
#line 472 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[37])));
#line 472 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_56_56));
#line 472 "make_hlds_warn.m"
        }
#line 471 "make_hlds_warn.m"
        {
#line 471 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarsPiece_17));
#line 471 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_53_53));
#line 471 "make_hlds_warn.m"
        }
#line 471 "make_hlds_warn.m"
        {
#line 471 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[35])));
#line 471 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_52_52));
#line 471 "make_hlds_warn.m"
        }
#line 471 "make_hlds_warn.m"
      }
#line 476 "make_hlds_warn.m"
    {
#line 476 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_warn__Preamble_14, hlds__make_hlds__make_hlds_warn__Pieces_19);
    }
#line 476 "make_hlds_warn.m"
    {
#line 476 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_70_70));
#line 476 "make_hlds_warn.m"
    }
#line 476 "make_hlds_warn.m"
    {
#line 476 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_69_69));
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "make_hlds_warn.m"
    }
#line 475 "make_hlds_warn.m"
    {
#line 475 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_65_65, 0) = ((MR_Box) (((MR_Integer) 5 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 475 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_68_68));
#line 475 "make_hlds_warn.m"
    }
#line 476 "make_hlds_warn.m"
    {
#line 476 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_65_65));
#line 476 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "make_hlds_warn.m"
    }
#line 474 "make_hlds_warn.m"
    {
#line 474 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_20, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_8));
#line 474 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_64_64));
#line 474 "make_hlds_warn.m"
    }
#line 479 "make_hlds_warn.m"
    {
#line 479 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_20));
#line 479 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "make_hlds_warn.m"
    }
#line 479 "make_hlds_warn.m"
    {
#line 479 "make_hlds_warn.m"
      MR_Word base;
#line 479 "make_hlds_warn.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 479 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__Spec_12 = base;
#line 479 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[0])));
#line 479 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 479 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_78_78));
#line 479 "make_hlds_warn.m"
    }
#line 455 "make_hlds_warn.m"
  }
#line 451 "make_hlds_warn.m"
}

#line 430 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2(
#line 430 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 430 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 430 "make_hlds_warn.m"
{
#line 430 "make_hlds_warn.m"
  {
#line 430 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 430 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;

#line 430 "make_hlds_warn.m"
    {
#line 430 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 430 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 430 "make_hlds_warn.m"
  }
#line 430 "make_hlds_warn.m"
}

#line 402 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1(
#line 402 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 402 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 402 "make_hlds_warn.m"
{
#line 402 "make_hlds_warn.m"
  {
#line 402 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 402 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;

#line 402 "make_hlds_warn.m"
    {
#line 402 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 402 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 402 "make_hlds_warn.m"
  }
#line 402 "make_hlds_warn.m"
}

#line 388 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalVars_7,
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_8,
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_9,
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
#line 388 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25,
#line 388 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26)
#line 388 "make_hlds_warn.m"
{
#line 392 "make_hlds_warn.m"
  {
#line 392 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 392 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_95_95;
#line 392 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 392 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__CallId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 392 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Context_14;
#line 392 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__SingleVars_15;
#line 392 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__MultiVars_19;
#line 392 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_27_27;
#line 392 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31;
#line 392 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_35_35;
#line 398 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 398 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 398 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 398 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 398 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));

#line 400 "make_hlds_warn.m"
    {
#line 400 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8);
    }
#line 402 "make_hlds_warn.m"
    {
#line 402 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 402 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[1]));
#line 402 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1));
#line 402 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 402 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NonLocals_9));
#line 402 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__QuantVars_10));
#line 402 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_27_27, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_12));
#line 402 "make_hlds_warn.m"
    }
#line 4946 "hlds.make_hlds.make_hlds_warn.c"
    hlds__make_hlds__make_hlds_warn__TypeInfo_95_95 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[1];
#line 402 "make_hlds_warn.m"
    {
#line 402 "make_hlds_warn.m"
      mercury__list__filter_3_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_95_95, hlds__make_hlds__make_hlds_warn__V_27_27, hlds__make_hlds__make_hlds_warn__GoalVars_7, &hlds__make_hlds__make_hlds_warn__SingleVars_15);
    }
#line 407 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__SingleVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "make_hlds_warn.m"
    if (!(hlds__make_hlds__make_hlds_warn__succeeded))
#line 408 "make_hlds_warn.m"
      {
#line 408 "make_hlds_warn.m"
        {
#line 408 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8, (MR_Integer) 12);
        }
#line 408 "make_hlds_warn.m"
      }
#line 406 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 406 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25;
#line 406 "make_hlds_warn.m"
    else
#line 413 "make_hlds_warn.m"
      {
#line 413 "make_hlds_warn.m"
        {
#line 413 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8, (MR_Integer) 1);
        }
#line 413 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 414 "make_hlds_warn.m"
          {
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__SingleHeadVars0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__SingleHeadVars_17;
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30;
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 414 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 417 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_60_60;
#line 417 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_61_61;
#line 417 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_62_62;
#line 417 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_63_63;
#line 417 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_65_65;
#line 417 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_66_66;
#line 417 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_64_64;
#line 418 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_67_67;
#line 418 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_68_68;
#line 418 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_69_69;
#line 418 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_70_70;
#line 418 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_71_71;
#line 418 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_72_72;
#line 418 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_73_73;

#line 415 "make_hlds_warn.m"
            {
#line 415 "make_hlds_warn.m"
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__SingleVars_15, hlds__make_hlds__make_hlds_warn__SingleHeadVars0_16, &hlds__make_hlds__make_hlds_warn__SingleHeadVars_17);
            }
#line 417 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 417 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 417 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 417 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 417 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 417 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 417 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 417 "make_hlds_warn.m"
            {
#line 417 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 417 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_60_60));
#line 417 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_61_61));
#line 417 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_62_62));
#line 417 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_63_63));
#line 417 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SingleHeadVars_17));
#line 417 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_65_65));
#line 417 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_66_66));
#line 417 "make_hlds_warn.m"
            }
#line 418 "make_hlds_warn.m"
            {
#line 418 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__V_32_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8);
            }
#line 418 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 0)));
#line 418 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 1)));
#line 418 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 2)));
#line 418 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 3)));
#line 418 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 4)));
#line 418 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 5)));
#line 418 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 6)));
#line 418 "make_hlds_warn.m"
            {
#line 418 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 418 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_67_67));
#line 418 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_68_68));
#line 418 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_69_69));
#line 418 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_70_70));
#line 418 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_71_71));
#line 418 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_72_72));
#line 418 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_32_32));
#line 418 "make_hlds_warn.m"
            }
#line 414 "make_hlds_warn.m"
          }
#line 413 "make_hlds_warn.m"
        else
#line 421 "make_hlds_warn.m"
          {
#line 421 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__SingleSpec_18;

#line 420 "make_hlds_warn.m"
            {
#line 420 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 0, hlds__make_hlds__make_hlds_warn__Context_14, hlds__make_hlds__make_hlds_warn__CallId_13, hlds__make_hlds__make_hlds_warn__VarSet_12, hlds__make_hlds__make_hlds_warn__SingleVars_15, &hlds__make_hlds__make_hlds_warn__SingleSpec_18);
            }
#line 422 "make_hlds_warn.m"
            {
#line 422 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(hlds__make_hlds__make_hlds_warn__SingleSpec_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31);
            }
#line 421 "make_hlds_warn.m"
          }
#line 413 "make_hlds_warn.m"
      }
#line 430 "make_hlds_warn.m"
    {
#line 430 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 430 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[2]));
#line 430 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2));
#line 430 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 430 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NonLocals_9));
#line 430 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_35_35, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_12));
#line 430 "make_hlds_warn.m"
    }
#line 430 "make_hlds_warn.m"
    {
#line 430 "make_hlds_warn.m"
      mercury__list__filter_3_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_95_95, hlds__make_hlds__make_hlds_warn__V_35_35, hlds__make_hlds__make_hlds_warn__GoalVars_7, &hlds__make_hlds__make_hlds_warn__MultiVars_19);
    }
#line 433 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__MultiVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31;
#line 433 "make_hlds_warn.m"
    else
#line 435 "make_hlds_warn.m"
      {
#line 435 "make_hlds_warn.m"
        {
#line 435 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8, (MR_Integer) 1);
        }
#line 435 "make_hlds_warn.m"
        if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 436 "make_hlds_warn.m"
          {
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 5)));
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVars_23;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_39_39;
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 0)));
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 1)));
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 2)));
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 3)));
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 4)));
#line 436 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 6)));
#line 438 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_80_80;
#line 438 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_81_81;
#line 438 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_82_82;
#line 438 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_83_83;
#line 438 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_84_84;
#line 438 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_86_86;
#line 438 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_85_85;
#line 439 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_87_87;
#line 439 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_88_88;
#line 439 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_89_89;
#line 439 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_90_90;
#line 439 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_91_91;
#line 439 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_92_92;
#line 439 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__V_93_93;

#line 437 "make_hlds_warn.m"
            {
#line 437 "make_hlds_warn.m"
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__MultiVars_19, hlds__make_hlds__make_hlds_warn__MultiHeadVars0_22, &hlds__make_hlds__make_hlds_warn__MultiHeadVars_23);
            }
#line 438 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 0)));
#line 438 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 1)));
#line 438 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 2)));
#line 438 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 3)));
#line 438 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 4)));
#line 438 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 5)));
#line 438 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 6)));
#line 438 "make_hlds_warn.m"
            {
#line 438 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 438 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_80_80));
#line 438 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_81_81));
#line 438 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_82_82));
#line 438 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_83_83));
#line 438 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_84_84));
#line 438 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__MultiHeadVars_23));
#line 438 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_86_86));
#line 438 "make_hlds_warn.m"
            }
#line 439 "make_hlds_warn.m"
            {
#line 439 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__V_39_39 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8);
            }
#line 439 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
#line 439 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
#line 439 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
#line 439 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
#line 439 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
#line 439 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
#line 439 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 6)));
#line 439 "make_hlds_warn.m"
            {
#line 439 "make_hlds_warn.m"
              MR_Word base;
#line 439 "make_hlds_warn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 439 "make_hlds_warn.m"
              *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26 = base;
#line 439 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_87_87));
#line 439 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_88_88));
#line 439 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_89_89));
#line 439 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_90_90));
#line 439 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_91_91));
#line 439 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_92_92));
#line 439 "make_hlds_warn.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_39_39));
#line 439 "make_hlds_warn.m"
            }
#line 436 "make_hlds_warn.m"
          }
#line 435 "make_hlds_warn.m"
        else
#line 442 "make_hlds_warn.m"
          {
#line 442 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__MultiSpec_24;

#line 441 "make_hlds_warn.m"
            {
#line 441 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 1, hlds__make_hlds__make_hlds_warn__Context_14, hlds__make_hlds__make_hlds_warn__CallId_13, hlds__make_hlds__make_hlds_warn__VarSet_12, hlds__make_hlds__make_hlds_warn__MultiVars_19, &hlds__make_hlds__make_hlds_warn__MultiSpec_24);
            }
#line 443 "make_hlds_warn.m"
            {
#line 443 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(hlds__make_hlds__make_hlds_warn__MultiSpec_24, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26);
            }
#line 442 "make_hlds_warn.m"
          }
#line 435 "make_hlds_warn.m"
      }
#line 392 "make_hlds_warn.m"
  }
#line 388 "make_hlds_warn.m"
}

#line 346 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__X_7,
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__RHS_8,
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_9,
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
#line 346 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29,
#line 346 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30)
#line 346 "make_hlds_warn.m"
{
#line 352 "make_hlds_warn.m"
  {
#line 352 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 352 "make_hlds_warn.m"
#line 352 "make_hlds_warn.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__RHS_8)) {
#line 352 "make_hlds_warn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 352 "make_hlds_warn.m"
      case (MR_Integer) 0:
#line 352 "make_hlds_warn.m"
        {
#line 352 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)));
#line 352 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_13;
#line 352 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_38_38;
#line 352 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_40_40;

#line 353 "make_hlds_warn.m"
          {
#line 353 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
          }
#line 354 "make_hlds_warn.m"
          {
#line 354 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Y_12));
#line 354 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "make_hlds_warn.m"
          }
#line 354 "make_hlds_warn.m"
          {
#line 354 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__X_7));
#line 354 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_40_40));
#line 354 "make_hlds_warn.m"
          }
#line 354 "make_hlds_warn.m"
          {
#line 354 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__V_38_38, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_13, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);
          }
#line 352 "make_hlds_warn.m"
        }
#line 352 "make_hlds_warn.m"
        break;
#line 352 "make_hlds_warn.m"
      case (MR_Integer) 1:
#line 357 "make_hlds_warn.m"
        {
#line 357 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__Ys_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 2)));
#line 357 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_36_36;
#line 357 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_42;
#line 357 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)));
#line 357 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 1)));

#line 358 "make_hlds_warn.m"
          {
#line 358 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
          }
#line 359 "make_hlds_warn.m"
          {
#line 359 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__X_7));
#line 359 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Ys_16));
#line 359 "make_hlds_warn.m"
          }
#line 359 "make_hlds_warn.m"
          {
#line 359 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__V_36_36, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_42, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);
          }
#line 357 "make_hlds_warn.m"
        }
#line 352 "make_hlds_warn.m"
        break;
#line 352 "make_hlds_warn.m"
      case (MR_Integer) 2:
#line 363 "make_hlds_warn.m"
        {
#line 363 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__LambdaVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 3)));
#line 363 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__LambdaGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 6)));
#line 363 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__LambdaGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__LambdaGoal_25, (MR_Integer) 1)));
#line 363 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__LambdaNonLocals_28;
#line 363 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31;
#line 363 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_32_32;
#line 363 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_33_33;
#line 363 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_43;
#line 362 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___Purity_17 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 362 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___Groundness_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 362 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___PredOrFunc_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 362 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___NonLocals_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 2)));
#line 362 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 4)));
#line 362 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn___Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 5)));
#line 365 "make_hlds_warn.m"
          MR_Word hlds__make_hlds__make_hlds_warn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__LambdaGoal_25, (MR_Integer) 0)));

#line 366 "make_hlds_warn.m"
          {
#line 366 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__LambdaNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__LambdaGoalInfo_27);
          }
#line 367 "make_hlds_warn.m"
          {
#line 367 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__LambdaVars_22, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__LambdaNonLocals_28, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31);
          }
#line 372 "make_hlds_warn.m"
          {
#line 372 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
          }
#line 373 "make_hlds_warn.m"
          {
#line 373 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__X_7));
#line 373 "make_hlds_warn.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "make_hlds_warn.m"
          }
#line 373 "make_hlds_warn.m"
          {
#line 373 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__V_32_32, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_43, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_33_33);
          }
#line 376 "make_hlds_warn.m"
          {
#line 376 "make_hlds_warn.m"
            hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__LambdaGoal_25, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_33_33, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);
          }
#line 363 "make_hlds_warn.m"
        }
#line 352 "make_hlds_warn.m"
        break;
#line 352 "make_hlds_warn.m"
    }
#line 352 "make_hlds_warn.m"
  }
#line 346 "make_hlds_warn.m"
}

#line 337 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(
#line 337 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 337 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
#line 337 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
#line 337 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4)
#line 337 "make_hlds_warn.m"
{
#line 340 "make_hlds_warn.m"
  while (MR_TRUE)
#line 340 "make_hlds_warn.m"
    {
#line 340 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 340 "make_hlds_warn.m"
      {
#line 340 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 340 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3;
#line 340 "make_hlds_warn.m"
        else
#line 341 "make_hlds_warn.m"
          {
#line 341 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 341 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));
#line 341 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Case_9, (MR_Integer) 2)));
#line 341 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_18_18;
#line 342 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn___MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Case_9, (MR_Integer) 0)));
#line 342 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn___OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Case_9, (MR_Integer) 1)));

#line 343 "make_hlds_warn.m"
            {
#line 343 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Goal_15, hlds__make_hlds__make_hlds_warn__QuantVars_2, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_18_18);
            }
#line 344 "make_hlds_warn.m"
            /* direct tailcall eliminated */
#line 344 "make_hlds_warn.m"
            {
#line 344 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_warn__Cases_10;
#line 344 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_18_18;

#line 344 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_3;
#line 344 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1;
#line 344 "make_hlds_warn.m"
            }
#line 344 "make_hlds_warn.m"
            continue;
#line 341 "make_hlds_warn.m"
          }
#line 340 "make_hlds_warn.m"
      }
#line 340 "make_hlds_warn.m"
      break;
#line 340 "make_hlds_warn.m"
    }
#line 337 "make_hlds_warn.m"
}

#line 329 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(
#line 329 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
#line 329 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
#line 329 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
#line 329 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4)
#line 329 "make_hlds_warn.m"
{
#line 332 "make_hlds_warn.m"
  while (MR_TRUE)
#line 332 "make_hlds_warn.m"
    {
#line 332 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 332 "make_hlds_warn.m"
      {
#line 332 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

#line 332 "make_hlds_warn.m"
        if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3;
#line 332 "make_hlds_warn.m"
        else
#line 333 "make_hlds_warn.m"
          {
#line 333 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
#line 333 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));
#line 333 "make_hlds_warn.m"
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_15;

#line 334 "make_hlds_warn.m"
            {
#line 334 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Goal_9, hlds__make_hlds__make_hlds_warn__QuantVars_2, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_15);
            }
#line 335 "make_hlds_warn.m"
            /* direct tailcall eliminated */
#line 335 "make_hlds_warn.m"
            {
#line 335 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1 = hlds__make_hlds__make_hlds_warn__Goals_10;
#line 335 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_15;

#line 335 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_3;
#line 335 "make_hlds_warn.m"
              hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__HeadVar__1__tmp_copy_1;
#line 335 "make_hlds_warn.m"
            }
#line 335 "make_hlds_warn.m"
            continue;
#line 333 "make_hlds_warn.m"
          }
#line 332 "make_hlds_warn.m"
      }
#line 332 "make_hlds_warn.m"
      break;
#line 332 "make_hlds_warn.m"
    }
#line 329 "make_hlds_warn.m"
}

#line 307 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2(
#line 307 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 307 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 307 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
#line 307 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_3)
#line 307 "make_hlds_warn.m"
{
#line 307 "make_hlds_warn.m"
  {
#line 307 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 307 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__conv1_STATE_VARIABLE_Info_9;

#line 307 "make_hlds_warn.m"
    {
#line 307 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2), &hlds__make_hlds__make_hlds_warn__conv1_STATE_VARIABLE_Info_9);
    }
#line 307 "make_hlds_warn.m"
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv1_STATE_VARIABLE_Info_9));
#line 307 "make_hlds_warn.m"
  }
#line 307 "make_hlds_warn.m"
}

#line 303 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1(
#line 303 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 303 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 303 "make_hlds_warn.m"
{
#line 303 "make_hlds_warn.m"
  {
#line 303 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 303 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 303 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_HeadVar__2_2;

#line 303 "make_hlds_warn.m"
    {
#line 303 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 303 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__2_2));
#line 303 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 303 "make_hlds_warn.m"
  }
#line 303 "make_hlds_warn.m"
}

#line 204 "make_hlds_warn.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(
#line 204 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_5,
#line 204 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
#line 204 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93,
#line 204 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94)
#line 204 "make_hlds_warn.m"
{
#line 207 "make_hlds_warn.m"
  while (MR_TRUE)
#line 207 "make_hlds_warn.m"
    {
#line 207 "make_hlds_warn.m"
      /* tailcall optimized into a loop */
#line 207 "make_hlds_warn.m"
      {
#line 207 "make_hlds_warn.m"
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 207 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Goal_5, (MR_Integer) 0)));
#line 207 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Goal_5, (MR_Integer) 1)));

#line 212 "make_hlds_warn.m"
#line 212 "make_hlds_warn.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__GoalExpr_8)) {
#line 212 "make_hlds_warn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 212 "make_hlds_warn.m"
          case (MR_Integer) 0:
#line 219 "make_hlds_warn.m"
            {
#line 219 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_warn__GoalExpr_8), (MR_Integer) 0);

#line 220 "make_hlds_warn.m"
              /* direct tailcall eliminated */
#line 220 "make_hlds_warn.m"
              {
#line 220 "make_hlds_warn.m"
                MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_15;

#line 220 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 220 "make_hlds_warn.m"
              }
#line 220 "make_hlds_warn.m"
              continue;
#line 219 "make_hlds_warn.m"
            }
#line 212 "make_hlds_warn.m"
            break;
#line 212 "make_hlds_warn.m"
          case (MR_Integer) 1:
#line 296 "make_hlds_warn.m"
            {
#line 296 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 0)));
#line 296 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__RHS_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 296 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 296 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 296 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));

#line 297 "make_hlds_warn.m"
              {
#line 297 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(hlds__make_hlds__make_hlds_warn__Var_63, hlds__make_hlds__make_hlds_warn__RHS_64, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
              }
#line 296 "make_hlds_warn.m"
            }
#line 212 "make_hlds_warn.m"
            break;
#line 212 "make_hlds_warn.m"
          case (MR_Integer) 2:
#line 286 "make_hlds_warn.m"
            {
#line 286 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 286 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_137;
#line 286 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 0)));
#line 286 "make_hlds_warn.m"
              MR_Integer hlds__make_hlds__make_hlds_warn__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 286 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 286 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
#line 286 "make_hlds_warn.m"
              MR_Word hlds__make_hlds__make_hlds_warn__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 5)));

#line 287 "make_hlds_warn.m"
              {
#line 287 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__NonLocals_137 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
              }
#line 288 "make_hlds_warn.m"
              {
#line 288 "make_hlds_warn.m"
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Args_53, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_137, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
              }
#line 286 "make_hlds_warn.m"
            }
#line 212 "make_hlds_warn.m"
            break;
#line 212 "make_hlds_warn.m"
          case (MR_Integer) 3:
#line 212 "make_hlds_warn.m"
#line 212 "make_hlds_warn.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 0)))) {
#line 212 "make_hlds_warn.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 212 "make_hlds_warn.m"
              case (MR_Integer) 0:
#line 290 "make_hlds_warn.m"
                {
#line 290 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__GenericCall_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 290 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Args0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 290 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Args1_62;
#line 290 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_138;
#line 290 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Args_139;
#line 290 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 290 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
#line 290 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 5)));

#line 291 "make_hlds_warn.m"
                  {
#line 291 "make_hlds_warn.m"
                    hlds__goal_util__generic_call_vars_2_p_0(hlds__make_hlds__make_hlds_warn__GenericCall_57, &hlds__make_hlds__make_hlds_warn__Args1_62);
                  }
#line 292 "make_hlds_warn.m"
                  {
#line 292 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Args_139 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[1], hlds__make_hlds__make_hlds_warn__Args0_58, hlds__make_hlds__make_hlds_warn__Args1_62);
                  }
#line 293 "make_hlds_warn.m"
                  {
#line 293 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__NonLocals_138 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
                  }
#line 294 "make_hlds_warn.m"
                  {
#line 294 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Args_139, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_138, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
                  }
#line 290 "make_hlds_warn.m"
                }
#line 212 "make_hlds_warn.m"
                break;
#line 212 "make_hlds_warn.m"
              case (MR_Integer) 1:
#line 300 "make_hlds_warn.m"
                {
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Attrs_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 300 "make_hlds_warn.m"
                  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__PragmaImpl_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 7)));
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Context_74;
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Lang_75;
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__NamesModes_76;
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__PragmaSpecs_77;
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_106_106;
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Args_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
#line 300 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_144_144;
#line 299 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 5)));
#line 299 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 6)));
#line 304 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_145_145;
#line 304 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_146_146;
#line 304 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_147_147;
#line 304 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_148_148;
#line 304 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__V_149_149;
#line 307 "make_hlds_warn.m"
                  MR_Box hlds__make_hlds__make_hlds_warn__conv2_STATE_VARIABLE_Info_94;

#line 301 "make_hlds_warn.m"
                  {
#line 301 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Context_74 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
                  }
#line 302 "make_hlds_warn.m"
                  {
#line 302 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Lang_75 = parse_tree__prog_data__get_foreign_language_1_f_0(hlds__make_hlds__make_hlds_warn__Attrs_68);
                  }
#line 303 "make_hlds_warn.m"
                  {
#line 303 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__NamesModes_76 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[0], (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[1], hlds__make_hlds__make_hlds_warn__Args_140);
                  }
#line 304 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 0)));
#line 304 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 1)));
#line 304 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 2)));
#line 304 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 3)));
#line 304 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 4)));
#line 304 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 5)));
#line 304 "make_hlds_warn.m"
                  hlds__make_hlds__make_hlds_warn__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, (MR_Integer) 6)));
#line 304 "make_hlds_warn.m"
                  {
#line 304 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(hlds__make_hlds__make_hlds_warn__V_106_106, hlds__make_hlds__make_hlds_warn__PragmaImpl_73, hlds__make_hlds__make_hlds_warn__Lang_75, hlds__make_hlds__make_hlds_warn__NamesModes_76, hlds__make_hlds__make_hlds_warn__Context_74, hlds__make_hlds__make_hlds_warn__V_144_144, hlds__make_hlds__make_hlds_warn__PredId_69, hlds__make_hlds__make_hlds_warn__ProcId_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_warn__PragmaSpecs_77);
                  }
#line 307 "make_hlds_warn.m"
                  {
#line 307 "make_hlds_warn.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[2], hlds__make_hlds__make_hlds_warn__PragmaSpecs_77, ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93)), &hlds__make_hlds__make_hlds_warn__conv2_STATE_VARIABLE_Info_94);
                  }
#line 307 "make_hlds_warn.m"
                  *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94 = ((MR_Word) hlds__make_hlds__make_hlds_warn__conv2_STATE_VARIABLE_Info_94);
#line 300 "make_hlds_warn.m"
                }
#line 212 "make_hlds_warn.m"
                break;
#line 212 "make_hlds_warn.m"
              case (MR_Integer) 2:
#line 210 "make_hlds_warn.m"
                {
#line 210 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 210 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn___ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

#line 211 "make_hlds_warn.m"
                  {
#line 211 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__Goals_11, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
                  }
#line 210 "make_hlds_warn.m"
                }
#line 212 "make_hlds_warn.m"
                break;
#line 212 "make_hlds_warn.m"
              case (MR_Integer) 3:
#line 213 "make_hlds_warn.m"
                {
#line 213 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Goals_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

#line 214 "make_hlds_warn.m"
                  {
#line 214 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__Goals_131, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
                  }
#line 213 "make_hlds_warn.m"
                }
#line 212 "make_hlds_warn.m"
                break;
#line 212 "make_hlds_warn.m"
              case (MR_Integer) 4:
#line 216 "make_hlds_warn.m"
                {
#line 216 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 216 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn___Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 216 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn___CanFail_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));

#line 217 "make_hlds_warn.m"
                  {
#line 217 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(hlds__make_hlds__make_hlds_warn__Cases_14, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
                  }
#line 216 "make_hlds_warn.m"
                }
#line 212 "make_hlds_warn.m"
                break;
#line 212 "make_hlds_warn.m"
              case (MR_Integer) 5:
#line 222 "make_hlds_warn.m"
                {
#line 222 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Reason_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
#line 222 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));

#line 240 "make_hlds_warn.m"
#line 240 "make_hlds_warn.m"
                  switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Reason_16)) {
#line 240 "make_hlds_warn.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 240 "make_hlds_warn.m"
                    case (MR_Integer) 0:
#line 227 "make_hlds_warn.m"
                      {
#line 227 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)));
#line 227 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__SubQuantVars_23;
#line 227 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_125;

#line 235 "make_hlds_warn.m"
                        if ((hlds__make_hlds__make_hlds_warn__Vars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "make_hlds_warn.m"
                          {
#line 237 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__SubQuantVars_23 = hlds__make_hlds__make_hlds_warn__QuantVars_6;
#line 236 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_125 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93;
#line 236 "make_hlds_warn.m"
                          }
#line 235 "make_hlds_warn.m"
                        else
#line 229 "make_hlds_warn.m"
                          {
#line 229 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_156;
#line 229 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__SubGoalVars_21;
#line 229 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__EmptySet_22;

#line 230 "make_hlds_warn.m"
                            {
#line 230 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__SubGoalVars_21 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__SubGoal_132);
                            }
#line 6097 "hlds.make_hlds.make_hlds_warn.c"
                            hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_156 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 231 "make_hlds_warn.m"
                            {
#line 231 "make_hlds_warn.m"
                              parse_tree__set_of_var__init_1_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_156, &hlds__make_hlds__make_hlds_warn__EmptySet_22);
                            }
#line 232 "make_hlds_warn.m"
                            {
#line 232 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Vars_17, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__EmptySet_22, hlds__make_hlds__make_hlds_warn__SubGoalVars_21, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_125);
                            }
#line 234 "make_hlds_warn.m"
                            {
#line 234 "make_hlds_warn.m"
                              parse_tree__set_of_var__insert_list_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_156, hlds__make_hlds__make_hlds_warn__Vars_17, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__SubQuantVars_23);
                            }
#line 229 "make_hlds_warn.m"
                          }
#line 239 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 239 "make_hlds_warn.m"
                        {
#line 239 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_132;
#line 239 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__QuantVars__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__SubQuantVars_23;
#line 239 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_125;

#line 239 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93;
#line 239 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__QuantVars_6 = hlds__make_hlds__make_hlds_warn__QuantVars__tmp_copy_6;
#line 239 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 239 "make_hlds_warn.m"
                        }
#line 239 "make_hlds_warn.m"
                        continue;
#line 227 "make_hlds_warn.m"
                      }
#line 240 "make_hlds_warn.m"
                      break;
#line 240 "make_hlds_warn.m"
                    case (MR_Integer) 1:
#line 227 "make_hlds_warn.m"
                      {
#line 227 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Vars_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)));
#line 227 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__SubQuantVars_187;
#line 227 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_188;
#line 226 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 1)));

#line 235 "make_hlds_warn.m"
                        if ((hlds__make_hlds__make_hlds_warn__Vars_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "make_hlds_warn.m"
                          {
#line 237 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__SubQuantVars_187 = hlds__make_hlds__make_hlds_warn__QuantVars_6;
#line 236 "make_hlds_warn.m"
                            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_188 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93;
#line 236 "make_hlds_warn.m"
                          }
#line 235 "make_hlds_warn.m"
                        else
#line 229 "make_hlds_warn.m"
                          {
#line 229 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_176;
#line 229 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__SubGoalVars_174;
#line 229 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__EmptySet_175;

#line 230 "make_hlds_warn.m"
                            {
#line 230 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__SubGoalVars_174 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__SubGoal_132);
                            }
#line 6180 "hlds.make_hlds.make_hlds_warn.c"
                            hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_176 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 231 "make_hlds_warn.m"
                            {
#line 231 "make_hlds_warn.m"
                              parse_tree__set_of_var__init_1_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_176, &hlds__make_hlds__make_hlds_warn__EmptySet_175);
                            }
#line 232 "make_hlds_warn.m"
                            {
#line 232 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Vars_182, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__EmptySet_175, hlds__make_hlds__make_hlds_warn__SubGoalVars_174, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_188);
                            }
#line 234 "make_hlds_warn.m"
                            {
#line 234 "make_hlds_warn.m"
                              parse_tree__set_of_var__insert_list_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_156_176, hlds__make_hlds__make_hlds_warn__Vars_182, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__SubQuantVars_187);
                            }
#line 229 "make_hlds_warn.m"
                          }
#line 239 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 239 "make_hlds_warn.m"
                        {
#line 239 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_132;
#line 239 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__QuantVars__tmp_copy_6 = hlds__make_hlds__make_hlds_warn__SubQuantVars_187;
#line 239 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_125_188;

#line 239 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93;
#line 239 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__QuantVars_6 = hlds__make_hlds__make_hlds_warn__QuantVars__tmp_copy_6;
#line 239 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 239 "make_hlds_warn.m"
                        }
#line 239 "make_hlds_warn.m"
                        continue;
#line 227 "make_hlds_warn.m"
                      }
#line 240 "make_hlds_warn.m"
                      break;
#line 240 "make_hlds_warn.m"
                    case (MR_Integer) 2:
#line 249 "make_hlds_warn.m"
                      {
#line 249 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 249 "make_hlds_warn.m"
                        {
#line 249 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_132;

#line 249 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 249 "make_hlds_warn.m"
                        }
#line 249 "make_hlds_warn.m"
                        continue;
#line 249 "make_hlds_warn.m"
                      }
#line 240 "make_hlds_warn.m"
                      break;
#line 240 "make_hlds_warn.m"
                    case (MR_Integer) 3:
#line 240 "make_hlds_warn.m"
#line 240 "make_hlds_warn.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)))) {
#line 240 "make_hlds_warn.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 240 "make_hlds_warn.m"
                        case (MR_Integer) 0:
#line 240 "make_hlds_warn.m"
                        case (MR_Integer) 1:
#line 240 "make_hlds_warn.m"
                        case (MR_Integer) 2:
#line 240 "make_hlds_warn.m"
                        case (MR_Integer) 3:
#line 240 "make_hlds_warn.m"
                        case (MR_Integer) 4:
#line 240 "make_hlds_warn.m"
                        case (MR_Integer) 6:
#line 249 "make_hlds_warn.m"
                          {
#line 249 "make_hlds_warn.m"
                            /* direct tailcall eliminated */
#line 249 "make_hlds_warn.m"
                            {
#line 249 "make_hlds_warn.m"
                              MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_132;

#line 249 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 249 "make_hlds_warn.m"
                            }
#line 249 "make_hlds_warn.m"
                            continue;
#line 249 "make_hlds_warn.m"
                          }
#line 240 "make_hlds_warn.m"
                          break;
#line 240 "make_hlds_warn.m"
                        case (MR_Integer) 5:
#line 251 "make_hlds_warn.m"
                          {
#line 251 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__TermVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 1)));
#line 251 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_38;
#line 251 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn__V_121_121;
#line 251 "make_hlds_warn.m"
                            MR_Word hlds__make_hlds__make_hlds_warn___Kind_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 2)));

#line 256 "make_hlds_warn.m"
                            {
#line 256 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__NonLocals_38 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
                            }
#line 257 "make_hlds_warn.m"
                            {
#line 257 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "make_hlds_warn.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__TermVar_36));
#line 257 "make_hlds_warn.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "make_hlds_warn.m"
                            }
#line 257 "make_hlds_warn.m"
                            {
#line 257 "make_hlds_warn.m"
                              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__V_121_121, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_38, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
                            }
#line 251 "make_hlds_warn.m"
                          }
#line 240 "make_hlds_warn.m"
                          break;
#line 240 "make_hlds_warn.m"
                        case (MR_Integer) 7:
#line 260 "make_hlds_warn.m"
                          {
#line 263 "make_hlds_warn.m"
                            {
#line 263 "make_hlds_warn.m"
                              mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.make_hlds_warn", (MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal\'/4", (MR_String) "loop_control");
#line 263 "make_hlds_warn.m"
                              return;
                            }
#line 260 "make_hlds_warn.m"
                          }
#line 240 "make_hlds_warn.m"
                          break;
#line 240 "make_hlds_warn.m"
                      }
#line 240 "make_hlds_warn.m"
                      break;
#line 240 "make_hlds_warn.m"
                  }
#line 222 "make_hlds_warn.m"
                }
#line 212 "make_hlds_warn.m"
                break;
#line 212 "make_hlds_warn.m"
              case (MR_Integer) 6:
#line 266 "make_hlds_warn.m"
                {
#line 266 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Cond_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
#line 266 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Then_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
#line 266 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Else_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
#line 266 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__CondThenQuantVars_50;
#line 266 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_114_114;
#line 266 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_115_115;
#line 266 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116;
#line 266 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__Vars_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

#line 278 "make_hlds_warn.m"
                  if ((hlds__make_hlds__make_hlds_warn__Vars_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_114_114 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93;
#line 278 "make_hlds_warn.m"
                  else
#line 271 "make_hlds_warn.m"
                    {
#line 271 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_157_157;
#line 271 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__CondVars_47;
#line 271 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__ThenVars_48;
#line 271 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__CondThenVars_49;
#line 271 "make_hlds_warn.m"
                      MR_Word hlds__make_hlds__make_hlds_warn__EmptySet_133;

#line 272 "make_hlds_warn.m"
                      {
#line 272 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__CondVars_47 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__Cond_42);
                      }
#line 273 "make_hlds_warn.m"
                      {
#line 273 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__ThenVars_48 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__Then_43);
                      }
#line 6395 "hlds.make_hlds.make_hlds_warn.c"
                      hlds__make_hlds__make_hlds_warn__TypeCtorInfo_157_157 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 274 "make_hlds_warn.m"
                      {
#line 274 "make_hlds_warn.m"
                        parse_tree__set_of_var__union_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_157_157, hlds__make_hlds__make_hlds_warn__CondVars_47, hlds__make_hlds__make_hlds_warn__ThenVars_48, &hlds__make_hlds__make_hlds_warn__CondThenVars_49);
                      }
#line 275 "make_hlds_warn.m"
                      {
#line 275 "make_hlds_warn.m"
                        parse_tree__set_of_var__init_1_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_157_157, &hlds__make_hlds__make_hlds_warn__EmptySet_133);
                      }
#line 276 "make_hlds_warn.m"
                      {
#line 276 "make_hlds_warn.m"
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Vars_135, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__EmptySet_133, hlds__make_hlds__make_hlds_warn__CondThenVars_49, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_114_114);
                      }
#line 271 "make_hlds_warn.m"
                    }
#line 281 "make_hlds_warn.m"
                  {
#line 281 "make_hlds_warn.m"
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__Vars_135, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__CondThenQuantVars_50);
                  }
#line 282 "make_hlds_warn.m"
                  {
#line 282 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Cond_42, hlds__make_hlds__make_hlds_warn__CondThenQuantVars_50, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_114_114, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_115_115);
                  }
#line 283 "make_hlds_warn.m"
                  {
#line 283 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Then_43, hlds__make_hlds__make_hlds_warn__CondThenQuantVars_50, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_115_115, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116);
                  }
#line 284 "make_hlds_warn.m"
                  /* direct tailcall eliminated */
#line 284 "make_hlds_warn.m"
                  {
#line 284 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__Else_44;
#line 284 "make_hlds_warn.m"
                    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116;

#line 284 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0__tmp_copy_93;
#line 284 "make_hlds_warn.m"
                    hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 284 "make_hlds_warn.m"
                  }
#line 284 "make_hlds_warn.m"
                  continue;
#line 266 "make_hlds_warn.m"
                }
#line 212 "make_hlds_warn.m"
                break;
#line 212 "make_hlds_warn.m"
              case (MR_Integer) 7:
#line 309 "make_hlds_warn.m"
                {
#line 309 "make_hlds_warn.m"
                  MR_Word hlds__make_hlds__make_hlds_warn__ShortHand_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

#line 320 "make_hlds_warn.m"
#line 320 "make_hlds_warn.m"
                  switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__ShortHand_78)) {
#line 320 "make_hlds_warn.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 320 "make_hlds_warn.m"
                    case (MR_Integer) 0:
#line 324 "make_hlds_warn.m"
                      {
#line 324 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__GoalB_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 1)));
#line 324 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Goal_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 0)));
#line 324 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Goals_195;
#line 324 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_200;

#line 325 "make_hlds_warn.m"
                        {
#line 325 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goals_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_195, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__GoalB_92));
#line 325 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "make_hlds_warn.m"
                        }
#line 334 "make_hlds_warn.m"
                        {
#line 334 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Goal_194, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_200);
                        }
#line 335 "make_hlds_warn.m"
                        {
#line 335 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__Goals_195, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_200, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
                        }
#line 324 "make_hlds_warn.m"
                      }
#line 320 "make_hlds_warn.m"
                      break;
#line 320 "make_hlds_warn.m"
                    case (MR_Integer) 1:
#line 314 "make_hlds_warn.m"
                      {
#line 314 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__Inner_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 2)));
#line 314 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__MainGoal_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 4)));
#line 314 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__OrElseGoals_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 5)));
#line 314 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__InnerDI_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Inner_81, (MR_Integer) 0)));
#line 314 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__InnerUO_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Inner_81, (MR_Integer) 1)));
#line 314 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__InsideQuantVars_88;
#line 314 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_100_100;
#line 314 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_101_101;
#line 314 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_103_103;
#line 313 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn___GoalType_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 0)));
#line 313 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn___Outer_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 1)));
#line 313 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn___MaybeOutputVars_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 3)));
#line 313 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn___OrElseInners_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 6)));

#line 316 "make_hlds_warn.m"
                        {
#line 316 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__InnerUO_87));
#line 316 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "make_hlds_warn.m"
                        }
#line 316 "make_hlds_warn.m"
                        {
#line 316 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__InnerDI_86));
#line 316 "make_hlds_warn.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_101_101));
#line 316 "make_hlds_warn.m"
                        }
#line 316 "make_hlds_warn.m"
                        {
#line 316 "make_hlds_warn.m"
                          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__V_100_100, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__InsideQuantVars_88);
                        }
#line 318 "make_hlds_warn.m"
                        {
#line 318 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__MainGoal_83, hlds__make_hlds__make_hlds_warn__InsideQuantVars_88, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_93, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_103_103);
                        }
#line 319 "make_hlds_warn.m"
                        {
#line 319 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__OrElseGoals_84, hlds__make_hlds__make_hlds_warn__InsideQuantVars_88, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_103_103, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_94);
                        }
#line 314 "make_hlds_warn.m"
                      }
#line 320 "make_hlds_warn.m"
                      break;
#line 320 "make_hlds_warn.m"
                    case (MR_Integer) 2:
#line 321 "make_hlds_warn.m"
                      {
#line 321 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_141 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 2)));
#line 321 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 0)));
#line 321 "make_hlds_warn.m"
                        MR_Word hlds__make_hlds__make_hlds_warn__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__ShortHand_78, (MR_Integer) 1)));

#line 322 "make_hlds_warn.m"
                        /* direct tailcall eliminated */
#line 322 "make_hlds_warn.m"
                        {
#line 322 "make_hlds_warn.m"
                          MR_Word hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5 = hlds__make_hlds__make_hlds_warn__SubGoal_141;

#line 322 "make_hlds_warn.m"
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__Goal__tmp_copy_5;
#line 322 "make_hlds_warn.m"
                        }
#line 322 "make_hlds_warn.m"
                        continue;
#line 321 "make_hlds_warn.m"
                      }
#line 320 "make_hlds_warn.m"
                      break;
#line 320 "make_hlds_warn.m"
                  }
#line 309 "make_hlds_warn.m"
                }
#line 212 "make_hlds_warn.m"
                break;
#line 212 "make_hlds_warn.m"
            }
#line 212 "make_hlds_warn.m"
            break;
#line 212 "make_hlds_warn.m"
        }
#line 207 "make_hlds_warn.m"
      }
#line 207 "make_hlds_warn.m"
      break;
#line 207 "make_hlds_warn.m"
    }
#line 204 "make_hlds_warn.m"
}

#line 98 "make_hlds_warn.m"
static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
#line 98 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_5,
#line 98 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_6,
#line 98 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Warning_7)
#line 98 "make_hlds_warn.m"
{
#line 101 "make_hlds_warn.m"
  {
#line 101 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Spec_8;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Warning_7, (MR_Integer) 0)));
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Warning_7, (MR_Integer) 1)));
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces1_11;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces2_13;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Msg_14;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_18_18;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_19_19;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_49_49;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_50_50;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_53_53;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_54_54;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_55_55;
#line 101 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_63_63;
#line 105 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Var_12;
#line 105 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_26_26;

#line 104 "make_hlds_warn.m"
    {
#line 104 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 104 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__PredCallId_5));
#line 104 "make_hlds_warn.m"
    }
#line 104 "make_hlds_warn.m"
    {
#line 104 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_19_19));
#line 104 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[8])));
#line 104 "make_hlds_warn.m"
    }
#line 104 "make_hlds_warn.m"
    {
#line 104 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Pieces1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces1_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[33])));
#line 104 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces1_11, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_18_18));
#line 104 "make_hlds_warn.m"
    }
#line 105 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Vars_9)) == (MR_mktag((MR_Integer) 1)));
#line 105 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 105 "make_hlds_warn.m"
      {
#line 105 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Vars_9, (MR_Integer) 0)));
#line 105 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Vars_9, (MR_Integer) 1)));
#line 105 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "make_hlds_warn.m"
      }
#line 105 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 106 "make_hlds_warn.m"
      {
#line 106 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_29_29;
#line 106 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_30_30;
#line 106 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__V_31_31;

#line 107 "make_hlds_warn.m"
        {
#line 107 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_31_31 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__VarSet_6, hlds__make_hlds__make_hlds_warn__Var_12);
        }
#line 107 "make_hlds_warn.m"
        {
#line 107 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 107 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_31_31));
#line 107 "make_hlds_warn.m"
        }
#line 107 "make_hlds_warn.m"
        {
#line 107 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_30_30));
#line 107 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[12])));
#line 107 "make_hlds_warn.m"
        }
#line 106 "make_hlds_warn.m"
        {
#line 106 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[34])));
#line 106 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_29_29));
#line 106 "make_hlds_warn.m"
        }
#line 106 "make_hlds_warn.m"
      }
#line 105 "make_hlds_warn.m"
    else
#line 110 "make_hlds_warn.m"
      {
#line 110 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_40_40;
#line 110 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_41_41;
#line 110 "make_hlds_warn.m"
        MR_String hlds__make_hlds__make_hlds_warn__V_42_42;

#line 111 "make_hlds_warn.m"
        {
#line 111 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_42_42 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__VarSet_6, hlds__make_hlds__make_hlds_warn__Vars_9);
        }
#line 111 "make_hlds_warn.m"
        {
#line 111 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 111 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_42_42));
#line 111 "make_hlds_warn.m"
        }
#line 111 "make_hlds_warn.m"
        {
#line 111 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_41_41));
#line 111 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[14])));
#line 111 "make_hlds_warn.m"
        }
#line 110 "make_hlds_warn.m"
        {
#line 110 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[35])));
#line 110 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_40_40));
#line 110 "make_hlds_warn.m"
        }
#line 110 "make_hlds_warn.m"
      }
#line 116 "make_hlds_warn.m"
    {
#line 116 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_55_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_warn__Pieces1_11, hlds__make_hlds__make_hlds_warn__Pieces2_13);
    }
#line 116 "make_hlds_warn.m"
    {
#line 116 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_55_55));
#line 116 "make_hlds_warn.m"
    }
#line 116 "make_hlds_warn.m"
    {
#line 116 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_54_54));
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "make_hlds_warn.m"
    }
#line 115 "make_hlds_warn.m"
    {
#line 115 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_50_50, 0) = ((MR_Box) (((MR_Integer) 6 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 115 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_53_53));
#line 115 "make_hlds_warn.m"
    }
#line 116 "make_hlds_warn.m"
    {
#line 116 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_50_50));
#line 116 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "make_hlds_warn.m"
    }
#line 114 "make_hlds_warn.m"
    {
#line 114 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_14, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_10));
#line 114 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_14, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_49_49));
#line 114 "make_hlds_warn.m"
    }
#line 119 "make_hlds_warn.m"
    {
#line 119 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_14));
#line 119 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "make_hlds_warn.m"
    }
#line 119 "make_hlds_warn.m"
    {
#line 119 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 119 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[1])));
#line 119 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 119 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_8, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_63_63));
#line 119 "make_hlds_warn.m"
    }
#line 101 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__Spec_8;
#line 101 "make_hlds_warn.m"
  }
#line 98 "make_hlds_warn.m"
}

#line 67 "make_hlds_warn.m"
void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(
#line 67 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__UnivVars_7,
#line 67 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_8,
#line 67 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_9,
#line 67 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_10,
#line 67 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_14,
#line 67 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_15)
#line 67 "make_hlds_warn.m"
{
#line 765 "make_hlds_warn.m"
  {
#line 765 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 765 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17;

#line 771 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__UnivVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "make_hlds_warn.m"
      {
#line 769 "make_hlds_warn.m"
        {
#line 769 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_8, hlds__make_hlds__make_hlds_warn__Context_10, (MR_String) "declaration has no universally quantified variables", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17);
        }
#line 768 "make_hlds_warn.m"
      }
#line 771 "make_hlds_warn.m"
    else
#line 772 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_14;
#line 774 "make_hlds_warn.m"
    {
#line 774 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_8, hlds__make_hlds__make_hlds_warn__Goal_9, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_15);
    }
#line 765 "make_hlds_warn.m"
  }
#line 67 "make_hlds_warn.m"
}

#line 495 "make_hlds_warn.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1(
#line 495 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 495 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
#line 495 "make_hlds_warn.m"
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
#line 495 "make_hlds_warn.m"
{
#line 495 "make_hlds_warn.m"
  {
#line 495 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 495 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 495 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__conv0_Name_6;

#line 495 "make_hlds_warn.m"
    {
#line 495 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), &hlds__make_hlds__make_hlds_warn__conv0_Name_6);
    }
#line 495 "make_hlds_warn.m"
    if (hlds__make_hlds__make_hlds_warn__succeeded)
#line 495 "make_hlds_warn.m"
      {
#line 495 "make_hlds_warn.m"
        *hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_Name_6));
#line 495 "make_hlds_warn.m"
        hlds__make_hlds__make_hlds_warn__succeeded = MR_TRUE;
#line 495 "make_hlds_warn.m"
      }
#line 495 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__succeeded;
#line 495 "make_hlds_warn.m"
  }
#line 495 "make_hlds_warn.m"
}

#line 52 "make_hlds_warn.m"
void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(
#line 52 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_11,
#line 52 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PragmaImpl_12,
#line 52 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_13,
#line 52 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Args_14,
#line 52 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Context_15,
#line 52 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_16,
#line 52 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_17,
#line 52 "make_hlds_warn.m"
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_18,
#line 52 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_31,
#line 52 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_32)
#line 52 "make_hlds_warn.m"
{
#line 491 "make_hlds_warn.m"
  {
#line 491 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 491 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__LangStr_20;
#line 491 "make_hlds_warn.m"
    MR_String hlds__make_hlds__make_hlds_warn__Code_21;
#line 491 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__C_CodeList_23;
#line 491 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__UnmentionedVars_24;
#line 491 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_33_33;
#line 491 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78;
#line 491 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__CharList_87;
#line 493 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_22_22;

#line 492 "make_hlds_warn.m"
    {
#line 492 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__LangStr_20 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_13);
    }
#line 493 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__PragmaImpl_12, (MR_Integer) 0)));
#line 493 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__PragmaImpl_12, (MR_Integer) 1)));
#line 560 "make_hlds_warn.m"
    {
#line 560 "make_hlds_warn.m"
      mercury__string__to_char_list_2_p_0(hlds__make_hlds__make_hlds_warn__Code_21, &hlds__make_hlds__make_hlds_warn__CharList_87);
    }
#line 561 "make_hlds_warn.m"
    {
#line 561 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(hlds__make_hlds__make_hlds_warn__CharList_87, &hlds__make_hlds__make_hlds_warn__C_CodeList_23);
    }
#line 495 "make_hlds_warn.m"
    {
#line 495 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 495 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_33_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[0]));
#line 495 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1));
#line 495 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 495 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_33_33, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__C_CodeList_23));
#line 495 "make_hlds_warn.m"
    }
#line 495 "make_hlds_warn.m"
    {
#line 495 "make_hlds_warn.m"
      mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__make_hlds_warn__V_33_33, hlds__make_hlds__make_hlds_warn__Args_14, &hlds__make_hlds__make_hlds_warn__UnmentionedVars_24);
    }
#line 498 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__UnmentionedVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_31;
#line 498 "make_hlds_warn.m"
    else
#line 499 "make_hlds_warn.m"
      {
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Pieces_27;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Msg_28;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__Spec_30;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_34_34;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_37_37;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_38_38;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_39_39;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_42_42;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_43_43;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_50_50;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_51_51;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_52_52;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_55_55;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_63_63;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_64_64;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_67_67;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_68_68;
#line 499 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__V_76_76;

#line 500 "make_hlds_warn.m"
        {
#line 500 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_20));
#line 500 "make_hlds_warn.m"
        }
#line 501 "make_hlds_warn.m"
        {
#line 501 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 501 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_16));
#line 501 "make_hlds_warn.m"
        }
#line 501 "make_hlds_warn.m"
        {
#line 501 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_43_43));
#line 501 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[8])));
#line 501 "make_hlds_warn.m"
        }
#line 500 "make_hlds_warn.m"
        {
#line 500 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[31])));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_39_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_42_42));
#line 500 "make_hlds_warn.m"
        }
#line 500 "make_hlds_warn.m"
        {
#line 500 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_38_38));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_39_39));
#line 500 "make_hlds_warn.m"
        }
#line 500 "make_hlds_warn.m"
        {
#line 500 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[30])));
#line 500 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_37_37));
#line 500 "make_hlds_warn.m"
        }
#line 502 "make_hlds_warn.m"
        {
#line 502 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_51_51 = hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(hlds__make_hlds__make_hlds_warn__UnmentionedVars_24);
        }
#line 503 "make_hlds_warn.m"
        {
#line 503 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_38_38));
#line 503 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[10])));
#line 503 "make_hlds_warn.m"
        }
#line 503 "make_hlds_warn.m"
        {
#line 503 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_2[32])));
#line 503 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_55_55));
#line 503 "make_hlds_warn.m"
        }
#line 502 "make_hlds_warn.m"
        {
#line 502 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_50_50 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_84_84, hlds__make_hlds__make_hlds_warn__V_51_51, hlds__make_hlds__make_hlds_warn__V_52_52);
        }
#line 501 "make_hlds_warn.m"
        {
#line 501 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Pieces_27 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_84_84, hlds__make_hlds__make_hlds_warn__V_34_34, hlds__make_hlds__make_hlds_warn__V_50_50);
        }
#line 505 "make_hlds_warn.m"
        {
#line 505 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_27));
#line 505 "make_hlds_warn.m"
        }
#line 505 "make_hlds_warn.m"
        {
#line 505 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_68_68));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "make_hlds_warn.m"
        }
#line 505 "make_hlds_warn.m"
        {
#line 505 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_64_64, 0) = ((MR_Box) (((MR_Integer) 5 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_67_67));
#line 505 "make_hlds_warn.m"
        }
#line 505 "make_hlds_warn.m"
        {
#line 505 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_64_64));
#line 505 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "make_hlds_warn.m"
        }
#line 504 "make_hlds_warn.m"
        {
#line 504 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Msg_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_28, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_15));
#line 504 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_28, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_63_63));
#line 504 "make_hlds_warn.m"
        }
#line 508 "make_hlds_warn.m"
        {
#line 508 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_28));
#line 508 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "make_hlds_warn.m"
        }
#line 508 "make_hlds_warn.m"
        {
#line 508 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 508 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_3[0])));
#line 508 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 508 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_76_76));
#line 508 "make_hlds_warn.m"
        }
#line 509 "make_hlds_warn.m"
        {
#line 509 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_30));
#line 509 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_31));
#line 509 "make_hlds_warn.m"
        }
#line 499 "make_hlds_warn.m"
      }
#line 511 "make_hlds_warn.m"
    {
#line 511 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_11, hlds__make_hlds__make_hlds_warn__Lang_13, hlds__make_hlds__make_hlds_warn__Context_15, hlds__make_hlds__make_hlds_warn__SimpleCallId_16, hlds__make_hlds__make_hlds_warn__PredId_17, hlds__make_hlds__make_hlds_warn__ProcId_18, hlds__make_hlds__make_hlds_warn__C_CodeList_23, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_32);
    }
#line 491 "make_hlds_warn.m"
  }
#line 52 "make_hlds_warn.m"
}

#line 41 "make_hlds_warn.m"
void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(
#line 41 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_7,
#line 41 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_8,
#line 41 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_9,
#line 41 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Body_10,
#line 41 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_30,
#line 41 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31)
#line 41 "make_hlds_warn.m"
{
#line 123 "make_hlds_warn.m"
  {
#line 123 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Info0_12;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_13;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__Info_14;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__NewSpecs_18;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__SingletonHeadVarsSet_19;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVarsSet_20;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__HeadContext_21;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVars_23;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_33_33;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_34_34;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_35_35;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;
#line 123 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38;
#line 151 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn___ModuleInfo_15;
#line 151 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn___PredCallId_16;
#line 151 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn___VarSet_17;

#line 148 "make_hlds_warn.m"
    {
#line 148 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_33_33 = parse_tree__set_of_var__init_0_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41);
    }
#line 148 "make_hlds_warn.m"
    {
#line 148 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_34_34 = parse_tree__set_of_var__init_0_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41);
    }
#line 148 "make_hlds_warn.m"
    {
#line 148 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_35_35 = mercury__term__context_init_0_f_0();
    }
#line 147 "make_hlds_warn.m"
    {
#line 147 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 147 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__ModuleInfo_7));
#line 147 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__PredCallId_8));
#line 147 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_9));
#line 147 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_33_33));
#line 147 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_34_34));
#line 147 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__V_35_35));
#line 147 "make_hlds_warn.m"
    }
#line 149 "make_hlds_warn.m"
    {
#line 149 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__QuantVars_13 = parse_tree__set_of_var__init_0_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41);
    }
#line 150 "make_hlds_warn.m"
    {
#line 150 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Body_10, hlds__make_hlds__make_hlds_warn__QuantVars_13, hlds__make_hlds__make_hlds_warn__Info0_12, &hlds__make_hlds__make_hlds_warn__Info_14);
    }
#line 151 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn___ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 0)));
#line 151 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn___PredCallId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 1)));
#line 151 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn___VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 2)));
#line 151 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__NewSpecs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 3)));
#line 151 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__SingletonHeadVarsSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 4)));
#line 151 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__MultiHeadVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 5)));
#line 151 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__HeadContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 6)));
#line 153 "make_hlds_warn.m"
    {
#line 153 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__make_hlds_warn__NewSpecs_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_30);
    }
#line 154 "make_hlds_warn.m"
    {
#line 154 "make_hlds_warn.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41, hlds__make_hlds__make_hlds_warn__SingletonHeadVarsSet_19, &hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22);
    }
#line 155 "make_hlds_warn.m"
    {
#line 155 "make_hlds_warn.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41, hlds__make_hlds__make_hlds_warn__MultiHeadVarsSet_20, &hlds__make_hlds__make_hlds_warn__MultiHeadVars_23);
    }
#line 158 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 157 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;
#line 158 "make_hlds_warn.m"
    else
#line 159 "make_hlds_warn.m"
      {
#line 159 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__SingleSpec_26;

#line 160 "make_hlds_warn.m"
        {
#line 160 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 0, hlds__make_hlds__make_hlds_warn__HeadContext_21, hlds__make_hlds__make_hlds_warn__PredCallId_8, hlds__make_hlds__make_hlds_warn__VarSet_9, hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22, &hlds__make_hlds__make_hlds_warn__SingleSpec_26);
        }
#line 162 "make_hlds_warn.m"
        {
#line 162 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SingleSpec_26));
#line 162 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36));
#line 162 "make_hlds_warn.m"
        }
#line 159 "make_hlds_warn.m"
      }
#line 166 "make_hlds_warn.m"
    if ((hlds__make_hlds__make_hlds_warn__MultiHeadVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 165 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38;
#line 166 "make_hlds_warn.m"
    else
#line 167 "make_hlds_warn.m"
      {
#line 167 "make_hlds_warn.m"
        MR_Word hlds__make_hlds__make_hlds_warn__MultiSpec_29;

#line 168 "make_hlds_warn.m"
        {
#line 168 "make_hlds_warn.m"
          hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 1, hlds__make_hlds__make_hlds_warn__HeadContext_21, hlds__make_hlds__make_hlds_warn__PredCallId_8, hlds__make_hlds__make_hlds_warn__VarSet_9, hlds__make_hlds__make_hlds_warn__MultiHeadVars_23, &hlds__make_hlds__make_hlds_warn__MultiSpec_29);
        }
#line 170 "make_hlds_warn.m"
        {
#line 170 "make_hlds_warn.m"
          MR_Word base;
#line 170 "make_hlds_warn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "make_hlds_warn.m"
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31 = base;
#line 170 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__MultiSpec_29));
#line 170 "make_hlds_warn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38));
#line 170 "make_hlds_warn.m"
        }
#line 167 "make_hlds_warn.m"
      }
#line 123 "make_hlds_warn.m"
  }
#line 41 "make_hlds_warn.m"
}

#line 95 "make_hlds_warn.m"
static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1(
#line 95 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
#line 95 "make_hlds_warn.m"
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
#line 95 "make_hlds_warn.m"
{
#line 95 "make_hlds_warn.m"
  {
#line 95 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 95 "make_hlds_warn.m"
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
#line 95 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_Spec_8;

#line 95 "make_hlds_warn.m"
    {
#line 95 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__conv0_Spec_8 = hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
#line 95 "make_hlds_warn.m"
    hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_Spec_8));
#line 95 "make_hlds_warn.m"
    return hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
#line 95 "make_hlds_warn.m"
  }
#line 95 "make_hlds_warn.m"
}

#line 32 "make_hlds_warn.m"
void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(
#line 32 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_6,
#line 32 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_7,
#line 32 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__Warnings_8,
#line 32 "make_hlds_warn.m"
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_11,
#line 32 "make_hlds_warn.m"
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_12)
#line 32 "make_hlds_warn.m"
{
#line 93 "make_hlds_warn.m"
  {
#line 93 "make_hlds_warn.m"
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
#line 93 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 93 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__WarningSpecs_10;
#line 93 "make_hlds_warn.m"
    MR_Word hlds__make_hlds__make_hlds_warn__V_13_13;

#line 95 "make_hlds_warn.m"
    {
#line 95 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 95 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[0]));
#line 95 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1));
#line 95 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 95 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__PredCallId_6));
#line 95 "make_hlds_warn.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__V_13_13, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_7));
#line 95 "make_hlds_warn.m"
    }
#line 95 "make_hlds_warn.m"
    {
#line 95 "make_hlds_warn.m"
      hlds__make_hlds__make_hlds_warn__WarningSpecs_10 = mercury__list__map_2_f_0((MR_Word) &hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0, hlds__make_hlds__make_hlds_warn__TypeCtorInfo_16_16, hlds__make_hlds__make_hlds_warn__V_13_13, hlds__make_hlds__make_hlds_warn__Warnings_8);
    }
#line 96 "make_hlds_warn.m"
    {
#line 96 "make_hlds_warn.m"
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_16_16, hlds__make_hlds__make_hlds_warn__WarningSpecs_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_11);
    }
#line 93 "make_hlds_warn.m"
  }
#line 32 "make_hlds_warn.m"
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
