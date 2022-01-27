/*
** Automatically generated from `det_util.m'
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "check_hlds.det_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 141 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0;

#line 144 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1;

#line 147 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0[2];

#line 150 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0[2];

#line 153 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0[2];

#line 156 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0;

#line 159 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1;

#line 162 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0[2];

#line 165 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0[2];

#line 168 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0[2];

#line 171 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 174 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 177 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 180 "check_hlds.det_util.c"
static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[8];

#line 183 "check_hlds.det_util.c"
static const MR_ConstString check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0[8];

#line 186 "check_hlds.det_util.c"
static const MR_DuArgLocn check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0[8];

#line 189 "check_hlds.det_util.c"
static const MR_DuFunctorDesc check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0;

#line 192 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1];

#line 195 "check_hlds.det_util.c"
static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1];

#line 198 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1];

#line 201 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1];

#line 204 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0;

#line 207 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1;

#line 210 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0[2];

#line 213 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0[2];

#line 216 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0[2];

#line 219 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0;

#line 222 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1;

#line 225 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0[2];

#line 228 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[2];

#line 231 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[2];

#line 234 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
#line 237 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 239 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 242 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
#line 245 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 247 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 249 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 252 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
#line 255 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 257 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 260 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
#line 263 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 265 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 267 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 270 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
#line 273 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 275 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 278 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
#line 281 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 283 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 285 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 288 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
#line 291 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 293 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 296 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
#line 299 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 301 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 303 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 306 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
#line 309 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 311 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2);

#line 314 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
#line 317 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 319 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 321 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3);

#line 163 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__163__1_2_p_0(
#line 163 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 163 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_37);

#line 158 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__158__1_2_p_0(
#line 158 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 158 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_34);

#line 163 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_2(
#line 163 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 163 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1);

#line 158 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_1(
#line 158 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 158 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1);

#line 151 "det_util.m"
static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0(
#line 151 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 151 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 151 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_0_3,
#line 151 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_RevCases_4);


static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__det_util_scalar_common_3[1][5];




static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__det_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__det_util_scalar_common_3[1][5] = {
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 420 "check_hlds.det_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 428 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0 = {
  (MR_String) "does_not_contain_format_call",
  (MR_Integer) 0
};

#line 434 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1 = {
  (MR_String) "contains_format_call",
  (MR_Integer) 1
};

#line 440 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1
};

#line 446 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0
};

#line 452 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 458 "check_hlds.det_util.c"
const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_format_call_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_format_call_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_format_call",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0
};

#line 475 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0 = {
  (MR_String) "does_not_contain_require_scope",
  (MR_Integer) 0
};

#line 481 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1 = {
  (MR_String) "contains_require_scope",
  (MR_Integer) 1
};

#line 487 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1
};

#line 493 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0
};

#line 499 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 505 "check_hlds.det_util.c"
const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_require_scope_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_require_scope_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_require_scope",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0
};

#line 522 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 530 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 539 "check_hlds.det_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 547 "check_hlds.det_util.c"
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

#line 559 "check_hlds.det_util.c"
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

#line 571 "check_hlds.det_util.c"
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

#line 615 "check_hlds.det_util.c"
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

#line 630 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1] = {
  &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0
};

#line 635 "check_hlds.det_util.c"
static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0
  }
};

#line 644 "check_hlds.det_util.c"
static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1] = {
  &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0
};

#line 649 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1] = {
  (MR_Integer) 0
};

#line 654 "check_hlds.det_util.c"
const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_det_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_util____Unify____det_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____det_info_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "det_info",
  {     check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0 },
  {     check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0 },
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
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0
};

#line 718 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0 = {
  (MR_String) "pess_extra_vars_report",
  (MR_Integer) 0
};

#line 724 "check_hlds.det_util.c"
static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1 = {
  (MR_String) "pess_extra_vars_ignore",
  (MR_Integer) 1
};

#line 730 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1
};

#line 736 "check_hlds.det_util.c"
static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0
};

#line 742 "check_hlds.det_util.c"
static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 748 "check_hlds.det_util.c"
const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "report_pess_extra_vars",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0
};

#line 765 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
#line 768 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 770 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 772 "check_hlds.det_util.c"
{
#line 774 "check_hlds.det_util.c"
  {
#line 776 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 779 "check_hlds.det_util.c"
    {
#line 781 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____contains_format_call_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 784 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 786 "check_hlds.det_util.c"
  }
#line 788 "check_hlds.det_util.c"
}

#line 791 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
#line 794 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 796 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 798 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 800 "check_hlds.det_util.c"
{
#line 802 "check_hlds.det_util.c"
  {
#line 804 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 807 "check_hlds.det_util.c"
    {
#line 809 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____contains_format_call_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 812 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 814 "check_hlds.det_util.c"
  }
#line 816 "check_hlds.det_util.c"
}

#line 819 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
#line 822 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 824 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 826 "check_hlds.det_util.c"
{
#line 828 "check_hlds.det_util.c"
  {
#line 830 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 833 "check_hlds.det_util.c"
    {
#line 835 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____contains_require_scope_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 838 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 840 "check_hlds.det_util.c"
  }
#line 842 "check_hlds.det_util.c"
}

#line 845 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
#line 848 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 850 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 852 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 854 "check_hlds.det_util.c"
{
#line 856 "check_hlds.det_util.c"
  {
#line 858 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 861 "check_hlds.det_util.c"
    {
#line 863 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____contains_require_scope_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 866 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 868 "check_hlds.det_util.c"
  }
#line 870 "check_hlds.det_util.c"
}

#line 873 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
#line 876 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 878 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 880 "check_hlds.det_util.c"
{
#line 882 "check_hlds.det_util.c"
  {
#line 884 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 887 "check_hlds.det_util.c"
    {
#line 889 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____det_info_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 892 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 894 "check_hlds.det_util.c"
  }
#line 896 "check_hlds.det_util.c"
}

#line 899 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
#line 902 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 904 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 906 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 908 "check_hlds.det_util.c"
{
#line 910 "check_hlds.det_util.c"
  {
#line 912 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 915 "check_hlds.det_util.c"
    {
#line 917 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____det_info_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 920 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 922 "check_hlds.det_util.c"
  }
#line 924 "check_hlds.det_util.c"
}

#line 927 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
#line 930 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 932 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 934 "check_hlds.det_util.c"
{
#line 936 "check_hlds.det_util.c"
  {
#line 938 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 941 "check_hlds.det_util.c"
    {
#line 943 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____maybe_changed_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 946 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 948 "check_hlds.det_util.c"
  }
#line 950 "check_hlds.det_util.c"
}

#line 953 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
#line 956 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 958 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 960 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 962 "check_hlds.det_util.c"
{
#line 964 "check_hlds.det_util.c"
  {
#line 966 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 969 "check_hlds.det_util.c"
    {
#line 971 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____maybe_changed_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 974 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 976 "check_hlds.det_util.c"
  }
#line 978 "check_hlds.det_util.c"
}

#line 981 "check_hlds.det_util.c"
static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
#line 984 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_1,
#line 986 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2)
#line 988 "check_hlds.det_util.c"
{
#line 990 "check_hlds.det_util.c"
  {
#line 992 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded;

#line 995 "check_hlds.det_util.c"
    {
#line 997 "check_hlds.det_util.c"
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____report_pess_extra_vars_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
#line 1000 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1002 "check_hlds.det_util.c"
  }
#line 1004 "check_hlds.det_util.c"
}

#line 1007 "check_hlds.det_util.c"
static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
#line 1010 "check_hlds.det_util.c"
  MR_Box * check_hlds__det_util__wrapper_arg_1,
#line 1012 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_2,
#line 1014 "check_hlds.det_util.c"
  MR_Box check_hlds__det_util__wrapper_arg_3)
#line 1016 "check_hlds.det_util.c"
{
#line 1018 "check_hlds.det_util.c"
  {
#line 1020 "check_hlds.det_util.c"
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

#line 1023 "check_hlds.det_util.c"
    {
#line 1025 "check_hlds.det_util.c"
      check_hlds__det_util____Compare____report_pess_extra_vars_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
#line 1028 "check_hlds.det_util.c"
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
#line 1030 "check_hlds.det_util.c"
  }
#line 1032 "check_hlds.det_util.c"
}

#line 163 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__163__1_2_p_0(
#line 163 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 163 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_37)
#line 163 "det_util.m"
{
#line 163 "det_util.m"
  {
#line 163 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 163 "det_util.m"
    {
#line 163 "det_util.m"
      return check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__HeadVar__2_37)));
    }
#line 163 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 163 "det_util.m"
  }
#line 163 "det_util.m"
}

#line 158 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__158__1_2_p_0(
#line 158 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 158 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_34)
#line 158 "det_util.m"
{
#line 158 "det_util.m"
  {
#line 158 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 158 "det_util.m"
    {
#line 158 "det_util.m"
      return check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__HeadVar__2_34)));
    }
#line 158 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 158 "det_util.m"
  }
#line 158 "det_util.m"
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
#line 1128 "check_hlds.det_util.c"
  {
#line 1130 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1133 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1135 "check_hlds.det_util.c"
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
#line 1181 "check_hlds.det_util.c"
  {
#line 1183 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1186 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1188 "check_hlds.det_util.c"
  }
#line 37 "det_util.m"
}

#line 224 "det_util.m"
void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0(
#line 224 "det_util.m"
  MR_Word * check_hlds__det_util__HeadVar__1_1,
#line 224 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 224 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__3_3)
#line 224 "det_util.m"
{
#line 224 "det_util.m"
  {
#line 224 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 224 "det_util.m"
    MR_Integer check_hlds__det_util__CastX_27 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
#line 224 "det_util.m"
    MR_Integer check_hlds__det_util__CastY_28 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

#line 224 "det_util.m"
    check_hlds__det_util__succeeded = (check_hlds__det_util__CastX_27 == check_hlds__det_util__CastY_28);
#line 224 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 1217 "check_hlds.det_util.c"
      *check_hlds__det_util__HeadVar__1_1 = (MR_Integer) 0;
#line 224 "det_util.m"
    else
#line 224 "det_util.m"
      {
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
#line 224 "det_util.m"
        MR_Integer check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 3)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 5)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 0)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 1)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 2)));
#line 224 "det_util.m"
        MR_Integer check_hlds__det_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 3)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 5)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_20_20;

#line 224 "det_util.m"
        {
#line 224 "det_util.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__det_util__V_20_20, check_hlds__det_util__V_4_4, check_hlds__det_util__V_12_12);
        }
#line 1263 "check_hlds.det_util.c"
        check_hlds__det_util__succeeded = (check_hlds__det_util__V_20_20 == (MR_Integer) 0);
#line 224 "det_util.m"
        check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 224 "det_util.m"
        if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
          *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_20_20;
#line 224 "det_util.m"
        else
#line 224 "det_util.m"
          {
#line 224 "det_util.m"
            MR_Word check_hlds__det_util__V_21_21;

#line 224 "det_util.m"
            {
#line 224 "det_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_util_scalar_common_2[0], &check_hlds__det_util__V_21_21, ((MR_Box) (check_hlds__det_util__V_5_5)), ((MR_Box) (check_hlds__det_util__V_13_13)));
            }
#line 1283 "check_hlds.det_util.c"
            check_hlds__det_util__succeeded = (check_hlds__det_util__V_21_21 == (MR_Integer) 0);
#line 224 "det_util.m"
            check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 224 "det_util.m"
            if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
              *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_21_21;
#line 224 "det_util.m"
            else
#line 224 "det_util.m"
              {
#line 224 "det_util.m"
                MR_Word check_hlds__det_util__V_22_22;

#line 224 "det_util.m"
                {
#line 224 "det_util.m"
                  hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__det_util__V_22_22, check_hlds__det_util__V_6_6, check_hlds__det_util__V_14_14);
                }
#line 1303 "check_hlds.det_util.c"
                check_hlds__det_util__succeeded = (check_hlds__det_util__V_22_22 == (MR_Integer) 0);
#line 224 "det_util.m"
                check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 224 "det_util.m"
                if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                  *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_22_22;
#line 224 "det_util.m"
                else
#line 224 "det_util.m"
                  {
#line 224 "det_util.m"
                    MR_Word check_hlds__det_util__V_23_23;

#line 224 "det_util.m"
                    {
#line 224 "det_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_23_23, check_hlds__det_util__V_7_7, check_hlds__det_util__V_15_15);
                    }
#line 1323 "check_hlds.det_util.c"
                    check_hlds__det_util__succeeded = (check_hlds__det_util__V_23_23 == (MR_Integer) 0);
#line 224 "det_util.m"
                    check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 224 "det_util.m"
                    if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                      *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_23_23;
#line 224 "det_util.m"
                    else
#line 224 "det_util.m"
                      {
#line 224 "det_util.m"
                        MR_Word check_hlds__det_util__V_24_24;
#line 224 "det_util.m"
                        MR_Integer check_hlds__det_util__V_37_37 = (MR_Integer) check_hlds__det_util__V_8_8;
#line 224 "det_util.m"
                        MR_Integer check_hlds__det_util__V_38_38 = (MR_Integer) check_hlds__det_util__V_16_16;

#line 224 "det_util.m"
                        {
#line 224 "det_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_24_24, check_hlds__det_util__V_37_37, check_hlds__det_util__V_38_38);
                        }
#line 1347 "check_hlds.det_util.c"
                        check_hlds__det_util__succeeded = (check_hlds__det_util__V_24_24 == (MR_Integer) 0);
#line 224 "det_util.m"
                        check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 224 "det_util.m"
                        if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                          *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_24_24;
#line 224 "det_util.m"
                        else
#line 224 "det_util.m"
                          {
#line 224 "det_util.m"
                            MR_Word check_hlds__det_util__V_25_25;
#line 224 "det_util.m"
                            MR_Integer check_hlds__det_util__V_39_39 = (MR_Integer) check_hlds__det_util__V_9_9;
#line 224 "det_util.m"
                            MR_Integer check_hlds__det_util__V_40_40 = (MR_Integer) check_hlds__det_util__V_17_17;

#line 224 "det_util.m"
                            {
#line 224 "det_util.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_25_25, check_hlds__det_util__V_39_39, check_hlds__det_util__V_40_40);
                            }
#line 1371 "check_hlds.det_util.c"
                            check_hlds__det_util__succeeded = (check_hlds__det_util__V_25_25 == (MR_Integer) 0);
#line 224 "det_util.m"
                            check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 224 "det_util.m"
                            if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                              *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_25_25;
#line 224 "det_util.m"
                            else
#line 224 "det_util.m"
                              {
#line 224 "det_util.m"
                                MR_Word check_hlds__det_util__V_26_26;
#line 224 "det_util.m"
                                MR_Integer check_hlds__det_util__V_41_41 = (MR_Integer) check_hlds__det_util__V_10_10;
#line 224 "det_util.m"
                                MR_Integer check_hlds__det_util__V_42_42 = (MR_Integer) check_hlds__det_util__V_18_18;

#line 224 "det_util.m"
                                {
#line 224 "det_util.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__V_26_26, check_hlds__det_util__V_41_41, check_hlds__det_util__V_42_42);
                                }
#line 1395 "check_hlds.det_util.c"
                                check_hlds__det_util__succeeded = (check_hlds__det_util__V_26_26 == (MR_Integer) 0);
#line 224 "det_util.m"
                                check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
#line 224 "det_util.m"
                                if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                                  *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__V_26_26;
#line 224 "det_util.m"
                                else
#line 224 "det_util.m"
                                  {
#line 224 "det_util.m"
                                    {
#line 224 "det_util.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_util_scalar_common_1[1], check_hlds__det_util__HeadVar__1_1, ((MR_Box) (check_hlds__det_util__V_11_11)), ((MR_Box) (check_hlds__det_util__V_19_19)));
#line 224 "det_util.m"
                                      return;
                                    }
#line 224 "det_util.m"
                                  }
#line 224 "det_util.m"
                              }
#line 224 "det_util.m"
                          }
#line 224 "det_util.m"
                      }
#line 224 "det_util.m"
                  }
#line 224 "det_util.m"
              }
#line 224 "det_util.m"
          }
#line 224 "det_util.m"
      }
#line 224 "det_util.m"
  }
#line 224 "det_util.m"
}

#line 224 "det_util.m"
MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0(
#line 224 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 224 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2)
#line 224 "det_util.m"
{
#line 224 "det_util.m"
  {
#line 224 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 224 "det_util.m"
    MR_Integer check_hlds__det_util__CastX_19 = (MR_Integer) check_hlds__det_util__HeadVar__1_1;
#line 224 "det_util.m"
    MR_Integer check_hlds__det_util__CastY_20 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;

#line 224 "det_util.m"
    check_hlds__det_util__succeeded = (check_hlds__det_util__CastX_19 == check_hlds__det_util__CastY_20);
#line 224 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
      check_hlds__det_util__succeeded = MR_TRUE;
#line 224 "det_util.m"
    else
#line 224 "det_util.m"
      {
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__TypeInfo_22_22;
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__TypeInfo_24_24;
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 2)));
#line 224 "det_util.m"
        MR_Integer check_hlds__det_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 3)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 5)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
#line 224 "det_util.m"
        MR_Integer check_hlds__det_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 3)));
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "det_util.m"
        MR_Word check_hlds__det_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 5)));

#line 1500 "check_hlds.det_util.c"
        {
#line 1502 "check_hlds.det_util.c"
          check_hlds__det_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__det_util__V_3_3, check_hlds__det_util__V_11_11);
        }
#line 224 "det_util.m"
        if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
          {
#line 1509 "check_hlds.det_util.c"
            check_hlds__det_util__TypeInfo_22_22 = (MR_Word) &check_hlds__det_util_scalar_common_2[0];
#line 1511 "check_hlds.det_util.c"
            {
#line 1513 "check_hlds.det_util.c"
              check_hlds__det_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_util__TypeInfo_22_22, ((MR_Box) (check_hlds__det_util__V_4_4)), ((MR_Box) (check_hlds__det_util__V_12_12)));
            }
#line 224 "det_util.m"
            if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
              {
#line 1520 "check_hlds.det_util.c"
                {
#line 1522 "check_hlds.det_util.c"
                  check_hlds__det_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__det_util__V_5_5, check_hlds__det_util__V_13_13);
                }
#line 224 "det_util.m"
                if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                  {
#line 1529 "check_hlds.det_util.c"
                    check_hlds__det_util__succeeded = (check_hlds__det_util__V_6_6 == check_hlds__det_util__V_14_14);
#line 224 "det_util.m"
                    if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                      {
#line 1535 "check_hlds.det_util.c"
                        check_hlds__det_util__succeeded = (check_hlds__det_util__V_7_7 == check_hlds__det_util__V_15_15);
#line 224 "det_util.m"
                        if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                          {
#line 1541 "check_hlds.det_util.c"
                            check_hlds__det_util__succeeded = (check_hlds__det_util__V_8_8 == check_hlds__det_util__V_16_16);
#line 224 "det_util.m"
                            if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                              {
#line 1547 "check_hlds.det_util.c"
                                check_hlds__det_util__succeeded = (check_hlds__det_util__V_9_9 == check_hlds__det_util__V_17_17);
#line 224 "det_util.m"
                                if (check_hlds__det_util__succeeded)
#line 224 "det_util.m"
                                  {
#line 1553 "check_hlds.det_util.c"
                                    check_hlds__det_util__TypeInfo_24_24 = (MR_Word) &check_hlds__det_util_scalar_common_1[1];
#line 1555 "check_hlds.det_util.c"
                                    {
#line 1557 "check_hlds.det_util.c"
                                      return check_hlds__det_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_util__TypeInfo_24_24, ((MR_Box) (check_hlds__det_util__V_10_10)), ((MR_Box) (check_hlds__det_util__V_18_18)));
                                    }
#line 224 "det_util.m"
                                  }
#line 224 "det_util.m"
                              }
#line 224 "det_util.m"
                          }
#line 224 "det_util.m"
                      }
#line 224 "det_util.m"
                  }
#line 224 "det_util.m"
              }
#line 224 "det_util.m"
          }
#line 224 "det_util.m"
      }
#line 224 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 224 "det_util.m"
  }
#line 224 "det_util.m"
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
#line 1624 "check_hlds.det_util.c"
  {
#line 1626 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1629 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1631 "check_hlds.det_util.c"
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
#line 1677 "check_hlds.det_util.c"
  {
#line 1679 "check_hlds.det_util.c"
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

#line 1682 "check_hlds.det_util.c"
    return check_hlds__det_util__succeeded;
#line 1684 "check_hlds.det_util.c"
  }
#line 71 "det_util.m"
}

#line 163 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_2(
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
      return check_hlds__det_util__succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__163__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_util__wrapper_arg_1));
    }
#line 163 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 163 "det_util.m"
  }
#line 163 "det_util.m"
}

#line 158 "det_util.m"
static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_1(
#line 158 "det_util.m"
  MR_Box check_hlds__det_util__closure_arg,
#line 158 "det_util.m"
  MR_Box check_hlds__det_util__wrapper_arg_1)
#line 158 "det_util.m"
{
#line 158 "det_util.m"
  {
#line 158 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 158 "det_util.m"
    MR_Box check_hlds__det_util__closure = check_hlds__det_util__closure_arg;

#line 158 "det_util.m"
    {
#line 158 "det_util.m"
      return check_hlds__det_util__succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__158__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_util__wrapper_arg_1));
    }
#line 158 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 158 "det_util.m"
  }
#line 158 "det_util.m"
}

#line 151 "det_util.m"
static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_4_p_0(
#line 151 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__1_1,
#line 151 "det_util.m"
  MR_Word check_hlds__det_util__HeadVar__2_2,
#line 151 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_0_3,
#line 151 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_RevCases_4)
#line 151 "det_util.m"
{
#line 154 "det_util.m"
  while (MR_TRUE)
#line 154 "det_util.m"
    {
#line 154 "det_util.m"
      /* tailcall optimized into a loop */
#line 154 "det_util.m"
      {
#line 154 "det_util.m"
        MR_bool check_hlds__det_util__succeeded;

#line 154 "det_util.m"
        if ((check_hlds__det_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_RevCases_4 = check_hlds__det_util__STATE_VARIABLE_RevCases_0_3;
#line 154 "det_util.m"
        else
#line 155 "det_util.m"
          {
#line 155 "det_util.m"
            MR_Word check_hlds__det_util__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "det_util.m"
            MR_Word check_hlds__det_util__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "det_util.m"
            MR_Word check_hlds__det_util__MainConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_9, (MR_Integer) 0)));
#line 155 "det_util.m"
            MR_Word check_hlds__det_util__OtherConsIds0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_9, (MR_Integer) 1)));
#line 155 "det_util.m"
            MR_Word check_hlds__det_util__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_9, (MR_Integer) 2)));
#line 155 "det_util.m"
            MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_23_23;

#line 157 "det_util.m"
            {
#line 157 "det_util.m"
              check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__MainConsId0_13)));
            }
#line 162 "det_util.m"
            if (check_hlds__det_util__succeeded)
#line 159 "det_util.m"
              {
#line 159 "det_util.m"
                MR_Word check_hlds__det_util__OtherConsIds_16;
#line 159 "det_util.m"
                MR_Word check_hlds__det_util__Case_17;
#line 159 "det_util.m"
                MR_Word check_hlds__det_util__V_22_22;

#line 158 "det_util.m"
                {
#line 158 "det_util.m"
                  check_hlds__det_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 158 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_3[0]));
#line 158 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_1));
#line 158 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 158 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_22_22, 3) = ((MR_Box) (check_hlds__det_util__HeadVar__2_2));
#line 158 "det_util.m"
                }
#line 158 "det_util.m"
                {
#line 158 "det_util.m"
                  mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__V_22_22, check_hlds__det_util__OtherConsIds0_14, &check_hlds__det_util__OtherConsIds_16);
                }
#line 160 "det_util.m"
                {
#line 160 "det_util.m"
                  check_hlds__det_util__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 160 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_17, 0) = ((MR_Box) (check_hlds__det_util__MainConsId0_13));
#line 160 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_17, 1) = ((MR_Box) (check_hlds__det_util__OtherConsIds_16));
#line 160 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_17, 2) = ((MR_Box) (check_hlds__det_util__Goal_15));
#line 160 "det_util.m"
                }
#line 161 "det_util.m"
                {
#line 161 "det_util.m"
                  check_hlds__det_util__STATE_VARIABLE_RevCases_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "det_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 0) = ((MR_Box) (check_hlds__det_util__Case_17));
#line 161 "det_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 1) = ((MR_Box) (check_hlds__det_util__STATE_VARIABLE_RevCases_0_3));
#line 161 "det_util.m"
                }
#line 159 "det_util.m"
              }
#line 162 "det_util.m"
            else
#line 164 "det_util.m"
              {
#line 164 "det_util.m"
                MR_Word check_hlds__det_util__OtherConsIds1_18;
#line 164 "det_util.m"
                MR_Word check_hlds__det_util__V_24_24;

#line 163 "det_util.m"
                {
#line 163 "det_util.m"
                  check_hlds__det_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 163 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_3[0]));
#line 163 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_4_p_0_2));
#line 163 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 163 "det_util.m"
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__V_24_24, 3) = ((MR_Box) (check_hlds__det_util__HeadVar__2_2));
#line 163 "det_util.m"
                }
#line 163 "det_util.m"
                {
#line 163 "det_util.m"
                  mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__V_24_24, check_hlds__det_util__OtherConsIds0_14, &check_hlds__det_util__OtherConsIds1_18);
                }
#line 168 "det_util.m"
                if ((check_hlds__det_util__OtherConsIds1_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 166 "det_util.m"
                  check_hlds__det_util__STATE_VARIABLE_RevCases_23_23 = check_hlds__det_util__STATE_VARIABLE_RevCases_0_3;
#line 168 "det_util.m"
                else
#line 169 "det_util.m"
                  {
#line 169 "det_util.m"
                    MR_Word check_hlds__det_util__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__OtherConsIds1_18, (MR_Integer) 0)));
#line 169 "det_util.m"
                    MR_Word check_hlds__det_util__OtherConsIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__OtherConsIds1_18, (MR_Integer) 1)));
#line 169 "det_util.m"
                    MR_Word check_hlds__det_util__Case_28;

#line 170 "det_util.m"
                    {
#line 170 "det_util.m"
                      check_hlds__det_util__Case_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 170 "det_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_28, 0) = ((MR_Box) (check_hlds__det_util__MainConsId_19));
#line 170 "det_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_28, 1) = ((MR_Box) (check_hlds__det_util__OtherConsIds_27));
#line 170 "det_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_28, 2) = ((MR_Box) (check_hlds__det_util__Goal_15));
#line 170 "det_util.m"
                    }
#line 171 "det_util.m"
                    {
#line 171 "det_util.m"
                      check_hlds__det_util__STATE_VARIABLE_RevCases_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "det_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 0) = ((MR_Box) (check_hlds__det_util__Case_28));
#line 171 "det_util.m"
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevCases_23_23, 1) = ((MR_Box) (check_hlds__det_util__STATE_VARIABLE_RevCases_0_3));
#line 171 "det_util.m"
                    }
#line 169 "det_util.m"
                  }
#line 164 "det_util.m"
              }
#line 174 "det_util.m"
            /* direct tailcall eliminated */
#line 174 "det_util.m"
            {
#line 174 "det_util.m"
              MR_Word check_hlds__det_util__HeadVar__1__tmp_copy_1 = check_hlds__det_util__Cases0_10;
#line 174 "det_util.m"
              MR_Word check_hlds__det_util__STATE_VARIABLE_RevCases_0__tmp_copy_3 = check_hlds__det_util__STATE_VARIABLE_RevCases_23_23;

#line 174 "det_util.m"
              check_hlds__det_util__STATE_VARIABLE_RevCases_0_3 = check_hlds__det_util__STATE_VARIABLE_RevCases_0__tmp_copy_3;
#line 174 "det_util.m"
              check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__HeadVar__1__tmp_copy_1;
#line 174 "det_util.m"
            }
#line 174 "det_util.m"
            continue;
#line 155 "det_util.m"
          }
#line 154 "det_util.m"
      }
#line 154 "det_util.m"
      break;
#line 154 "det_util.m"
    }
#line 151 "det_util.m"
}

#line 125 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_has_req_scope_2_p_0(
#line 125 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5,
#line 125 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_6)
#line 125 "det_util.m"
{
#line 274 "det_util.m"
  {
#line 274 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 276 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 276 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
#line 276 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
#line 276 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
#line 276 "det_util.m"
    MR_Integer check_hlds__det_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
#line 276 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 276 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 276 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));

#line 276 "det_util.m"
    check_hlds__det_util__succeeded = ((MR_Integer) 1 == check_hlds__det_util__V_23_23);
#line 278 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 278 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5;
#line 278 "det_util.m"
    else
#line 279 "det_util.m"
      {
#line 279 "det_util.m"
        MR_Word check_hlds__det_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
#line 279 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
#line 279 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
#line 279 "det_util.m"
        MR_Integer check_hlds__det_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
#line 279 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 279 "det_util.m"
        MR_Word check_hlds__det_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 279 "det_util.m"
        MR_Word check_hlds__det_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));
#line 279 "det_util.m"
        MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 279 "det_util.m"
        {
#line 279 "det_util.m"
          MR_Word base;
#line 279 "det_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 279 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = base;
#line 279 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_15_15));
#line 279 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_16_16));
#line 279 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_17_17));
#line 279 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_18_18));
#line 279 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_19_19 | ((((check_hlds__det_util__V_20_20 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 279 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_22_22));
#line 279 "det_util.m"
        }
#line 279 "det_util.m"
      }
#line 274 "det_util.m"
  }
#line 125 "det_util.m"
}

#line 124 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_has_format_call_2_p_0(
#line 124 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5,
#line 124 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_6)
#line 124 "det_util.m"
{
#line 267 "det_util.m"
  {
#line 267 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 269 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 269 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
#line 269 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
#line 269 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
#line 269 "det_util.m"
    MR_Integer check_hlds__det_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
#line 269 "det_util.m"
    MR_Word check_hlds__det_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 269 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 269 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));

#line 269 "det_util.m"
    check_hlds__det_util__succeeded = ((MR_Integer) 1 == check_hlds__det_util__V_23_23);
#line 271 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 271 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5;
#line 271 "det_util.m"
    else
#line 272 "det_util.m"
      {
#line 272 "det_util.m"
        MR_Word check_hlds__det_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
#line 272 "det_util.m"
        MR_Word check_hlds__det_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
#line 272 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
#line 272 "det_util.m"
        MR_Integer check_hlds__det_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
#line 272 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 272 "det_util.m"
        MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 272 "det_util.m"
        MR_Word check_hlds__det_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));
#line 272 "det_util.m"
        MR_Word check_hlds__det_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 272 "det_util.m"
        {
#line 272 "det_util.m"
          MR_Word base;
#line 272 "det_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 272 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = base;
#line 272 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_15_15));
#line 272 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_16_16));
#line 272 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_17_17));
#line 272 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_18_18));
#line 272 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_19_19 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((check_hlds__det_util__V_21_21 << (MR_Integer) 2)))))));
#line 272 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_22_22));
#line 272 "det_util.m"
        }
#line 272 "det_util.m"
      }
#line 267 "det_util.m"
  }
#line 124 "det_util.m"
}

#line 122 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_set_module_info_3_p_0(
#line 122 "det_util.m"
  MR_Word check_hlds__det_util__X_4,
#line 122 "det_util.m"
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6,
#line 122 "det_util.m"
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_7)
#line 122 "det_util.m"
{
#line 264 "det_util.m"
  {
#line 264 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0)));
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1)));
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2)));
#line 262 "det_util.m"
    MR_Integer check_hlds__det_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3)));
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 262 "det_util.m"
    MR_Word check_hlds__det_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 5)));

#line 262 "det_util.m"
    check_hlds__det_util__succeeded = (((MR_Word) check_hlds__det_util__X_4) == ((MR_Word) check_hlds__det_util__V_8_8));
#line 264 "det_util.m"
    if (check_hlds__det_util__succeeded)
#line 264 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_7 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6;
#line 264 "det_util.m"
    else
#line 265 "det_util.m"
      {
#line 265 "det_util.m"
        MR_Word check_hlds__det_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1)));
#line 265 "det_util.m"
        MR_Word check_hlds__det_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2)));
#line 265 "det_util.m"
        MR_Integer check_hlds__det_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3)));
#line 265 "det_util.m"
        MR_Word check_hlds__det_util__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 265 "det_util.m"
        MR_Word check_hlds__det_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 265 "det_util.m"
        MR_Word check_hlds__det_util__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 265 "det_util.m"
        MR_Word check_hlds__det_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 5)));
#line 265 "det_util.m"
        MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0)));

#line 265 "det_util.m"
        {
#line 265 "det_util.m"
          MR_Word base;
#line 265 "det_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 265 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_7 = base;
#line 265 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__X_4));
#line 265 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_18_18));
#line 265 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_19_19));
#line 265 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_20_20));
#line 265 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_21_21 | ((((check_hlds__det_util__V_22_22 << (MR_Integer) 1)) | ((check_hlds__det_util__V_23_23 << (MR_Integer) 2)))))));
#line 265 "det_util.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__V_24_24));
#line 265 "det_util.m"
        }
#line 265 "det_util.m"
      }
#line 264 "det_util.m"
  }
#line 122 "det_util.m"
}

#line 120 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_error_specs_2_p_0(
#line 120 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 120 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 120 "det_util.m"
{
#line 256 "det_util.m"
  {
#line 256 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 256 "det_util.m"
    MR_Integer check_hlds__det_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 256 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 256 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 256 "det_util.m"
  }
#line 120 "det_util.m"
}

#line 118 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_has_req_scope_2_p_0(
#line 118 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 118 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 118 "det_util.m"
{
#line 254 "det_util.m"
  {
#line 254 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 254 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 254 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 254 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 254 "det_util.m"
    MR_Integer check_hlds__det_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 254 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 254 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 254 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 254 "det_util.m"
    *check_hlds__det_util__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 254 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 254 "det_util.m"
  }
#line 118 "det_util.m"
}

#line 116 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_has_format_call_2_p_0(
#line 116 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 116 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 116 "det_util.m"
{
#line 252 "det_util.m"
  {
#line 252 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 252 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 252 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 252 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 252 "det_util.m"
    MR_Integer check_hlds__det_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 252 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 252 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 252 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 252 "det_util.m"
    *check_hlds__det_util__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 252 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 252 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 252 "det_util.m"
  }
#line 116 "det_util.m"
}

#line 114 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(
#line 114 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 114 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 114 "det_util.m"
{
#line 250 "det_util.m"
  {
#line 250 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 250 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 250 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 250 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 250 "det_util.m"
    MR_Integer check_hlds__det_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 250 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 250 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 250 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 250 "det_util.m"
    *check_hlds__det_util__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 250 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 250 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 250 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 250 "det_util.m"
  }
#line 114 "det_util.m"
}

#line 113 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_vartypes_2_p_0(
#line 113 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 113 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 113 "det_util.m"
{
#line 248 "det_util.m"
  {
#line 248 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 248 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 248 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6;
#line 248 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7;
#line 248 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 248 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 248 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 248 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 248 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 248 "det_util.m"
    check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 248 "det_util.m"
    check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 248 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 248 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 248 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 248 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 248 "det_util.m"
  }
#line 113 "det_util.m"
}

#line 112 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_proc_id_2_p_0(
#line 112 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 112 "det_util.m"
  MR_Integer * check_hlds__det_util__X_4)
#line 112 "det_util.m"
{
#line 246 "det_util.m"
  {
#line 246 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 246 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 246 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 246 "det_util.m"
    MR_Word check_hlds__det_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 246 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 246 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 246 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 246 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 246 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 246 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 246 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 246 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 246 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 246 "det_util.m"
  }
#line 112 "det_util.m"
}

#line 111 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_pred_id_2_p_0(
#line 111 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 111 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 111 "det_util.m"
{
#line 244 "det_util.m"
  {
#line 244 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 244 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 244 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 244 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7;
#line 244 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 244 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 244 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 244 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 244 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 244 "det_util.m"
    check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 244 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 244 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 244 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 244 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 244 "det_util.m"
  }
#line 111 "det_util.m"
}

#line 110 "det_util.m"
void MR_CALL 
check_hlds__det_util__det_info_get_module_info_2_p_0(
#line 110 "det_util.m"
  MR_Word check_hlds__det_util__DetInfo_3,
#line 110 "det_util.m"
  MR_Word * check_hlds__det_util__X_4)
#line 110 "det_util.m"
{
#line 242 "det_util.m"
  {
#line 242 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_5_5;
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_6_6;
#line 242 "det_util.m"
    MR_Integer check_hlds__det_util__V_7_7;
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_8_8;
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_9_9;
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_10_10;
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_11_11;

#line 242 "det_util.m"
    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 242 "det_util.m"
    check_hlds__det_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 242 "det_util.m"
    check_hlds__det_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 242 "det_util.m"
    check_hlds__det_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 242 "det_util.m"
    check_hlds__det_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 242 "det_util.m"
    check_hlds__det_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 242 "det_util.m"
    check_hlds__det_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 242 "det_util.m"
    check_hlds__det_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 242 "det_util.m"
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
#line 237 "det_util.m"
  {
#line 237 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 238 "det_util.m"
    {
#line 238 "det_util.m"
      MR_Word base;
#line 238 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 238 "det_util.m"
      *check_hlds__det_util__DetInfo_14 = base;
#line 238 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__ModuleInfo_8));
#line 238 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__VarTypes_9));
#line 238 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__PredId_10));
#line 238 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__ProcId_11));
#line 238 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__PessExtraVars_12 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 238 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Specs_13));
#line 238 "det_util.m"
    }
#line 237 "det_util.m"
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
#line 217 "det_util.m"
  {
#line 217 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 217 "det_util.m"
    MR_Word check_hlds__det_util__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 5)));
#line 217 "det_util.m"
    MR_Word check_hlds__det_util__Specs_7;
#line 217 "det_util.m"
    MR_Word check_hlds__det_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 0)));
#line 217 "det_util.m"
    MR_Word check_hlds__det_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 1)));
#line 217 "det_util.m"
    MR_Word check_hlds__det_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 2)));
#line 217 "det_util.m"
    MR_Integer check_hlds__det_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 3)));
#line 217 "det_util.m"
    MR_Word check_hlds__det_util__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 217 "det_util.m"
    MR_Word check_hlds__det_util__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 217 "det_util.m"
    MR_Word check_hlds__det_util__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 219 "det_util.m"
    {
#line 219 "det_util.m"
      check_hlds__det_util__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "det_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_util__Specs_7, 0) = ((MR_Box) (check_hlds__det_util__Spec_4));
#line 219 "det_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__det_util__Specs_7, 1) = ((MR_Box) (check_hlds__det_util__Specs0_6));
#line 219 "det_util.m"
    }
#line 282 "det_util.m"
    {
#line 282 "det_util.m"
      MR_Word base;
#line 282 "det_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 282 "det_util.m"
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_9 = base;
#line 282 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__V_13_13));
#line 282 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__V_14_14));
#line 282 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__V_15_15));
#line 282 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__V_16_16));
#line 282 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__V_17_17 | ((((check_hlds__det_util__V_18_18 << (MR_Integer) 1)) | ((check_hlds__det_util__V_19_19 << (MR_Integer) 2)))))));
#line 282 "det_util.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Specs_7));
#line 282 "det_util.m"
    }
#line 217 "det_util.m"
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
#line 211 "det_util.m"
  {
#line 211 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 211 "det_util.m"
    MR_Word check_hlds__det_util__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 0)));
#line 211 "det_util.m"
    MR_Word check_hlds__det_util__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 1)));
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 2)));
#line 242 "det_util.m"
    MR_Integer check_hlds__det_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 3)));
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 5)));

#line 214 "det_util.m"
    {
#line 214 "det_util.m"
      return check_hlds__det_util__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(check_hlds__det_util__ModuleInfo_9, check_hlds__det_util__VarTypes_10, check_hlds__det_util__InstMap_6, check_hlds__det_util__InstMapDelta_7, check_hlds__det_util__Vars_8);
    }
#line 211 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 211 "det_util.m"
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
#line 204 "det_util.m"
  {
#line 204 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 204 "det_util.m"
    MR_Word check_hlds__det_util__VarTypes_9;
#line 204 "det_util.m"
    MR_Word check_hlds__det_util__Type_10;
#line 204 "det_util.m"
    MR_Word check_hlds__det_util__TypeCtor_11;
#line 204 "det_util.m"
    MR_Word check_hlds__det_util__TypeTable_12;

#line 205 "det_util.m"
    {
#line 205 "det_util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_util__ProcInfo_6, &check_hlds__det_util__VarTypes_9);
    }
#line 206 "det_util.m"
    {
#line 206 "det_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_util__VarTypes_9, check_hlds__det_util__Var_7, &check_hlds__det_util__Type_10);
    }
#line 207 "det_util.m"
    {
#line 207 "det_util.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__det_util__Type_10, &check_hlds__det_util__TypeCtor_11);
    }
#line 208 "det_util.m"
    {
#line 208 "det_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__det_util__ModuleInfo_5, &check_hlds__det_util__TypeTable_12);
    }
#line 209 "det_util.m"
    {
#line 209 "det_util.m"
      return check_hlds__det_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__det_util__TypeTable_12, check_hlds__det_util__TypeCtor_11, check_hlds__det_util__TypeDefn_8);
    }
#line 204 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 204 "det_util.m"
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
#line 195 "det_util.m"
  {
#line 195 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 195 "det_util.m"
    MR_Word check_hlds__det_util__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
#line 195 "det_util.m"
    MR_Word check_hlds__det_util__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
#line 195 "det_util.m"
    MR_Integer check_hlds__det_util__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
#line 195 "det_util.m"
    MR_Word check_hlds__det_util__PredTable_8;
#line 195 "det_util.m"
    MR_Word check_hlds__det_util__PredInfo_9;
#line 195 "det_util.m"
    MR_Word check_hlds__det_util__ProcTable_10;
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
#line 200 "det_util.m"
    MR_Box check_hlds__det_util__conv0_PredInfo_9;
#line 202 "det_util.m"
    MR_Box check_hlds__det_util__conv1_ProcInfo_4;

#line 199 "det_util.m"
    {
#line 199 "det_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_util__ModuleInfo_5, &check_hlds__det_util__PredTable_8);
    }
#line 200 "det_util.m"
    {
#line 200 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_util__PredTable_8, ((MR_Box) (check_hlds__det_util__PredId_6)), &check_hlds__det_util__conv0_PredInfo_9);
    }
#line 200 "det_util.m"
    check_hlds__det_util__PredInfo_9 = ((MR_Word) check_hlds__det_util__conv0_PredInfo_9);
#line 201 "det_util.m"
    {
#line 201 "det_util.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__det_util__PredInfo_9, &check_hlds__det_util__ProcTable_10);
    }
#line 202 "det_util.m"
    {
#line 202 "det_util.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_util__ProcTable_10, check_hlds__det_util__ProcId_7, &check_hlds__det_util__conv1_ProcInfo_4);
    }
#line 202 "det_util.m"
    *check_hlds__det_util__ProcInfo_4 = ((MR_Word) check_hlds__det_util__conv1_ProcInfo_4);
#line 195 "det_util.m"
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
#line 187 "det_util.m"
  {
#line 187 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 187 "det_util.m"
    MR_Word check_hlds__det_util__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 0)));
#line 187 "det_util.m"
    MR_Word check_hlds__det_util__PredTable_12;
#line 187 "det_util.m"
    MR_Word check_hlds__det_util__ProcTable_13;
#line 187 "det_util.m"
    MR_Word check_hlds__det_util__ProcInfo_14;
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 1)));
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 2)));
#line 242 "det_util.m"
    MR_Integer check_hlds__det_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 3)));
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) & (MR_Integer) 1);
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 242 "det_util.m"
    MR_Word check_hlds__det_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 5)));
#line 190 "det_util.m"
    MR_Box check_hlds__det_util__conv0_PredInfo_9;
#line 192 "det_util.m"
    MR_Box check_hlds__det_util__conv1_ProcInfo_14;

#line 189 "det_util.m"
    {
#line 189 "det_util.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_util__ModuleInfo_11, &check_hlds__det_util__PredTable_12);
    }
#line 190 "det_util.m"
    {
#line 190 "det_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_util__PredTable_12, ((MR_Box) (check_hlds__det_util__PredId_7)), &check_hlds__det_util__conv0_PredInfo_9);
    }
#line 190 "det_util.m"
    *check_hlds__det_util__PredInfo_9 = ((MR_Word) check_hlds__det_util__conv0_PredInfo_9);
#line 191 "det_util.m"
    {
#line 191 "det_util.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(*check_hlds__det_util__PredInfo_9, &check_hlds__det_util__ProcTable_13);
    }
#line 192 "det_util.m"
    {
#line 192 "det_util.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_util__ProcTable_13, check_hlds__det_util__ModeId_8, &check_hlds__det_util__conv1_ProcInfo_14);
    }
#line 192 "det_util.m"
    check_hlds__det_util__ProcInfo_14 = ((MR_Word) check_hlds__det_util__conv1_ProcInfo_14);
#line 193 "det_util.m"
    {
#line 193 "det_util.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__det_util__ProcInfo_14, check_hlds__det_util__Detism_10);
#line 193 "det_util.m"
      return;
    }
#line 187 "det_util.m"
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
#line 176 "det_util.m"
  {
#line 176 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;

#line 176 "det_util.m"
#line 176 "det_util.m"
    switch (MR_tag((MR_Word) check_hlds__det_util__HeadVar__2_2)) {
#line 176 "det_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 176 "det_util.m"
      case (MR_Integer) 0:
#line 176 "det_util.m"
        {
#line 176 "det_util.m"
          MR_Word check_hlds__det_util__Y_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "det_util.m"
          MR_Word check_hlds__det_util__V_10_10;
#line 176 "det_util.m"
          MR_Word check_hlds__det_util__V_11_11;
#line 176 "det_util.m"
          MR_Word check_hlds__det_util__V_13_13;
#line 176 "det_util.m"
          MR_Word check_hlds__det_util__V_14_14;

#line 177 "det_util.m"
          {
#line 177 "det_util.m"
            check_hlds__det_util__V_13_13 = mercury__term__context_init_0_f_0();
          }
#line 177 "det_util.m"
          {
#line 177 "det_util.m"
            check_hlds__det_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_10_10, 0) = ((MR_Box) (check_hlds__det_util__HeadVar__1_1));
#line 177 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_10_10, 1) = ((MR_Box) (check_hlds__det_util__V_13_13));
#line 177 "det_util.m"
          }
#line 177 "det_util.m"
          {
#line 177 "det_util.m"
            check_hlds__det_util__V_14_14 = mercury__term__context_init_0_f_0();
          }
#line 177 "det_util.m"
          {
#line 177 "det_util.m"
            check_hlds__det_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_11_11, 0) = ((MR_Box) (check_hlds__det_util__Y_6));
#line 177 "det_util.m"
            MR_hl_field(MR_mktag(1), check_hlds__det_util__V_11_11, 1) = ((MR_Box) (check_hlds__det_util__V_14_14));
#line 177 "det_util.m"
          }
#line 177 "det_util.m"
          {
#line 177 "det_util.m"
            return check_hlds__det_util__succeeded = mercury__term__unify_term_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_util__V_10_10, check_hlds__det_util__V_11_11, check_hlds__det_util__STATE_VARIABLE_Subst_0_3, check_hlds__det_util__STATE_VARIABLE_Subst_4);
          }
#line 176 "det_util.m"
        }
#line 176 "det_util.m"
        break;
#line 176 "det_util.m"
      case (MR_Integer) 1:
#line 178 "det_util.m"
        {
#line 178 "det_util.m"
          MR_Word check_hlds__det_util__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 178 "det_util.m"
          MR_Word check_hlds__det_util__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "det_util.m"
          MR_Word check_hlds__det_util__ArgVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
#line 178 "det_util.m"
          MR_Word check_hlds__det_util__ArgTerms_20;
#line 178 "det_util.m"
          MR_Word check_hlds__det_util__RhsTerm_21;
#line 178 "det_util.m"
          MR_Word check_hlds__det_util__V_24_24;
#line 178 "det_util.m"
          MR_Word check_hlds__det_util__V_26_26;
#line 178 "det_util.m"
          MR_Word check_hlds__det_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));

#line 179 "det_util.m"
          {
#line 179 "det_util.m"
            mercury__term__var_list_to_term_list_2_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__ArgVars_18, &check_hlds__det_util__ArgTerms_20);
          }
#line 180 "det_util.m"
          {
#line 180 "det_util.m"
            check_hlds__det_util__succeeded = parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__ConsId_16, check_hlds__det_util__ArgTerms_20, &check_hlds__det_util__RhsTerm_21);
          }
#line 178 "det_util.m"
          if (check_hlds__det_util__succeeded)
#line 178 "det_util.m"
            {
#line 181 "det_util.m"
              {
#line 181 "det_util.m"
                check_hlds__det_util__V_26_26 = mercury__term__context_init_0_f_0();
              }
#line 181 "det_util.m"
              {
#line 181 "det_util.m"
                check_hlds__det_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "det_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_util__V_24_24, 0) = ((MR_Box) (check_hlds__det_util__HeadVar__1_1));
#line 181 "det_util.m"
                MR_hl_field(MR_mktag(1), check_hlds__det_util__V_24_24, 1) = ((MR_Box) (check_hlds__det_util__V_26_26));
#line 181 "det_util.m"
              }
#line 181 "det_util.m"
              {
#line 181 "det_util.m"
                return check_hlds__det_util__succeeded = mercury__term__unify_term_4_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__V_24_24, check_hlds__det_util__RhsTerm_21, check_hlds__det_util__STATE_VARIABLE_Subst_0_3, check_hlds__det_util__STATE_VARIABLE_Subst_4);
              }
#line 178 "det_util.m"
            }
#line 178 "det_util.m"
        }
#line 176 "det_util.m"
        break;
#line 176 "det_util.m"
      case (MR_Integer) 2:
#line 182 "det_util.m"
        {
#line 182 "det_util.m"
          *check_hlds__det_util__STATE_VARIABLE_Subst_4 = check_hlds__det_util__STATE_VARIABLE_Subst_0_3;
#line 182 "det_util.m"
          check_hlds__det_util__succeeded = MR_TRUE;
#line 182 "det_util.m"
        }
#line 176 "det_util.m"
        break;
#line 176 "det_util.m"
    }
#line 176 "det_util.m"
    return check_hlds__det_util__succeeded;
#line 176 "det_util.m"
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
#line 144 "det_util.m"
  {
#line 144 "det_util.m"
    MR_bool check_hlds__det_util__succeeded;
#line 144 "det_util.m"
    MR_Word check_hlds__det_util__PossibleConsIdSet_7;
#line 144 "det_util.m"
    MR_Word check_hlds__det_util__RevCases_8;

#line 145 "det_util.m"
    {
#line 145 "det_util.m"
      check_hlds__det_util__PossibleConsIdSet_7 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__PossibleConsIds_5);
    }
#line 148 "det_util.m"
    {
#line 148 "det_util.m"
      check_hlds__det_util__delete_unreachable_cases_acc_4_p_0(check_hlds__det_util__Cases0_4, check_hlds__det_util__PossibleConsIdSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_util__RevCases_8);
    }
#line 149 "det_util.m"
    {
#line 149 "det_util.m"
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, check_hlds__det_util__RevCases_8, check_hlds__det_util__Cases_6);
#line 149 "det_util.m"
      return;
    }
#line 144 "det_util.m"
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
