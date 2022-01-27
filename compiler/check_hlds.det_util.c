/*
** Automatically generated from `det_util.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "cord.mih"
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
#include "mdbcomp.sym_name.mih"
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




#line 134 "check_hlds.det_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 137 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0;

#line 140 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1;

#line 143 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0[2];

#line 146 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0[2];

#line 149 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0[2];

#line 152 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0;

#line 155 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1;

#line 158 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0[2];

#line 161 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0[2];

#line 164 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0[2];

#line 167 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 173 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 176 "check_hlds.det_util.c"
static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[8];

#line 179 "check_hlds.det_util.c"
static const MR_ConstString check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0[8];

#line 182 "check_hlds.det_util.c"
static const MR_DuArgLocn check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0[8];

#line 185 "check_hlds.det_util.c"
static const MR_DuFunctorDesc check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0;

#line 188 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1];

#line 191 "check_hlds.det_util.c"
static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1];

#line 194 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1];

#line 197 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1];

#line 200 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0;

#line 203 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1;

#line 206 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0[2];

#line 209 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0[2];

#line 212 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0[2];

#line 215 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0;

#line 218 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1;

#line 221 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0[2];

#line 224 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[2];

#line 227 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[2];

#line 230 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
#line 233 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 235 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 238 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
#line 241 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 243 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 245 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 248 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
#line 251 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 253 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 256 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
#line 259 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 261 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 263 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 266 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
#line 269 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 271 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 274 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
#line 277 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 279 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 281 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 284 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
#line 287 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 289 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 292 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
#line 295 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 297 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 299 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 302 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
#line 305 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 307 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 310 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
#line 313 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 315 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 317 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 162 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__162__1_2_p_0(
#line 162 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 162 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_37);

#line 157 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__157__1_2_p_0(
#line 157 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 157 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_34);

#line 162 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_2(
#line 162 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 162 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1);

#line 157 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_1(
#line 157 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 157 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1);

#line 150 "det_util.m"
static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0(
#line 150 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 150 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 150 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_0_3,
#line 150 "det_util.m"
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



#line 408 "check_hlds.det_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 416 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0 = {
  (MR_String) "does_not_contain_format_call",
  (MR_Integer) 0
};

#line 422 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1 = {
  (MR_String) "contains_format_call",
  (MR_Integer) 1
};

#line 428 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1
};

#line 434 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0
};

#line 440 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 446 "check_hlds.det_util.c"
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

#line 467 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0 = {
  (MR_String) "does_not_contain_require_scope",
  (MR_Integer) 0
};

#line 473 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1 = {
  (MR_String) "contains_require_scope",
  (MR_Integer) 1
};

#line 479 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1
};

#line 485 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0
};

#line 491 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 497 "check_hlds.det_util.c"
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

#line 518 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 526 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 535 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 543 "check_hlds.det_util.c"
static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 555 "check_hlds.det_util.c"
static const MR_ConstString check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0[8] = {
  (MR_String) "di_module_info",
  (MR_String) "di_vartypes",
  (MR_String) "di_pred_id",
  (MR_String) "di_proc_id",
  (MR_String) "di_pess_extra_vars",
  (MR_String) "di_has_format_call",
  (MR_String) "di_has_req_scope",
  (MR_String) "di_error_specs"
};

#line 567 "check_hlds.det_util.c"
static const MR_DuArgLocn check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0[8] = {
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
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 611 "check_hlds.det_util.c"
static const MR_DuFunctorDesc check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0 = {
  (MR_String) "det_info",
  (MR_Integer) 8,
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

#line 626 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1] = {
  &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0
};

#line 631 "check_hlds.det_util.c"
static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0
  }
};

#line 640 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1] = {
  &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0
};

#line 645 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1] = {
  (MR_Integer) 0
};

#line 650 "check_hlds.det_util.c"
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

#line 671 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "changed",
  (MR_Integer) 0
};

#line 677 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "unchanged",
  (MR_Integer) 1
};

#line 683 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1
};

#line 689 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1
};

#line 695 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 701 "check_hlds.det_util.c"
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

#line 722 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0 = {
  (MR_String) "pess_extra_vars_report",
  (MR_Integer) 0
};

#line 728 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1 = {
  (MR_String) "pess_extra_vars_ignore",
  (MR_Integer) 1
};

#line 734 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1
};

#line 740 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0
};

#line 746 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 752 "check_hlds.det_util.c"
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

#line 773 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
#line 776 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 778 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 780 "check_hlds.det_util.c"
{
#line 782 "check_hlds.det_util.c"
  {
#line 784 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 787 "check_hlds.det_util.c"
    {
#line 789 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____contains_format_call_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 792 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 794 "check_hlds.det_util.c"
  }
#line 796 "check_hlds.det_util.c"
}

#line 799 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
#line 802 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 804 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 806 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 808 "check_hlds.det_util.c"
{
#line 810 "check_hlds.det_util.c"
  {
#line 812 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 815 "check_hlds.det_util.c"
    {
#line 817 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____contains_format_call_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 820 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 822 "check_hlds.det_util.c"
  }
#line 824 "check_hlds.det_util.c"
}

#line 827 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
#line 830 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 832 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 834 "check_hlds.det_util.c"
{
#line 836 "check_hlds.det_util.c"
  {
#line 838 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 841 "check_hlds.det_util.c"
    {
#line 843 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____contains_require_scope_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 846 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 848 "check_hlds.det_util.c"
  }
#line 850 "check_hlds.det_util.c"
}

#line 853 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
#line 856 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 858 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 860 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 862 "check_hlds.det_util.c"
{
#line 864 "check_hlds.det_util.c"
  {
#line 866 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 869 "check_hlds.det_util.c"
    {
#line 871 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____contains_require_scope_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 874 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 876 "check_hlds.det_util.c"
  }
#line 878 "check_hlds.det_util.c"
}

#line 881 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
#line 884 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 886 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 888 "check_hlds.det_util.c"
{
#line 890 "check_hlds.det_util.c"
  {
#line 892 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 895 "check_hlds.det_util.c"
    {
#line 897 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____det_info_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 900 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 902 "check_hlds.det_util.c"
  }
#line 904 "check_hlds.det_util.c"
}

#line 907 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
#line 910 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 912 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 914 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 916 "check_hlds.det_util.c"
{
#line 918 "check_hlds.det_util.c"
  {
#line 920 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 923 "check_hlds.det_util.c"
    {
#line 925 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____det_info_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 928 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 930 "check_hlds.det_util.c"
  }
#line 932 "check_hlds.det_util.c"
}

#line 935 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
#line 938 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 940 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 942 "check_hlds.det_util.c"
{
#line 944 "check_hlds.det_util.c"
  {
#line 946 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 949 "check_hlds.det_util.c"
    {
#line 951 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____maybe_changed_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 954 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 956 "check_hlds.det_util.c"
  }
#line 958 "check_hlds.det_util.c"
}

#line 961 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
#line 964 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 966 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 968 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 970 "check_hlds.det_util.c"
{
#line 972 "check_hlds.det_util.c"
  {
#line 974 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 977 "check_hlds.det_util.c"
    {
#line 979 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____maybe_changed_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 982 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 984 "check_hlds.det_util.c"
  }
#line 986 "check_hlds.det_util.c"
}

#line 989 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
#line 992 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 994 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 996 "check_hlds.det_util.c"
{
#line 998 "check_hlds.det_util.c"
  {
#line 1000 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 1003 "check_hlds.det_util.c"
    {
#line 1005 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____report_pess_extra_vars_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 1008 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1010 "check_hlds.det_util.c"
  }
#line 1012 "check_hlds.det_util.c"
}

#line 1015 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
#line 1018 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 1020 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 1022 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 1024 "check_hlds.det_util.c"
{
#line 1026 "check_hlds.det_util.c"
  {
#line 1028 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 1031 "check_hlds.det_util.c"
    {
#line 1033 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____report_pess_extra_vars_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 1036 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 1038 "check_hlds.det_util.c"
  }
#line 1040 "check_hlds.det_util.c"
}

#line 162 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__162__1_2_p_0(
#line 162 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 162 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_37)
#line 162 "det_util.m"
{
#line 162 "det_util.m"
  {
#line 162 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 162 "det_util.m"
    {
#line 162 "det_util.m"
      return check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__HeadVar__2_37)));
    }
#line 162 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 162 "det_util.m"
  }
#line 162 "det_util.m"
}

#line 157 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__157__1_2_p_0(
#line 157 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 157 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_34)
#line 157 "det_util.m"
{
#line 157 "det_util.m"
  {
#line 157 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 157 "det_util.m"
    {
#line 157 "det_util.m"
      return check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__HeadVar__2_34)));
    }
#line 157 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 157 "det_util.m"
  }
#line 157 "det_util.m"
}

#line 50 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0(
#line 50 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 50 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 50 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 50 "det_util.m"
{
#line 50 "det_util.m"
  {
#line 50 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 50 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 50 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 50 "det_util.m"
    {
#line 50 "det_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
#line 50 "det_util.m"
      return;
    }
#line 50 "det_util.m"
  }
#line 50 "det_util.m"
}

#line 50 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0(
#line 50 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_1,
#line 50 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 50 "det_util.m"
{
#line 1136 "check_hlds.det_util.c"
  {
#line 1138 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1141 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1143 "check_hlds.det_util.c"
  }
#line 50 "det_util.m"
}

#line 36 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0(
#line 36 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 36 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 36 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 36 "det_util.m"
{
#line 36 "det_util.m"
  {
#line 36 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 36 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 36 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 36 "det_util.m"
    {
#line 36 "det_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
#line 36 "det_util.m"
      return;
    }
#line 36 "det_util.m"
  }
#line 36 "det_util.m"
}

#line 36 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0(
#line 36 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_1,
#line 36 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 36 "det_util.m"
{
#line 1189 "check_hlds.det_util.c"
  {
#line 1191 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1194 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1196 "check_hlds.det_util.c"
  }
#line 36 "det_util.m"
}

#line 223 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0(
#line 223 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 223 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 223 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 223 "det_util.m"
{
#line 223 "det_util.m"
  {
#line 223 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 223 "det_util.m"
    MR_Integer check_hlds__det_util__CastX_27 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 223 "det_util.m"
    MR_Integer check_hlds__det_util__CastY_28 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 223 "det_util.m"
    check_hlds__det_util__succeeded = (check_hlds__det_util__CastX_27 == check_hlds__det_util__CastY_28);
#line 223 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 1225 "check_hlds.det_util.c"
      *check_hlds__det_util__HeadVar__1_1 = (MR_Integer) 0;
#line 223 "det_util.m"
    else
#line 223 "det_util.m"
      {
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
#line 223 "det_util.m"
        MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 3)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 5)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 0)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 1)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 2)));
#line 223 "det_util.m"
        MR_Integer check_hlds__det_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 3)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 5)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_20_20;

#line 223 "det_util.m"
        {
#line 223 "det_util.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__det_util__V_20_20, check_hlds__det_util__V_4_4, check_hlds__det_util__V_12_12);
        }
#line 1271 "check_hlds.det_util.c"
        check_hlds__det_util__succeeded = (check_hlds__det_util__V_20_20 == (MR_Integer) 0);
#line 223 "det_util.m"
        check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 223 "det_util.m"
        if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
          *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_20_20;
#line 223 "det_util.m"
        else
#line 223 "det_util.m"
          {
#line 223 "det_util.m"
            MR_Word check_hlds__det_util__V_21_21;

#line 223 "det_util.m"
            {
#line 223 "det_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__det_util__V_21_21, ((MR_Box) (check_hlds__det_util__V_5_5)), ((MR_Box) (check_hlds__det_util__V_13_13)));
            }
#line 1291 "check_hlds.det_util.c"
            check_hlds__det_util__succeeded = (check_hlds__det_util__V_21_21 == (MR_Integer) 0);
#line 223 "det_util.m"
            check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 223 "det_util.m"
            if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
              *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_21_21;
#line 223 "det_util.m"
            else
#line 223 "det_util.m"
              {
#line 223 "det_util.m"
                MR_Word check_hlds__det_util__V_22_22;

#line 223 "det_util.m"
                {
#line 223 "det_util.m"
                  hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__det_util__V_22_22, check_hlds__det_util__V_6_6, check_hlds__det_util__V_14_14);
                }
#line 1311 "check_hlds.det_util.c"
                check_hlds__det_util__succeeded = (check_hlds__det_util__V_22_22 == (MR_Integer) 0);
#line 223 "det_util.m"
                check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 223 "det_util.m"
                if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                  *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_22_22;
#line 223 "det_util.m"
                else
#line 223 "det_util.m"
                  {
#line 223 "det_util.m"
                    MR_Word check_hlds__det_util__V_23_23;

#line 223 "det_util.m"
                    {
#line 223 "det_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_23_23, check_hlds__det_util__V_7_7, check_hlds__det_util__V_15_15);
                    }
#line 1331 "check_hlds.det_util.c"
                    check_hlds__det_util__succeeded = (check_hlds__det_util__V_23_23 == (MR_Integer) 0);
#line 223 "det_util.m"
                    check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 223 "det_util.m"
                    if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                      *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_23_23;
#line 223 "det_util.m"
                    else
#line 223 "det_util.m"
                      {
#line 223 "det_util.m"
                        MR_Word check_hlds__det_util__V_24_24;
#line 223 "det_util.m"
                        MR_Integer check_hlds__det_util__V_37_37 = (MR_Integer) check_hlds__det_util__V_8_8;
#line 223 "det_util.m"
                        MR_Integer check_hlds__det_util__V_38_38 = (MR_Integer) check_hlds__det_util__V_16_16;

#line 223 "det_util.m"
                        {
#line 223 "det_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_24_24, check_hlds__det_util__V_37_37, check_hlds__det_util__V_38_38);
                        }
#line 1355 "check_hlds.det_util.c"
                        check_hlds__det_util__succeeded = (check_hlds__det_util__V_24_24 == (MR_Integer) 0);
#line 223 "det_util.m"
                        check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 223 "det_util.m"
                        if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                          *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_24_24;
#line 223 "det_util.m"
                        else
#line 223 "det_util.m"
                          {
#line 223 "det_util.m"
                            MR_Word check_hlds__det_util__V_25_25;
#line 223 "det_util.m"
                            MR_Integer check_hlds__det_util__V_39_39 = (MR_Integer) check_hlds__det_util__V_9_9;
#line 223 "det_util.m"
                            MR_Integer check_hlds__det_util__V_40_40 = (MR_Integer) check_hlds__det_util__V_17_17;

#line 223 "det_util.m"
                            {
#line 223 "det_util.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_25_25, check_hlds__det_util__V_39_39, check_hlds__det_util__V_40_40);
                            }
#line 1379 "check_hlds.det_util.c"
                            check_hlds__det_util__succeeded = (check_hlds__det_util__V_25_25 == (MR_Integer) 0);
#line 223 "det_util.m"
                            check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 223 "det_util.m"
                            if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                              *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_25_25;
#line 223 "det_util.m"
                            else
#line 223 "det_util.m"
                              {
#line 223 "det_util.m"
                                MR_Word check_hlds__det_util__V_26_26;
#line 223 "det_util.m"
                                MR_Integer check_hlds__det_util__V_41_41 = (MR_Integer) check_hlds__det_util__V_10_10;
#line 223 "det_util.m"
                                MR_Integer check_hlds__det_util__V_42_42 = (MR_Integer) check_hlds__det_util__V_18_18;

#line 223 "det_util.m"
                                {
#line 223 "det_util.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_26_26, check_hlds__det_util__V_41_41, check_hlds__det_util__V_42_42);
                                }
#line 1403 "check_hlds.det_util.c"
                                check_hlds__det_util__succeeded = (check_hlds__det_util__V_26_26 == (MR_Integer) 0);
#line 223 "det_util.m"
                                check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 223 "det_util.m"
                                if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                                  *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_26_26;
#line 223 "det_util.m"
                                else
#line 223 "det_util.m"
                                  {
#line 223 "det_util.m"
                                    {
#line 223 "det_util.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_util_scalar_common_1[0], check_hlds__det_util__HeadVar__1_1, ((MR_Box) (check_hlds__det_util__V_11_11)), ((MR_Box) (check_hlds__det_util__V_19_19)));
#line 223 "det_util.m"
                                      return;
                                    }
#line 223 "det_util.m"
                                  }
#line 223 "det_util.m"
                              }
#line 223 "det_util.m"
                          }
#line 223 "det_util.m"
                      }
#line 223 "det_util.m"
                  }
#line 223 "det_util.m"
              }
#line 223 "det_util.m"
          }
#line 223 "det_util.m"
      }
#line 223 "det_util.m"
  }
#line 223 "det_util.m"
}

#line 223 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0(
#line 223 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 223 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 223 "det_util.m"
{
#line 223 "det_util.m"
  {
#line 223 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 223 "det_util.m"
    MR_Integer check_hlds__det_util__CastX_19 = (MR_Integer) check_hlds__det_util__HeadVar__1_1;
#line 223 "det_util.m"
    MR_Integer check_hlds__det_util__CastY_20 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;

#line 223 "det_util.m"
    check_hlds__det_util__succeeded = (check_hlds__det_util__CastX_19 == check_hlds__det_util__CastY_20);
#line 223 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
      check_hlds__det_util__succeeded = MR_TRUE;
#line 223 "det_util.m"
    else
#line 223 "det_util.m"
      {
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__TypeCtorInfo_22_22;
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__TypeInfo_25_25;
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 0)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 1)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 2)));
#line 223 "det_util.m"
        MR_Integer check_hlds__det_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 3)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 5)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
#line 223 "det_util.m"
        MR_Integer check_hlds__det_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 3)));
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 223 "det_util.m"
        MR_Word check_hlds__det_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 5)));

#line 1508 "check_hlds.det_util.c"
        {
#line 1510 "check_hlds.det_util.c"
          check_hlds__det_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__det_util__V_3_3, check_hlds__det_util__V_11_11);
        }
#line 223 "det_util.m"
        if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
          {
#line 1517 "check_hlds.det_util.c"
            check_hlds__det_util__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1519 "check_hlds.det_util.c"
            {
#line 1521 "check_hlds.det_util.c"
              check_hlds__det_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_util__TypeCtorInfo_22_22, ((MR_Box) (check_hlds__det_util__V_4_4)), ((MR_Box) (check_hlds__det_util__V_12_12)));
            }
#line 223 "det_util.m"
            if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
              {
#line 1528 "check_hlds.det_util.c"
                {
#line 1530 "check_hlds.det_util.c"
                  check_hlds__det_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_util__V_5_5, check_hlds__det_util__V_13_13);
                }
#line 223 "det_util.m"
                if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                  {
#line 1537 "check_hlds.det_util.c"
                    check_hlds__det_util__succeeded = (check_hlds__det_util__V_6_6 == check_hlds__det_util__V_14_14);
#line 223 "det_util.m"
                    if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                      {
#line 1543 "check_hlds.det_util.c"
                        check_hlds__det_util__succeeded = (check_hlds__det_util__V_7_7 == check_hlds__det_util__V_15_15);
#line 223 "det_util.m"
                        if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                          {
#line 1549 "check_hlds.det_util.c"
                            check_hlds__det_util__succeeded = (check_hlds__det_util__V_8_8 == check_hlds__det_util__V_16_16);
#line 223 "det_util.m"
                            if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                              {
#line 1555 "check_hlds.det_util.c"
                                check_hlds__det_util__succeeded = (check_hlds__det_util__V_9_9 == check_hlds__det_util__V_17_17);
#line 223 "det_util.m"
                                if (check_hlds__det_util__succeeded)
#line 223 "det_util.m"
                                  {
#line 1561 "check_hlds.det_util.c"
                                    check_hlds__det_util__TypeInfo_25_25 = (MR_Word) &check_hlds__det_util_scalar_common_1[0];
#line 1563 "check_hlds.det_util.c"
                                    {
#line 1565 "check_hlds.det_util.c"
                                      return check_hlds__det_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_util__TypeInfo_25_25, ((MR_Box) (check_hlds__det_util__V_10_10)), ((MR_Box) (check_hlds__det_util__V_18_18)));
                                    }
#line 223 "det_util.m"
                                  }
#line 223 "det_util.m"
                              }
#line 223 "det_util.m"
                          }
#line 223 "det_util.m"
                      }
#line 223 "det_util.m"
                  }
#line 223 "det_util.m"
              }
#line 223 "det_util.m"
          }
#line 223 "det_util.m"
      }
#line 223 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 223 "det_util.m"
  }
#line 223 "det_util.m"
}

#line 63 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0(
#line 63 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 63 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 63 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 63 "det_util.m"
{
#line 63 "det_util.m"
  {
#line 63 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 63 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 63 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 63 "det_util.m"
    {
#line 63 "det_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
#line 63 "det_util.m"
      return;
    }
#line 63 "det_util.m"
  }
#line 63 "det_util.m"
}

#line 63 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0(
#line 63 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_1,
#line 63 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 63 "det_util.m"
{
#line 1632 "check_hlds.det_util.c"
  {
#line 1634 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1637 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1639 "check_hlds.det_util.c"
  }
#line 63 "det_util.m"
}

#line 70 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0(
#line 70 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 70 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 70 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 70 "det_util.m"
{
#line 70 "det_util.m"
  {
#line 70 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 70 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 70 "det_util.m"
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 70 "det_util.m"
    {
#line 70 "det_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
#line 70 "det_util.m"
      return;
    }
#line 70 "det_util.m"
  }
#line 70 "det_util.m"
}

#line 70 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0(
#line 70 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_1,
#line 70 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 70 "det_util.m"
{
#line 1685 "check_hlds.det_util.c"
  {
#line 1687 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1690 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1692 "check_hlds.det_util.c"
  }
#line 70 "det_util.m"
}

#line 162 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_2(
#line 162 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 162 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1)
#line 162 "det_util.m"
{
#line 162 "det_util.m"
  {
#line 162 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 162 "det_util.m"
    MR_Box check_hlds__det_util__closure = check_hlds__det_util__closure_arg;

#line 162 "det_util.m"
    {
#line 162 "det_util.m"
      return check_hlds__det_util__succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__162__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_util__wrapper_arg_1));
    }
#line 162 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 162 "det_util.m"
  }
#line 162 "det_util.m"
}

#line 157 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_1(
#line 157 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 157 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1)
#line 157 "det_util.m"
{
#line 157 "det_util.m"
  {
#line 157 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 157 "det_util.m"
    MR_Box check_hlds__det_util__closure = check_hlds__det_util__closure_arg;

#line 157 "det_util.m"
    {
#line 157 "det_util.m"
      return check_hlds__det_util__succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__157__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_util__wrapper_arg_1));
    }
#line 157 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 157 "det_util.m"
  }
#line 157 "det_util.m"
}

#line 150 "det_util.m"
static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0(
#line 150 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 150 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 150 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_0_3,
#line 150 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_RevCases_4)
#line 150 "det_util.m"
{
#line 153 "det_util.m"
  while (MR_TRUE)
#line 153 "det_util.m"
    {
#line 153 "det_util.m"
      /* tailcall optimized into a loop */
#line 153 "det_util.m"
      {
#line 153 "det_util.m"
        MR_bool check_hlds__det_util__succeeded;

#line 153 "det_util.m"
        if ((check_hlds__det_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_RevCases_4 = check_hlds__det_util__STATE_VARIABLE_RevCases_0_3;
#line 153 "det_util.m"
        else
#line 154 "det_util.m"
          {
#line 154 "det_util.m"
            MR_Word check_hlds__det_util__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 0)));
#line 154 "det_util.m"
            MR_Word check_hlds__det_util__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 1)));
#line 154 "det_util.m"
            MR_Word check_hlds__det_util__MainConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_9, (MR_Integer) 0)));
#line 154 "det_util.m"
            MR_Word check_hlds__det_util__OtherConsIds0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_9, (MR_Integer) 1)));
#line 154 "det_util.m"
            MR_Word check_hlds__det_util__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_9, (MR_Integer) 2)));
#line 154 "det_util.m"
            MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_23_23;

#line 156 "det_util.m"
            {
#line 156 "det_util.m"
              check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__MainConsId0_13)));
            }
#line 161 "det_util.m"
            if (check_hlds__det_util__succeeded)
#line 158 "det_util.m"
              {
#line 158 "det_util.m"
                MR_Word check_hlds__det_util__OtherConsIds_16;
#line 158 "det_util.m"
                MR_Word check_hlds__det_util__Case_17;
#line 158 "det_util.m"
                MR_Word check_hlds__det_util__V_22_22;

#line 157 "det_util.m"
                {
#line 157 "det_util.m"
                  check_hlds__det_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 157 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_2[0]));
#line 157 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_1));
#line 157 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 157 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 3) = ((MR_Box) (check_hlds__det_util__HeadVar__2_2));
#line 157 "det_util.m"
                }
#line 157 "det_util.m"
                {
#line 157 "det_util.m"
                  mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__V_22_22, check_hlds__det_util__OtherConsIds0_14, &check_hlds__det_util__OtherConsIds_16);
                }
#line 159 "det_util.m"
                {
#line 159 "det_util.m"
                  check_hlds__det_util__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 159 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_17, 0) = ((MR_Box) (check_hlds__det_util__MainConsId0_13));
#line 159 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_17, 1) = ((MR_Box) (check_hlds__det_util__OtherConsIds_16));
#line 159 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_17, 2) = ((MR_Box) (check_hlds__det_util__Goal_15));
#line 159 "det_util.m"
                }
#line 160 "det_util.m"
                {
#line 160 "det_util.m"
                  check_hlds__det_util__STATE_VARIABLE_RevCases_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "det_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 0) = ((MR_Box) (check_hlds__det_util__Case_17));
#line 160 "det_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 1) = ((MR_Box) (check_hlds__det_util__STATE_VARIABLE_RevCases_0_3));
#line 160 "det_util.m"
                }
#line 158 "det_util.m"
              }
#line 161 "det_util.m"
            else
#line 163 "det_util.m"
              {
#line 163 "det_util.m"
                MR_Word check_hlds__det_util__OtherConsIds1_18;
#line 163 "det_util.m"
                MR_Word check_hlds__det_util__V_24_24;

#line 162 "det_util.m"
                {
#line 162 "det_util.m"
                  check_hlds__det_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 162 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_2[0]));
#line 162 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_2));
#line 162 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 162 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 3) = ((MR_Box) (check_hlds__det_util__HeadVar__2_2));
#line 162 "det_util.m"
                }
#line 162 "det_util.m"
                {
#line 162 "det_util.m"
                  mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__V_24_24, check_hlds__det_util__OtherConsIds0_14, &check_hlds__det_util__OtherConsIds1_18);
                }
#line 167 "det_util.m"
                if ((check_hlds__det_util__OtherConsIds1_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 165 "det_util.m"
                  check_hlds__det_util__STATE_VARIABLE_RevCases_23_23 = check_hlds__det_util__STATE_VARIABLE_RevCases_0_3;
#line 167 "det_util.m"
                else
#line 168 "det_util.m"
                  {
#line 168 "det_util.m"
                    MR_Word check_hlds__det_util__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__OtherConsIds1_18, (MR_Integer) 0)));
#line 168 "det_util.m"
                    MR_Word check_hlds__det_util__OtherConsIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__OtherConsIds1_18, (MR_Integer) 1)));
#line 168 "det_util.m"
                    MR_Word check_hlds__det_util__Case_28;

#line 169 "det_util.m"
                    {
#line 169 "det_util.m"
                      check_hlds__det_util__Case_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 169 "det_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_28, 0) = ((MR_Box) (check_hlds__det_util__MainConsId_19));
#line 169 "det_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_28, 1) = ((MR_Box) (check_hlds__det_util__OtherConsIds_27));
#line 169 "det_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_28, 2) = ((MR_Box) (check_hlds__det_util__Goal_15));
#line 169 "det_util.m"
                    }
#line 170 "det_util.m"
                    {
#line 170 "det_util.m"
                      check_hlds__det_util__STATE_VARIABLE_RevCases_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "det_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 0) = ((MR_Box) (check_hlds__det_util__Case_28));
#line 170 "det_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 1) = ((MR_Box) (check_hlds__det_util__STATE_VARIABLE_RevCases_0_3));
#line 170 "det_util.m"
                    }
#line 168 "det_util.m"
                  }
#line 163 "det_util.m"
              }
#line 173 "det_util.m"
            /* direct tailcall eliminated */
#line 173 "det_util.m"
            {
#line 173 "det_util.m"
              MR_Word check_hlds__det_util__HeadVar__1__tmp_copy_1 = check_hlds__det_util__Cases0_10;
#line 173 "det_util.m"
              MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_0__tmp_copy_3 = check_hlds__det_util__STATE_VARIABLE_RevCases_23_23;

#line 173 "det_util.m"
              check_hlds__det_util__STATE_VARIABLE_RevCases_0_3 = check_hlds__det_util__STATE_VARIABLE_RevCases_0__tmp_copy_3;
#line 173 "det_util.m"
              check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__HeadVar__1__tmp_copy_1;
#line 173 "det_util.m"
            }
#line 173 "det_util.m"
            continue;
#line 154 "det_util.m"
          }
#line 153 "det_util.m"
      }
#line 153 "det_util.m"
      break;
#line 153 "det_util.m"
    }
#line 150 "det_util.m"
}

#line 124 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_has_req_scope_2_p_0(
#line 124 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5,
#line 124 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_6)
#line 124 "det_util.m"
{
#line 273 "det_util.m"
  {
#line 273 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
#line 275 "det_util.m"
    MR_Integer check_hlds__det_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 275 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));

#line 275 "det_util.m"
    check_hlds__det_util__succeeded = ((MR_Integer) 1 == check_hlds__det_util__V_23_23);
#line 277 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 277 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5;
#line 277 "det_util.m"
    else
#line 278 "det_util.m"
      {
#line 278 "det_util.m"
        MR_Word check_hlds__det_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
#line 278 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
#line 278 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
#line 278 "det_util.m"
        MR_Integer check_hlds__det_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
#line 278 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 278 "det_util.m"
        MR_Word check_hlds__det_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 278 "det_util.m"
        MR_Word check_hlds__det_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));
#line 278 "det_util.m"
        MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 278 "det_util.m"
        {
#line 278 "det_util.m"
          MR_Word base;
#line 278 "det_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 278 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = base;
#line 278 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_15_15));
#line 278 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_16_16));
#line 278 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_17_17));
#line 278 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_18_18));
#line 278 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_19_19 | ((((check_hlds__det_util__V_20_20 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 278 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_22_22));
#line 278 "det_util.m"
        }
#line 278 "det_util.m"
      }
#line 273 "det_util.m"
  }
#line 124 "det_util.m"
}

#line 123 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_has_format_call_2_p_0(
#line 123 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5,
#line 123 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_6)
#line 123 "det_util.m"
{
#line 266 "det_util.m"
  {
#line 266 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 268 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 268 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
#line 268 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
#line 268 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
#line 268 "det_util.m"
    MR_Integer check_hlds__det_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
#line 268 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 268 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 268 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));

#line 268 "det_util.m"
    check_hlds__det_util__succeeded = ((MR_Integer) 1 == check_hlds__det_util__V_23_23);
#line 270 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 270 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5;
#line 270 "det_util.m"
    else
#line 271 "det_util.m"
      {
#line 271 "det_util.m"
        MR_Word check_hlds__det_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
#line 271 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
#line 271 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
#line 271 "det_util.m"
        MR_Integer check_hlds__det_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
#line 271 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 271 "det_util.m"
        MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 271 "det_util.m"
        MR_Word check_hlds__det_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));
#line 271 "det_util.m"
        MR_Word check_hlds__det_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 271 "det_util.m"
        {
#line 271 "det_util.m"
          MR_Word base;
#line 271 "det_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 271 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = base;
#line 271 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_15_15));
#line 271 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_16_16));
#line 271 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_17_17));
#line 271 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_18_18));
#line 271 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_19_19 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((check_hlds__det_util__V_21_21 << (MR_Integer) 2)))))));
#line 271 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_22_22));
#line 271 "det_util.m"
        }
#line 271 "det_util.m"
      }
#line 266 "det_util.m"
  }
#line 123 "det_util.m"
}

#line 121 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_module_info_3_p_0(
#line 121 "det_util.m"
  MR_Word check_hlds__det_util__X_4,
#line 121 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6,
#line 121 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_7)
#line 121 "det_util.m"
{
#line 263 "det_util.m"
  {
#line 263 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0)));
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1)));
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2)));
#line 261 "det_util.m"
    MR_Integer check_hlds__det_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3)));
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 261 "det_util.m"
    MR_Word check_hlds__det_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 5)));

#line 261 "det_util.m"
    check_hlds__det_util__succeeded = (((MR_Word) check_hlds__det_util__X_4) == ((MR_Word) check_hlds__det_util__V_8_8));
#line 263 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 263 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_7 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6;
#line 263 "det_util.m"
    else
#line 264 "det_util.m"
      {
#line 264 "det_util.m"
        MR_Word check_hlds__det_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1)));
#line 264 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2)));
#line 264 "det_util.m"
        MR_Integer check_hlds__det_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3)));
#line 264 "det_util.m"
        MR_Word check_hlds__det_util__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 264 "det_util.m"
        MR_Word check_hlds__det_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 264 "det_util.m"
        MR_Word check_hlds__det_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 264 "det_util.m"
        MR_Word check_hlds__det_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 5)));
#line 264 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0)));

#line 264 "det_util.m"
        {
#line 264 "det_util.m"
          MR_Word base;
#line 264 "det_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 264 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_7 = base;
#line 264 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__X_4));
#line 264 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_18_18));
#line 264 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_19_19));
#line 264 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_20_20));
#line 264 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_21_21 | ((((check_hlds__det_util__V_22_22 << (MR_Integer) 1)) | ((check_hlds__det_util__V_23_23 << (MR_Integer) 2)))))));
#line 264 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_24_24));
#line 264 "det_util.m"
        }
#line 264 "det_util.m"
      }
#line 263 "det_util.m"
  }
#line 121 "det_util.m"
}

#line 119 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_error_specs_2_p_0(
#line 119 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 119 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 119 "det_util.m"
{
#line 255 "det_util.m"
  {
#line 255 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 255 "det_util.m"
    MR_Integer check_hlds__det_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 255 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 255 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 255 "det_util.m"
  }
#line 119 "det_util.m"
}

#line 117 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_has_req_scope_2_p_0(
#line 117 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 117 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 117 "det_util.m"
{
#line 253 "det_util.m"
  {
#line 253 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 253 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 253 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 253 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 253 "det_util.m"
    MR_Integer check_hlds__det_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 253 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 253 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 253 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 253 "det_util.m"
    *check_hlds__det_util__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 253 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 253 "det_util.m"
  }
#line 117 "det_util.m"
}

#line 115 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_has_format_call_2_p_0(
#line 115 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 115 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 115 "det_util.m"
{
#line 251 "det_util.m"
  {
#line 251 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 251 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 251 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 251 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 251 "det_util.m"
    MR_Integer check_hlds__det_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 251 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 251 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 251 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 251 "det_util.m"
    *check_hlds__det_util__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 251 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 251 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 251 "det_util.m"
  }
#line 115 "det_util.m"
}

#line 113 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(
#line 113 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 113 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 113 "det_util.m"
{
#line 249 "det_util.m"
  {
#line 249 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 249 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 249 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 249 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 249 "det_util.m"
    MR_Integer check_hlds__det_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 249 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 249 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 249 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 249 "det_util.m"
    *check_hlds__det_util__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 249 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 249 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 249 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 249 "det_util.m"
  }
#line 113 "det_util.m"
}

#line 112 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_vartypes_2_p_0(
#line 112 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 112 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 112 "det_util.m"
{
#line 247 "det_util.m"
  {
#line 247 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 247 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 247 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6;
#line 247 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7;
#line 247 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 247 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 247 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 247 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 247 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 247 "det_util.m"
    check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 247 "det_util.m"
    check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 247 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 247 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 247 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 247 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 247 "det_util.m"
  }
#line 112 "det_util.m"
}

#line 111 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_proc_id_2_p_0(
#line 111 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 111 "det_util.m"
  MR_Integer * check_hlds__det_util__X_4)
#line 111 "det_util.m"
{
#line 245 "det_util.m"
  {
#line 245 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 245 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 245 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 245 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 245 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 245 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 245 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 245 "det_util.m"
  }
#line 111 "det_util.m"
}

#line 110 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_pred_id_2_p_0(
#line 110 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 110 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 110 "det_util.m"
{
#line 243 "det_util.m"
  {
#line 243 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 243 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 243 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 243 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7;
#line 243 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 243 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 243 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 243 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 243 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 243 "det_util.m"
    check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 243 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 243 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 243 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 243 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 243 "det_util.m"
  }
#line 110 "det_util.m"
}

#line 109 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_module_info_2_p_0(
#line 109 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 109 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 109 "det_util.m"
{
#line 241 "det_util.m"
  {
#line 241 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5;
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6;
#line 241 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7;
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 241 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 241 "det_util.m"
    check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 241 "det_util.m"
    check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 241 "det_util.m"
    check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 241 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 241 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 241 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 241 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 241 "det_util.m"
  }
#line 109 "det_util.m"
}

#line 106 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_init_7_p_0(
#line 106 "det_util.m"
  MR_Word check_hlds__det_util__ModuleInfo_8,
#line 106 "det_util.m"
  MR_Word check_hlds__det_util__VarTypes_9,
#line 106 "det_util.m"
  MR_Word check_hlds__det_util__PredId_10,
#line 106 "det_util.m"
  MR_Integer check_hlds__det_util__ProcId_11,
#line 106 "det_util.m"
  MR_Word check_hlds__det_util__PessExtraVars_12,
#line 106 "det_util.m"
  MR_Word check_hlds__det_util__Specs_13,
#line 106 "det_util.m"
  MR_Word * check_hlds__det_util__DetInfo_14)
#line 106 "det_util.m"
{
#line 236 "det_util.m"
  {
#line 236 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 237 "det_util.m"
    {
#line 237 "det_util.m"
      MR_Word base;
#line 237 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 237 "det_util.m"
      *check_hlds__det_util__DetInfo_14 = base;
#line 237 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__ModuleInfo_8));
#line 237 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__VarTypes_9));
#line 237 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__PredId_10));
#line 237 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__ProcId_11));
#line 237 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__PessExtraVars_12 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 237 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Specs_13));
#line 237 "det_util.m"
    }
#line 236 "det_util.m"
  }
#line 106 "det_util.m"
}

#line 103 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_add_error_spec_3_p_0(
#line 103 "det_util.m"
  MR_Word check_hlds__det_util__Spec_4,
#line 103 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8,
#line 103 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_9)
#line 103 "det_util.m"
{
#line 216 "det_util.m"
  {
#line 216 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 5)));
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__Specs_7;
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 0)));
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 1)));
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 2)));
#line 216 "det_util.m"
    MR_Integer check_hlds__det_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 3)));
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 216 "det_util.m"
    MR_Word check_hlds__det_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 218 "det_util.m"
    {
#line 218 "det_util.m"
      check_hlds__det_util__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "det_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_util__Specs_7, 0) = ((MR_Box) (check_hlds__det_util__Spec_4));
#line 218 "det_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_util__Specs_7, 1) = ((MR_Box) (check_hlds__det_util__Specs0_6));
#line 218 "det_util.m"
    }
#line 281 "det_util.m"
    {
#line 281 "det_util.m"
      MR_Word base;
#line 281 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 281 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_9 = base;
#line 281 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_13_13));
#line 281 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_14_14));
#line 281 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_15_15));
#line 281 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_16_16));
#line 281 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_17_17 | ((((check_hlds__det_util__V_18_18 << (MR_Integer) 1)) | ((check_hlds__det_util__V_19_19 << (MR_Integer) 2)))))));
#line 281 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Specs_7));
#line 281 "det_util.m"
    }
#line 216 "det_util.m"
  }
#line 103 "det_util.m"
}

#line 100 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util__det_no_output_vars_4_p_0(
#line 100 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_5,
#line 100 "det_util.m"
  MR_Word check_hlds__det_util__InstMap_6,
#line 100 "det_util.m"
  MR_Word check_hlds__det_util__InstMapDelta_7,
#line 100 "det_util.m"
  MR_Word check_hlds__det_util__Vars_8)
#line 100 "det_util.m"
{
#line 210 "det_util.m"
  {
#line 210 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 210 "det_util.m"
    MR_Word check_hlds__det_util__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 0)));
#line 210 "det_util.m"
    MR_Word check_hlds__det_util__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 1)));
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 2)));
#line 241 "det_util.m"
    MR_Integer check_hlds__det_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 3)));
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 5)));

#line 213 "det_util.m"
    {
#line 213 "det_util.m"
      return check_hlds__det_util__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(check_hlds__det_util__ModuleInfo_9, check_hlds__det_util__VarTypes_10, check_hlds__det_util__InstMap_6, check_hlds__det_util__InstMapDelta_7, check_hlds__det_util__Vars_8);
    }
#line 210 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 210 "det_util.m"
  }
#line 100 "det_util.m"
}

#line 97 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util__det_lookup_var_type_4_p_0(
#line 97 "det_util.m"
  MR_Word check_hlds__det_util__ModuleInfo_5,
#line 97 "det_util.m"
  MR_Word check_hlds__det_util__ProcInfo_6,
#line 97 "det_util.m"
  MR_Word check_hlds__det_util__Var_7,
#line 97 "det_util.m"
  MR_Word * check_hlds__det_util__TypeDefn_8)
#line 97 "det_util.m"
{
#line 203 "det_util.m"
  {
#line 203 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 203 "det_util.m"
    MR_Word check_hlds__det_util__VarTypes_9;
#line 203 "det_util.m"
    MR_Word check_hlds__det_util__Type_10;
#line 203 "det_util.m"
    MR_Word check_hlds__det_util__TypeCtor_11;
#line 203 "det_util.m"
    MR_Word check_hlds__det_util__TypeTable_12;

#line 204 "det_util.m"
    {
#line 204 "det_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_util__ProcInfo_6, &check_hlds__det_util__VarTypes_9);
    }
#line 205 "det_util.m"
    {
#line 205 "det_util.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__det_util__VarTypes_9, check_hlds__det_util__Var_7, &check_hlds__det_util__Type_10);
    }
#line 206 "det_util.m"
    {
#line 206 "det_util.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__det_util__Type_10, &check_hlds__det_util__TypeCtor_11);
    }
#line 207 "det_util.m"
    {
#line 207 "det_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__det_util__ModuleInfo_5, &check_hlds__det_util__TypeTable_12);
    }
#line 208 "det_util.m"
    {
#line 208 "det_util.m"
      return check_hlds__det_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__det_util__TypeTable_12, check_hlds__det_util__TypeCtor_11, check_hlds__det_util__TypeDefn_8);
    }
#line 203 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 203 "det_util.m"
  }
#line 97 "det_util.m"
}

#line 95 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_get_proc_info_2_p_0(
#line 95 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 95 "det_util.m"
  MR_Word * check_hlds__det_util__ProcInfo_4)
#line 95 "det_util.m"
{
#line 194 "det_util.m"
  {
#line 194 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 194 "det_util.m"
    MR_Word check_hlds__det_util__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 194 "det_util.m"
    MR_Word check_hlds__det_util__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 194 "det_util.m"
    MR_Integer check_hlds__det_util__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 194 "det_util.m"
    MR_Word check_hlds__det_util__PredTable_8;
#line 194 "det_util.m"
    MR_Word check_hlds__det_util__PredInfo_9;
#line 194 "det_util.m"
    MR_Word check_hlds__det_util__ProcTable_10;
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 199 "det_util.m"
    MR_Box check_hlds__det_util__conv0_PredInfo_9;
#line 201 "det_util.m"
    MR_Box check_hlds__det_util__conv1_ProcInfo_4;

#line 198 "det_util.m"
    {
#line 198 "det_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_util__ModuleInfo_5, &check_hlds__det_util__PredTable_8);
    }
#line 199 "det_util.m"
    {
#line 199 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_util__PredTable_8, ((MR_Box) (check_hlds__det_util__PredId_6)), &check_hlds__det_util__conv0_PredInfo_9);
    }
#line 199 "det_util.m"
    check_hlds__det_util__PredInfo_9 = ((MR_Word) check_hlds__det_util__conv0_PredInfo_9);
#line 200 "det_util.m"
    {
#line 200 "det_util.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_util__PredInfo_9, &check_hlds__det_util__ProcTable_10);
    }
#line 201 "det_util.m"
    {
#line 201 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_util__ProcTable_10, ((MR_Box) (check_hlds__det_util__ProcId_7)), &check_hlds__det_util__conv1_ProcInfo_4);
    }
#line 201 "det_util.m"
    *check_hlds__det_util__ProcInfo_4 = ((MR_Word) check_hlds__det_util__conv1_ProcInfo_4);
#line 194 "det_util.m"
  }
#line 95 "det_util.m"
}

#line 92 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(
#line 92 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_6,
#line 92 "det_util.m"
  MR_Word check_hlds__det_util__PredId_7,
#line 92 "det_util.m"
  MR_Integer check_hlds__det_util__ModeId_8,
#line 92 "det_util.m"
  MR_Word * check_hlds__det_util__PredInfo_9,
#line 92 "det_util.m"
  MR_Word * check_hlds__det_util__Detism_10)
#line 92 "det_util.m"
{
#line 186 "det_util.m"
  {
#line 186 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 186 "det_util.m"
    MR_Word check_hlds__det_util__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 0)));
#line 186 "det_util.m"
    MR_Word check_hlds__det_util__PredTable_12;
#line 186 "det_util.m"
    MR_Word check_hlds__det_util__ProcTable_13;
#line 186 "det_util.m"
    MR_Word check_hlds__det_util__ProcInfo_14;
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 1)));
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 2)));
#line 241 "det_util.m"
    MR_Integer check_hlds__det_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 3)));
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 241 "det_util.m"
    MR_Word check_hlds__det_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 5)));
#line 189 "det_util.m"
    MR_Box check_hlds__det_util__conv0_PredInfo_9;
#line 191 "det_util.m"
    MR_Box check_hlds__det_util__conv1_ProcInfo_14;

#line 188 "det_util.m"
    {
#line 188 "det_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_util__ModuleInfo_11, &check_hlds__det_util__PredTable_12);
    }
#line 189 "det_util.m"
    {
#line 189 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_util__PredTable_12, ((MR_Box) (check_hlds__det_util__PredId_7)), &check_hlds__det_util__conv0_PredInfo_9);
    }
#line 189 "det_util.m"
    *check_hlds__det_util__PredInfo_9 = ((MR_Word) check_hlds__det_util__conv0_PredInfo_9);
#line 190 "det_util.m"
    {
#line 190 "det_util.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(*check_hlds__det_util__PredInfo_9, &check_hlds__det_util__ProcTable_13);
    }
#line 191 "det_util.m"
    {
#line 191 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_util__ProcTable_13, ((MR_Box) (check_hlds__det_util__ModeId_8)), &check_hlds__det_util__conv1_ProcInfo_14);
    }
#line 191 "det_util.m"
    check_hlds__det_util__ProcInfo_14 = ((MR_Word) check_hlds__det_util__conv1_ProcInfo_14);
#line 192 "det_util.m"
    {
#line 192 "det_util.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__det_util__ProcInfo_14, check_hlds__det_util__Detism_10);
#line 192 "det_util.m"
      return;
    }
#line 186 "det_util.m"
  }
#line 92 "det_util.m"
}

#line 86 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util__interpret_unify_4_p_0(
#line 86 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 86 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 86 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_Subst_0_3,
#line 86 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_Subst_4)
#line 86 "det_util.m"
{
#line 175 "det_util.m"
  {
#line 175 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 175 "det_util.m"
    if (((MR_tag((MR_Word) check_hlds__det_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 177 "det_util.m"
      {
#line 177 "det_util.m"
        MR_Word check_hlds__det_util__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 177 "det_util.m"
        MR_Word check_hlds__det_util__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "det_util.m"
        MR_Word check_hlds__det_util__ArgVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
#line 177 "det_util.m"
        MR_Word check_hlds__det_util__ArgTerms_20;
#line 177 "det_util.m"
        MR_Word check_hlds__det_util__RhsTerm_21;
#line 177 "det_util.m"
        MR_Word check_hlds__det_util__V_24_24;
#line 177 "det_util.m"
        MR_Word check_hlds__det_util__V_26_26;
#line 177 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));

#line 178 "det_util.m"
        {
#line 178 "det_util.m"
          mercury__term__var_list_to_term_list_2_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__ArgVars_18, &check_hlds__det_util__ArgTerms_20);
        }
#line 179 "det_util.m"
        {
#line 179 "det_util.m"
          check_hlds__det_util__succeeded = parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__ConsId_16, check_hlds__det_util__ArgTerms_20, &check_hlds__det_util__RhsTerm_21);
        }
#line 177 "det_util.m"
        if (check_hlds__det_util__succeeded)
#line 177 "det_util.m"
          {
#line 180 "det_util.m"
            {
#line 180 "det_util.m"
              check_hlds__det_util__V_26_26 = mercury__term__context_init_0_f_0();
            }
#line 180 "det_util.m"
            {
#line 180 "det_util.m"
              check_hlds__det_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "det_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_util__V_24_24, 0) = ((MR_Box) (check_hlds__det_util__HeadVar__1_1));
#line 180 "det_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__det_util__V_24_24, 1) = ((MR_Box) (check_hlds__det_util__V_26_26));
#line 180 "det_util.m"
            }
#line 180 "det_util.m"
            {
#line 180 "det_util.m"
              return check_hlds__det_util__succeeded = mercury__term__unify_term_4_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__V_24_24, check_hlds__det_util__RhsTerm_21, check_hlds__det_util__STATE_VARIABLE_Subst_0_3, check_hlds__det_util__STATE_VARIABLE_Subst_4);
            }
#line 177 "det_util.m"
          }
#line 177 "det_util.m"
      }
#line 175 "det_util.m"
    else
#line 175 "det_util.m"
      if (((MR_tag((MR_Word) check_hlds__det_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 181 "det_util.m"
        {
#line 181 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_Subst_4 = check_hlds__det_util__STATE_VARIABLE_Subst_0_3;
#line 181 "det_util.m"
          check_hlds__det_util__succeeded = MR_TRUE;
#line 181 "det_util.m"
        }
#line 175 "det_util.m"
      else
#line 175 "det_util.m"
        {
#line 175 "det_util.m"
          MR_Word check_hlds__det_util__Y_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 175 "det_util.m"
          MR_Word check_hlds__det_util__V_10_10;
#line 175 "det_util.m"
          MR_Word check_hlds__det_util__V_11_11;
#line 175 "det_util.m"
          MR_Word check_hlds__det_util__V_13_13;
#line 175 "det_util.m"
          MR_Word check_hlds__det_util__V_14_14;

#line 176 "det_util.m"
          {
#line 176 "det_util.m"
            check_hlds__det_util__V_13_13 = mercury__term__context_init_0_f_0();
          }
#line 176 "det_util.m"
          {
#line 176 "det_util.m"
            check_hlds__det_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_10_10, 0) = ((MR_Box) (check_hlds__det_util__HeadVar__1_1));
#line 176 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_10_10, 1) = ((MR_Box) (check_hlds__det_util__V_13_13));
#line 176 "det_util.m"
          }
#line 176 "det_util.m"
          {
#line 176 "det_util.m"
            check_hlds__det_util__V_14_14 = mercury__term__context_init_0_f_0();
          }
#line 176 "det_util.m"
          {
#line 176 "det_util.m"
            check_hlds__det_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_11_11, 0) = ((MR_Box) (check_hlds__det_util__Y_6));
#line 176 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_11_11, 1) = ((MR_Box) (check_hlds__det_util__V_14_14));
#line 176 "det_util.m"
          }
#line 176 "det_util.m"
          {
#line 176 "det_util.m"
            return check_hlds__det_util__succeeded = mercury__term__unify_term_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_util__V_10_10, check_hlds__det_util__V_11_11, check_hlds__det_util__STATE_VARIABLE_Subst_0_3, check_hlds__det_util__STATE_VARIABLE_Subst_4);
          }
#line 175 "det_util.m"
        }
#line 175 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 175 "det_util.m"
  }
#line 86 "det_util.m"
}

#line 80 "det_util.m"
void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_3_p_0(
#line 80 "det_util.m"
  MR_Word check_hlds__det_util__Cases0_4,
#line 80 "det_util.m"
  MR_Word check_hlds__det_util__PossibleConsIds_5,
#line 80 "det_util.m"
  MR_Word * check_hlds__det_util__Cases_6)
#line 80 "det_util.m"
{
#line 143 "det_util.m"
  {
#line 143 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 143 "det_util.m"
    MR_Word check_hlds__det_util__PossibleConsIdSet_7;
#line 143 "det_util.m"
    MR_Word check_hlds__det_util__RevCases_8;

#line 144 "det_util.m"
    {
#line 144 "det_util.m"
      check_hlds__det_util__PossibleConsIdSet_7 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__PossibleConsIds_5);
    }
#line 147 "det_util.m"
    {
#line 147 "det_util.m"
      check_hlds__det_util__delete_unreachable_cases_acc_4_p_0(check_hlds__det_util__Cases0_4, check_hlds__det_util__PossibleConsIdSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_util__RevCases_8);
    }
#line 148 "det_util.m"
    {
#line 148 "det_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, check_hlds__det_util__RevCases_8, check_hlds__det_util__Cases_6);
#line 148 "det_util.m"
      return;
    }
#line 143 "det_util.m"
  }
#line 80 "det_util.m"
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
