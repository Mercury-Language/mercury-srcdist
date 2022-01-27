/*
** Automatically generated from `term_util.m'
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


/* :- module transform_hlds.term_util. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_util__init
ENDINIT
*/

#include "transform_hlds.term_util.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 145 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 148 "transform_hlds.term_util.c"
static const MR_PseudoTypeInfo transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0[3];

#line 151 "transform_hlds.term_util.c"
static const MR_DuFunctorDesc transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0;

#line 154 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0[1];

#line 157 "transform_hlds.term_util.c"
static const MR_DuPtagLayout transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0[1];

#line 160 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0[1];

#line 163 "transform_hlds.term_util.c"
static const MR_Integer transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0[1];

#line 166 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 169 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0;

#line 172 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 175 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0_10001(
#line 178 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 180 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 183 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0_10001(
#line 186 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 188 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 190 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 193 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0_10001(
#line 196 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 198 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 201 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0_10001(
#line 204 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 206 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 208 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 211 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0_10001(
#line 214 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 216 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 219 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0_10001(
#line 222 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 224 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 226 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 229 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0_10001(
#line 232 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 234 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 237 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0_10001(
#line 240 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 242 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 244 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 299 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 299 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 299 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_2,
#line 299 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3);

#line 361 "term_util.m"
static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
#line 361 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 361 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 361 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3);

#line 221 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
#line 221 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 221 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 221 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 221 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 221 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__5_5);


static /* final */ const MR_Box transform_hlds__term_util_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__term_util_scalar_common_2[2][3];

static /* final */ const MR_Box transform_hlds__term_util_scalar_common_3[2][1];




static /* final */ const MR_Box transform_hlds__term_util_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&transform_hlds__term_util_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_util_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&transform_hlds__term_util_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_util_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box transform_hlds__term_util_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_util_scalar_common_3[0]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 349 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 357 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1,
  {
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 365 "transform_hlds.term_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_arg_size_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_util____Unify____arg_size_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____arg_size_info_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "arg_size_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 382 "transform_hlds.term_util.c"
static const MR_PseudoTypeInfo transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 389 "transform_hlds.term_util.c"
static const MR_DuFunctorDesc transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0 = {
  (MR_String) "pass_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 404 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0[1] = {
  &transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0
};

#line 409 "transform_hlds.term_util.c"
static const MR_DuPtagLayout transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0
  }
};

#line 418 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0[1] = {
  &transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0
};

#line 423 "transform_hlds.term_util.c"
static const MR_Integer transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0[1] = {
  (MR_Integer) 0
};

#line 428 "transform_hlds.term_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_pass_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_util____Unify____pass_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____pass_info_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "pass_info",
  {     transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0 },
  {     transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0
};

#line 445 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 454 "transform_hlds.term_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_termination_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_util____Unify____termination_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____termination_info_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "termination_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 471 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 479 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 488 "transform_hlds.term_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_used_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_util____Unify____used_args_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____used_args_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "used_args",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 505 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0_10001(
#line 508 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 510 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 512 "transform_hlds.term_util.c"
{
#line 514 "transform_hlds.term_util.c"
  {
#line 516 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 519 "transform_hlds.term_util.c"
    {
#line 521 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____arg_size_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 524 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 526 "transform_hlds.term_util.c"
  }
#line 528 "transform_hlds.term_util.c"
}

#line 531 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0_10001(
#line 534 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 536 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 538 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 540 "transform_hlds.term_util.c"
{
#line 542 "transform_hlds.term_util.c"
  {
#line 544 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 547 "transform_hlds.term_util.c"
    {
#line 549 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____arg_size_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 552 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 554 "transform_hlds.term_util.c"
  }
#line 556 "transform_hlds.term_util.c"
}

#line 559 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0_10001(
#line 562 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 564 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 566 "transform_hlds.term_util.c"
{
#line 568 "transform_hlds.term_util.c"
  {
#line 570 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 573 "transform_hlds.term_util.c"
    {
#line 575 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____pass_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 578 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 580 "transform_hlds.term_util.c"
  }
#line 582 "transform_hlds.term_util.c"
}

#line 585 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0_10001(
#line 588 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 590 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 592 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 594 "transform_hlds.term_util.c"
{
#line 596 "transform_hlds.term_util.c"
  {
#line 598 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 601 "transform_hlds.term_util.c"
    {
#line 603 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____pass_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 606 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 608 "transform_hlds.term_util.c"
  }
#line 610 "transform_hlds.term_util.c"
}

#line 613 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0_10001(
#line 616 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 618 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 620 "transform_hlds.term_util.c"
{
#line 622 "transform_hlds.term_util.c"
  {
#line 624 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 627 "transform_hlds.term_util.c"
    {
#line 629 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____termination_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 632 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 634 "transform_hlds.term_util.c"
  }
#line 636 "transform_hlds.term_util.c"
}

#line 639 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0_10001(
#line 642 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 644 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 646 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 648 "transform_hlds.term_util.c"
{
#line 650 "transform_hlds.term_util.c"
  {
#line 652 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 655 "transform_hlds.term_util.c"
    {
#line 657 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____termination_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 660 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 662 "transform_hlds.term_util.c"
  }
#line 664 "transform_hlds.term_util.c"
}

#line 667 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0_10001(
#line 670 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 672 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 674 "transform_hlds.term_util.c"
{
#line 676 "transform_hlds.term_util.c"
  {
#line 678 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 681 "transform_hlds.term_util.c"
    {
#line 683 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____used_args_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 686 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 688 "transform_hlds.term_util.c"
  }
#line 690 "transform_hlds.term_util.c"
}

#line 693 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0_10001(
#line 696 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 698 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 700 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 702 "transform_hlds.term_util.c"
{
#line 704 "transform_hlds.term_util.c"
  {
#line 706 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 709 "transform_hlds.term_util.c"
    {
#line 711 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____used_args_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 714 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 716 "transform_hlds.term_util.c"
  }
#line 718 "transform_hlds.term_util.c"
}

#line 299 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 299 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 299 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_2,
#line 299 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 299 "term_util.m"
{
#line 301 "term_util.m"
  {
#line 301 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 301 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__Bools_2;
#line 301 "term_util.m"
    else
#line 302 "term_util.m"
      {
#line 302 "term_util.m"
        MR_Word transform_hlds__term_util__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 302 "term_util.m"
        MR_Word transform_hlds__term_util__Out_8;
#line 302 "term_util.m"
        MR_Box transform_hlds__term_util__V_5_5 = (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0));

#line 303 "term_util.m"
        {
#line 303 "term_util.m"
          transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__Vars_6, transform_hlds__term_util__Bools_2, &transform_hlds__term_util__Out_8);
        }
#line 302 "term_util.m"
        {
#line 302 "term_util.m"
          MR_Word base;
#line 302 "term_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "term_util.m"
          *transform_hlds__term_util__HeadVar__3_3 = base;
#line 302 "term_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 302 "term_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__Out_8));
#line 302 "term_util.m"
        }
#line 302 "term_util.m"
      }
#line 301 "term_util.m"
  }
#line 299 "term_util.m"
}

#line 69 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0(
#line 69 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 69 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 69 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 69 "term_util.m"
{
#line 69 "term_util.m"
  {
#line 69 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 69 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 69 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 69 "term_util.m"
    {
#line 69 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
    }
#line 69 "term_util.m"
  }
#line 69 "term_util.m"
}

#line 69 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0(
#line 69 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 69 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 69 "term_util.m"
{
#line 69 "term_util.m"
  {
#line 69 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 69 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 69 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 69 "term_util.m"
    {
#line 69 "term_util.m"
      transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 69 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 69 "term_util.m"
  }
#line 69 "term_util.m"
}

#line 63 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0(
#line 63 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 63 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 63 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 63 "term_util.m"
{
#line 63 "term_util.m"
  {
#line 63 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 63 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 63 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 63 "term_util.m"
    {
#line 63 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
    }
#line 63 "term_util.m"
  }
#line 63 "term_util.m"
}

#line 63 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0(
#line 63 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 63 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 63 "term_util.m"
{
#line 63 "term_util.m"
  {
#line 63 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 63 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 63 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 63 "term_util.m"
    {
#line 63 "term_util.m"
      transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 63 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 63 "term_util.m"
  }
#line 63 "term_util.m"
}

#line 71 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0(
#line 71 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 71 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 71 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 71 "term_util.m"
{
#line 71 "term_util.m"
  {
#line 71 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 71 "term_util.m"
    MR_Integer transform_hlds__term_util__CastX_12 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;
#line 71 "term_util.m"
    MR_Integer transform_hlds__term_util__CastY_13 = (MR_Integer) transform_hlds__term_util__HeadVar__3_3;

#line 71 "term_util.m"
    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_12 == transform_hlds__term_util__CastY_13);
#line 71 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 922 "transform_hlds.term_util.c"
      *transform_hlds__term_util__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "term_util.m"
    else
#line 71 "term_util.m"
      {
#line 71 "term_util.m"
        MR_Word transform_hlds__term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "term_util.m"
        MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "term_util.m"
        MR_Integer transform_hlds__term_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));
#line 71 "term_util.m"
        MR_Word transform_hlds__term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 71 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 71 "term_util.m"
        MR_Integer transform_hlds__term_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 2)));
#line 71 "term_util.m"
        MR_Word transform_hlds__term_util__V_10_10;

#line 71 "term_util.m"
        {
#line 71 "term_util.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_util__V_10_10, transform_hlds__term_util__V_4_4, transform_hlds__term_util__V_7_7);
        }
#line 948 "transform_hlds.term_util.c"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_10_10 == (MR_Integer) 0);
#line 71 "term_util.m"
        transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
#line 71 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 71 "term_util.m"
          *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__V_10_10;
#line 71 "term_util.m"
        else
#line 71 "term_util.m"
          {
#line 71 "term_util.m"
            MR_Word transform_hlds__term_util__V_11_11;

#line 71 "term_util.m"
            {
#line 71 "term_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_util__V_11_11, transform_hlds__term_util__V_5_5, transform_hlds__term_util__V_8_8);
            }
#line 968 "transform_hlds.term_util.c"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_11_11 == (MR_Integer) 0);
#line 71 "term_util.m"
            transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
#line 71 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 71 "term_util.m"
              *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__V_11_11;
#line 71 "term_util.m"
            else
#line 71 "term_util.m"
              {
#line 71 "term_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_util__HeadVar__1_1, transform_hlds__term_util__V_6_6, transform_hlds__term_util__V_9_9);
              }
#line 71 "term_util.m"
          }
#line 71 "term_util.m"
      }
#line 71 "term_util.m"
  }
#line 71 "term_util.m"
}

#line 71 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0(
#line 71 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 71 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 71 "term_util.m"
{
#line 71 "term_util.m"
  {
#line 71 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 71 "term_util.m"
    MR_Integer transform_hlds__term_util__CastX_9 = (MR_Integer) transform_hlds__term_util__HeadVar__1_1;
#line 71 "term_util.m"
    MR_Integer transform_hlds__term_util__CastY_10 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;

#line 71 "term_util.m"
    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_9 == transform_hlds__term_util__CastY_10);
#line 71 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 71 "term_util.m"
      transform_hlds__term_util__succeeded = MR_TRUE;
#line 71 "term_util.m"
    else
#line 71 "term_util.m"
      {
#line 71 "term_util.m"
        MR_Word transform_hlds__term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "term_util.m"
        MR_Integer transform_hlds__term_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 71 "term_util.m"
        MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 2)));
#line 71 "term_util.m"
        MR_Word transform_hlds__term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "term_util.m"
        MR_Integer transform_hlds__term_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));

#line 1033 "transform_hlds.term_util.c"
        {
#line 1035 "transform_hlds.term_util.c"
          transform_hlds__term_util__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_util__V_3_3, transform_hlds__term_util__V_6_6);
        }
#line 71 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 71 "term_util.m"
          {
#line 1042 "transform_hlds.term_util.c"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_4_4 == transform_hlds__term_util__V_7_7);
#line 71 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 1046 "transform_hlds.term_util.c"
              transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_5_5 == transform_hlds__term_util__V_8_8);
#line 71 "term_util.m"
          }
#line 71 "term_util.m"
      }
#line 71 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 71 "term_util.m"
  }
#line 71 "term_util.m"
}

#line 61 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0(
#line 61 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 61 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 61 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 61 "term_util.m"
{
#line 61 "term_util.m"
  {
#line 61 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 61 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 61 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 61 "term_util.m"
    {
#line 61 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
    }
#line 61 "term_util.m"
  }
#line 61 "term_util.m"
}

#line 61 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0(
#line 61 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 61 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 61 "term_util.m"
{
#line 61 "term_util.m"
  {
#line 61 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 61 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 61 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 61 "term_util.m"
    {
#line 61 "term_util.m"
      transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 61 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 61 "term_util.m"
  }
#line 61 "term_util.m"
}

#line 361 "term_util.m"
static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
#line 361 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 361 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 361 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3)
#line 361 "term_util.m"
{
#line 364 "term_util.m"
  while (MR_TRUE)
#line 364 "term_util.m"
    {
#line 364 "term_util.m"
      /* tailcall optimized into a loop */
#line 364 "term_util.m"
      {
#line 364 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 364 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "term_util.m"
          {
#line 364 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "term_util.m"
              {
#line 364 "term_util.m"
              }
#line 364 "term_util.m"
            else
#line 365 "term_util.m"
              {
#line 366 "term_util.m"
                {
#line 366 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
#line 365 "term_util.m"
              }
#line 364 "term_util.m"
            transform_hlds__term_util__succeeded = MR_TRUE;
#line 364 "term_util.m"
          }
#line 364 "term_util.m"
        else
#line 364 "term_util.m"
          {
#line 364 "term_util.m"
            MR_Word transform_hlds__term_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 364 "term_util.m"
            MR_Word transform_hlds__term_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 364 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "term_util.m"
              {
#line 368 "term_util.m"
                {
#line 368 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
#line 367 "term_util.m"
                transform_hlds__term_util__succeeded = MR_TRUE;
#line 367 "term_util.m"
              }
#line 364 "term_util.m"
            else
#line 369 "term_util.m"
              {
#line 369 "term_util.m"
                MR_Word transform_hlds__term_util__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 369 "term_util.m"
                MR_Word transform_hlds__term_util__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));

#line 370 "term_util.m"
                {
#line 370 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__Mode_19);
                }
#line 370 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 372 "term_util.m"
                  {
#line 372 "term_util.m"
                    /* direct tailcall eliminated */
#line 372 "term_util.m"
                    {
#line 372 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__V_22_22;
#line 372 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__Modes_20;

#line 372 "term_util.m"
                      transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 372 "term_util.m"
                      transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 372 "term_util.m"
                    }
#line 372 "term_util.m"
                    continue;
#line 372 "term_util.m"
                  }
#line 370 "term_util.m"
                else
#line 374 "term_util.m"
                  {
#line 374 "term_util.m"
                    {
#line 374 "term_util.m"
                      transform_hlds__term_util__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__V_23_23);
                    }
#line 374 "term_util.m"
                    if (transform_hlds__term_util__succeeded)
#line 375 "term_util.m"
                      {
#line 375 "term_util.m"
                        /* direct tailcall eliminated */
#line 375 "term_util.m"
                        {
#line 375 "term_util.m"
                          MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__V_22_22;
#line 375 "term_util.m"
                          MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__Modes_20;

#line 375 "term_util.m"
                          transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 375 "term_util.m"
                          transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 375 "term_util.m"
                        }
#line 375 "term_util.m"
                        continue;
#line 375 "term_util.m"
                      }
#line 374 "term_util.m"
                  }
#line 369 "term_util.m"
              }
#line 364 "term_util.m"
          }
#line 364 "term_util.m"
        return transform_hlds__term_util__succeeded;
#line 364 "term_util.m"
      }
#line 364 "term_util.m"
      break;
#line 364 "term_util.m"
    }
#line 361 "term_util.m"
}

#line 221 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
#line 221 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 221 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 221 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 221 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 221 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
#line 221 "term_util.m"
{
#line 224 "term_util.m"
  {
#line 224 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 224 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "term_util.m"
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "term_util.m"
        {
#line 224 "term_util.m"
          *transform_hlds__term_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 224 "term_util.m"
          *transform_hlds__term_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 224 "term_util.m"
        }
#line 224 "term_util.m"
      else
#line 225 "term_util.m"
        {
#line 226 "term_util.m"
          {
#line 226 "term_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
#line 226 "term_util.m"
            return;
          }
#line 225 "term_util.m"
        }
#line 224 "term_util.m"
    else
#line 224 "term_util.m"
      {
#line 224 "term_util.m"
        MR_Word transform_hlds__term_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "term_util.m"
        MR_Word transform_hlds__term_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 224 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "term_util.m"
          {
#line 228 "term_util.m"
            {
#line 228 "term_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
#line 228 "term_util.m"
              return;
            }
#line 227 "term_util.m"
          }
#line 224 "term_util.m"
        else
#line 230 "term_util.m"
          {
#line 230 "term_util.m"
            MR_Word transform_hlds__term_util__Arg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 230 "term_util.m"
            MR_Word transform_hlds__term_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 230 "term_util.m"
            MR_Word transform_hlds__term_util__InputArgs1_30;
#line 230 "term_util.m"
            MR_Word transform_hlds__term_util__OutputArgs1_31;

#line 231 "term_util.m"
            {
#line 231 "term_util.m"
              transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_32_32, transform_hlds__term_util__Args_27, &transform_hlds__term_util__InputArgs1_30, &transform_hlds__term_util__OutputArgs1_31);
            }
#line 233 "term_util.m"
            {
#line 233 "term_util.m"
              transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_33_33);
            }
#line 233 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 234 "term_util.m"
              {
#line 234 "term_util.m"
                {
#line 234 "term_util.m"
                  MR_Word base;
#line 234 "term_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "term_util.m"
                  *transform_hlds__term_util__HeadVar__4_4 = base;
#line 234 "term_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
#line 234 "term_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__InputArgs1_30));
#line 234 "term_util.m"
                }
#line 235 "term_util.m"
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
#line 234 "term_util.m"
              }
#line 233 "term_util.m"
            else
#line 236 "term_util.m"
              {
#line 236 "term_util.m"
                {
#line 236 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_33_33);
                }
#line 236 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 237 "term_util.m"
                  {
#line 237 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
#line 238 "term_util.m"
                    {
#line 238 "term_util.m"
                      MR_Word base;
#line 238 "term_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "term_util.m"
                      *transform_hlds__term_util__HeadVar__5_5 = base;
#line 238 "term_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
#line 238 "term_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__OutputArgs1_31));
#line 238 "term_util.m"
                    }
#line 237 "term_util.m"
                  }
#line 236 "term_util.m"
                else
#line 240 "term_util.m"
                  {
#line 240 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
#line 241 "term_util.m"
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
#line 240 "term_util.m"
                  }
#line 236 "term_util.m"
              }
#line 230 "term_util.m"
          }
#line 224 "term_util.m"
      }
#line 224 "term_util.m"
  }
#line 221 "term_util.m"
}

#line 195 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__attributes_imply_termination_1_p_0(
#line 195 "term_util.m"
  MR_Word transform_hlds__term_util__Attributes_2)
#line 195 "term_util.m"
{
#line 450 "term_util.m"
  {
#line 450 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 450 "term_util.m"
    {
#line 450 "term_util.m"
      MR_Word transform_hlds__term_util__V_5_5;

#line 450 "term_util.m"
      {
#line 450 "term_util.m"
        transform_hlds__term_util__V_5_5 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
      }
#line 450 "term_util.m"
      transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_5_5 == (MR_Integer) 0);
#line 450 "term_util.m"
    }
#line 450 "term_util.m"
    if (!(transform_hlds__term_util__succeeded))
#line 452 "term_util.m"
      {
#line 452 "term_util.m"
        MR_Word transform_hlds__term_util__V_3_3;
#line 452 "term_util.m"
        MR_Word transform_hlds__term_util__V_4_4;

#line 452 "term_util.m"
        {
#line 452 "term_util.m"
          transform_hlds__term_util__V_3_3 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
        }
#line 452 "term_util.m"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_3_3 == (MR_Integer) 2);
#line 452 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 452 "term_util.m"
          {
#line 453 "term_util.m"
            {
#line 453 "term_util.m"
              transform_hlds__term_util__V_4_4 = parse_tree__prog_data__get_may_call_mercury_1_f_0(transform_hlds__term_util__Attributes_2);
            }
#line 453 "term_util.m"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_4_4 == (MR_Integer) 1);
#line 452 "term_util.m"
          }
#line 452 "term_util.m"
      }
#line 450 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 450 "term_util.m"
  }
#line 195 "term_util.m"
}

#line 187 "term_util.m"
void MR_CALL 
transform_hlds__term_util__get_context_from_scc_3_p_0(
#line 187 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 187 "term_util.m"
  MR_Word transform_hlds__term_util__SCC_5,
#line 187 "term_util.m"
  MR_Word * transform_hlds__term_util__Context_6)
#line 187 "term_util.m"
{
#line 438 "term_util.m"
  {
#line 438 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 438 "term_util.m"
    if ((transform_hlds__term_util__SCC_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "term_util.m"
      {
#line 443 "term_util.m"
        {
#line 443 "term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.get_context_from_scc\'/3", (MR_String) "empty SCC");
#line 443 "term_util.m"
          return;
        }
#line 442 "term_util.m"
      }
#line 438 "term_util.m"
    else
#line 438 "term_util.m"
      {
#line 438 "term_util.m"
        MR_Word transform_hlds__term_util__PredId_7;
#line 438 "term_util.m"
        MR_Word transform_hlds__term_util__PredInfo_10;
#line 438 "term_util.m"
        MR_Word transform_hlds__term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCC_5, (MR_Integer) 0)));
#line 438 "term_util.m"
        MR_Word transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCC_5, (MR_Integer) 1)));
#line 438 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8;

#line 438 "term_util.m"
        transform_hlds__term_util__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_14_14, (MR_Integer) 0)));
#line 438 "term_util.m"
        transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_14_14, (MR_Integer) 1)));
#line 439 "term_util.m"
        {
#line 439 "term_util.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PredId_7, &transform_hlds__term_util__PredInfo_10);
        }
#line 440 "term_util.m"
        {
#line 440 "term_util.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_util__PredInfo_10, transform_hlds__term_util__Context_6);
        }
#line 438 "term_util.m"
      }
#line 438 "term_util.m"
  }
#line 187 "term_util.m"
}

#line 182 "term_util.m"
void MR_CALL 
transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(
#line 182 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 182 "term_util.m"
  MR_Word transform_hlds__term_util__Context_2,
#line 182 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 182 "term_util.m"
{
#line 429 "term_util.m"
  {
#line 429 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 429 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "term_util.m"
    else
#line 429 "term_util.m"
      {
#line 429 "term_util.m"
        MR_Word transform_hlds__term_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 429 "term_util.m"
        if (((MR_tag((MR_Word) transform_hlds__term_util__V_18_18)) == (MR_mktag((MR_Integer) 0))))
#line 430 "term_util.m"
          {
#line 430 "term_util.m"
            MR_Word transform_hlds__term_util__V_9_9 = (MR_Word) transform_hlds__term_util__V_18_18;

#line 430 "term_util.m"
            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) transform_hlds__term_util__HeadVar__1_1;
#line 430 "term_util.m"
          }
#line 429 "term_util.m"
        else
#line 431 "term_util.m"
          {
#line 431 "term_util.m"
            MR_Word transform_hlds__term_util__V_13_13;
#line 431 "term_util.m"
            MR_Word transform_hlds__term_util__V_14_14;
#line 431 "term_util.m"
            MR_Word transform_hlds__term_util__V_15_15;

#line 432 "term_util.m"
            {
#line 432 "term_util.m"
              transform_hlds__term_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 0) = ((MR_Box) (transform_hlds__term_util__Context_2));
#line 432 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 432 "term_util.m"
            }
#line 432 "term_util.m"
            {
#line 432 "term_util.m"
              transform_hlds__term_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 0) = ((MR_Box) (transform_hlds__term_util__V_15_15));
#line 432 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "term_util.m"
            }
#line 432 "term_util.m"
            {
#line 432 "term_util.m"
              transform_hlds__term_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_13_13, 0) = ((MR_Box) (transform_hlds__term_util__V_14_14));
#line 432 "term_util.m"
            }
#line 432 "term_util.m"
            {
#line 432 "term_util.m"
              MR_Word base;
#line 432 "term_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "term_util.m"
              *transform_hlds__term_util__HeadVar__3_3 = base;
#line 432 "term_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__V_13_13));
#line 432 "term_util.m"
            }
#line 431 "term_util.m"
          }
#line 429 "term_util.m"
      }
#line 429 "term_util.m"
  }
#line 182 "term_util.m"
}

#line 176 "term_util.m"
void MR_CALL 
transform_hlds__term_util__add_context_to_termination_info_3_p_0(
#line 176 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 176 "term_util.m"
  MR_Word transform_hlds__term_util__Context_2,
#line 176 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 176 "term_util.m"
{
#line 423 "term_util.m"
  {
#line 423 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 423 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 423 "term_util.m"
    else
#line 423 "term_util.m"
      {
#line 423 "term_util.m"
        MR_Word transform_hlds__term_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 423 "term_util.m"
        if (((MR_tag((MR_Word) transform_hlds__term_util__V_18_18)) == (MR_mktag((MR_Integer) 1))))
#line 426 "term_util.m"
          {
#line 426 "term_util.m"
            MR_Word transform_hlds__term_util__V_13_13;
#line 426 "term_util.m"
            MR_Word transform_hlds__term_util__V_14_14;
#line 426 "term_util.m"
            MR_Word transform_hlds__term_util__V_15_15;

#line 427 "term_util.m"
            {
#line 427 "term_util.m"
              transform_hlds__term_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 427 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 0) = ((MR_Box) (transform_hlds__term_util__Context_2));
#line 427 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 427 "term_util.m"
            }
#line 427 "term_util.m"
            {
#line 427 "term_util.m"
              transform_hlds__term_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 0) = ((MR_Box) (transform_hlds__term_util__V_15_15));
#line 427 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "term_util.m"
            }
#line 427 "term_util.m"
            {
#line 427 "term_util.m"
              transform_hlds__term_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 427 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_13_13, 0) = ((MR_Box) (transform_hlds__term_util__V_14_14));
#line 427 "term_util.m"
            }
#line 427 "term_util.m"
            {
#line 427 "term_util.m"
              MR_Word base;
#line 427 "term_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 427 "term_util.m"
              *transform_hlds__term_util__HeadVar__3_3 = base;
#line 427 "term_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__V_13_13));
#line 427 "term_util.m"
            }
#line 426 "term_util.m"
          }
#line 423 "term_util.m"
        else
#line 424 "term_util.m"
          {
#line 425 "term_util.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 425 "term_util.m"
            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_util_scalar_common_3[1]);
#line 424 "term_util.m"
          }
#line 423 "term_util.m"
      }
#line 423 "term_util.m"
  }
#line 176 "term_util.m"
}

#line 168 "term_util.m"
void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_termination_info_4_p_0(
#line 168 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 168 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 168 "term_util.m"
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 168 "term_util.m"
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
#line 168 "term_util.m"
{
#line 404 "term_util.m"
  while (MR_TRUE)
#line 404 "term_util.m"
    {
#line 404 "term_util.m"
      /* tailcall optimized into a loop */
#line 404 "term_util.m"
      {
#line 404 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 404 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "term_util.m"
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 404 "term_util.m"
        else
#line 405 "term_util.m"
          {
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
#line 405 "term_util.m"
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable0_15;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo0_16;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable0_17;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo0_18;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo_19;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable_20;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo_21;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable_22;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__V_25_25;
#line 405 "term_util.m"
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 408 "term_util.m"
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
#line 410 "term_util.m"
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

#line 407 "term_util.m"
            {
#line 407 "term_util.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
#line 1838 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1840 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 408 "term_util.m"
            {
#line 408 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
#line 408 "term_util.m"
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
#line 409 "term_util.m"
            {
#line 409 "term_util.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
#line 1854 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 410 "term_util.m"
            {
#line 410 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, transform_hlds__term_util__ProcId_14, &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
#line 410 "term_util.m"
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
#line 412 "term_util.m"
            {
#line 412 "term_util.m"
              transform_hlds__term_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 412 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_25_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
#line 412 "term_util.m"
            }
#line 412 "term_util.m"
            {
#line 412 "term_util.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__term_util__V_25_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
#line 415 "term_util.m"
            {
#line 415 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcId_14, ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
#line 416 "term_util.m"
            {
#line 416 "term_util.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
#line 417 "term_util.m"
            {
#line 417 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
#line 418 "term_util.m"
            {
#line 418 "term_util.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 419 "term_util.m"
            /* direct tailcall eliminated */
#line 419 "term_util.m"
            {
#line 419 "term_util.m"
              MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__PPIds_10;
#line 419 "term_util.m"
              MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

#line 419 "term_util.m"
              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 419 "term_util.m"
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 419 "term_util.m"
            }
#line 419 "term_util.m"
            continue;
#line 405 "term_util.m"
          }
#line 404 "term_util.m"
      }
#line 404 "term_util.m"
      break;
#line 404 "term_util.m"
    }
#line 168 "term_util.m"
}

#line 162 "term_util.m"
void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_p_0(
#line 162 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 162 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 162 "term_util.m"
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 162 "term_util.m"
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
#line 162 "term_util.m"
{
#line 388 "term_util.m"
  while (MR_TRUE)
#line 388 "term_util.m"
    {
#line 388 "term_util.m"
      /* tailcall optimized into a loop */
#line 388 "term_util.m"
      {
#line 388 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 388 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "term_util.m"
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 388 "term_util.m"
        else
#line 389 "term_util.m"
          {
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
#line 389 "term_util.m"
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable0_15;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo0_16;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable0_17;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo0_18;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo_19;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable_20;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo_21;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable_22;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__V_25_25;
#line 389 "term_util.m"
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 392 "term_util.m"
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
#line 394 "term_util.m"
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

#line 391 "term_util.m"
            {
#line 391 "term_util.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
#line 2000 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2002 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 392 "term_util.m"
            {
#line 392 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
#line 392 "term_util.m"
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
#line 393 "term_util.m"
            {
#line 393 "term_util.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
#line 2016 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 394 "term_util.m"
            {
#line 394 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, transform_hlds__term_util__ProcId_14, &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
#line 394 "term_util.m"
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
#line 396 "term_util.m"
            {
#line 396 "term_util.m"
              transform_hlds__term_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 396 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_25_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
#line 396 "term_util.m"
            }
#line 396 "term_util.m"
            {
#line 396 "term_util.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__term_util__V_25_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
#line 398 "term_util.m"
            {
#line 398 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcId_14, ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
#line 399 "term_util.m"
            {
#line 399 "term_util.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
#line 400 "term_util.m"
            {
#line 400 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
#line 401 "term_util.m"
            {
#line 401 "term_util.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 402 "term_util.m"
            /* direct tailcall eliminated */
#line 402 "term_util.m"
            {
#line 402 "term_util.m"
              MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__PPIds_10;
#line 402 "term_util.m"
              MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

#line 402 "term_util.m"
              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 402 "term_util.m"
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 402 "term_util.m"
            }
#line 402 "term_util.m"
            continue;
#line 389 "term_util.m"
          }
#line 388 "term_util.m"
      }
#line 388 "term_util.m"
      break;
#line 388 "term_util.m"
    }
#line 162 "term_util.m"
}

#line 154 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__is_solver_init_wrapper_pred_2_p_0(
#line 154 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 154 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 154 "term_util.m"
{
#line 380 "term_util.m"
  {
#line 380 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 380 "term_util.m"
    MR_Word transform_hlds__term_util__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "term_util.m"
    MR_Word transform_hlds__term_util__PredInfo_6;
#line 380 "term_util.m"
    MR_Word transform_hlds__term_util__PredOrigin_7;
#line 380 "term_util.m"
    MR_Word transform_hlds__term_util__SpecialPredId_8;
#line 380 "term_util.m"
    MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 383 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;

#line 381 "term_util.m"
    {
#line 381 "term_util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PredId_4, &transform_hlds__term_util__PredInfo_6);
    }
#line 382 "term_util.m"
    {
#line 382 "term_util.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__term_util__PredInfo_6, &transform_hlds__term_util__PredOrigin_7);
    }
#line 383 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__PredOrigin_7)) == (MR_mktag((MR_Integer) 0)));
#line 383 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 383 "term_util.m"
      {
#line 383 "term_util.m"
        transform_hlds__term_util__SpecialPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PredOrigin_7, (MR_Integer) 0)));
#line 383 "term_util.m"
        transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PredOrigin_7, (MR_Integer) 1)));
#line 384 "term_util.m"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__SpecialPredId_8 == (MR_Integer) 3);
#line 383 "term_util.m"
      }
#line 380 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 380 "term_util.m"
  }
#line 154 "term_util.m"
}

#line 148 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(
#line 148 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 148 "term_util.m"
  MR_Word transform_hlds__term_util__PredInfo_5,
#line 148 "term_util.m"
  MR_Word transform_hlds__term_util__ProcInfo_6)
#line 148 "term_util.m"
{
#line 356 "term_util.m"
  {
#line 356 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 356 "term_util.m"
    MR_Word transform_hlds__term_util__TypeList_7;
#line 356 "term_util.m"
    MR_Word transform_hlds__term_util__ModeList_8;

#line 357 "term_util.m"
    {
#line 357 "term_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__term_util__PredInfo_5, &transform_hlds__term_util__TypeList_7);
    }
#line 358 "term_util.m"
    {
#line 358 "term_util.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__ModeList_8);
    }
#line 359 "term_util.m"
    {
#line 359 "term_util.m"
      transform_hlds__term_util__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(transform_hlds__term_util__TypeList_7, transform_hlds__term_util__ModeList_8, transform_hlds__term_util__ModuleInfo_4);
    }
#line 356 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 356 "term_util.m"
  }
#line 148 "term_util.m"
}

#line 141 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__pred_proc_id_terminates_2_p_0(
#line 141 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 141 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_4)
#line 141 "term_util.m"
{
#line 349 "term_util.m"
  {
#line 349 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 349 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_6;
#line 349 "term_util.m"
    MR_Word transform_hlds__term_util__TerminationInfo_7;
#line 349 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;
#line 350 "term_util.m"
    MR_Word transform_hlds__term_util__V_5_5;

#line 350 "term_util.m"
    {
#line 350 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__V_5_5, &transform_hlds__term_util__ProcInfo_6);
    }
#line 351 "term_util.m"
    {
#line 351 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__TerminationInfo_7);
    }
#line 352 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__TerminationInfo_7)) == (MR_mktag((MR_Integer) 1)));
#line 352 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 352 "term_util.m"
      {
#line 352 "term_util.m"
        transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__TerminationInfo_7, (MR_Integer) 0)));
#line 352 "term_util.m"
        transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 352 "term_util.m"
      }
#line 349 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 349 "term_util.m"
  }
#line 141 "term_util.m"
}

#line 135 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__is_termination_known_2_p_0(
#line 135 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 135 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_4)
#line 135 "term_util.m"
{
#line 345 "term_util.m"
  {
#line 345 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 345 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_6;
#line 345 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;
#line 346 "term_util.m"
    MR_Word transform_hlds__term_util__V_5_5;
#line 347 "term_util.m"
    MR_Word transform_hlds__term_util__V_14_14;

#line 346 "term_util.m"
    {
#line 346 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__V_5_5, &transform_hlds__term_util__ProcInfo_6);
    }
#line 347 "term_util.m"
    {
#line 347 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__V_9_9);
    }
#line 347 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 347 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 347 "term_util.m"
      transform_hlds__term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_9_9, (MR_Integer) 0)));
#line 345 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 345 "term_util.m"
  }
#line 135 "term_util.m"
}

#line 128 "term_util.m"
void MR_CALL 
transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(
#line 128 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 128 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_5,
#line 128 "term_util.m"
  MR_Word * transform_hlds__term_util__MaybeArgSize_6)
#line 128 "term_util.m"
{
#line 341 "term_util.m"
  {
#line 341 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 341 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_8;
#line 342 "term_util.m"
    MR_Word transform_hlds__term_util__V_7_7;

#line 342 "term_util.m"
    {
#line 342 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__V_7_7, &transform_hlds__term_util__ProcInfo_8);
    }
#line 343 "term_util.m"
    {
#line 343 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeArgSize_6);
    }
#line 341 "term_util.m"
  }
#line 128 "term_util.m"
}

#line 125 "term_util.m"
void MR_CALL 
transform_hlds__term_util__lookup_proc_termination_info_3_p_0(
#line 125 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 125 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_5,
#line 125 "term_util.m"
  MR_Word * transform_hlds__term_util__MaybeTermination_6)
#line 125 "term_util.m"
{
#line 337 "term_util.m"
  {
#line 337 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 337 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_8;
#line 338 "term_util.m"
    MR_Word transform_hlds__term_util__V_7_7;

#line 338 "term_util.m"
    {
#line 338 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__V_7_7, &transform_hlds__term_util__ProcInfo_8);
    }
#line 339 "term_util.m"
    {
#line 339 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeTermination_6);
    }
#line 337 "term_util.m"
  }
#line 125 "term_util.m"
}

#line 121 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__horder_vars_2_p_0(
#line 121 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 121 "term_util.m"
  MR_Word transform_hlds__term_util__VarType_5)
#line 121 "term_util.m"
{
#line 327 "term_util.m"
  while (MR_TRUE)
#line 327 "term_util.m"
    {
#line 327 "term_util.m"
      /* tailcall optimized into a loop */
#line 327 "term_util.m"
      {
#line 327 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 327 "term_util.m"
        MR_Word transform_hlds__term_util__Arg_3;
#line 327 "term_util.m"
        MR_Word transform_hlds__term_util__Args_4;

#line 327 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 327 "term_util.m"
          {
#line 327 "term_util.m"
            transform_hlds__term_util__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 327 "term_util.m"
            transform_hlds__term_util__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 329 "term_util.m"
            {
#line 329 "term_util.m"
              MR_Word transform_hlds__term_util__Type_6;

#line 329 "term_util.m"
              {
#line 329 "term_util.m"
                hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_util__VarType_5, transform_hlds__term_util__Arg_3, &transform_hlds__term_util__Type_6);
              }
#line 330 "term_util.m"
              {
#line 330 "term_util.m"
                transform_hlds__term_util__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_util__Type_6);
              }
#line 329 "term_util.m"
            }
#line 331 "term_util.m"
            if (!(transform_hlds__term_util__succeeded))
#line 332 "term_util.m"
              {
#line 332 "term_util.m"
                /* direct tailcall eliminated */
#line 332 "term_util.m"
                {
#line 332 "term_util.m"
                  MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__Args_4;

#line 332 "term_util.m"
                  transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 332 "term_util.m"
                }
#line 332 "term_util.m"
                continue;
#line 332 "term_util.m"
              }
#line 327 "term_util.m"
          }
#line 327 "term_util.m"
        return transform_hlds__term_util__succeeded;
#line 327 "term_util.m"
      }
#line 327 "term_util.m"
      break;
#line 327 "term_util.m"
    }
#line 121 "term_util.m"
}

#line 114 "term_util.m"
void MR_CALL 
transform_hlds__term_util__remove_unused_args_4_p_0(
#line 114 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 114 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 114 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 114 "term_util.m"
  MR_Word * transform_hlds__term_util__Vars_4)
#line 114 "term_util.m"
{
#line 307 "term_util.m"
  while (MR_TRUE)
#line 307 "term_util.m"
    {
#line 307 "term_util.m"
      /* tailcall optimized into a loop */
#line 307 "term_util.m"
      {
#line 307 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 307 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "term_util.m"
          if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "term_util.m"
            *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 307 "term_util.m"
          else
#line 308 "term_util.m"
            {
#line 308 "term_util.m"
              *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 309 "term_util.m"
              {
#line 309 "term_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
#line 309 "term_util.m"
                return;
              }
#line 308 "term_util.m"
            }
#line 307 "term_util.m"
        else
#line 307 "term_util.m"
          {
#line 307 "term_util.m"
            MR_Word transform_hlds__term_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 307 "term_util.m"
            MR_Word transform_hlds__term_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 307 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "term_util.m"
              {
#line 310 "term_util.m"
                *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 311 "term_util.m"
                {
#line 311 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
#line 311 "term_util.m"
                  return;
                }
#line 310 "term_util.m"
              }
#line 307 "term_util.m"
            else
#line 312 "term_util.m"
              {
#line 312 "term_util.m"
                MR_Word transform_hlds__term_util__UsedVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 312 "term_util.m"
                MR_Word transform_hlds__term_util__UsedVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));

#line 317 "term_util.m"
#line 317 "term_util.m"
                switch (transform_hlds__term_util__UsedVar_21) {
#line 317 "term_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 317 "term_util.m"
                  case (MR_Integer) 0:
#line 320 "term_util.m"
                    {
#line 320 "term_util.m"
                      MR_Word transform_hlds__term_util__Vars1_24;

#line 321 "term_util.m"
                      {
#line 321 "term_util.m"
                        mercury__bag__delete_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_27_27)), transform_hlds__term_util__HeadVar__1_1, &transform_hlds__term_util__Vars1_24);
                      }
#line 322 "term_util.m"
                      /* direct tailcall eliminated */
#line 322 "term_util.m"
                      {
#line 322 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__Vars1_24;
#line 322 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__V_26_26;
#line 322 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__3__tmp_copy_3 = transform_hlds__term_util__UsedVars_22;

#line 322 "term_util.m"
                        transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__HeadVar__3__tmp_copy_3;
#line 322 "term_util.m"
                        transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 322 "term_util.m"
                        transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 322 "term_util.m"
                      }
#line 322 "term_util.m"
                      continue;
#line 320 "term_util.m"
                    }
#line 317 "term_util.m"
                    break;
#line 317 "term_util.m"
                  case (MR_Integer) 1:
#line 315 "term_util.m"
                    {
#line 315 "term_util.m"
                      /* direct tailcall eliminated */
#line 315 "term_util.m"
                      {
#line 315 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__V_26_26;
#line 315 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__3__tmp_copy_3 = transform_hlds__term_util__UsedVars_22;

#line 315 "term_util.m"
                        transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__HeadVar__3__tmp_copy_3;
#line 315 "term_util.m"
                        transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 315 "term_util.m"
                      }
#line 315 "term_util.m"
                      continue;
#line 315 "term_util.m"
                    }
#line 317 "term_util.m"
                    break;
#line 317 "term_util.m"
                }
#line 312 "term_util.m"
              }
#line 307 "term_util.m"
          }
#line 307 "term_util.m"
      }
#line 307 "term_util.m"
      break;
#line 307 "term_util.m"
    }
#line 114 "term_util.m"
}

#line 104 "term_util.m"
void MR_CALL 
transform_hlds__term_util__make_bool_list_3_p_0(
#line 104 "term_util.m"
  MR_Word transform_hlds__term_util__TypeInfo_for__T_13,
#line 104 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVars0_4,
#line 104 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_5,
#line 104 "term_util.m"
  MR_Word * transform_hlds__term_util__Out_6)
#line 104 "term_util.m"
{
#line 290 "term_util.m"
  {
#line 290 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 290 "term_util.m"
    MR_Integer transform_hlds__term_util__Arity_7;
#line 290 "term_util.m"
    MR_Word transform_hlds__term_util__HeadVars_9;
#line 292 "term_util.m"
    MR_Word transform_hlds__term_util__HeadVars1_8;

#line 291 "term_util.m"
    {
#line 291 "term_util.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_util__Bools_5, &transform_hlds__term_util__Arity_7);
    }
#line 292 "term_util.m"
    {
#line 292 "term_util.m"
      transform_hlds__term_util__succeeded = mercury__list__drop_3_p_0(transform_hlds__term_util__TypeInfo_for__T_13, transform_hlds__term_util__Arity_7, transform_hlds__term_util__HeadVars0_4, &transform_hlds__term_util__HeadVars1_8);
    }
#line 292 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 293 "term_util.m"
      transform_hlds__term_util__HeadVars_9 = transform_hlds__term_util__HeadVars1_8;
#line 292 "term_util.m"
    else
#line 295 "term_util.m"
      {
#line 295 "term_util.m"
        {
#line 295 "term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.make_bool_list\'/3", (MR_String) "unmatched variables");
#line 295 "term_util.m"
          return;
        }
#line 295 "term_util.m"
      }
#line 297 "term_util.m"
    {
#line 297 "term_util.m"
      transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__HeadVars_9, transform_hlds__term_util__Bools_5, transform_hlds__term_util__Out_6);
    }
#line 290 "term_util.m"
  }
#line 104 "term_util.m"
}

#line 89 "term_util.m"
void MR_CALL 
transform_hlds__term_util__split_unification_vars_5_p_0(
#line 89 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 89 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 89 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 89 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 89 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
#line 89 "term_util.m"
{
#line 260 "term_util.m"
  {
#line 260 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 260 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "term_util.m"
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "term_util.m"
        {
#line 261 "term_util.m"
          {
#line 261 "term_util.m"
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], transform_hlds__term_util__HeadVar__4_4);
          }
#line 260 "term_util.m"
          *transform_hlds__term_util__HeadVar__5_5 = *transform_hlds__term_util__HeadVar__4_4;
#line 260 "term_util.m"
        }
#line 260 "term_util.m"
      else
#line 262 "term_util.m"
        {
#line 263 "term_util.m"
          {
#line 263 "term_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
#line 263 "term_util.m"
            return;
          }
#line 262 "term_util.m"
        }
#line 260 "term_util.m"
    else
#line 260 "term_util.m"
      {
#line 260 "term_util.m"
        MR_Word transform_hlds__term_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "term_util.m"
        MR_Word transform_hlds__term_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 260 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "term_util.m"
          {
#line 265 "term_util.m"
            {
#line 265 "term_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
#line 265 "term_util.m"
              return;
            }
#line 264 "term_util.m"
          }
#line 260 "term_util.m"
        else
#line 267 "term_util.m"
          {
#line 267 "term_util.m"
            MR_Word transform_hlds__term_util__UniMode_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 267 "term_util.m"
            MR_Word transform_hlds__term_util__UniModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 267 "term_util.m"
            MR_Word transform_hlds__term_util__InVars0_31;
#line 267 "term_util.m"
            MR_Word transform_hlds__term_util__OutVars0_32;
#line 267 "term_util.m"
            MR_Word transform_hlds__term_util__ArgInit_34;
#line 267 "term_util.m"
            MR_Word transform_hlds__term_util__ArgFinal_36;
#line 267 "term_util.m"
            MR_Word transform_hlds__term_util__V_37_37;
#line 267 "term_util.m"
            MR_Word transform_hlds__term_util__V_38_38;
#line 269 "term_util.m"
            MR_Word transform_hlds__term_util___VarInit_33;
#line 269 "term_util.m"
            MR_Word transform_hlds__term_util___VarFinal_35;

#line 268 "term_util.m"
            {
#line 268 "term_util.m"
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_42_42, transform_hlds__term_util__UniModes_28, &transform_hlds__term_util__InVars0_31, &transform_hlds__term_util__OutVars0_32);
            }
#line 269 "term_util.m"
            transform_hlds__term_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__UniMode_27, (MR_Integer) 0)));
#line 269 "term_util.m"
            transform_hlds__term_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__UniMode_27, (MR_Integer) 1)));
#line 269 "term_util.m"
            transform_hlds__term_util___VarInit_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_37_37, (MR_Integer) 0)));
#line 269 "term_util.m"
            transform_hlds__term_util__ArgInit_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_37_37, (MR_Integer) 1)));
#line 269 "term_util.m"
            transform_hlds__term_util___VarFinal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_38_38, (MR_Integer) 0)));
#line 269 "term_util.m"
            transform_hlds__term_util__ArgFinal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_38_38, (MR_Integer) 1)));
#line 271 "term_util.m"
            {
#line 271 "term_util.m"
              transform_hlds__term_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
            }
#line 270 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 274 "term_util.m"
              {
#line 274 "term_util.m"
                {
#line 274 "term_util.m"
                  mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_43_43)), transform_hlds__term_util__InVars0_31, transform_hlds__term_util__HeadVar__4_4);
                }
#line 275 "term_util.m"
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
#line 274 "term_util.m"
              }
#line 270 "term_util.m"
            else
#line 276 "term_util.m"
              {
#line 277 "term_util.m"
                {
#line 277 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
                }
#line 277 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 278 "term_util.m"
                  {
#line 278 "term_util.m"
                    transform_hlds__term_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgFinal_36);
                  }
#line 276 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 281 "term_util.m"
                  {
#line 281 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
#line 282 "term_util.m"
                    {
#line 282 "term_util.m"
                      mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_43_43)), transform_hlds__term_util__OutVars0_32, transform_hlds__term_util__HeadVar__5_5);
                    }
#line 281 "term_util.m"
                  }
#line 276 "term_util.m"
                else
#line 284 "term_util.m"
                  {
#line 284 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
#line 285 "term_util.m"
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
#line 284 "term_util.m"
                  }
#line 276 "term_util.m"
              }
#line 267 "term_util.m"
          }
#line 260 "term_util.m"
      }
#line 260 "term_util.m"
  }
#line 89 "term_util.m"
}

#line 83 "term_util.m"
void MR_CALL 
transform_hlds__term_util__partition_call_args_5_p_0(
#line 83 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_6,
#line 83 "term_util.m"
  MR_Word transform_hlds__term_util__ArgModes_7,
#line 83 "term_util.m"
  MR_Word transform_hlds__term_util__Args_8,
#line 83 "term_util.m"
  MR_Word * transform_hlds__term_util__InVarsBag_9,
#line 83 "term_util.m"
  MR_Word * transform_hlds__term_util__OutVarsBag_10)
#line 83 "term_util.m"
{
#line 216 "term_util.m"
  {
#line 216 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 216 "term_util.m"
    MR_Word transform_hlds__term_util__TypeInfo_13_13;
#line 216 "term_util.m"
    MR_Word transform_hlds__term_util__InVars_11;
#line 216 "term_util.m"
    MR_Word transform_hlds__term_util__OutVars_12;

#line 217 "term_util.m"
    {
#line 217 "term_util.m"
      transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_6, transform_hlds__term_util__ArgModes_7, transform_hlds__term_util__Args_8, &transform_hlds__term_util__InVars_11, &transform_hlds__term_util__OutVars_12);
    }
#line 2864 "transform_hlds.term_util.c"
    transform_hlds__term_util__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_util_scalar_common_1[0];
#line 218 "term_util.m"
    {
#line 218 "term_util.m"
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__InVars_11, transform_hlds__term_util__InVarsBag_9);
    }
#line 219 "term_util.m"
    {
#line 219 "term_util.m"
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__OutVars_12, transform_hlds__term_util__OutVarsBag_10);
    }
#line 216 "term_util.m"
  }
#line 83 "term_util.m"
}

void mercury__transform_hlds__term_util__init(void)
{
}

void mercury__transform_hlds__term_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_arg_size_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_pass_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_termination_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_used_args_0);
}

void mercury__transform_hlds__term_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_util. */
