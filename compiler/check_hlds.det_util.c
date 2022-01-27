/*
** Automatically generated from `det_util.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module check_hlds.det_util. */
/* :- implementation. */

/*
INIT mercury__check_hlds__det_util__init
ENDINIT
*/

#include "check_hlds.det_util.mih"


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
#include "set_tree234.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 132 "check_hlds.det_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 135 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0;

#line 138 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1;

#line 141 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0[2];

#line 144 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0[2];

#line 147 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0[2];

#line 150 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0;

#line 153 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1;

#line 156 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0[2];

#line 159 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0[2];

#line 162 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0[2];

#line 165 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 171 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 174 "check_hlds.det_util.c"
static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[11];

#line 177 "check_hlds.det_util.c"
static const MR_ConstString check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0[11];

#line 180 "check_hlds.det_util.c"
static const MR_DuArgLocn check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0[11];

#line 183 "check_hlds.det_util.c"
static const MR_DuFunctorDesc check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0;

#line 186 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1];

#line 189 "check_hlds.det_util.c"
static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1];

#line 192 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1];

#line 195 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1];

#line 198 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0;

#line 201 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1;

#line 204 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0[2];

#line 207 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0[2];

#line 210 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0[2];

#line 213 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0;

#line 216 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1;

#line 219 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0[2];

#line 222 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[2];

#line 225 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[2];

#line 228 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
#line 231 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 233 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 236 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
#line 239 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 241 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 243 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 246 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
#line 249 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 251 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 254 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
#line 257 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 259 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 261 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 264 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
#line 267 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 269 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 272 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
#line 275 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 277 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 279 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 282 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
#line 285 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 287 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 290 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
#line 293 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 295 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 297 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 300 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
#line 303 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 305 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 308 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
#line 311 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 313 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 315 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 168 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__168__1_2_p_0(
#line 168 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 168 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_37);

#line 163 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__163__1_2_p_0(
#line 163 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 163 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_34);

#line 168 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_2_4_p_0_2(
#line 168 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 168 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1);

#line 163 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_2_4_p_0_1(
#line 163 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 163 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1);

#line 156 "det_util.m"
static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_2_4_p_0(
#line 156 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 156 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 156 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_0_3,
#line 156 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_RevCases_4);


static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][5];




static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 406 "check_hlds.det_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 414 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0 = {
  (MR_String) "does_not_contain_format_call",
  (MR_Integer) 0
};

#line 420 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1 = {
  (MR_String) "contains_format_call",
  (MR_Integer) 1
};

#line 426 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1
};

#line 432 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0
};

#line 438 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 444 "check_hlds.det_util.c"
const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_format_call_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_format_call_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_format_call",
  {
    check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0
  },
  {
    check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0
};

#line 465 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0 = {
  (MR_String) "does_not_contain_require_scope",
  (MR_Integer) 0
};

#line 471 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1 = {
  (MR_String) "contains_require_scope",
  (MR_Integer) 1
};

#line 477 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1
};

#line 483 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0
};

#line 489 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 495 "check_hlds.det_util.c"
const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_require_scope_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_require_scope_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_require_scope",
  {
    check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0
  },
  {
    check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0
};

#line 516 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 524 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 533 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 541 "check_hlds.det_util.c"
static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[11] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 556 "check_hlds.det_util.c"
static const MR_ConstString check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0[11] = {
  (MR_String) "di_module_info",
  (MR_String) "di_vartypes",
  (MR_String) "di_pred_id",
  (MR_String) "di_proc_id",
  (MR_String) "di_reorder_conj",
  (MR_String) "di_reorder_disj",
  (MR_String) "di_fully_strict",
  (MR_String) "di_pess_extra_vars",
  (MR_String) "di_has_format_call",
  (MR_String) "di_has_req_scope",
  (MR_String) "di_error_specs"
};

#line 571 "check_hlds.det_util.c"
static const MR_DuArgLocn check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0[11] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 630 "check_hlds.det_util.c"
static const MR_DuFunctorDesc check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0 = {
  (MR_String) "det_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0,
  check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0,
  check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0,
  NULL
};

#line 645 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1] = {
  &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0
};

#line 650 "check_hlds.det_util.c"
static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0
  }
};

#line 659 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1] = {
  &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0
};

#line 664 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1] = {
  (MR_Integer) 0
};

#line 669 "check_hlds.det_util.c"
const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_det_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_util____Unify____det_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____det_info_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "det_info",
  {
    check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0
  },
  {
    check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0
};

#line 690 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "changed",
  (MR_Integer) 0
};

#line 696 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "unchanged",
  (MR_Integer) 1
};

#line 702 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1
};

#line 708 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1
};

#line 714 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 720 "check_hlds.det_util.c"
const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_maybe_changed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____maybe_changed_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "maybe_changed",
  {
    check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0
  },
  {
    check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0
};

#line 741 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0 = {
  (MR_String) "pess_extra_vars_report",
  (MR_Integer) 0
};

#line 747 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1 = {
  (MR_String) "pess_extra_vars_ignore",
  (MR_Integer) 1
};

#line 753 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1
};

#line 759 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0
};

#line 765 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 771 "check_hlds.det_util.c"
const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "report_pess_extra_vars",
  {
    check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0
  },
  {
    check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0
};

#line 792 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
#line 795 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 797 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 799 "check_hlds.det_util.c"
{
#line 801 "check_hlds.det_util.c"
  {
#line 803 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 806 "check_hlds.det_util.c"
    {
#line 808 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____contains_format_call_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 811 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 813 "check_hlds.det_util.c"
  }
#line 815 "check_hlds.det_util.c"
}

#line 818 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
#line 821 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 823 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 825 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 827 "check_hlds.det_util.c"
{
#line 829 "check_hlds.det_util.c"
  {
#line 831 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 834 "check_hlds.det_util.c"
    {
#line 836 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____contains_format_call_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 839 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 841 "check_hlds.det_util.c"
  }
#line 843 "check_hlds.det_util.c"
}

#line 846 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
#line 849 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 851 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 853 "check_hlds.det_util.c"
{
#line 855 "check_hlds.det_util.c"
  {
#line 857 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 860 "check_hlds.det_util.c"
    {
#line 862 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____contains_require_scope_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 865 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 867 "check_hlds.det_util.c"
  }
#line 869 "check_hlds.det_util.c"
}

#line 872 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
#line 875 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 877 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 879 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 881 "check_hlds.det_util.c"
{
#line 883 "check_hlds.det_util.c"
  {
#line 885 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 888 "check_hlds.det_util.c"
    {
#line 890 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____contains_require_scope_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 893 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 895 "check_hlds.det_util.c"
  }
#line 897 "check_hlds.det_util.c"
}

#line 900 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
#line 903 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 905 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 907 "check_hlds.det_util.c"
{
#line 909 "check_hlds.det_util.c"
  {
#line 911 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 914 "check_hlds.det_util.c"
    {
#line 916 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____det_info_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 919 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 921 "check_hlds.det_util.c"
  }
#line 923 "check_hlds.det_util.c"
}

#line 926 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
#line 929 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 931 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 933 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 935 "check_hlds.det_util.c"
{
#line 937 "check_hlds.det_util.c"
  {
#line 939 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 942 "check_hlds.det_util.c"
    {
#line 944 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____det_info_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 947 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 949 "check_hlds.det_util.c"
  }
#line 951 "check_hlds.det_util.c"
}

#line 954 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
#line 957 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 959 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 961 "check_hlds.det_util.c"
{
#line 963 "check_hlds.det_util.c"
  {
#line 965 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 968 "check_hlds.det_util.c"
    {
#line 970 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____maybe_changed_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 973 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 975 "check_hlds.det_util.c"
  }
#line 977 "check_hlds.det_util.c"
}

#line 980 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
#line 983 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 985 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 987 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 989 "check_hlds.det_util.c"
{
#line 991 "check_hlds.det_util.c"
  {
#line 993 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 996 "check_hlds.det_util.c"
    {
#line 998 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____maybe_changed_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 1001 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 1003 "check_hlds.det_util.c"
  }
#line 1005 "check_hlds.det_util.c"
}

#line 1008 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
#line 1011 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 1013 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 1015 "check_hlds.det_util.c"
{
#line 1017 "check_hlds.det_util.c"
  {
#line 1019 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 1022 "check_hlds.det_util.c"
    {
#line 1024 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____report_pess_extra_vars_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 1027 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1029 "check_hlds.det_util.c"
  }
#line 1031 "check_hlds.det_util.c"
}

#line 1034 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
#line 1037 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 1039 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 1041 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 1043 "check_hlds.det_util.c"
{
#line 1045 "check_hlds.det_util.c"
  {
#line 1047 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 1050 "check_hlds.det_util.c"
    {
#line 1052 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____report_pess_extra_vars_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 1055 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 1057 "check_hlds.det_util.c"
  }
#line 1059 "check_hlds.det_util.c"
}

#line 168 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__168__1_2_p_0(
#line 168 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 168 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_37)
#line 168 "det_util.m"
{
#line 168 "det_util.m"
  {
#line 168 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 168 "det_util.m"
    {
#line 168 "det_util.m"
      return check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__HeadVar__2_37)));
    }
#line 168 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 168 "det_util.m"
  }
#line 168 "det_util.m"
}

#line 163 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__163__1_2_p_0(
#line 163 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 163 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_34)
#line 163 "det_util.m"
{
#line 163 "det_util.m"
  {
#line 163 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 163 "det_util.m"
    {
#line 163 "det_util.m"
      return check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__HeadVar__2_34)));
    }
#line 163 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 163 "det_util.m"
  }
#line 163 "det_util.m"
}

#line 51 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0(
#line 51 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 51 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 51 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 51 "det_util.m"
{
#line 51 "det_util.m"
  {
#line 51 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 51 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 51 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 51 "det_util.m"
    {
#line 51 "det_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
#line 51 "det_util.m"
      return;
    }
#line 51 "det_util.m"
  }
#line 51 "det_util.m"
}

#line 51 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0(
#line 51 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_1,
#line 51 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 51 "det_util.m"
{
#line 1155 "check_hlds.det_util.c"
  {
#line 1157 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1160 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1162 "check_hlds.det_util.c"
  }
#line 51 "det_util.m"
}

#line 37 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0(
#line 37 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 37 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 37 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 37 "det_util.m"
{
#line 37 "det_util.m"
  {
#line 37 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 37 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 37 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 37 "det_util.m"
    {
#line 37 "det_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
#line 37 "det_util.m"
      return;
    }
#line 37 "det_util.m"
  }
#line 37 "det_util.m"
}

#line 37 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0(
#line 37 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_1,
#line 37 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 37 "det_util.m"
{
#line 1208 "check_hlds.det_util.c"
  {
#line 1210 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1213 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1215 "check_hlds.det_util.c"
  }
#line 37 "det_util.m"
}

#line 229 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0(
#line 229 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 229 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 229 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 229 "det_util.m"
{
#line 229 "det_util.m"
  {
#line 229 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 229 "det_util.m"
    MR_Integer check_hlds__det_util__CastX_36 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 229 "det_util.m"
    MR_Integer check_hlds__det_util__CastY_37 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 229 "det_util.m"
    check_hlds__det_util__succeeded = (check_hlds__det_util__CastX_36 == check_hlds__det_util__CastY_37);
#line 229 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 1244 "check_hlds.det_util.c"
      *check_hlds__det_util__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "det_util.m"
    else
#line 229 "det_util.m"
      {
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "det_util.m"
        MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 5)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 0)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 1)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 2)));
#line 229 "det_util.m"
        MR_Integer check_hlds__det_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 3)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 5)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_26_26;

#line 229 "det_util.m"
        {
#line 229 "det_util.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__det_util__V_26_26, check_hlds__det_util__V_4_4, check_hlds__det_util__V_15_15);
        }
#line 1302 "check_hlds.det_util.c"
        check_hlds__det_util__succeeded = (check_hlds__det_util__V_26_26 == (MR_Integer) 0);
#line 229 "det_util.m"
        check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
        if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
          *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_26_26;
#line 229 "det_util.m"
        else
#line 229 "det_util.m"
          {
#line 229 "det_util.m"
            MR_Word check_hlds__det_util__V_27_27;

#line 229 "det_util.m"
            {
#line 229 "det_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__det_util__V_27_27, ((MR_Box) (check_hlds__det_util__V_5_5)), ((MR_Box) (check_hlds__det_util__V_16_16)));
            }
#line 1322 "check_hlds.det_util.c"
            check_hlds__det_util__succeeded = (check_hlds__det_util__V_27_27 == (MR_Integer) 0);
#line 229 "det_util.m"
            check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
            if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
              *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_27_27;
#line 229 "det_util.m"
            else
#line 229 "det_util.m"
              {
#line 229 "det_util.m"
                MR_Word check_hlds__det_util__V_28_28;

#line 229 "det_util.m"
                {
#line 229 "det_util.m"
                  hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__det_util__V_28_28, check_hlds__det_util__V_6_6, check_hlds__det_util__V_17_17);
                }
#line 1342 "check_hlds.det_util.c"
                check_hlds__det_util__succeeded = (check_hlds__det_util__V_28_28 == (MR_Integer) 0);
#line 229 "det_util.m"
                check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
                if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                  *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_28_28;
#line 229 "det_util.m"
                else
#line 229 "det_util.m"
                  {
#line 229 "det_util.m"
                    MR_Word check_hlds__det_util__V_29_29;

#line 229 "det_util.m"
                    {
#line 229 "det_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_29_29, check_hlds__det_util__V_7_7, check_hlds__det_util__V_18_18);
                    }
#line 1362 "check_hlds.det_util.c"
                    check_hlds__det_util__succeeded = (check_hlds__det_util__V_29_29 == (MR_Integer) 0);
#line 229 "det_util.m"
                    check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
                    if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                      *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_29_29;
#line 229 "det_util.m"
                    else
#line 229 "det_util.m"
                      {
#line 229 "det_util.m"
                        MR_Word check_hlds__det_util__V_30_30;
#line 229 "det_util.m"
                        MR_Integer check_hlds__det_util__V_49_49 = (MR_Integer) check_hlds__det_util__V_8_8;
#line 229 "det_util.m"
                        MR_Integer check_hlds__det_util__V_50_50 = (MR_Integer) check_hlds__det_util__V_19_19;

#line 229 "det_util.m"
                        {
#line 229 "det_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_30_30, check_hlds__det_util__V_49_49, check_hlds__det_util__V_50_50);
                        }
#line 1386 "check_hlds.det_util.c"
                        check_hlds__det_util__succeeded = (check_hlds__det_util__V_30_30 == (MR_Integer) 0);
#line 229 "det_util.m"
                        check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
                        if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                          *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_30_30;
#line 229 "det_util.m"
                        else
#line 229 "det_util.m"
                          {
#line 229 "det_util.m"
                            MR_Word check_hlds__det_util__V_31_31;
#line 229 "det_util.m"
                            MR_Integer check_hlds__det_util__V_51_51 = (MR_Integer) check_hlds__det_util__V_9_9;
#line 229 "det_util.m"
                            MR_Integer check_hlds__det_util__V_52_52 = (MR_Integer) check_hlds__det_util__V_20_20;

#line 229 "det_util.m"
                            {
#line 229 "det_util.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_31_31, check_hlds__det_util__V_51_51, check_hlds__det_util__V_52_52);
                            }
#line 1410 "check_hlds.det_util.c"
                            check_hlds__det_util__succeeded = (check_hlds__det_util__V_31_31 == (MR_Integer) 0);
#line 229 "det_util.m"
                            check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
                            if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                              *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_31_31;
#line 229 "det_util.m"
                            else
#line 229 "det_util.m"
                              {
#line 229 "det_util.m"
                                MR_Word check_hlds__det_util__V_32_32;
#line 229 "det_util.m"
                                MR_Integer check_hlds__det_util__V_53_53 = (MR_Integer) check_hlds__det_util__V_10_10;
#line 229 "det_util.m"
                                MR_Integer check_hlds__det_util__V_54_54 = (MR_Integer) check_hlds__det_util__V_21_21;

#line 229 "det_util.m"
                                {
#line 229 "det_util.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_32_32, check_hlds__det_util__V_53_53, check_hlds__det_util__V_54_54);
                                }
#line 1434 "check_hlds.det_util.c"
                                check_hlds__det_util__succeeded = (check_hlds__det_util__V_32_32 == (MR_Integer) 0);
#line 229 "det_util.m"
                                check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
                                if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                                  *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_32_32;
#line 229 "det_util.m"
                                else
#line 229 "det_util.m"
                                  {
#line 229 "det_util.m"
                                    MR_Word check_hlds__det_util__V_33_33;
#line 229 "det_util.m"
                                    MR_Integer check_hlds__det_util__V_55_55 = (MR_Integer) check_hlds__det_util__V_11_11;
#line 229 "det_util.m"
                                    MR_Integer check_hlds__det_util__V_56_56 = (MR_Integer) check_hlds__det_util__V_22_22;

#line 229 "det_util.m"
                                    {
#line 229 "det_util.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_33_33, check_hlds__det_util__V_55_55, check_hlds__det_util__V_56_56);
                                    }
#line 1458 "check_hlds.det_util.c"
                                    check_hlds__det_util__succeeded = (check_hlds__det_util__V_33_33 == (MR_Integer) 0);
#line 229 "det_util.m"
                                    check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
                                    if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                                      *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_33_33;
#line 229 "det_util.m"
                                    else
#line 229 "det_util.m"
                                      {
#line 229 "det_util.m"
                                        MR_Word check_hlds__det_util__V_34_34;
#line 229 "det_util.m"
                                        MR_Integer check_hlds__det_util__V_57_57 = (MR_Integer) check_hlds__det_util__V_12_12;
#line 229 "det_util.m"
                                        MR_Integer check_hlds__det_util__V_58_58 = (MR_Integer) check_hlds__det_util__V_23_23;

#line 229 "det_util.m"
                                        {
#line 229 "det_util.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_34_34, check_hlds__det_util__V_57_57, check_hlds__det_util__V_58_58);
                                        }
#line 1482 "check_hlds.det_util.c"
                                        check_hlds__det_util__succeeded = (check_hlds__det_util__V_34_34 == (MR_Integer) 0);
#line 229 "det_util.m"
                                        check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
                                        if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                                          *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_34_34;
#line 229 "det_util.m"
                                        else
#line 229 "det_util.m"
                                          {
#line 229 "det_util.m"
                                            MR_Word check_hlds__det_util__V_35_35;
#line 229 "det_util.m"
                                            MR_Integer check_hlds__det_util__V_59_59 = (MR_Integer) check_hlds__det_util__V_13_13;
#line 229 "det_util.m"
                                            MR_Integer check_hlds__det_util__V_60_60 = (MR_Integer) check_hlds__det_util__V_24_24;

#line 229 "det_util.m"
                                            {
#line 229 "det_util.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_35_35, check_hlds__det_util__V_59_59, check_hlds__det_util__V_60_60);
                                            }
#line 1506 "check_hlds.det_util.c"
                                            check_hlds__det_util__succeeded = (check_hlds__det_util__V_35_35 == (MR_Integer) 0);
#line 229 "det_util.m"
                                            check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 229 "det_util.m"
                                            if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                                              *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_35_35;
#line 229 "det_util.m"
                                            else
#line 229 "det_util.m"
                                              {
#line 229 "det_util.m"
                                                {
#line 229 "det_util.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_util_scalar_common_1[0], check_hlds__det_util__HeadVar__1_1, ((MR_Box) (check_hlds__det_util__V_14_14)), ((MR_Box) (check_hlds__det_util__V_25_25)));
#line 229 "det_util.m"
                                                  return;
                                                }
#line 229 "det_util.m"
                                              }
#line 229 "det_util.m"
                                          }
#line 229 "det_util.m"
                                      }
#line 229 "det_util.m"
                                  }
#line 229 "det_util.m"
                              }
#line 229 "det_util.m"
                          }
#line 229 "det_util.m"
                      }
#line 229 "det_util.m"
                  }
#line 229 "det_util.m"
              }
#line 229 "det_util.m"
          }
#line 229 "det_util.m"
      }
#line 229 "det_util.m"
  }
#line 229 "det_util.m"
}

#line 229 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0(
#line 229 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 229 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 229 "det_util.m"
{
#line 229 "det_util.m"
  {
#line 229 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 229 "det_util.m"
    MR_Integer check_hlds__det_util__CastX_25 = (MR_Integer) check_hlds__det_util__HeadVar__1_1;
#line 229 "det_util.m"
    MR_Integer check_hlds__det_util__CastY_26 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;

#line 229 "det_util.m"
    check_hlds__det_util__succeeded = (check_hlds__det_util__CastX_25 == check_hlds__det_util__CastY_26);
#line 229 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
      check_hlds__det_util__succeeded = MR_TRUE;
#line 229 "det_util.m"
    else
#line 229 "det_util.m"
      {
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__TypeCtorInfo_28_28;
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__TypeInfo_31_31;
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 2)));
#line 229 "det_util.m"
        MR_Integer check_hlds__det_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 3)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 5)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "det_util.m"
        MR_Integer check_hlds__det_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 229 "det_util.m"
        MR_Word check_hlds__det_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 5)));

#line 1629 "check_hlds.det_util.c"
        {
#line 1631 "check_hlds.det_util.c"
          check_hlds__det_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__det_util__V_3_3, check_hlds__det_util__V_14_14);
        }
#line 229 "det_util.m"
        if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
          {
#line 1638 "check_hlds.det_util.c"
            check_hlds__det_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1640 "check_hlds.det_util.c"
            {
#line 1642 "check_hlds.det_util.c"
              check_hlds__det_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_util__TypeCtorInfo_28_28, ((MR_Box) (check_hlds__det_util__V_4_4)), ((MR_Box) (check_hlds__det_util__V_15_15)));
            }
#line 229 "det_util.m"
            if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
              {
#line 1649 "check_hlds.det_util.c"
                {
#line 1651 "check_hlds.det_util.c"
                  check_hlds__det_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_util__V_5_5, check_hlds__det_util__V_16_16);
                }
#line 229 "det_util.m"
                if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                  {
#line 1658 "check_hlds.det_util.c"
                    check_hlds__det_util__succeeded = (check_hlds__det_util__V_6_6 == check_hlds__det_util__V_17_17);
#line 229 "det_util.m"
                    if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                      {
#line 1664 "check_hlds.det_util.c"
                        check_hlds__det_util__succeeded = (check_hlds__det_util__V_7_7 == check_hlds__det_util__V_18_18);
#line 229 "det_util.m"
                        if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                          {
#line 1670 "check_hlds.det_util.c"
                            check_hlds__det_util__succeeded = (check_hlds__det_util__V_8_8 == check_hlds__det_util__V_19_19);
#line 229 "det_util.m"
                            if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                              {
#line 1676 "check_hlds.det_util.c"
                                check_hlds__det_util__succeeded = (check_hlds__det_util__V_9_9 == check_hlds__det_util__V_20_20);
#line 229 "det_util.m"
                                if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                                  {
#line 1682 "check_hlds.det_util.c"
                                    check_hlds__det_util__succeeded = (check_hlds__det_util__V_10_10 == check_hlds__det_util__V_21_21);
#line 229 "det_util.m"
                                    if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                                      {
#line 1688 "check_hlds.det_util.c"
                                        check_hlds__det_util__succeeded = (check_hlds__det_util__V_11_11 == check_hlds__det_util__V_22_22);
#line 229 "det_util.m"
                                        if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                                          {
#line 1694 "check_hlds.det_util.c"
                                            check_hlds__det_util__succeeded = (check_hlds__det_util__V_12_12 == check_hlds__det_util__V_23_23);
#line 229 "det_util.m"
                                            if (check_hlds__det_util__succeeded)
#line 229 "det_util.m"
                                              {
#line 1700 "check_hlds.det_util.c"
                                                check_hlds__det_util__TypeInfo_31_31 = (MR_Word) &check_hlds__det_util_scalar_common_1[0];
#line 1702 "check_hlds.det_util.c"
                                                {
#line 1704 "check_hlds.det_util.c"
                                                  return check_hlds__det_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_util__TypeInfo_31_31, ((MR_Box) (check_hlds__det_util__V_13_13)), ((MR_Box) (check_hlds__det_util__V_24_24)));
                                                }
#line 229 "det_util.m"
                                              }
#line 229 "det_util.m"
                                          }
#line 229 "det_util.m"
                                      }
#line 229 "det_util.m"
                                  }
#line 229 "det_util.m"
                              }
#line 229 "det_util.m"
                          }
#line 229 "det_util.m"
                      }
#line 229 "det_util.m"
                  }
#line 229 "det_util.m"
              }
#line 229 "det_util.m"
          }
#line 229 "det_util.m"
      }
#line 229 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 229 "det_util.m"
  }
#line 229 "det_util.m"
}

#line 64 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0(
#line 64 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 64 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 64 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 64 "det_util.m"
{
#line 64 "det_util.m"
  {
#line 64 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 64 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 64 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 64 "det_util.m"
    {
#line 64 "det_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
#line 64 "det_util.m"
      return;
    }
#line 64 "det_util.m"
  }
#line 64 "det_util.m"
}

#line 64 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0(
#line 64 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_1,
#line 64 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 64 "det_util.m"
{
#line 1777 "check_hlds.det_util.c"
  {
#line 1779 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1782 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1784 "check_hlds.det_util.c"
  }
#line 64 "det_util.m"
}

#line 71 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0(
#line 71 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 71 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 71 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 71 "det_util.m"
{
#line 71 "det_util.m"
  {
#line 71 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 71 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 71 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 71 "det_util.m"
    {
#line 71 "det_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
#line 71 "det_util.m"
      return;
    }
#line 71 "det_util.m"
  }
#line 71 "det_util.m"
}

#line 71 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0(
#line 71 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_1,
#line 71 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 71 "det_util.m"
{
#line 1830 "check_hlds.det_util.c"
  {
#line 1832 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1835 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1837 "check_hlds.det_util.c"
  }
#line 71 "det_util.m"
}

#line 168 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_2_4_p_0_2(
#line 168 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 168 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1)
#line 168 "det_util.m"
{
#line 168 "det_util.m"
  {
#line 168 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 168 "det_util.m"
    MR_Box check_hlds__det_util__closure = check_hlds__det_util__closure_arg;

#line 168 "det_util.m"
    {
#line 168 "det_util.m"
      return check_hlds__det_util__succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__168__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_util__wrapper_arg_1));
    }
#line 168 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 168 "det_util.m"
  }
#line 168 "det_util.m"
}

#line 163 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_2_4_p_0_1(
#line 163 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 163 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1)
#line 163 "det_util.m"
{
#line 163 "det_util.m"
  {
#line 163 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 163 "det_util.m"
    MR_Box check_hlds__det_util__closure = check_hlds__det_util__closure_arg;

#line 163 "det_util.m"
    {
#line 163 "det_util.m"
      return check_hlds__det_util__succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__163__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_util__wrapper_arg_1));
    }
#line 163 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 163 "det_util.m"
  }
#line 163 "det_util.m"
}

#line 156 "det_util.m"
static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_2_4_p_0(
#line 156 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 156 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 156 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_0_3,
#line 156 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_RevCases_4)
#line 156 "det_util.m"
{
#line 159 "det_util.m"
  while (MR_TRUE)
#line 159 "det_util.m"
    {
#line 159 "det_util.m"
      /* tailcall optimized into a loop */
#line 159 "det_util.m"
      {
#line 159 "det_util.m"
        MR_bool check_hlds__det_util__succeeded;

#line 159 "det_util.m"
        if ((check_hlds__det_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_RevCases_4 = check_hlds__det_util__STATE_VARIABLE_RevCases_0_3;
#line 159 "det_util.m"
        else
#line 160 "det_util.m"
          {
#line 160 "det_util.m"
            MR_Word check_hlds__det_util__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 0)));
#line 160 "det_util.m"
            MR_Word check_hlds__det_util__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 1)));
#line 160 "det_util.m"
            MR_Word check_hlds__det_util__MainConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_9, (MR_Integer) 0)));
#line 160 "det_util.m"
            MR_Word check_hlds__det_util__OtherConsIds0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_9, (MR_Integer) 1)));
#line 160 "det_util.m"
            MR_Word check_hlds__det_util__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_9, (MR_Integer) 2)));
#line 160 "det_util.m"
            MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_23_23;

#line 162 "det_util.m"
            {
#line 162 "det_util.m"
              check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__MainConsId0_13)));
            }
#line 167 "det_util.m"
            if (check_hlds__det_util__succeeded)
#line 164 "det_util.m"
              {
#line 164 "det_util.m"
                MR_Word check_hlds__det_util__OtherConsIds_16;
#line 164 "det_util.m"
                MR_Word check_hlds__det_util__Case_17;
#line 164 "det_util.m"
                MR_Word check_hlds__det_util__V_22_22;

#line 163 "det_util.m"
                {
#line 163 "det_util.m"
                  check_hlds__det_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 163 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_2[0]));
#line 163 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_2_4_p_0_1));
#line 163 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 163 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 3) = ((MR_Box) (check_hlds__det_util__HeadVar__2_2));
#line 163 "det_util.m"
                }
#line 163 "det_util.m"
                {
#line 163 "det_util.m"
                  mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__V_22_22, check_hlds__det_util__OtherConsIds0_14, &check_hlds__det_util__OtherConsIds_16);
                }
#line 165 "det_util.m"
                {
#line 165 "det_util.m"
                  check_hlds__det_util__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 165 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_17, 0) = ((MR_Box) (check_hlds__det_util__MainConsId0_13));
#line 165 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_17, 1) = ((MR_Box) (check_hlds__det_util__OtherConsIds_16));
#line 165 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_17, 2) = ((MR_Box) (check_hlds__det_util__Goal_15));
#line 165 "det_util.m"
                }
#line 166 "det_util.m"
                {
#line 166 "det_util.m"
                  check_hlds__det_util__STATE_VARIABLE_RevCases_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "det_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 0) = ((MR_Box) (check_hlds__det_util__Case_17));
#line 166 "det_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 1) = ((MR_Box) (check_hlds__det_util__STATE_VARIABLE_RevCases_0_3));
#line 166 "det_util.m"
                }
#line 164 "det_util.m"
              }
#line 167 "det_util.m"
            else
#line 169 "det_util.m"
              {
#line 169 "det_util.m"
                MR_Word check_hlds__det_util__OtherConsIds1_18;
#line 169 "det_util.m"
                MR_Word check_hlds__det_util__V_24_24;

#line 168 "det_util.m"
                {
#line 168 "det_util.m"
                  check_hlds__det_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 168 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_2[0]));
#line 168 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_2_4_p_0_2));
#line 168 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 168 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 3) = ((MR_Box) (check_hlds__det_util__HeadVar__2_2));
#line 168 "det_util.m"
                }
#line 168 "det_util.m"
                {
#line 168 "det_util.m"
                  mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__V_24_24, check_hlds__det_util__OtherConsIds0_14, &check_hlds__det_util__OtherConsIds1_18);
                }
#line 173 "det_util.m"
                if ((check_hlds__det_util__OtherConsIds1_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "det_util.m"
                  check_hlds__det_util__STATE_VARIABLE_RevCases_23_23 = check_hlds__det_util__STATE_VARIABLE_RevCases_0_3;
#line 173 "det_util.m"
                else
#line 174 "det_util.m"
                  {
#line 174 "det_util.m"
                    MR_Word check_hlds__det_util__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__OtherConsIds1_18, (MR_Integer) 0)));
#line 174 "det_util.m"
                    MR_Word check_hlds__det_util__OtherConsIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__OtherConsIds1_18, (MR_Integer) 1)));
#line 174 "det_util.m"
                    MR_Word check_hlds__det_util__Case_28;

#line 175 "det_util.m"
                    {
#line 175 "det_util.m"
                      check_hlds__det_util__Case_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 175 "det_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_28, 0) = ((MR_Box) (check_hlds__det_util__MainConsId_19));
#line 175 "det_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_28, 1) = ((MR_Box) (check_hlds__det_util__OtherConsIds_27));
#line 175 "det_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_28, 2) = ((MR_Box) (check_hlds__det_util__Goal_15));
#line 175 "det_util.m"
                    }
#line 176 "det_util.m"
                    {
#line 176 "det_util.m"
                      check_hlds__det_util__STATE_VARIABLE_RevCases_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "det_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 0) = ((MR_Box) (check_hlds__det_util__Case_28));
#line 176 "det_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 1) = ((MR_Box) (check_hlds__det_util__STATE_VARIABLE_RevCases_0_3));
#line 176 "det_util.m"
                    }
#line 174 "det_util.m"
                  }
#line 169 "det_util.m"
              }
#line 179 "det_util.m"
            /* direct tailcall eliminated */
#line 179 "det_util.m"
            {
#line 179 "det_util.m"
              MR_Word check_hlds__det_util__HeadVar__1__tmp_copy_1 = check_hlds__det_util__Cases0_10;
#line 179 "det_util.m"
              MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_0__tmp_copy_3 = check_hlds__det_util__STATE_VARIABLE_RevCases_23_23;

#line 179 "det_util.m"
              check_hlds__det_util__STATE_VARIABLE_RevCases_0_3 = check_hlds__det_util__STATE_VARIABLE_RevCases_0__tmp_copy_3;
#line 179 "det_util.m"
              check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__HeadVar__1__tmp_copy_1;
#line 179 "det_util.m"
            }
#line 179 "det_util.m"
            continue;
#line 160 "det_util.m"
          }
#line 159 "det_util.m"
      }
#line 159 "det_util.m"
      break;
#line 159 "det_util.m"
    }
#line 156 "det_util.m"
}

#line 130 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_has_req_scope_2_p_0(
#line 130 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4,
#line 130 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_5)
#line 130 "det_util.m"
{
#line 276 "det_util.m"
  {
#line 276 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 0)));
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 1)));
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 2)));
#line 277 "det_util.m"
    MR_Integer check_hlds__det_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 3)));
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 5)));
#line 277 "det_util.m"
    MR_Word check_hlds__det_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 277 "det_util.m"
    {
#line 277 "det_util.m"
      MR_Word base;
#line 277 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 277 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_5 = base;
#line 277 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_8_8));
#line 277 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_9_9));
#line 277 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_10_10));
#line 277 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_11_11));
#line 277 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_12_12 | ((((check_hlds__det_util__V_13_13 << (MR_Integer) 1)) | ((((check_hlds__det_util__V_14_14 << (MR_Integer) 2)) | ((((check_hlds__det_util__V_15_15 << (MR_Integer) 3)) | ((((check_hlds__det_util__V_16_16 << (MR_Integer) 4)) | (((MR_Integer) 1 << (MR_Integer) 5)))))))))))));
#line 277 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_18_18));
#line 277 "det_util.m"
    }
#line 276 "det_util.m"
  }
#line 130 "det_util.m"
}

#line 129 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_has_format_call_2_p_0(
#line 129 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4,
#line 129 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_5)
#line 129 "det_util.m"
{
#line 274 "det_util.m"
  {
#line 274 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 0)));
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 1)));
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 2)));
#line 275 "det_util.m"
    MR_Integer check_hlds__det_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 3)));
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 5)));
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_4, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 275 "det_util.m"
    {
#line 275 "det_util.m"
      MR_Word base;
#line 275 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 275 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_5 = base;
#line 275 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_8_8));
#line 275 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_9_9));
#line 275 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_10_10));
#line 275 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_11_11));
#line 275 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_12_12 | ((((check_hlds__det_util__V_13_13 << (MR_Integer) 1)) | ((((check_hlds__det_util__V_14_14 << (MR_Integer) 2)) | ((((check_hlds__det_util__V_15_15 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((check_hlds__det_util__V_17_17 << (MR_Integer) 5)))))))))))));
#line 275 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_18_18));
#line 275 "det_util.m"
    }
#line 274 "det_util.m"
  }
#line 129 "det_util.m"
}

#line 127 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_vartypes_3_p_0(
#line 127 "det_util.m"
  MR_Word check_hlds__det_util__VarTypes_4,
#line 127 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6,
#line 127 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_7)
#line 127 "det_util.m"
{
#line 273 "det_util.m"
  {
#line 273 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0)));
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2)));
#line 273 "det_util.m"
    MR_Integer check_hlds__det_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3)));
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 5)));
#line 273 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1)));

#line 273 "det_util.m"
    {
#line 273 "det_util.m"
      MR_Word base;
#line 273 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 273 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_7 = base;
#line 273 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_9_9));
#line 273 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__VarTypes_4));
#line 273 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_11_11));
#line 273 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_12_12));
#line 273 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_13_13 | ((((check_hlds__det_util__V_14_14 << (MR_Integer) 1)) | ((((check_hlds__det_util__V_15_15 << (MR_Integer) 2)) | ((((check_hlds__det_util__V_16_16 << (MR_Integer) 3)) | ((((check_hlds__det_util__V_17_17 << (MR_Integer) 4)) | ((check_hlds__det_util__V_18_18 << (MR_Integer) 5)))))))))))));
#line 273 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_19_19));
#line 273 "det_util.m"
    }
#line 273 "det_util.m"
  }
#line 127 "det_util.m"
}

#line 125 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_module_info_3_p_0(
#line 125 "det_util.m"
  MR_Word check_hlds__det_util__ModuleInfo_4,
#line 125 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6,
#line 125 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_7)
#line 125 "det_util.m"
{
#line 271 "det_util.m"
  {
#line 271 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1)));
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2)));
#line 271 "det_util.m"
    MR_Integer check_hlds__det_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3)));
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 5)));
#line 271 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0)));

#line 271 "det_util.m"
    {
#line 271 "det_util.m"
      MR_Word base;
#line 271 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 271 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_7 = base;
#line 271 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__ModuleInfo_4));
#line 271 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_10_10));
#line 271 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_11_11));
#line 271 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_12_12));
#line 271 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_13_13 | ((((check_hlds__det_util__V_14_14 << (MR_Integer) 1)) | ((((check_hlds__det_util__V_15_15 << (MR_Integer) 2)) | ((((check_hlds__det_util__V_16_16 << (MR_Integer) 3)) | ((((check_hlds__det_util__V_17_17 << (MR_Integer) 4)) | ((check_hlds__det_util__V_18_18 << (MR_Integer) 5)))))))))))));
#line 271 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_19_19));
#line 271 "det_util.m"
    }
#line 271 "det_util.m"
  }
#line 125 "det_util.m"
}

#line 123 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_error_specs_2_p_0(
#line 123 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 123 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 123 "det_util.m"
{
#line 265 "det_util.m"
  {
#line 265 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 265 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 265 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 265 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 265 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 265 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 265 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 265 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 265 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 265 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 265 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 265 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 265 "det_util.m"
  }
#line 123 "det_util.m"
}

#line 121 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_has_req_scope_2_p_0(
#line 121 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 121 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 121 "det_util.m"
{
#line 264 "det_util.m"
  {
#line 264 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 264 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 264 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 264 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 264 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 264 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 264 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 264 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 264 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 264 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 264 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 264 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 264 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 264 "det_util.m"
  }
#line 121 "det_util.m"
}

#line 119 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_has_format_call_2_p_0(
#line 119 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 119 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 119 "det_util.m"
{
#line 263 "det_util.m"
  {
#line 263 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 263 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 263 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 263 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 263 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 263 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 263 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 263 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 263 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 263 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12;
#line 263 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 263 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 263 "det_util.m"
    check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 263 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 263 "det_util.m"
  }
#line 119 "det_util.m"
}

#line 117 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(
#line 117 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 117 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 117 "det_util.m"
{
#line 262 "det_util.m"
  {
#line 262 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 262 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12;
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 262 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 262 "det_util.m"
    check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 262 "det_util.m"
    check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 262 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 262 "det_util.m"
  }
#line 117 "det_util.m"
}

#line 116 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_vartypes_2_p_0(
#line 116 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 116 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 116 "det_util.m"
{
#line 261 "det_util.m"
  {
#line 261 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5;
#line 261 "det_util.m"
    MR_Integer check_hlds__det_util__V_6_6;
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7;
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12;
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 261 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 261 "det_util.m"
    check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 261 "det_util.m"
    check_hlds__det_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 261 "det_util.m"
    check_hlds__det_util__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 261 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 261 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 261 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 261 "det_util.m"
    check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 261 "det_util.m"
    check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 261 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 261 "det_util.m"
  }
#line 116 "det_util.m"
}

#line 115 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_fully_strict_2_p_0(
#line 115 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 115 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 115 "det_util.m"
{
#line 260 "det_util.m"
  {
#line 260 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 260 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 260 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 260 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 260 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 260 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 260 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 260 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 260 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;
#line 260 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12;
#line 260 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 260 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 260 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 260 "det_util.m"
    check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 260 "det_util.m"
    check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 260 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 260 "det_util.m"
  }
#line 115 "det_util.m"
}

#line 114 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_reorder_disj_2_p_0(
#line 114 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 114 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 114 "det_util.m"
{
#line 259 "det_util.m"
  {
#line 259 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 259 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 259 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 259 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 259 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 259 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 259 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 259 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 259 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;
#line 259 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12;
#line 259 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 259 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 259 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 259 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 259 "det_util.m"
    check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 259 "det_util.m"
    check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 259 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 259 "det_util.m"
  }
#line 114 "det_util.m"
}

#line 113 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_reorder_conj_2_p_0(
#line 113 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 113 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 113 "det_util.m"
{
#line 258 "det_util.m"
  {
#line 258 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 258 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 258 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 258 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 258 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 258 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 258 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 258 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 258 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;
#line 258 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12;
#line 258 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 258 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 258 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 258 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 258 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 258 "det_util.m"
    check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 258 "det_util.m"
    check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 258 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 258 "det_util.m"
  }
#line 113 "det_util.m"
}

#line 112 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_proc_id_2_p_0(
#line 112 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 112 "det_util.m"
  MR_Integer * check_hlds__det_util__HeadVar__2_2)
#line 112 "det_util.m"
{
#line 257 "det_util.m"
  {
#line 257 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7;
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12;
#line 257 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 257 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 257 "det_util.m"
    check_hlds__det_util__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 257 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 257 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 257 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 257 "det_util.m"
    check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 257 "det_util.m"
    check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 257 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 257 "det_util.m"
  }
#line 112 "det_util.m"
}

#line 111 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_pred_id_2_p_0(
#line 111 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 111 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 111 "det_util.m"
{
#line 256 "det_util.m"
  {
#line 256 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 256 "det_util.m"
    MR_Integer check_hlds__det_util__V_6_6;
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7;
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12;
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 256 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 256 "det_util.m"
    check_hlds__det_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 256 "det_util.m"
    check_hlds__det_util__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 256 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 256 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 256 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 256 "det_util.m"
    check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 256 "det_util.m"
    check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 256 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 256 "det_util.m"
  }
#line 111 "det_util.m"
}

#line 110 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_module_info_2_p_0(
#line 110 "det_util.m"
  MR_Word check_hlds__det_util__DI_3,
#line 110 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__2_2)
#line 110 "det_util.m"
{
#line 255 "det_util.m"
  {
#line 255 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_4_4;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5;
#line 255 "det_util.m"
    MR_Integer check_hlds__det_util__V_6_6;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13;

#line 255 "det_util.m"
    *check_hlds__det_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 0)));
#line 255 "det_util.m"
    check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 1)));
#line 255 "det_util.m"
    check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 2)));
#line 255 "det_util.m"
    check_hlds__det_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 3)));
#line 255 "det_util.m"
    check_hlds__det_util__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 255 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 255 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 255 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 255 "det_util.m"
    check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 255 "det_util.m"
    check_hlds__det_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 255 "det_util.m"
    check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DI_3, (MR_Integer) 5)));
#line 255 "det_util.m"
  }
#line 110 "det_util.m"
}

#line 107 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_init_7_p_0(
#line 107 "det_util.m"
  MR_Word check_hlds__det_util__ModuleInfo_8,
#line 107 "det_util.m"
  MR_Word check_hlds__det_util__VarTypes_9,
#line 107 "det_util.m"
  MR_Word check_hlds__det_util__PredId_10,
#line 107 "det_util.m"
  MR_Integer check_hlds__det_util__ProcId_11,
#line 107 "det_util.m"
  MR_Word check_hlds__det_util__PessExtraVars_12,
#line 107 "det_util.m"
  MR_Word check_hlds__det_util__Specs_13,
#line 107 "det_util.m"
  MR_Word * check_hlds__det_util__DetInfo_14)
#line 107 "det_util.m"
{
#line 245 "det_util.m"
  {
#line 245 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__Globals_15;
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__ReorderConj_16;
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__ReorderDisj_17;
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__FullyStrict_18;

#line 246 "det_util.m"
    {
#line 246 "det_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__det_util__ModuleInfo_8, &check_hlds__det_util__Globals_15);
    }
#line 247 "det_util.m"
    {
#line 247 "det_util.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_util__Globals_15, (MR_Integer) 157, &check_hlds__det_util__ReorderConj_16);
    }
#line 248 "det_util.m"
    {
#line 248 "det_util.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_util__Globals_15, (MR_Integer) 158, &check_hlds__det_util__ReorderDisj_17);
    }
#line 249 "det_util.m"
    {
#line 249 "det_util.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__det_util__Globals_15, (MR_Integer) 159, &check_hlds__det_util__FullyStrict_18);
    }
#line 250 "det_util.m"
    {
#line 250 "det_util.m"
      MR_Word base;
#line 250 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 250 "det_util.m"
      *check_hlds__det_util__DetInfo_14 = base;
#line 250 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__ModuleInfo_8));
#line 250 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__VarTypes_9));
#line 250 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__PredId_10));
#line 250 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__ProcId_11));
#line 250 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__ReorderConj_16 | ((((check_hlds__det_util__ReorderDisj_17 << (MR_Integer) 1)) | ((((check_hlds__det_util__FullyStrict_18 << (MR_Integer) 2)) | ((((check_hlds__det_util__PessExtraVars_12 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | (((MR_Integer) 0 << (MR_Integer) 5)))))))))))));
#line 250 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Specs_13));
#line 250 "det_util.m"
    }
#line 245 "det_util.m"
  }
#line 107 "det_util.m"
}

#line 104 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_add_error_spec_3_p_0(
#line 104 "det_util.m"
  MR_Word check_hlds__det_util__Spec_4,
#line 104 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8,
#line 104 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_9)
#line 104 "det_util.m"
{
#line 222 "det_util.m"
  {
#line 222 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 5)));
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__Specs_7;
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 0)));
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 1)));
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 2)));
#line 222 "det_util.m"
    MR_Integer check_hlds__det_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 3)));
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 222 "det_util.m"
    MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 224 "det_util.m"
    {
#line 224 "det_util.m"
      check_hlds__det_util__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "det_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_util__Specs_7, 0) = ((MR_Box) (check_hlds__det_util__Spec_4));
#line 224 "det_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_util__Specs_7, 1) = ((MR_Box) (check_hlds__det_util__Specs0_6));
#line 224 "det_util.m"
    }
#line 279 "det_util.m"
    {
#line 279 "det_util.m"
      MR_Word base;
#line 279 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 279 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_9 = base;
#line 279 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_12_12));
#line 279 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_13_13));
#line 279 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_14_14));
#line 279 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_15_15));
#line 279 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_16_16 | ((((check_hlds__det_util__V_17_17 << (MR_Integer) 1)) | ((((check_hlds__det_util__V_18_18 << (MR_Integer) 2)) | ((((check_hlds__det_util__V_19_19 << (MR_Integer) 3)) | ((((check_hlds__det_util__V_20_20 << (MR_Integer) 4)) | ((check_hlds__det_util__V_21_21 << (MR_Integer) 5)))))))))))));
#line 279 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Specs_7));
#line 279 "det_util.m"
    }
#line 222 "det_util.m"
  }
#line 104 "det_util.m"
}

#line 101 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util__det_no_output_vars_4_p_0(
#line 101 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_5,
#line 101 "det_util.m"
  MR_Word check_hlds__det_util__InstMap_6,
#line 101 "det_util.m"
  MR_Word check_hlds__det_util__InstMapDelta_7,
#line 101 "det_util.m"
  MR_Word check_hlds__det_util__Vars_8)
#line 101 "det_util.m"
{
#line 216 "det_util.m"
  {
#line 216 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 0)));
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 1)));
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 2)));
#line 255 "det_util.m"
    MR_Integer check_hlds__det_util__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 3)));
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 5)));

#line 219 "det_util.m"
    {
#line 219 "det_util.m"
      return check_hlds__det_util__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(check_hlds__det_util__ModuleInfo_9, check_hlds__det_util__VarTypes_10, check_hlds__det_util__InstMap_6, check_hlds__det_util__InstMapDelta_7, check_hlds__det_util__Vars_8);
    }
#line 216 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 216 "det_util.m"
  }
#line 101 "det_util.m"
}

#line 98 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util__det_lookup_var_type_4_p_0(
#line 98 "det_util.m"
  MR_Word check_hlds__det_util__ModuleInfo_5,
#line 98 "det_util.m"
  MR_Word check_hlds__det_util__ProcInfo_6,
#line 98 "det_util.m"
  MR_Word check_hlds__det_util__Var_7,
#line 98 "det_util.m"
  MR_Word * check_hlds__det_util__TypeDefn_8)
#line 98 "det_util.m"
{
#line 209 "det_util.m"
  {
#line 209 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 209 "det_util.m"
    MR_Word check_hlds__det_util__VarTypes_9;
#line 209 "det_util.m"
    MR_Word check_hlds__det_util__Type_10;
#line 209 "det_util.m"
    MR_Word check_hlds__det_util__TypeCtor_11;
#line 209 "det_util.m"
    MR_Word check_hlds__det_util__TypeTable_12;

#line 210 "det_util.m"
    {
#line 210 "det_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_util__ProcInfo_6, &check_hlds__det_util__VarTypes_9);
    }
#line 211 "det_util.m"
    {
#line 211 "det_util.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_util__VarTypes_9, check_hlds__det_util__Var_7, &check_hlds__det_util__Type_10);
    }
#line 212 "det_util.m"
    {
#line 212 "det_util.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__det_util__Type_10, &check_hlds__det_util__TypeCtor_11);
    }
#line 213 "det_util.m"
    {
#line 213 "det_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__det_util__ModuleInfo_5, &check_hlds__det_util__TypeTable_12);
    }
#line 214 "det_util.m"
    {
#line 214 "det_util.m"
      return check_hlds__det_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__det_util__TypeTable_12, check_hlds__det_util__TypeCtor_11, check_hlds__det_util__TypeDefn_8);
    }
#line 209 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 209 "det_util.m"
  }
#line 98 "det_util.m"
}

#line 96 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_get_proc_info_2_p_0(
#line 96 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 96 "det_util.m"
  MR_Word * check_hlds__det_util__ProcInfo_4)
#line 96 "det_util.m"
{
#line 200 "det_util.m"
  {
#line 200 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 200 "det_util.m"
    MR_Word check_hlds__det_util__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 200 "det_util.m"
    MR_Word check_hlds__det_util__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 200 "det_util.m"
    MR_Integer check_hlds__det_util__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 200 "det_util.m"
    MR_Word check_hlds__det_util__PredTable_8;
#line 200 "det_util.m"
    MR_Word check_hlds__det_util__PredInfo_9;
#line 200 "det_util.m"
    MR_Word check_hlds__det_util__ProcTable_10;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 205 "det_util.m"
    MR_Box check_hlds__det_util__conv0_PredInfo_9;
#line 207 "det_util.m"
    MR_Box check_hlds__det_util__conv1_ProcInfo_4;

#line 204 "det_util.m"
    {
#line 204 "det_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_util__ModuleInfo_5, &check_hlds__det_util__PredTable_8);
    }
#line 205 "det_util.m"
    {
#line 205 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_util__PredTable_8, ((MR_Box) (check_hlds__det_util__PredId_6)), &check_hlds__det_util__conv0_PredInfo_9);
    }
#line 205 "det_util.m"
    check_hlds__det_util__PredInfo_9 = ((MR_Word) check_hlds__det_util__conv0_PredInfo_9);
#line 206 "det_util.m"
    {
#line 206 "det_util.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__det_util__PredInfo_9, &check_hlds__det_util__ProcTable_10);
    }
#line 207 "det_util.m"
    {
#line 207 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_util__ProcTable_10, ((MR_Box) (check_hlds__det_util__ProcId_7)), &check_hlds__det_util__conv1_ProcInfo_4);
    }
#line 207 "det_util.m"
    *check_hlds__det_util__ProcInfo_4 = ((MR_Word) check_hlds__det_util__conv1_ProcInfo_4);
#line 200 "det_util.m"
  }
#line 96 "det_util.m"
}

#line 93 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(
#line 93 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_6,
#line 93 "det_util.m"
  MR_Word check_hlds__det_util__PredId_7,
#line 93 "det_util.m"
  MR_Integer check_hlds__det_util__ModeId_8,
#line 93 "det_util.m"
  MR_Word * check_hlds__det_util__PredInfo_9,
#line 93 "det_util.m"
  MR_Word * check_hlds__det_util__Detism_10)
#line 93 "det_util.m"
{
#line 192 "det_util.m"
  {
#line 192 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 192 "det_util.m"
    MR_Word check_hlds__det_util__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 0)));
#line 192 "det_util.m"
    MR_Word check_hlds__det_util__PredTable_12;
#line 192 "det_util.m"
    MR_Word check_hlds__det_util__ProcTable_13;
#line 192 "det_util.m"
    MR_Word check_hlds__det_util__ProcInfo_14;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 1)));
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 2)));
#line 255 "det_util.m"
    MR_Integer check_hlds__det_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 3)));
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 5)));
#line 195 "det_util.m"
    MR_Box check_hlds__det_util__conv0_PredInfo_9;
#line 197 "det_util.m"
    MR_Box check_hlds__det_util__conv1_ProcInfo_14;

#line 194 "det_util.m"
    {
#line 194 "det_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_util__ModuleInfo_11, &check_hlds__det_util__PredTable_12);
    }
#line 195 "det_util.m"
    {
#line 195 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_util__PredTable_12, ((MR_Box) (check_hlds__det_util__PredId_7)), &check_hlds__det_util__conv0_PredInfo_9);
    }
#line 195 "det_util.m"
    *check_hlds__det_util__PredInfo_9 = ((MR_Word) check_hlds__det_util__conv0_PredInfo_9);
#line 196 "det_util.m"
    {
#line 196 "det_util.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(*check_hlds__det_util__PredInfo_9, &check_hlds__det_util__ProcTable_13);
    }
#line 197 "det_util.m"
    {
#line 197 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_util__ProcTable_13, ((MR_Box) (check_hlds__det_util__ModeId_8)), &check_hlds__det_util__conv1_ProcInfo_14);
    }
#line 197 "det_util.m"
    check_hlds__det_util__ProcInfo_14 = ((MR_Word) check_hlds__det_util__conv1_ProcInfo_14);
#line 198 "det_util.m"
    {
#line 198 "det_util.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__det_util__ProcInfo_14, check_hlds__det_util__Detism_10);
#line 198 "det_util.m"
      return;
    }
#line 192 "det_util.m"
  }
#line 93 "det_util.m"
}

#line 87 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util__interpret_unify_4_p_0(
#line 87 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 87 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 87 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_Subst_0_3,
#line 87 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_Subst_4)
#line 87 "det_util.m"
{
#line 181 "det_util.m"
  {
#line 181 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 181 "det_util.m"
    if (((MR_tag((MR_Word) check_hlds__det_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 183 "det_util.m"
      {
#line 183 "det_util.m"
        MR_Word check_hlds__det_util__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 183 "det_util.m"
        MR_Word check_hlds__det_util__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 183 "det_util.m"
        MR_Word check_hlds__det_util__ArgVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
#line 183 "det_util.m"
        MR_Word check_hlds__det_util__ArgTerms_20;
#line 183 "det_util.m"
        MR_Word check_hlds__det_util__RhsTerm_21;
#line 183 "det_util.m"
        MR_Word check_hlds__det_util__V_24_24;
#line 183 "det_util.m"
        MR_Word check_hlds__det_util__V_26_26;
#line 183 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));

#line 184 "det_util.m"
        {
#line 184 "det_util.m"
          mercury__term__var_list_to_term_list_2_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__ArgVars_18, &check_hlds__det_util__ArgTerms_20);
        }
#line 185 "det_util.m"
        {
#line 185 "det_util.m"
          check_hlds__det_util__succeeded = parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__ConsId_16, check_hlds__det_util__ArgTerms_20, &check_hlds__det_util__RhsTerm_21);
        }
#line 183 "det_util.m"
        if (check_hlds__det_util__succeeded)
#line 183 "det_util.m"
          {
#line 186 "det_util.m"
            {
#line 186 "det_util.m"
              check_hlds__det_util__V_26_26 = mercury__term__context_init_0_f_0();
            }
#line 186 "det_util.m"
            {
#line 186 "det_util.m"
              check_hlds__det_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "det_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_util__V_24_24, 0) = ((MR_Box) (check_hlds__det_util__HeadVar__1_1));
#line 186 "det_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_util__V_24_24, 1) = ((MR_Box) (check_hlds__det_util__V_26_26));
#line 186 "det_util.m"
            }
#line 186 "det_util.m"
            {
#line 186 "det_util.m"
              return check_hlds__det_util__succeeded = mercury__term__unify_term_4_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__V_24_24, check_hlds__det_util__RhsTerm_21, check_hlds__det_util__STATE_VARIABLE_Subst_0_3, check_hlds__det_util__STATE_VARIABLE_Subst_4);
            }
#line 183 "det_util.m"
          }
#line 183 "det_util.m"
      }
#line 181 "det_util.m"
    else
#line 181 "det_util.m"
      if (((MR_tag((MR_Word) check_hlds__det_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 187 "det_util.m"
        {
#line 187 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_Subst_4 = check_hlds__det_util__STATE_VARIABLE_Subst_0_3;
#line 187 "det_util.m"
          check_hlds__det_util__succeeded = MR_TRUE;
#line 187 "det_util.m"
        }
#line 181 "det_util.m"
      else
#line 181 "det_util.m"
        {
#line 181 "det_util.m"
          MR_Word check_hlds__det_util__Y_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "det_util.m"
          MR_Word check_hlds__det_util__V_10_10;
#line 181 "det_util.m"
          MR_Word check_hlds__det_util__V_11_11;
#line 181 "det_util.m"
          MR_Word check_hlds__det_util__V_13_13;
#line 181 "det_util.m"
          MR_Word check_hlds__det_util__V_14_14;

#line 182 "det_util.m"
          {
#line 182 "det_util.m"
            check_hlds__det_util__V_13_13 = mercury__term__context_init_0_f_0();
          }
#line 182 "det_util.m"
          {
#line 182 "det_util.m"
            check_hlds__det_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_10_10, 0) = ((MR_Box) (check_hlds__det_util__HeadVar__1_1));
#line 182 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_10_10, 1) = ((MR_Box) (check_hlds__det_util__V_13_13));
#line 182 "det_util.m"
          }
#line 182 "det_util.m"
          {
#line 182 "det_util.m"
            check_hlds__det_util__V_14_14 = mercury__term__context_init_0_f_0();
          }
#line 182 "det_util.m"
          {
#line 182 "det_util.m"
            check_hlds__det_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_11_11, 0) = ((MR_Box) (check_hlds__det_util__Y_6));
#line 182 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_11_11, 1) = ((MR_Box) (check_hlds__det_util__V_14_14));
#line 182 "det_util.m"
          }
#line 182 "det_util.m"
          {
#line 182 "det_util.m"
            return check_hlds__det_util__succeeded = mercury__term__unify_term_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_util__V_10_10, check_hlds__det_util__V_11_11, check_hlds__det_util__STATE_VARIABLE_Subst_0_3, check_hlds__det_util__STATE_VARIABLE_Subst_4);
          }
#line 181 "det_util.m"
        }
#line 181 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 181 "det_util.m"
  }
#line 87 "det_util.m"
}

#line 81 "det_util.m"
void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_3_p_0(
#line 81 "det_util.m"
  MR_Word check_hlds__det_util__Cases0_4,
#line 81 "det_util.m"
  MR_Word check_hlds__det_util__PossibleConsIds_5,
#line 81 "det_util.m"
  MR_Word * check_hlds__det_util__Cases_6)
#line 81 "det_util.m"
{
#line 149 "det_util.m"
  {
#line 149 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 149 "det_util.m"
    MR_Word check_hlds__det_util__PossibleConsIdSet_7;
#line 149 "det_util.m"
    MR_Word check_hlds__det_util__RevCases_8;

#line 150 "det_util.m"
    {
#line 150 "det_util.m"
      check_hlds__det_util__PossibleConsIdSet_7 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__PossibleConsIds_5);
    }
#line 153 "det_util.m"
    {
#line 153 "det_util.m"
      check_hlds__det_util__delete_unreachable_cases_2_4_p_0(check_hlds__det_util__Cases0_4, check_hlds__det_util__PossibleConsIdSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_util__RevCases_8);
    }
#line 154 "det_util.m"
    {
#line 154 "det_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, check_hlds__det_util__RevCases_8, check_hlds__det_util__Cases_6);
#line 154 "det_util.m"
      return;
    }
#line 149 "det_util.m"
  }
#line 81 "det_util.m"
}

void mercury__check_hlds__det_util__init(void)
{
}

void mercury__check_hlds__det_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0);
	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0);
	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_det_info_0);
	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_maybe_changed_0);
	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0);
}

void mercury__check_hlds__det_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.det_util. */
