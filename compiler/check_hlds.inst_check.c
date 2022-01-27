/*
** Automatically generated from `inst_check.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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


/* :- module check_hlds.inst_check. */
/* :- implementation. */

/*
INIT mercury__check_hlds__inst_check__init
ENDINIT
*/

#include "check_hlds.inst_check.mih"


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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 178 "inst_check.m"
struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s {
#line 178 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__MatchingTypeLists_8;
#line 182 "inst_check.m"
  MR_bool check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded;
#line 182 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__InstIsExported_11;
#line 186 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__MatchingTypeList_12;
#line 189 "inst_check.m"
  jmp_buf check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__commit_0;
#line 189 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__Type_44;
#line 189 "inst_check.m"
  MR_Box check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__conv0_Type_44;
#line 225 "inst_check.m"
  jmp_buf check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__commit_1;
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__TypeList_56;
#line 226 "inst_check.m"
  MR_Box check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__conv1_TypeList_56;
#line 178 "inst_check.m"
};


#line 154 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;

#line 157 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 160 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 163 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 166 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;

#line 169 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_bound_inst_functor_0_0[2];

#line 172 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_0;

#line 175 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_bound_inst_functor_0_1[1];

#line 178 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_1;

#line 181 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_2;

#line 184 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_3;

#line 187 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_4;

#line 190 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_5;

#line 193 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_0[4];

#line 196 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_1[1];

#line 199 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_2[1];

#line 202 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_bound_inst_functor_0[3];

#line 205 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_bound_inst_functor_0[6];

#line 208 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_bound_inst_functor_0[6];

#line 211 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 214 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1];

#line 217 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0;

#line 220 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1];

#line 223 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1;

#line 226 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1];

#line 229 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2;

#line 232 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1];

#line 235 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1];

#line 238 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1];

#line 241 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3];

#line 244 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3];

#line 247 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3];

#line 250 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____bound_inst_functor_0_0_10001(
#line 253 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 255 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 258 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____bound_inst_functor_0_0_10001(
#line 261 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 263 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 265 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 268 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_0_0_10001(
#line 271 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 273 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 276 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_0_0_10001(
#line 279 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 281 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 283 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 286 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
#line 289 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 291 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 294 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
#line 297 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 299 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 301 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 343 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__343__1_3_f_0(
#line 343 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDef_3,
#line 343 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_22,
#line 343 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_23);

#line 341 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_f_0(
#line 341 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_12);

#line 241 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__IntroducedFrom__func__find_types_for_functor__241__1_1_f_0(
#line 241 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_31);

#line 138 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 138 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 138 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 138 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 138 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 138 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 138 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 128 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_0_0(
#line 128 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 128 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_0_0(
#line 128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 130 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____bound_inst_functor_0_0(
#line 130 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 130 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 130 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 130 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____bound_inst_functor_0_0(
#line 130 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 130 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 368 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__constructor_to_sym_name_and_arity_1_f_0(
#line 368 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1);

#line 343 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0_3(
#line 343 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 343 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 343 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 341 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0_2(
#line 341 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 341 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1);

#line 358 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0_1(
#line 358 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 358 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1);

#line 333 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0(
#line 333 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1);

#line 283 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__bound_inst_to_functor_2_p_0(
#line 283 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 283 "inst_check.m"
  MR_Word * check_hlds__inst_check__Functor_5);

#line 241 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__find_types_for_functor_3_p_0_1(
#line 241 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 241 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1);

#line 231 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_types_for_functor_3_p_0(
#line 231 "inst_check.m"
  MR_Word check_hlds__inst_check__FunctorsToTypes_4,
#line 231 "inst_check.m"
  MR_Word check_hlds__inst_check__Functor_5,
#line 231 "inst_check.m"
  MR_Word * check_hlds__inst_check__Types_6);

#line 189 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_1(
#line 189 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 189 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_3(
#line 189 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 225 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_4(
#line 225 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 226 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_6(
#line 226 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 225 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_5(
#line 225 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 225 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_7(
#line 225 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 189 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_2(
#line 189 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 189 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_8(
#line 189 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 178 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0(
#line 178 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_6,
#line 178 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDef_7,
#line 178 "inst_check.m"
  MR_Word check_hlds__inst_check__MatchingTypeLists_8,
#line 178 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_23,
#line 178 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_24);

#line 155 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_4_p_0_2(
#line 155 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 155 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 155 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 153 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_4_p_0_1(
#line 153 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 153 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 153 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 143 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_4_p_0(
#line 143 "inst_check.m"
  MR_Word check_hlds__inst_check__FunctorsToTypes_5,
#line 143 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 143 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_27,
#line 143 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_28);

#line 122 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
#line 122 "inst_check.m"
  MR_Word check_hlds__inst_check__Section_3,
#line 122 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDef_4);

#line 115 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__inst_is_defined_in_current_module_1_p_0(
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1);

#line 77 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_3_p_0_3(
#line 77 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 77 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 77 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 77 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_3);

#line 73 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_3_p_0_2(
#line 73 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 73 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1);

#line 70 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_3_p_0_1(
#line 70 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 70 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[7][3];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[10][2];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[5][5];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[2][4];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[2][7];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_6[1][6];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[8][1];




static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&check_hlds__inst_check_scalar_common_2[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1])),
    ((MR_Box) (check_hlds__inst_check__check_insts_have_matching_types_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[1])),
    ((MR_Box) (check_hlds__inst_check__check_inst_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[2])),
    ((MR_Box) (check_hlds__inst_check__find_types_for_functor_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[3])),
    ((MR_Box) (check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[4])),
    ((MR_Box) (check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: inst "))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not match any of the types in scope."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_7[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_7[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_7[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_7[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_section_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_bound_inst_functor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[0])),
    ((MR_Box) (check_hlds__inst_check__check_insts_have_matching_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__inst_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_bound_inst_functor_0)),
    ((MR_Box) (&check_hlds__inst_check__list__pti_list_1__plain_check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
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



#line 843 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0
  }
};

#line 852 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 860 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0,
    (MR_PseudoTypeInfo) &check_hlds__inst_check__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 869 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 877 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0
  }
};

#line 885 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_bound_inst_functor_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 891 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_0 = {
  (MR_String) "bif_name_and_arity",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_bound_inst_functor_0_0,
  NULL,
  NULL,
  NULL
};

#line 906 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_bound_inst_functor_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 911 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_1 = {
  (MR_String) "bif_tuple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__inst_check__check_hlds__inst_check__field_types_bound_inst_functor_0_1,
  NULL,
  NULL,
  NULL
};

#line 926 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_2 = {
  (MR_String) "bif_int_constant",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 941 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_3 = {
  (MR_String) "bif_float_constant",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 956 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_4 = {
  (MR_String) "bif_char_constant",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 971 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_5 = {
  (MR_String) "bif_string_constant",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 986 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_0[4] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_3,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_4,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_5
};

#line 994 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_1[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_0
};

#line 999 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_2[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_1
};

#line 1004 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_bound_inst_functor_0[3] = {
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_bound_inst_functor_0_2
  }
};

#line 1023 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_bound_inst_functor_0[6] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_4,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_3,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_0,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_5,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_bound_inst_functor_0_1
};

#line 1033 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_bound_inst_functor_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 1043 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_bound_inst_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____bound_inst_functor_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____bound_inst_functor_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "bound_inst_functor",
  {
    check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_bound_inst_functor_0
  },
  {
    check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_bound_inst_functor_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_bound_inst_functor_0
};

#line 1064 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0,
    (MR_TypeInfo) &check_hlds__inst_check__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1073 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functors_to_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_check____Unify____functors_to_types_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____functors_to_types_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "functors_to_types",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__inst_check__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1094 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

#line 1099 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0 = {
  (MR_String) "type_def",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0,
  NULL,
  NULL,
  NULL
};

#line 1114 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0
};

#line 1119 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1 = {
  (MR_String) "type_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1,
  NULL,
  NULL,
  NULL
};

#line 1134 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1139 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2 = {
  (MR_String) "type_tuple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2,
  NULL,
  NULL,
  NULL
};

#line 1154 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0
};

#line 1159 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1
};

#line 1164 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2
};

#line 1169 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2
  }
};

#line 1188 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2
};

#line 1195 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1202 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "type_defn_or_builtin",
  {
    check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0
  },
  {
    check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0
};

#line 1223 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____bound_inst_functor_0_0_10001(
#line 1226 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1228 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 1230 "check_hlds.inst_check.c"
{
#line 1232 "check_hlds.inst_check.c"
  {
#line 1234 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 1237 "check_hlds.inst_check.c"
    {
#line 1239 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____bound_inst_functor_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 1242 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 1244 "check_hlds.inst_check.c"
  }
#line 1246 "check_hlds.inst_check.c"
}

#line 1249 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____bound_inst_functor_0_0_10001(
#line 1252 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 1254 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 1256 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 1258 "check_hlds.inst_check.c"
{
#line 1260 "check_hlds.inst_check.c"
  {
#line 1262 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 1265 "check_hlds.inst_check.c"
    {
#line 1267 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____bound_inst_functor_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 1270 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 1272 "check_hlds.inst_check.c"
  }
#line 1274 "check_hlds.inst_check.c"
}

#line 1277 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_0_0_10001(
#line 1280 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1282 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 1284 "check_hlds.inst_check.c"
{
#line 1286 "check_hlds.inst_check.c"
  {
#line 1288 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 1291 "check_hlds.inst_check.c"
    {
#line 1293 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____functors_to_types_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 1296 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 1298 "check_hlds.inst_check.c"
  }
#line 1300 "check_hlds.inst_check.c"
}

#line 1303 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_0_0_10001(
#line 1306 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 1308 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 1310 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 1312 "check_hlds.inst_check.c"
{
#line 1314 "check_hlds.inst_check.c"
  {
#line 1316 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 1319 "check_hlds.inst_check.c"
    {
#line 1321 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____functors_to_types_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 1324 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 1326 "check_hlds.inst_check.c"
  }
#line 1328 "check_hlds.inst_check.c"
}

#line 1331 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
#line 1334 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1336 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 1338 "check_hlds.inst_check.c"
{
#line 1340 "check_hlds.inst_check.c"
  {
#line 1342 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 1345 "check_hlds.inst_check.c"
    {
#line 1347 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 1350 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 1352 "check_hlds.inst_check.c"
  }
#line 1354 "check_hlds.inst_check.c"
}

#line 1357 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
#line 1360 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 1362 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 1364 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 1366 "check_hlds.inst_check.c"
{
#line 1368 "check_hlds.inst_check.c"
  {
#line 1370 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 1373 "check_hlds.inst_check.c"
    {
#line 1375 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 1378 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 1380 "check_hlds.inst_check.c"
  }
#line 1382 "check_hlds.inst_check.c"
}

#line 343 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__343__1_3_f_0(
#line 343 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDef_3,
#line 343 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_22,
#line 343 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_23)
#line 343 "inst_check.m"
{
#line 343 "inst_check.m"
  {
#line 343 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 343 "inst_check.m"
    MR_Word check_hlds__inst_check__HeadVar__4_24;

#line 378 "inst_check.m"
    {
#line 378 "inst_check.m"
      check_hlds__inst_check__HeadVar__4_24 = mercury__multi_map__set_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0, check_hlds__inst_check__HeadVar__3_23, ((MR_Box) (check_hlds__inst_check__HeadVar__2_22)), ((MR_Box) (check_hlds__inst_check__TypeDef_3)));
    }
#line 343 "inst_check.m"
    return check_hlds__inst_check__HeadVar__4_24;
#line 343 "inst_check.m"
  }
#line 343 "inst_check.m"
}

#line 341 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_f_0(
#line 341 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_12)
#line 341 "inst_check.m"
{
#line 341 "inst_check.m"
  {
#line 341 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 341 "inst_check.m"
    MR_Word check_hlds__inst_check__HeadVar__2_13;
#line 341 "inst_check.m"
    MR_Word check_hlds__inst_check__V_14_14;
#line 341 "inst_check.m"
    MR_Word check_hlds__inst_check__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_12, (MR_Integer) 0)));
#line 341 "inst_check.m"
    MR_Integer check_hlds__inst_check__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_12, (MR_Integer) 1)));

#line 348 "inst_check.m"
    if (((MR_tag((MR_Word) check_hlds__inst_check__Name_16)) == (MR_mktag((MR_Integer) 1))))
#line 349 "inst_check.m"
      {
#line 349 "inst_check.m"
        MR_String check_hlds__inst_check__Name_29 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__Name_16, (MR_Integer) 1)));
#line 349 "inst_check.m"
        MR_Word check_hlds__inst_check__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__Name_16, (MR_Integer) 0)));

#line 349 "inst_check.m"
        {
#line 349 "inst_check.m"
          check_hlds__inst_check__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 349 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_14_14, 0) = ((MR_Box) (check_hlds__inst_check__Name_29));
#line 349 "inst_check.m"
        }
#line 349 "inst_check.m"
      }
#line 348 "inst_check.m"
    else
#line 348 "inst_check.m"
      check_hlds__inst_check__V_14_14 = check_hlds__inst_check__Name_16;
#line 341 "inst_check.m"
    {
#line 341 "inst_check.m"
      check_hlds__inst_check__HeadVar__2_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_13, 0) = ((MR_Box) (check_hlds__inst_check__V_14_14));
#line 341 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_13, 1) = ((MR_Box) (check_hlds__inst_check__Arity_17));
#line 341 "inst_check.m"
    }
#line 341 "inst_check.m"
    return check_hlds__inst_check__HeadVar__2_13;
#line 341 "inst_check.m"
  }
#line 341 "inst_check.m"
}

#line 241 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__IntroducedFrom__func__find_types_for_functor__241__1_1_f_0(
#line 241 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_31)
#line 241 "inst_check.m"
{
#line 241 "inst_check.m"
  {
#line 241 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 241 "inst_check.m"
    MR_Word check_hlds__inst_check__HeadVar__2_32;

#line 241 "inst_check.m"
    {
#line 241 "inst_check.m"
      check_hlds__inst_check__HeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_32, 0) = ((MR_Box) (check_hlds__inst_check__HeadVar__1_31));
#line 241 "inst_check.m"
    }
#line 241 "inst_check.m"
    return check_hlds__inst_check__HeadVar__2_32;
#line 241 "inst_check.m"
  }
#line 241 "inst_check.m"
}

#line 138 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 138 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 138 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 138 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 138 "inst_check.m"
{
#line 138 "inst_check.m"
  {
#line 138 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 138 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_22 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 138 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_23 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 138 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_22 == check_hlds__inst_check__CastY_23);
#line 138 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 1528 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 138 "inst_check.m"
    else
#line 138 "inst_check.m"
      if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 138 "inst_check.m"
        {
#line 138 "inst_check.m"
          MR_Word check_hlds__inst_check__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 138 "inst_check.m"
          if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 138 "inst_check.m"
            {
#line 138 "inst_check.m"
              MR_Word check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 138 "inst_check.m"
              MR_Integer check_hlds__inst_check__V_30_30 = (MR_Integer) check_hlds__inst_check__V_27_27;
#line 138 "inst_check.m"
              MR_Integer check_hlds__inst_check__V_31_31 = (MR_Integer) check_hlds__inst_check__V_13_13;

#line 138 "inst_check.m"
              {
#line 138 "inst_check.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_30_30, check_hlds__inst_check__V_31_31);
#line 138 "inst_check.m"
                return;
              }
#line 138 "inst_check.m"
            }
#line 138 "inst_check.m"
          else
#line 138 "inst_check.m"
            if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1563 "check_hlds.inst_check.c"
              *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 138 "inst_check.m"
            else
#line 1567 "check_hlds.inst_check.c"
              *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 138 "inst_check.m"
        }
#line 138 "inst_check.m"
      else
#line 138 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 138 "inst_check.m"
          {
#line 138 "inst_check.m"
            MR_Word check_hlds__inst_check__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 138 "inst_check.m"
            if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1582 "check_hlds.inst_check.c"
              *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 138 "inst_check.m"
            else
#line 138 "inst_check.m"
              if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 138 "inst_check.m"
                {
#line 138 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));

#line 138 "inst_check.m"
                  {
#line 138 "inst_check.m"
                    hlds__hlds_data____Compare____hlds_type_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_28_28, check_hlds__inst_check__V_5_5);
#line 138 "inst_check.m"
                    return;
                  }
#line 138 "inst_check.m"
                }
#line 138 "inst_check.m"
              else
#line 1604 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 138 "inst_check.m"
          }
#line 138 "inst_check.m"
        else
#line 138 "inst_check.m"
          {
#line 138 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 138 "inst_check.m"
            if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1617 "check_hlds.inst_check.c"
              *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 138 "inst_check.m"
            else
#line 138 "inst_check.m"
              if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1623 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 138 "inst_check.m"
              else
#line 138 "inst_check.m"
                {
#line 138 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));

#line 138 "inst_check.m"
                  {
#line 138 "inst_check.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_29_29, check_hlds__inst_check__V_21_21);
#line 138 "inst_check.m"
                    return;
                  }
#line 138 "inst_check.m"
                }
#line 138 "inst_check.m"
          }
#line 138 "inst_check.m"
  }
#line 138 "inst_check.m"
}

#line 138 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 138 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 138 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 138 "inst_check.m"
{
#line 138 "inst_check.m"
  {
#line 138 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 138 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 138 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 138 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 138 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 138 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 138 "inst_check.m"
    else
#line 138 "inst_check.m"
      if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 138 "inst_check.m"
        {
#line 138 "inst_check.m"
          MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 138 "inst_check.m"
          MR_Word check_hlds__inst_check__V_6_6;

#line 138 "inst_check.m"
          check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 138 "inst_check.m"
          if (check_hlds__inst_check__succeeded)
#line 138 "inst_check.m"
            {
#line 138 "inst_check.m"
              check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 1691 "check_hlds.inst_check.c"
              check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_5_5 == check_hlds__inst_check__V_6_6);
#line 138 "inst_check.m"
            }
#line 138 "inst_check.m"
        }
#line 138 "inst_check.m"
      else
#line 138 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 138 "inst_check.m"
          {
#line 138 "inst_check.m"
            MR_Word check_hlds__inst_check__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 138 "inst_check.m"
            MR_Word check_hlds__inst_check__V_4_4;

#line 138 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 138 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 138 "inst_check.m"
              {
#line 138 "inst_check.m"
                check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 1716 "check_hlds.inst_check.c"
                {
#line 1718 "check_hlds.inst_check.c"
                  return check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_4_4);
                }
#line 138 "inst_check.m"
              }
#line 138 "inst_check.m"
          }
#line 138 "inst_check.m"
        else
#line 138 "inst_check.m"
          {
#line 138 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 138 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_8_8;

#line 138 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 138 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 138 "inst_check.m"
              {
#line 138 "inst_check.m"
                check_hlds__inst_check__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 1742 "check_hlds.inst_check.c"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_7_7 == check_hlds__inst_check__V_8_8);
#line 138 "inst_check.m"
              }
#line 138 "inst_check.m"
          }
#line 138 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 138 "inst_check.m"
  }
#line 138 "inst_check.m"
}

#line 128 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_0_0(
#line 128 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 128 "inst_check.m"
{
#line 128 "inst_check.m"
  {
#line 128 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 128 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar1_4 = check_hlds__inst_check__HeadVar__2_2;
#line 128 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar2_5 = check_hlds__inst_check__HeadVar__3_3;

#line 128 "inst_check.m"
    {
#line 128 "inst_check.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_1[1], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_5)));
#line 128 "inst_check.m"
      return;
    }
#line 128 "inst_check.m"
  }
#line 128 "inst_check.m"
}

#line 128 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_0_0(
#line 128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 128 "inst_check.m"
{
#line 128 "inst_check.m"
  {
#line 128 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 128 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar1_3 = check_hlds__inst_check__HeadVar__1_1;
#line 128 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar2_4 = check_hlds__inst_check__HeadVar__2_2;

#line 128 "inst_check.m"
    {
#line 128 "inst_check.m"
      return check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_check_scalar_common_1[1], ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_4)));
    }
#line 128 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 128 "inst_check.m"
  }
#line 128 "inst_check.m"
}

#line 130 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____bound_inst_functor_0_0(
#line 130 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 130 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 130 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 130 "inst_check.m"
{
#line 130 "inst_check.m"
  {
#line 130 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 130 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_41 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 130 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_42 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 130 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_41 == check_hlds__inst_check__CastY_42);
#line 130 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 1841 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "inst_check.m"
    else
#line 130 "inst_check.m"
      if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 130 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 130 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "inst_check.m"
        else
#line 130 "inst_check.m"
          if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "inst_check.m"
            *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
          else
#line 130 "inst_check.m"
            if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "inst_check.m"
              *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
            else
#line 130 "inst_check.m"
              if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 130 "inst_check.m"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
              else
#line 130 "inst_check.m"
                if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1873 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
                else
#line 1877 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
      else
#line 130 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "inst_check.m"
          if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 130 "inst_check.m"
            *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
          else
#line 130 "inst_check.m"
            if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "inst_check.m"
              *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "inst_check.m"
            else
#line 130 "inst_check.m"
              if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "inst_check.m"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
              else
#line 130 "inst_check.m"
                if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 130 "inst_check.m"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                else
#line 130 "inst_check.m"
                  if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1909 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
                  else
#line 1913 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
        else
#line 130 "inst_check.m"
          if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "inst_check.m"
            if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 130 "inst_check.m"
              *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
            else
#line 130 "inst_check.m"
              if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "inst_check.m"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
              else
#line 130 "inst_check.m"
                if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "inst_check.m"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "inst_check.m"
                else
#line 130 "inst_check.m"
                  if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 130 "inst_check.m"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                  else
#line 130 "inst_check.m"
                    if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1945 "check_hlds.inst_check.c"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
                    else
#line 1949 "check_hlds.inst_check.c"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
          else
#line 130 "inst_check.m"
            if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 130 "inst_check.m"
              if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 130 "inst_check.m"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
              else
#line 130 "inst_check.m"
                if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "inst_check.m"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
                else
#line 130 "inst_check.m"
                  if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "inst_check.m"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
                  else
#line 130 "inst_check.m"
                    if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 130 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "inst_check.m"
                    else
#line 130 "inst_check.m"
                      if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1981 "check_hlds.inst_check.c"
                        *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
                      else
#line 1985 "check_hlds.inst_check.c"
                        *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
            else
#line 130 "inst_check.m"
              if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 130 "inst_check.m"
                {
#line 130 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 130 "inst_check.m"
                  if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2000 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                  else
#line 130 "inst_check.m"
                    if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2006 "check_hlds.inst_check.c"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                    else
#line 130 "inst_check.m"
                      if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2012 "check_hlds.inst_check.c"
                        *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                      else
#line 130 "inst_check.m"
                        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2018 "check_hlds.inst_check.c"
                          *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                        else
#line 130 "inst_check.m"
                          if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 130 "inst_check.m"
                            {
#line 130 "inst_check.m"
                              MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 130 "inst_check.m"
                              MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "inst_check.m"
                              MR_Word check_hlds__inst_check__V_8_8;

#line 130 "inst_check.m"
                              {
#line 130 "inst_check.m"
                                mdbcomp__prim_data____Compare____sym_name_0_0(&check_hlds__inst_check__V_8_8, check_hlds__inst_check__V_47_47, check_hlds__inst_check__V_6_6);
                              }
#line 2038 "check_hlds.inst_check.c"
                              check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_8_8 == (MR_Integer) 0);
#line 130 "inst_check.m"
                              check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 130 "inst_check.m"
                              if (check_hlds__inst_check__succeeded)
#line 130 "inst_check.m"
                                *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_8_8;
#line 130 "inst_check.m"
                              else
#line 130 "inst_check.m"
                                {
#line 130 "inst_check.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_46_46, check_hlds__inst_check__V_7_7);
#line 130 "inst_check.m"
                                  return;
                                }
#line 130 "inst_check.m"
                            }
#line 130 "inst_check.m"
                          else
#line 2059 "check_hlds.inst_check.c"
                            *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                }
#line 130 "inst_check.m"
              else
#line 130 "inst_check.m"
                {
#line 130 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 130 "inst_check.m"
                  if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2072 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                  else
#line 130 "inst_check.m"
                    if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2078 "check_hlds.inst_check.c"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                    else
#line 130 "inst_check.m"
                      if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2084 "check_hlds.inst_check.c"
                        *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                      else
#line 130 "inst_check.m"
                        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2090 "check_hlds.inst_check.c"
                          *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "inst_check.m"
                        else
#line 130 "inst_check.m"
                          if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2096 "check_hlds.inst_check.c"
                            *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "inst_check.m"
                          else
#line 130 "inst_check.m"
                            {
#line 130 "inst_check.m"
                              MR_Integer check_hlds__inst_check__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));

#line 130 "inst_check.m"
                              {
#line 130 "inst_check.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_48_48, check_hlds__inst_check__V_24_24);
#line 130 "inst_check.m"
                                return;
                              }
#line 130 "inst_check.m"
                            }
#line 130 "inst_check.m"
                }
#line 130 "inst_check.m"
  }
#line 130 "inst_check.m"
}

#line 130 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____bound_inst_functor_0_0(
#line 130 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 130 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 130 "inst_check.m"
{
#line 130 "inst_check.m"
  {
#line 130 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 130 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_17 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 130 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_18 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 130 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_17 == check_hlds__inst_check__CastY_18);
#line 130 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 130 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 130 "inst_check.m"
    else
#line 130 "inst_check.m"
      if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 130 "inst_check.m"
        {
#line 130 "inst_check.m"
          MR_Integer check_hlds__inst_check__CastX_13 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 130 "inst_check.m"
          MR_Integer check_hlds__inst_check__CastY_14 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 130 "inst_check.m"
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_14 == check_hlds__inst_check__CastX_13);
#line 130 "inst_check.m"
        }
#line 130 "inst_check.m"
      else
#line 130 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "inst_check.m"
          {
#line 130 "inst_check.m"
            MR_Integer check_hlds__inst_check__CastX_11 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 130 "inst_check.m"
            MR_Integer check_hlds__inst_check__CastY_12 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 130 "inst_check.m"
            check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_12 == check_hlds__inst_check__CastX_11);
#line 130 "inst_check.m"
          }
#line 130 "inst_check.m"
        else
#line 130 "inst_check.m"
          if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "inst_check.m"
            {
#line 130 "inst_check.m"
              MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 130 "inst_check.m"
              MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 130 "inst_check.m"
              check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_10 == check_hlds__inst_check__CastX_9);
#line 130 "inst_check.m"
            }
#line 130 "inst_check.m"
          else
#line 130 "inst_check.m"
            if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 130 "inst_check.m"
              {
#line 130 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastX_15 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 130 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastY_16 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 130 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_16 == check_hlds__inst_check__CastX_15);
#line 130 "inst_check.m"
              }
#line 130 "inst_check.m"
            else
#line 130 "inst_check.m"
              if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 130 "inst_check.m"
                {
#line 130 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_5_5;
#line 130 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_6_6;

#line 130 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 130 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 130 "inst_check.m"
                    {
#line 130 "inst_check.m"
                      check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "inst_check.m"
                      check_hlds__inst_check__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 2230 "check_hlds.inst_check.c"
                      {
#line 2232 "check_hlds.inst_check.c"
                        check_hlds__inst_check__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5);
                      }
#line 130 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 2237 "check_hlds.inst_check.c"
                        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_4_4 == check_hlds__inst_check__V_6_6);
#line 130 "inst_check.m"
                    }
#line 130 "inst_check.m"
                }
#line 130 "inst_check.m"
              else
#line 130 "inst_check.m"
                {
#line 130 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_8_8;

#line 130 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 130 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 130 "inst_check.m"
                    {
#line 130 "inst_check.m"
                      check_hlds__inst_check__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 2260 "check_hlds.inst_check.c"
                      check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_7_7 == check_hlds__inst_check__V_8_8);
#line 130 "inst_check.m"
                    }
#line 130 "inst_check.m"
                }
#line 130 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 130 "inst_check.m"
  }
#line 130 "inst_check.m"
}

#line 368 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__constructor_to_sym_name_and_arity_1_f_0(
#line 368 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1)
#line 368 "inst_check.m"
{
#line 370 "inst_check.m"
  {
#line 370 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 370 "inst_check.m"
    MR_Word check_hlds__inst_check__HeadVar__2_2;
#line 370 "inst_check.m"
    MR_Word check_hlds__inst_check__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 2)));
#line 370 "inst_check.m"
    MR_Word check_hlds__inst_check__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 3)));
#line 370 "inst_check.m"
    MR_Integer check_hlds__inst_check__V_8_8;
#line 370 "inst_check.m"
    MR_Word check_hlds__inst_check__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 370 "inst_check.m"
    MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 370 "inst_check.m"
    MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 4)));

#line 371 "inst_check.m"
    {
#line 371 "inst_check.m"
      check_hlds__inst_check__V_8_8 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__inst_check__Args_6);
    }
#line 370 "inst_check.m"
    {
#line 370 "inst_check.m"
      check_hlds__inst_check__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 370 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__inst_check__Name_5));
#line 370 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__inst_check__V_8_8));
#line 370 "inst_check.m"
    }
#line 370 "inst_check.m"
    return check_hlds__inst_check__HeadVar__2_2;
#line 370 "inst_check.m"
  }
#line 368 "inst_check.m"
}

#line 343 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0_3(
#line 343 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 343 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 343 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 343 "inst_check.m"
{
#line 343 "inst_check.m"
  {
#line 343 "inst_check.m"
    MR_Box check_hlds__inst_check__wrapper_arg_3;
#line 343 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 343 "inst_check.m"
    MR_Word check_hlds__inst_check__conv2_HeadVar__4_24;

#line 343 "inst_check.m"
    {
#line 343 "inst_check.m"
      check_hlds__inst_check__conv2_HeadVar__4_24 = check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__343__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 343 "inst_check.m"
    check_hlds__inst_check__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_check__conv2_HeadVar__4_24));
#line 343 "inst_check.m"
    return check_hlds__inst_check__wrapper_arg_3;
#line 343 "inst_check.m"
  }
#line 343 "inst_check.m"
}

#line 341 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0_2(
#line 341 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 341 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1)
#line 341 "inst_check.m"
{
#line 341 "inst_check.m"
  {
#line 341 "inst_check.m"
    MR_Box check_hlds__inst_check__wrapper_arg_2;
#line 341 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 341 "inst_check.m"
    MR_Word check_hlds__inst_check__conv1_HeadVar__2_13;

#line 341 "inst_check.m"
    {
#line 341 "inst_check.m"
      check_hlds__inst_check__conv1_HeadVar__2_13 = check_hlds__inst_check__IntroducedFrom__func__index_types_by_unqualified_functors__341__1_1_f_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    }
#line 341 "inst_check.m"
    check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv1_HeadVar__2_13));
#line 341 "inst_check.m"
    return check_hlds__inst_check__wrapper_arg_2;
#line 341 "inst_check.m"
  }
#line 341 "inst_check.m"
}

#line 358 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0_1(
#line 358 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 358 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1)
#line 358 "inst_check.m"
{
#line 358 "inst_check.m"
  {
#line 358 "inst_check.m"
    MR_Box check_hlds__inst_check__wrapper_arg_2;
#line 358 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 358 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_HeadVar__2_2;

#line 358 "inst_check.m"
    {
#line 358 "inst_check.m"
      check_hlds__inst_check__conv0_HeadVar__2_2 = check_hlds__inst_check__constructor_to_sym_name_and_arity_1_f_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    }
#line 358 "inst_check.m"
    check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__2_2));
#line 358 "inst_check.m"
    return check_hlds__inst_check__wrapper_arg_2;
#line 358 "inst_check.m"
  }
#line 358 "inst_check.m"
}

#line 333 "inst_check.m"
static MR_Word MR_CALL 
check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0(
#line 333 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1)
#line 333 "inst_check.m"
{
#line 336 "inst_check.m"
  {
#line 336 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 336 "inst_check.m"
    MR_Word check_hlds__inst_check__HeadVar__2_2;

#line 336 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "inst_check.m"
      {
#line 336 "inst_check.m"
        {
#line 336 "inst_check.m"
          check_hlds__inst_check__HeadVar__2_2 = mercury__multi_map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0);
        }
#line 336 "inst_check.m"
      }
#line 336 "inst_check.m"
    else
#line 338 "inst_check.m"
      {
#line 338 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorInfo_20_20;
#line 338 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeDef_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 338 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeDefs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 338 "inst_check.m"
        MR_Word check_hlds__inst_check__FunctorsToTypeDefs0_6;
#line 338 "inst_check.m"
        MR_Word check_hlds__inst_check__Functors_7;
#line 338 "inst_check.m"
        MR_Word check_hlds__inst_check__UnqualifiedFunctors_8;
#line 338 "inst_check.m"
        MR_Word check_hlds__inst_check__V_15_15;
#line 338 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeDefBody_29;
#line 343 "inst_check.m"
        MR_Box check_hlds__inst_check__conv3_HeadVar__2_2;

#line 339 "inst_check.m"
        {
#line 339 "inst_check.m"
          check_hlds__inst_check__FunctorsToTypeDefs0_6 = check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0(check_hlds__inst_check__TypeDefs_4);
        }
#line 355 "inst_check.m"
        {
#line 355 "inst_check.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDef_3, &check_hlds__inst_check__TypeDefBody_29);
        }
#line 359 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__TypeDefBody_29)) == (MR_mktag((MR_Integer) 1))))
#line 357 "inst_check.m"
          {
#line 357 "inst_check.m"
            MR_Word check_hlds__inst_check__Constructors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefBody_29, (MR_Integer) 0)));
#line 357 "inst_check.m"
            MR_Word check_hlds__inst_check__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefBody_29, (MR_Integer) 1)));
#line 357 "inst_check.m"
            MR_Word check_hlds__inst_check__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefBody_29, (MR_Integer) 2)));
#line 357 "inst_check.m"
            MR_Word check_hlds__inst_check__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefBody_29, (MR_Integer) 3)));
#line 357 "inst_check.m"
            MR_Word check_hlds__inst_check__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefBody_29, (MR_Integer) 4)));
#line 357 "inst_check.m"
            MR_Word check_hlds__inst_check__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefBody_29, (MR_Integer) 5)));
#line 357 "inst_check.m"
            MR_Word check_hlds__inst_check__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefBody_29, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 357 "inst_check.m"
            MR_Word check_hlds__inst_check__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefBody_29, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 357 "inst_check.m"
            MR_Word check_hlds__inst_check__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefBody_29, (MR_Integer) 7)));

#line 358 "inst_check.m"
            {
#line 358 "inst_check.m"
              check_hlds__inst_check__Functors_7 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, (MR_Word) &check_hlds__inst_check_scalar_common_1[5], check_hlds__inst_check__Constructors_30);
            }
#line 357 "inst_check.m"
          }
#line 359 "inst_check.m"
        else
#line 365 "inst_check.m"
          check_hlds__inst_check__Functors_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2511 "check_hlds.inst_check.c"
        check_hlds__inst_check__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
#line 341 "inst_check.m"
        {
#line 341 "inst_check.m"
          check_hlds__inst_check__UnqualifiedFunctors_8 = mercury__list__map_2_f_0(check_hlds__inst_check__TypeCtorInfo_20_20, check_hlds__inst_check__TypeCtorInfo_20_20, (MR_Word) &check_hlds__inst_check_scalar_common_1[6], check_hlds__inst_check__Functors_7);
        }
#line 343 "inst_check.m"
        {
#line 343 "inst_check.m"
          check_hlds__inst_check__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 343 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_15_15, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[1]));
#line 343 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_15_15, 1) = ((MR_Box) (check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0_3));
#line 343 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 343 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_15_15, 3) = ((MR_Box) (check_hlds__inst_check__TypeDef_3));
#line 343 "inst_check.m"
        }
#line 343 "inst_check.m"
        {
#line 343 "inst_check.m"
          check_hlds__inst_check__conv3_HeadVar__2_2 = mercury__list__foldl_3_f_0(check_hlds__inst_check__TypeCtorInfo_20_20, (MR_Word) &check_hlds__inst_check_scalar_common_1[1], check_hlds__inst_check__V_15_15, check_hlds__inst_check__UnqualifiedFunctors_8, ((MR_Box) (check_hlds__inst_check__FunctorsToTypeDefs0_6)));
        }
#line 343 "inst_check.m"
        check_hlds__inst_check__HeadVar__2_2 = ((MR_Word) check_hlds__inst_check__conv3_HeadVar__2_2);
#line 338 "inst_check.m"
      }
#line 336 "inst_check.m"
    return check_hlds__inst_check__HeadVar__2_2;
#line 336 "inst_check.m"
  }
#line 333 "inst_check.m"
}

#line 283 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__bound_inst_to_functor_2_p_0(
#line 283 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 283 "inst_check.m"
  MR_Word * check_hlds__inst_check__Functor_5)
#line 283 "inst_check.m"
{
#line 286 "inst_check.m"
  {
#line 286 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 286 "inst_check.m"
    MR_Word check_hlds__inst_check__ConsId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "inst_check.m"
    MR_Word check_hlds__inst_check__V_6_6;
#line 286 "inst_check.m"
    MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));

#line 299 "inst_check.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 311 "inst_check.m"
      {
#line 312 "inst_check.m"
        check_hlds__inst_check__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_7[4]);
#line 311 "inst_check.m"
      }
#line 299 "inst_check.m"
    else
#line 299 "inst_check.m"
      if (((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 299 "inst_check.m"
        {
#line 299 "inst_check.m"
          MR_Word check_hlds__inst_check__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 1)));
#line 299 "inst_check.m"
          MR_Integer check_hlds__inst_check__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 2)));
#line 299 "inst_check.m"
          MR_Word check_hlds__inst_check__V_39_39;
#line 299 "inst_check.m"
          MR_Word check_hlds__inst_check__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 3)));

#line 300 "inst_check.m"
          {
#line 300 "inst_check.m"
            check_hlds__inst_check__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_39_39, 0) = ((MR_Box) (check_hlds__inst_check__Name_9));
#line 300 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_39_39, 1) = ((MR_Box) (check_hlds__inst_check__Arity_10));
#line 300 "inst_check.m"
          }
#line 300 "inst_check.m"
          {
#line 300 "inst_check.m"
            check_hlds__inst_check__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_6_6, 0) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 300 "inst_check.m"
          }
#line 299 "inst_check.m"
        }
#line 299 "inst_check.m"
      else
#line 299 "inst_check.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 308 "inst_check.m"
          {
#line 309 "inst_check.m"
            check_hlds__inst_check__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_7[5]);
#line 308 "inst_check.m"
          }
#line 299 "inst_check.m"
        else
#line 299 "inst_check.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 305 "inst_check.m"
            {
#line 306 "inst_check.m"
              check_hlds__inst_check__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_7[6]);
#line 305 "inst_check.m"
            }
#line 299 "inst_check.m"
          else
#line 299 "inst_check.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 314 "inst_check.m"
              {
#line 315 "inst_check.m"
                check_hlds__inst_check__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_7[7]);
#line 314 "inst_check.m"
              }
#line 299 "inst_check.m"
            else
#line 299 "inst_check.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 302 "inst_check.m"
                {
#line 302 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_38_38;
#line 302 "inst_check.m"
                  MR_Integer check_hlds__inst_check__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_3, (MR_Integer) 1)));

#line 303 "inst_check.m"
                  {
#line 303 "inst_check.m"
                    check_hlds__inst_check__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 303 "inst_check.m"
                    MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__Arity_40));
#line 303 "inst_check.m"
                  }
#line 303 "inst_check.m"
                  {
#line 303 "inst_check.m"
                    check_hlds__inst_check__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 303 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_6_6, 0) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 303 "inst_check.m"
                  }
#line 302 "inst_check.m"
                }
#line 299 "inst_check.m"
              else
#line 330 "inst_check.m"
                check_hlds__inst_check__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 287 "inst_check.m"
    check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 287 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 287 "inst_check.m"
      *check_hlds__inst_check__Functor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_6_6, (MR_Integer) 0)));
#line 286 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 286 "inst_check.m"
  }
#line 283 "inst_check.m"
}

#line 241 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__find_types_for_functor_3_p_0_1(
#line 241 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 241 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1)
#line 241 "inst_check.m"
{
#line 241 "inst_check.m"
  {
#line 241 "inst_check.m"
    MR_Box check_hlds__inst_check__wrapper_arg_2;
#line 241 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 241 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_HeadVar__2_32;

#line 241 "inst_check.m"
    {
#line 241 "inst_check.m"
      check_hlds__inst_check__conv0_HeadVar__2_32 = check_hlds__inst_check__IntroducedFrom__func__find_types_for_functor__241__1_1_f_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    }
#line 241 "inst_check.m"
    check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__2_32));
#line 241 "inst_check.m"
    return check_hlds__inst_check__wrapper_arg_2;
#line 241 "inst_check.m"
  }
#line 241 "inst_check.m"
}

#line 231 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_types_for_functor_3_p_0(
#line 231 "inst_check.m"
  MR_Word check_hlds__inst_check__FunctorsToTypes_4,
#line 231 "inst_check.m"
  MR_Word check_hlds__inst_check__Functor_5,
#line 231 "inst_check.m"
  MR_Word * check_hlds__inst_check__Types_6)
#line 231 "inst_check.m"
{
#line 236 "inst_check.m"
  {
#line 236 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 236 "inst_check.m"
    if ((check_hlds__inst_check__Functor_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 276 "inst_check.m"
      {
#line 277 "inst_check.m"
        *check_hlds__inst_check__Types_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_2[6]);
#line 276 "inst_check.m"
      }
#line 236 "inst_check.m"
    else
#line 236 "inst_check.m"
      if ((check_hlds__inst_check__Functor_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 273 "inst_check.m"
        {
#line 274 "inst_check.m"
          *check_hlds__inst_check__Types_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_2[7]);
#line 273 "inst_check.m"
        }
#line 236 "inst_check.m"
      else
#line 236 "inst_check.m"
        if ((check_hlds__inst_check__Functor_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "inst_check.m"
          {
#line 271 "inst_check.m"
            *check_hlds__inst_check__Types_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_2[8]);
#line 270 "inst_check.m"
          }
#line 236 "inst_check.m"
        else
#line 236 "inst_check.m"
          if ((check_hlds__inst_check__Functor_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 279 "inst_check.m"
            {
#line 280 "inst_check.m"
              *check_hlds__inst_check__Types_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_2[9]);
#line 279 "inst_check.m"
            }
#line 236 "inst_check.m"
          else
#line 236 "inst_check.m"
            if (((MR_tag((MR_Word) check_hlds__inst_check__Functor_5)) == (MR_mktag((MR_Integer) 1))))
#line 236 "inst_check.m"
              {
#line 236 "inst_check.m"
                MR_Word check_hlds__inst_check__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__Functor_5, (MR_Integer) 0)));
#line 236 "inst_check.m"
                MR_Integer check_hlds__inst_check__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__Functor_5, (MR_Integer) 1)));
#line 236 "inst_check.m"
                MR_Word check_hlds__inst_check__TypesExceptChar_10;
#line 236 "inst_check.m"
                MR_Word check_hlds__inst_check__TypesExceptTuple_13;
#line 243 "inst_check.m"
                MR_Word check_hlds__inst_check__TypeDefs_9;
#line 238 "inst_check.m"
                MR_Word check_hlds__inst_check__V_28_28;
#line 238 "inst_check.m"
                MR_Word check_hlds__inst_check__V_29_29;
#line 249 "inst_check.m"
                MR_String check_hlds__inst_check__NameStr_12;
#line 249 "inst_check.m"
                MR_Integer check_hlds__inst_check__V_33_33;
#line 260 "inst_check.m"
                MR_Word check_hlds__inst_check__V_36_36;

#line 348 "inst_check.m"
                if (((MR_tag((MR_Word) check_hlds__inst_check__Name_7)) == (MR_mktag((MR_Integer) 1))))
#line 349 "inst_check.m"
                  {
#line 349 "inst_check.m"
                    MR_String check_hlds__inst_check__Name_46 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__Name_7, (MR_Integer) 1)));
#line 349 "inst_check.m"
                    MR_Word check_hlds__inst_check__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__Name_7, (MR_Integer) 0)));

#line 349 "inst_check.m"
                    {
#line 349 "inst_check.m"
                      check_hlds__inst_check__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 349 "inst_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_29_29, 0) = ((MR_Box) (check_hlds__inst_check__Name_46));
#line 349 "inst_check.m"
                    }
#line 349 "inst_check.m"
                  }
#line 348 "inst_check.m"
                else
#line 348 "inst_check.m"
                  check_hlds__inst_check__V_29_29 = check_hlds__inst_check__Name_7;
#line 238 "inst_check.m"
                {
#line 238 "inst_check.m"
                  check_hlds__inst_check__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 238 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_28_28, 0) = ((MR_Box) (check_hlds__inst_check__V_29_29));
#line 238 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_28_28, 1) = ((MR_Box) (check_hlds__inst_check__Arity_8));
#line 238 "inst_check.m"
                }
#line 238 "inst_check.m"
                {
#line 238 "inst_check.m"
                  check_hlds__inst_check__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0, check_hlds__inst_check__FunctorsToTypes_4, ((MR_Box) (check_hlds__inst_check__V_28_28)), &check_hlds__inst_check__TypeDefs_9);
                }
#line 243 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 241 "inst_check.m"
                  {
#line 241 "inst_check.m"
                    {
#line 241 "inst_check.m"
                      check_hlds__inst_check__TypesExceptChar_10 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, (MR_Word) &check_hlds__inst_check_scalar_common_1[4], check_hlds__inst_check__TypeDefs_9);
                    }
#line 241 "inst_check.m"
                  }
#line 243 "inst_check.m"
                else
#line 244 "inst_check.m"
                  check_hlds__inst_check__TypesExceptChar_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 249 "inst_check.m"
                check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__Name_7)) == (MR_mktag((MR_Integer) 0)));
#line 249 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 249 "inst_check.m"
                  {
#line 249 "inst_check.m"
                    check_hlds__inst_check__NameStr_12 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Name_7, (MR_Integer) 0)));
#line 250 "inst_check.m"
                    {
#line 250 "inst_check.m"
                      check_hlds__inst_check__V_33_33 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__NameStr_12);
                    }
#line 250 "inst_check.m"
                    check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_33_33 == (MR_Integer) 1);
#line 249 "inst_check.m"
                  }
#line 254 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 252 "inst_check.m"
                  {
#line 252 "inst_check.m"
                    {
#line 252 "inst_check.m"
                      check_hlds__inst_check__TypesExceptTuple_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "inst_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypesExceptTuple_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_7[0])));
#line 252 "inst_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypesExceptTuple_13, 1) = ((MR_Box) (check_hlds__inst_check__TypesExceptChar_10));
#line 252 "inst_check.m"
                    }
#line 252 "inst_check.m"
                  }
#line 254 "inst_check.m"
                else
#line 255 "inst_check.m"
                  check_hlds__inst_check__TypesExceptTuple_13 = check_hlds__inst_check__TypesExceptChar_10;
#line 260 "inst_check.m"
                {
#line 260 "inst_check.m"
                  check_hlds__inst_check__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 260 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_36_36, 0) = ((MR_Box) (check_hlds__inst_check__Name_7));
#line 260 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_36_36, 1) = ((MR_Box) (check_hlds__inst_check__Arity_8));
#line 260 "inst_check.m"
                }
#line 260 "inst_check.m"
                {
#line 260 "inst_check.m"
                  check_hlds__inst_check__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__inst_check__V_36_36);
                }
#line 263 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 262 "inst_check.m"
                  {
#line 262 "inst_check.m"
                    MR_Word check_hlds__inst_check__V_37_37;

#line 262 "inst_check.m"
                    {
#line 262 "inst_check.m"
                      check_hlds__inst_check__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 262 "inst_check.m"
                      MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_37_37, 0) = ((MR_Box) (check_hlds__inst_check__Arity_8));
#line 262 "inst_check.m"
                    }
#line 262 "inst_check.m"
                    {
#line 262 "inst_check.m"
                      MR_Word base;
#line 262 "inst_check.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "inst_check.m"
                      *check_hlds__inst_check__Types_6 = base;
#line 262 "inst_check.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_37_37));
#line 262 "inst_check.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__TypesExceptTuple_13));
#line 262 "inst_check.m"
                    }
#line 262 "inst_check.m"
                  }
#line 263 "inst_check.m"
                else
#line 264 "inst_check.m"
                  *check_hlds__inst_check__Types_6 = check_hlds__inst_check__TypesExceptTuple_13;
#line 236 "inst_check.m"
              }
#line 236 "inst_check.m"
            else
#line 267 "inst_check.m"
              {
#line 267 "inst_check.m"
                MR_Word check_hlds__inst_check__V_26_26;
#line 267 "inst_check.m"
                MR_Integer check_hlds__inst_check__Arity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__Functor_5, (MR_Integer) 0)));

#line 268 "inst_check.m"
                {
#line 268 "inst_check.m"
                  check_hlds__inst_check__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 268 "inst_check.m"
                  MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_26_26, 0) = ((MR_Box) (check_hlds__inst_check__Arity_39));
#line 268 "inst_check.m"
                }
#line 268 "inst_check.m"
                {
#line 268 "inst_check.m"
                  MR_Word base;
#line 268 "inst_check.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "inst_check.m"
                  *check_hlds__inst_check__Types_6 = base;
#line 268 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_26_26));
#line 268 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "inst_check.m"
                }
#line 267 "inst_check.m"
              }
#line 236 "inst_check.m"
  }
#line 231 "inst_check.m"
}

#line 189 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_1(
#line 189 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 189 "inst_check.m"
{
#line 189 "inst_check.m"
  {
#line 189 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 189 "inst_check.m"
    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__commit_0, 1);
#line 189 "inst_check.m"
  }
#line 189 "inst_check.m"
}

#line 189 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_3(
#line 189 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 189 "inst_check.m"
{
#line 189 "inst_check.m"
  {
#line 189 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 189 "inst_check.m"
    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__Type_44 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__conv0_Type_44);
#line 189 "inst_check.m"
    {
#line 189 "inst_check.m"
      check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_2(check_hlds__inst_check__env_ptr);
#line 189 "inst_check.m"
      return;
    }
#line 189 "inst_check.m"
  }
#line 189 "inst_check.m"
}

#line 225 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_4(
#line 225 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 225 "inst_check.m"
{
#line 225 "inst_check.m"
  {
#line 225 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 225 "inst_check.m"
    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__commit_1, 1);
#line 225 "inst_check.m"
  }
#line 225 "inst_check.m"
}

#line 226 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_6(
#line 226 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 226 "inst_check.m"
{
#line 226 "inst_check.m"
  {
#line 226 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 226 "inst_check.m"
    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__TypeList_56 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__conv1_TypeList_56);
#line 226 "inst_check.m"
    {
#line 226 "inst_check.m"
      check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_5(check_hlds__inst_check__env_ptr);
#line 226 "inst_check.m"
      return;
    }
#line 226 "inst_check.m"
  }
#line 226 "inst_check.m"
}

#line 225 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_5(
#line 225 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 225 "inst_check.m"
{
#line 225 "inst_check.m"
  {
#line 225 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 225 "inst_check.m"
    {
#line 228 "inst_check.m"
      {
#line 228 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, ((MR_Box) ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__Type_44)), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__TypeList_56);
      }
#line 227 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = !((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded);
#line 227 "inst_check.m"
      if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded)
#line 227 "inst_check.m"
        {
#line 227 "inst_check.m"
          check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_4(check_hlds__inst_check__env_ptr);
#line 227 "inst_check.m"
          return;
        }
#line 225 "inst_check.m"
    }
#line 225 "inst_check.m"
  }
#line 225 "inst_check.m"
}

#line 225 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_7(
#line 225 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 225 "inst_check.m"
{
#line 225 "inst_check.m"
  {
#line 225 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 225 "inst_check.m"
    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__commit_1) == 0)
#line 225 "inst_check.m"
      {
#line 225 "inst_check.m"
        {
#line 226 "inst_check.m"
          {
#line 226 "inst_check.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__inst_check_scalar_common_2[1], &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__conv1_TypeList_56, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__MatchingTypeLists_8, check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_6, check_hlds__inst_check__env_ptr);
          }
#line 225 "inst_check.m"
        }
#line 225 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = MR_FALSE;
#line 225 "inst_check.m"
      }
#line 225 "inst_check.m"
    else
#line 225 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = MR_TRUE;
#line 225 "inst_check.m"
  }
#line 225 "inst_check.m"
}

#line 189 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_2(
#line 189 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 189 "inst_check.m"
{
#line 189 "inst_check.m"
  {
#line 189 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 225 "inst_check.m"
    {
#line 225 "inst_check.m"
      check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_7(check_hlds__inst_check__env_ptr);
    }
#line 225 "inst_check.m"
    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = !((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded);
#line 189 "inst_check.m"
    if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded)
#line 189 "inst_check.m"
      {
#line 204 "inst_check.m"
        if (((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__InstIsExported_11 == (MR_Integer) 0))
#line 205 "inst_check.m"
          (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = MR_TRUE;
#line 204 "inst_check.m"
        else
#line 199 "inst_check.m"
          if (((MR_tag((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__Type_44)) == (MR_mktag((MR_Integer) 1))))
#line 200 "inst_check.m"
            (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = MR_TRUE;
#line 199 "inst_check.m"
          else
#line 199 "inst_check.m"
            if (((MR_tag((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__Type_44)) == (MR_mktag((MR_Integer) 0))))
#line 197 "inst_check.m"
              {
#line 197 "inst_check.m"
                MR_Word check_hlds__inst_check__TypeDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__Type_44, (MR_Integer) 0)));

#line 198 "inst_check.m"
                {
#line 198 "inst_check.m"
                  (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0((MR_Integer) 1, check_hlds__inst_check__TypeDefn_15);
                }
#line 197 "inst_check.m"
              }
#line 199 "inst_check.m"
            else
#line 202 "inst_check.m"
              (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = MR_TRUE;
#line 204 "inst_check.m"
        if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded)
#line 204 "inst_check.m"
          {
#line 204 "inst_check.m"
            check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_1(check_hlds__inst_check__env_ptr);
#line 204 "inst_check.m"
            return;
          }
#line 189 "inst_check.m"
      }
#line 189 "inst_check.m"
  }
#line 189 "inst_check.m"
}

#line 189 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_8(
#line 189 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 189 "inst_check.m"
{
#line 189 "inst_check.m"
  {
#line 189 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 189 "inst_check.m"
    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__commit_0) == 0)
#line 189 "inst_check.m"
      {
#line 189 "inst_check.m"
        {
#line 189 "inst_check.m"
          {
#line 189 "inst_check.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__conv0_Type_44, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__MatchingTypeList_12, check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_3, check_hlds__inst_check__env_ptr);
          }
#line 189 "inst_check.m"
        }
#line 189 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = MR_FALSE;
#line 189 "inst_check.m"
      }
#line 189 "inst_check.m"
    else
#line 189 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = MR_TRUE;
#line 189 "inst_check.m"
  }
#line 189 "inst_check.m"
}

#line 178 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0(
#line 178 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_6,
#line 178 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDef_7,
#line 178 "inst_check.m"
  MR_Word check_hlds__inst_check__MatchingTypeLists_8,
#line 178 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_23,
#line 178 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_24)
#line 178 "inst_check.m"
{
#line 178 "inst_check.m"
  {
#line 178 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0_s check_hlds__inst_check__env;

#line 178 "inst_check.m"
    (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__MatchingTypeLists_8 = check_hlds__inst_check__MatchingTypeLists_8;
#line 182 "inst_check.m"
    {
#line 182 "inst_check.m"
      MR_Word check_hlds__inst_check__InstImportStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 4)));
#line 183 "inst_check.m"
      MR_Word check_hlds__inst_check__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 0)));
#line 183 "inst_check.m"
      MR_Word check_hlds__inst_check__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 1)));
#line 183 "inst_check.m"
      MR_Word check_hlds__inst_check__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 2)));
#line 183 "inst_check.m"
      MR_Word check_hlds__inst_check__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 3)));
#line 186 "inst_check.m"
      MR_Word check_hlds__inst_check__V_13_13;

#line 184 "inst_check.m"
      {
#line 184 "inst_check.m"
        (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__InstIsExported_11 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(check_hlds__inst_check__InstImportStatus_10);
      }
#line 186 "inst_check.m"
      (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__MatchingTypeLists_8)) == (MR_mktag((MR_Integer) 1)));
#line 186 "inst_check.m"
      if ((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded)
#line 186 "inst_check.m"
        {
#line 186 "inst_check.m"
          (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__MatchingTypeList_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__MatchingTypeLists_8, (MR_Integer) 0)));
#line 186 "inst_check.m"
          check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__MatchingTypeLists_8, (MR_Integer) 1)));
#line 189 "inst_check.m"
          {
#line 189 "inst_check.m"
            check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_8(&check_hlds__inst_check__env);
          }
#line 187 "inst_check.m"
          (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded = !((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded);
#line 186 "inst_check.m"
        }
#line 217 "inst_check.m"
      if ((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0_env_0__succeeded)
#line 209 "inst_check.m"
        {
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 3)));
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_6, (MR_Integer) 0)));
#line 209 "inst_check.m"
          MR_Integer check_hlds__inst_check__InstArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_6, (MR_Integer) 1)));
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__Pieces_21;
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__Spec_22;
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_28_28;
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_29_29;
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_30_30;
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_37_37;
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_38_38;
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_39_39;
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_40_40;
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 0)));
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 1)));
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 2)));
#line 209 "inst_check.m"
          MR_Word check_hlds__inst_check__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 4)));

#line 212 "inst_check.m"
          {
#line 212 "inst_check.m"
            check_hlds__inst_check__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_30_30, 0) = ((MR_Box) (check_hlds__inst_check__InstName_19));
#line 212 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_30_30, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_20));
#line 212 "inst_check.m"
          }
#line 212 "inst_check.m"
          {
#line 212 "inst_check.m"
            check_hlds__inst_check__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 212 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_29_29, 1) = ((MR_Box) (check_hlds__inst_check__V_30_30));
#line 212 "inst_check.m"
          }
#line 211 "inst_check.m"
          {
#line 211 "inst_check.m"
            check_hlds__inst_check__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_28_28, 0) = ((MR_Box) (check_hlds__inst_check__V_29_29));
#line 211 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_2[5])));
#line 211 "inst_check.m"
          }
#line 211 "inst_check.m"
          {
#line 211 "inst_check.m"
            check_hlds__inst_check__Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_2[3])));
#line 211 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 1) = ((MR_Box) (check_hlds__inst_check__V_28_28));
#line 211 "inst_check.m"
          }
#line 215 "inst_check.m"
          {
#line 215 "inst_check.m"
            check_hlds__inst_check__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 215 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_40_40, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_21));
#line 215 "inst_check.m"
          }
#line 215 "inst_check.m"
          {
#line 215 "inst_check.m"
            check_hlds__inst_check__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_39_39, 0) = ((MR_Box) (check_hlds__inst_check__V_40_40));
#line 215 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "inst_check.m"
          }
#line 215 "inst_check.m"
          {
#line 215 "inst_check.m"
            check_hlds__inst_check__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__Context_18));
#line 215 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_38_38, 1) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 215 "inst_check.m"
          }
#line 214 "inst_check.m"
          {
#line 214 "inst_check.m"
            check_hlds__inst_check__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 0) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 214 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "inst_check.m"
          }
#line 214 "inst_check.m"
          {
#line 214 "inst_check.m"
            check_hlds__inst_check__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 214 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 214 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 214 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_22, 2) = ((MR_Box) (check_hlds__inst_check__V_37_37));
#line 214 "inst_check.m"
          }
#line 216 "inst_check.m"
          {
#line 216 "inst_check.m"
            MR_Word base;
#line 216 "inst_check.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_Specs_24 = base;
#line 216 "inst_check.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_22));
#line 216 "inst_check.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_23));
#line 216 "inst_check.m"
          }
#line 209 "inst_check.m"
        }
#line 217 "inst_check.m"
      else
#line 216 "inst_check.m"
        *check_hlds__inst_check__STATE_VARIABLE_Specs_24 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_23;
#line 182 "inst_check.m"
    }
#line 178 "inst_check.m"
  }
#line 178 "inst_check.m"
}

#line 155 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_4_p_0_2(
#line 155 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 155 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 155 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 155 "inst_check.m"
{
#line 155 "inst_check.m"
  {
#line 155 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 155 "inst_check.m"
    MR_Word check_hlds__inst_check__conv1_Types_6;

#line 155 "inst_check.m"
    {
#line 155 "inst_check.m"
      check_hlds__inst_check__find_types_for_functor_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv1_Types_6);
    }
#line 155 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv1_Types_6));
#line 155 "inst_check.m"
  }
#line 155 "inst_check.m"
}

#line 153 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_4_p_0_1(
#line 153 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 153 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 153 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 153 "inst_check.m"
{
#line 153 "inst_check.m"
  {
#line 153 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 153 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 153 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_Functor_5;

#line 153 "inst_check.m"
    {
#line 153 "inst_check.m"
      check_hlds__inst_check__succeeded = check_hlds__inst_check__bound_inst_to_functor_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_Functor_5);
    }
#line 153 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 153 "inst_check.m"
      {
#line 153 "inst_check.m"
        *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_Functor_5));
#line 153 "inst_check.m"
        check_hlds__inst_check__succeeded = MR_TRUE;
#line 153 "inst_check.m"
      }
#line 153 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 153 "inst_check.m"
  }
#line 153 "inst_check.m"
}

#line 143 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_4_p_0(
#line 143 "inst_check.m"
  MR_Word check_hlds__inst_check__FunctorsToTypes_5,
#line 143 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 143 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_27,
#line 143 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_28)
#line 143 "inst_check.m"
{
#line 146 "inst_check.m"
  {
#line 146 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 146 "inst_check.m"
    MR_Word check_hlds__inst_check__InstId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 146 "inst_check.m"
    MR_Word check_hlds__inst_check__InstDef_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 146 "inst_check.m"
    MR_Word check_hlds__inst_check__InstBody_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 2)));
#line 147 "inst_check.m"
    MR_Word check_hlds__inst_check__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 0)));
#line 147 "inst_check.m"
    MR_Word check_hlds__inst_check__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 1)));
#line 147 "inst_check.m"
    MR_Word check_hlds__inst_check__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 3)));
#line 147 "inst_check.m"
    MR_Word check_hlds__inst_check__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_7, (MR_Integer) 4)));

#line 174 "inst_check.m"
    if ((check_hlds__inst_check__InstBody_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "inst_check.m"
      *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 174 "inst_check.m"
    else
#line 149 "inst_check.m"
      {
#line 149 "inst_check.m"
        MR_Word check_hlds__inst_check__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__InstBody_9, (MR_Integer) 0)));

#line 162 "inst_check.m"
        if ((check_hlds__inst_check__Inst_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 162 "inst_check.m"
        else
#line 162 "inst_check.m"
          if ((check_hlds__inst_check__Inst_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 167 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 162 "inst_check.m"
          else
#line 162 "inst_check.m"
            if (((MR_tag((MR_Word) check_hlds__inst_check__Inst_10)) == (MR_mktag((MR_Integer) 2))))
#line 163 "inst_check.m"
              *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 162 "inst_check.m"
            else
#line 162 "inst_check.m"
              if (((MR_tag((MR_Word) check_hlds__inst_check__Inst_10)) == (MR_mktag((MR_Integer) 1))))
#line 165 "inst_check.m"
                *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 162 "inst_check.m"
              else
#line 162 "inst_check.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_check__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 171 "inst_check.m"
                  *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 162 "inst_check.m"
                else
#line 162 "inst_check.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_check__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 151 "inst_check.m"
                    {
#line 151 "inst_check.m"
                      MR_Word check_hlds__inst_check__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_10, (MR_Integer) 3)));
#line 151 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_10, (MR_Integer) 1)));
#line 151 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_10, (MR_Integer) 2)));
#line 159 "inst_check.m"
                      MR_Word check_hlds__inst_check__Functors_14;

#line 153 "inst_check.m"
                      {
#line 153 "inst_check.m"
                        check_hlds__inst_check__succeeded = mercury__list__map_3_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_bound_inst_functor_0, (MR_Word) &check_hlds__inst_check_scalar_common_1[3], check_hlds__inst_check__BoundInsts_13, &check_hlds__inst_check__Functors_14);
                      }
#line 159 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 156 "inst_check.m"
                        {
#line 156 "inst_check.m"
                          MR_Word check_hlds__inst_check__MatchingTypeLists_15;
#line 156 "inst_check.m"
                          MR_Word check_hlds__inst_check__V_30_30;

#line 155 "inst_check.m"
                          {
#line 155 "inst_check.m"
                            check_hlds__inst_check__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 155 "inst_check.m"
                            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_30_30, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_6[0]));
#line 155 "inst_check.m"
                            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_30_30, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_4_p_0_2));
#line 155 "inst_check.m"
                            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 155 "inst_check.m"
                            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_30_30, 3) = ((MR_Box) (check_hlds__inst_check__FunctorsToTypes_5));
#line 155 "inst_check.m"
                          }
#line 155 "inst_check.m"
                          {
#line 155 "inst_check.m"
                            mercury__list__map_3_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_bound_inst_functor_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[1], check_hlds__inst_check__V_30_30, check_hlds__inst_check__Functors_14, &check_hlds__inst_check__MatchingTypeLists_15);
                          }
#line 157 "inst_check.m"
                          {
#line 157 "inst_check.m"
                            check_hlds__inst_check__maybe_issue_inst_check_warning_5_p_0(check_hlds__inst_check__InstId_6, check_hlds__inst_check__InstDef_7, check_hlds__inst_check__MatchingTypeLists_15, check_hlds__inst_check__STATE_VARIABLE_Specs_0_27, check_hlds__inst_check__STATE_VARIABLE_Specs_28);
#line 157 "inst_check.m"
                            return;
                          }
#line 156 "inst_check.m"
                        }
#line 159 "inst_check.m"
                      else
#line 157 "inst_check.m"
                        *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 151 "inst_check.m"
                    }
#line 162 "inst_check.m"
                  else
#line 162 "inst_check.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_check__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 169 "inst_check.m"
                      *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 162 "inst_check.m"
                    else
#line 162 "inst_check.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_check__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 170 "inst_check.m"
                        *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 162 "inst_check.m"
                      else
#line 162 "inst_check.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_check__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 166 "inst_check.m"
                          *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 162 "inst_check.m"
                        else
#line 168 "inst_check.m"
                          *check_hlds__inst_check__STATE_VARIABLE_Specs_28 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_27;
#line 149 "inst_check.m"
      }
#line 146 "inst_check.m"
  }
#line 143 "inst_check.m"
}

#line 122 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
#line 122 "inst_check.m"
  MR_Word check_hlds__inst_check__Section_3,
#line 122 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDef_4)
#line 122 "inst_check.m"
{
#line 124 "inst_check.m"
  {
#line 124 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 124 "inst_check.m"
    MR_Word check_hlds__inst_check__ImportStatus_5;

#line 125 "inst_check.m"
    {
#line 125 "inst_check.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__inst_check__TypeDef_4, &check_hlds__inst_check__ImportStatus_5);
    }
#line 90 "inst_check.m"
    if ((((check_hlds__inst_check__ImportStatus_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))) || (((MR_tag((MR_Word) check_hlds__inst_check__ImportStatus_5)) == (MR_mktag((MR_Integer) 2))))))
#line 91 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 90 "inst_check.m"
    else
#line 90 "inst_check.m"
      if ((((((((((check_hlds__inst_check__ImportStatus_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))) || ((check_hlds__inst_check__ImportStatus_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))))) || ((check_hlds__inst_check__ImportStatus_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))))) || ((check_hlds__inst_check__ImportStatus_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))))) || ((check_hlds__inst_check__ImportStatus_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))))
#line 3731 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__Section_3 == (MR_Integer) 0);
#line 90 "inst_check.m"
      else
#line 90 "inst_check.m"
        check_hlds__inst_check__succeeded = MR_FALSE;
#line 124 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 124 "inst_check.m"
  }
#line 122 "inst_check.m"
}

#line 115 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__inst_is_defined_in_current_module_1_p_0(
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1)
#line 115 "inst_check.m"
{
#line 118 "inst_check.m"
  {
#line 118 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 118 "inst_check.m"
    MR_Word check_hlds__inst_check__InstDef_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 118 "inst_check.m"
    MR_Word check_hlds__inst_check__ImportStatus_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_3, (MR_Integer) 4)));
#line 118 "inst_check.m"
    MR_Word check_hlds__inst_check__V_5_5;
#line 118 "inst_check.m"
    MR_Word check_hlds__inst_check__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "inst_check.m"
    MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_3, (MR_Integer) 0)));
#line 119 "inst_check.m"
    MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_3, (MR_Integer) 1)));
#line 119 "inst_check.m"
    MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_3, (MR_Integer) 2)));
#line 119 "inst_check.m"
    MR_Word check_hlds__inst_check__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDef_3, (MR_Integer) 3)));

#line 120 "inst_check.m"
    {
#line 120 "inst_check.m"
      check_hlds__inst_check__V_5_5 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__inst_check__ImportStatus_4);
    }
#line 120 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_5_5 == (MR_Integer) 1);
#line 118 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 118 "inst_check.m"
  }
#line 115 "inst_check.m"
}

#line 77 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_3_p_0_3(
#line 77 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 77 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 77 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 77 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_3)
#line 77 "inst_check.m"
{
#line 77 "inst_check.m"
  {
#line 77 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 77 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_STATE_VARIABLE_Specs_28;

#line 77 "inst_check.m"
    {
#line 77 "inst_check.m"
      check_hlds__inst_check__check_inst_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2), &check_hlds__inst_check__conv0_STATE_VARIABLE_Specs_28);
    }
#line 77 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_check__conv0_STATE_VARIABLE_Specs_28));
#line 77 "inst_check.m"
  }
#line 77 "inst_check.m"
}

#line 73 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_3_p_0_2(
#line 73 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 73 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1)
#line 73 "inst_check.m"
{
#line 73 "inst_check.m"
  {
#line 73 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 73 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;

#line 73 "inst_check.m"
    {
#line 73 "inst_check.m"
      return check_hlds__inst_check__succeeded = check_hlds__inst_check__inst_is_defined_in_current_module_1_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    }
#line 73 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 73 "inst_check.m"
  }
#line 73 "inst_check.m"
}

#line 70 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_3_p_0_1(
#line 70 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 70 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1)
#line 70 "inst_check.m"
{
#line 70 "inst_check.m"
  {
#line 70 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 70 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;

#line 70 "inst_check.m"
    {
#line 70 "inst_check.m"
      return check_hlds__inst_check__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    }
#line 70 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 70 "inst_check.m"
  }
#line 70 "inst_check.m"
}

#line 35 "inst_check.m"
void MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_3_p_0(
#line 35 "inst_check.m"
  MR_Word check_hlds__inst_check__Module_4,
#line 35 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_16,
#line 35 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_17)
#line 35 "inst_check.m"
{
#line 63 "inst_check.m"
  {
#line 63 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_24_24;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeInfo_29_29;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__InstTable_6;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__UserInstTable_7;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__InstDefs_8;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeTable_9;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorsDefns_10;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__AllTypeDefs_11;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__UserVisibleTypeDefs_12;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__InstIdDefPairs_13;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__InstIdDefPairsForCurrentModule_14;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__FunctorsToTypeDefs_15;
#line 63 "inst_check.m"
    MR_Word check_hlds__inst_check__V_21_21;
#line 77 "inst_check.m"
    MR_Box check_hlds__inst_check__conv1_STATE_VARIABLE_Specs_17;

#line 64 "inst_check.m"
    {
#line 64 "inst_check.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_check__Module_4, &check_hlds__inst_check__InstTable_6);
    }
#line 65 "inst_check.m"
    {
#line 65 "inst_check.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__inst_check__InstTable_6, &check_hlds__inst_check__UserInstTable_7);
    }
#line 66 "inst_check.m"
    {
#line 66 "inst_check.m"
      hlds__hlds_data__user_inst_table_get_inst_defns_2_p_0(check_hlds__inst_check__UserInstTable_7, &check_hlds__inst_check__InstDefs_8);
    }
#line 67 "inst_check.m"
    {
#line 67 "inst_check.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__inst_check__Module_4, &check_hlds__inst_check__TypeTable_9);
    }
#line 68 "inst_check.m"
    {
#line 68 "inst_check.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(check_hlds__inst_check__TypeTable_9, &check_hlds__inst_check__TypeCtorsDefns_10);
    }
#line 3943 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
#line 69 "inst_check.m"
    {
#line 69 "inst_check.m"
      check_hlds__inst_check__AllTypeDefs_11 = mercury__assoc_list__values_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, check_hlds__inst_check__TypeCtorInfo_24_24, check_hlds__inst_check__TypeCtorsDefns_10);
    }
#line 70 "inst_check.m"
    {
#line 70 "inst_check.m"
      mercury__list__filter_3_p_0(check_hlds__inst_check__TypeCtorInfo_24_24, (MR_Word) &check_hlds__inst_check_scalar_common_4[0], check_hlds__inst_check__AllTypeDefs_11, &check_hlds__inst_check__UserVisibleTypeDefs_12);
    }
#line 72 "inst_check.m"
    {
#line 72 "inst_check.m"
      check_hlds__inst_check__InstIdDefPairs_13 = mercury__map__to_assoc_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, check_hlds__inst_check__InstDefs_8);
    }
#line 3960 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeInfo_29_29 = (MR_Word) &check_hlds__inst_check_scalar_common_1[0];
#line 73 "inst_check.m"
    {
#line 73 "inst_check.m"
      mercury__list__filter_3_p_0(check_hlds__inst_check__TypeInfo_29_29, (MR_Word) &check_hlds__inst_check_scalar_common_1[2], check_hlds__inst_check__InstIdDefPairs_13, &check_hlds__inst_check__InstIdDefPairsForCurrentModule_14);
    }
#line 75 "inst_check.m"
    {
#line 75 "inst_check.m"
      check_hlds__inst_check__FunctorsToTypeDefs_15 = check_hlds__inst_check__index_types_by_unqualified_functors_1_f_0(check_hlds__inst_check__UserVisibleTypeDefs_12);
    }
#line 77 "inst_check.m"
    {
#line 77 "inst_check.m"
      check_hlds__inst_check__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 77 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_21_21, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[0]));
#line 77 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_21_21, 1) = ((MR_Box) (check_hlds__inst_check__check_insts_have_matching_types_3_p_0_3));
#line 77 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 77 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_21_21, 3) = ((MR_Box) (check_hlds__inst_check__FunctorsToTypeDefs_15));
#line 77 "inst_check.m"
    }
#line 77 "inst_check.m"
    {
#line 77 "inst_check.m"
      mercury__list__foldl_4_p_0(check_hlds__inst_check__TypeInfo_29_29, (MR_Word) &check_hlds__inst_check_scalar_common_2[0], check_hlds__inst_check__V_21_21, check_hlds__inst_check__InstIdDefPairsForCurrentModule_14, ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_16)), &check_hlds__inst_check__conv1_STATE_VARIABLE_Specs_17);
    }
#line 77 "inst_check.m"
    *check_hlds__inst_check__STATE_VARIABLE_Specs_17 = ((MR_Word) check_hlds__inst_check__conv1_STATE_VARIABLE_Specs_17);
#line 63 "inst_check.m"
  }
#line 35 "inst_check.m"
}

void mercury__check_hlds__inst_check__init(void)
{
}

void mercury__check_hlds__inst_check__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_bound_inst_functor_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functors_to_types_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0);
}

void mercury__check_hlds__inst_check__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.inst_check. */
