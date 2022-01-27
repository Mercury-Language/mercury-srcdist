/*
** Automatically generated from `term_util.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 143 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 146 "transform_hlds.term_util.c"
static const MR_PseudoTypeInfo transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0[3];

#line 149 "transform_hlds.term_util.c"
static const MR_DuFunctorDesc transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0;

#line 152 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0[1];

#line 155 "transform_hlds.term_util.c"
static const MR_DuPtagLayout transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0[1];

#line 158 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0[1];

#line 161 "transform_hlds.term_util.c"
static const MR_Integer transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0[1];

#line 164 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 167 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0;

#line 170 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 173 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0_10001(
#line 176 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 178 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 181 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0_10001(
#line 184 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 186 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 188 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 191 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0_10001(
#line 194 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 196 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 199 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0_10001(
#line 202 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 204 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 206 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 209 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0_10001(
#line 212 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 214 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 217 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0_10001(
#line 220 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 222 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 224 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 227 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0_10001(
#line 230 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 232 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 235 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0_10001(
#line 238 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 240 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 242 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 269 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 269 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 269 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_2,
#line 269 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3);

#line 397 "term_util.m"
static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
#line 397 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 397 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 397 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3);

#line 191 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
#line 191 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 191 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 191 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 191 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 191 "term_util.m"
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
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 349 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 357 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1,
  {
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
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
  {     (MR_PseudoTypeInfo) &transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 },
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
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
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
  {     (MR_PseudoTypeInfo) &transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 },
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

#line 269 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 269 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 269 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_2,
#line 269 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 269 "term_util.m"
{
#line 271 "term_util.m"
  {
#line 271 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 271 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 271 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__Bools_2;
#line 271 "term_util.m"
    else
#line 272 "term_util.m"
      {
#line 272 "term_util.m"
        MR_Word transform_hlds__term_util__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 272 "term_util.m"
        MR_Word transform_hlds__term_util__Out_8;
#line 272 "term_util.m"
        MR_Box transform_hlds__term_util__V_5_5 = (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0));

#line 273 "term_util.m"
        {
#line 273 "term_util.m"
          transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__Vars_6, transform_hlds__term_util__Bools_2, &transform_hlds__term_util__Out_8);
        }
#line 272 "term_util.m"
        {
#line 272 "term_util.m"
          MR_Word base;
#line 272 "term_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "term_util.m"
          *transform_hlds__term_util__HeadVar__3_3 = base;
#line 272 "term_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 272 "term_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__Out_8));
#line 272 "term_util.m"
        }
#line 272 "term_util.m"
      }
#line 271 "term_util.m"
  }
#line 269 "term_util.m"
}

#line 66 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0(
#line 66 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 66 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 66 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 66 "term_util.m"
{
#line 66 "term_util.m"
  {
#line 66 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 66 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 66 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 66 "term_util.m"
    {
#line 66 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
#line 66 "term_util.m"
      return;
    }
#line 66 "term_util.m"
  }
#line 66 "term_util.m"
}

#line 66 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0(
#line 66 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 66 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 66 "term_util.m"
{
#line 66 "term_util.m"
  {
#line 66 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 66 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 66 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 66 "term_util.m"
    {
#line 66 "term_util.m"
      return transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 66 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 66 "term_util.m"
  }
#line 66 "term_util.m"
}

#line 60 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0(
#line 60 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 60 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 60 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 60 "term_util.m"
{
#line 60 "term_util.m"
  {
#line 60 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 60 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 60 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 60 "term_util.m"
    {
#line 60 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
#line 60 "term_util.m"
      return;
    }
#line 60 "term_util.m"
  }
#line 60 "term_util.m"
}

#line 60 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0(
#line 60 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 60 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 60 "term_util.m"
{
#line 60 "term_util.m"
  {
#line 60 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 60 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 60 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 60 "term_util.m"
    {
#line 60 "term_util.m"
      return transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 60 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 60 "term_util.m"
  }
#line 60 "term_util.m"
}

#line 68 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0(
#line 68 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 68 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 68 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 68 "term_util.m"
{
#line 68 "term_util.m"
  {
#line 68 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 68 "term_util.m"
    MR_Integer transform_hlds__term_util__CastX_12 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;
#line 68 "term_util.m"
    MR_Integer transform_hlds__term_util__CastY_13 = (MR_Integer) transform_hlds__term_util__HeadVar__3_3;

#line 68 "term_util.m"
    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_12 == transform_hlds__term_util__CastY_13);
#line 68 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 926 "transform_hlds.term_util.c"
      *transform_hlds__term_util__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "term_util.m"
    else
#line 68 "term_util.m"
      {
#line 68 "term_util.m"
        MR_Word transform_hlds__term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "term_util.m"
        MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "term_util.m"
        MR_Integer transform_hlds__term_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "term_util.m"
        MR_Word transform_hlds__term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "term_util.m"
        MR_Integer transform_hlds__term_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 2)));
#line 68 "term_util.m"
        MR_Word transform_hlds__term_util__V_10_10;

#line 68 "term_util.m"
        {
#line 68 "term_util.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_util__V_10_10, transform_hlds__term_util__V_4_4, transform_hlds__term_util__V_7_7);
        }
#line 952 "transform_hlds.term_util.c"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_10_10 == (MR_Integer) 0);
#line 68 "term_util.m"
        transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
#line 68 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 68 "term_util.m"
          *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__V_10_10;
#line 68 "term_util.m"
        else
#line 68 "term_util.m"
          {
#line 68 "term_util.m"
            MR_Word transform_hlds__term_util__V_11_11;

#line 68 "term_util.m"
            {
#line 68 "term_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_util__V_11_11, transform_hlds__term_util__V_5_5, transform_hlds__term_util__V_8_8);
            }
#line 972 "transform_hlds.term_util.c"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_11_11 == (MR_Integer) 0);
#line 68 "term_util.m"
            transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
#line 68 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 68 "term_util.m"
              *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__V_11_11;
#line 68 "term_util.m"
            else
#line 68 "term_util.m"
              {
#line 68 "term_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_util__HeadVar__1_1, transform_hlds__term_util__V_6_6, transform_hlds__term_util__V_9_9);
#line 68 "term_util.m"
                return;
              }
#line 68 "term_util.m"
          }
#line 68 "term_util.m"
      }
#line 68 "term_util.m"
  }
#line 68 "term_util.m"
}

#line 68 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0(
#line 68 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 68 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 68 "term_util.m"
{
#line 68 "term_util.m"
  {
#line 68 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 68 "term_util.m"
    MR_Integer transform_hlds__term_util__CastX_9 = (MR_Integer) transform_hlds__term_util__HeadVar__1_1;
#line 68 "term_util.m"
    MR_Integer transform_hlds__term_util__CastY_10 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;

#line 68 "term_util.m"
    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_9 == transform_hlds__term_util__CastY_10);
#line 68 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 68 "term_util.m"
      transform_hlds__term_util__succeeded = MR_TRUE;
#line 68 "term_util.m"
    else
#line 68 "term_util.m"
      {
#line 68 "term_util.m"
        MR_Word transform_hlds__term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "term_util.m"
        MR_Integer transform_hlds__term_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "term_util.m"
        MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 2)));
#line 68 "term_util.m"
        MR_Word transform_hlds__term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "term_util.m"
        MR_Integer transform_hlds__term_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));

#line 1039 "transform_hlds.term_util.c"
        {
#line 1041 "transform_hlds.term_util.c"
          transform_hlds__term_util__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_util__V_3_3, transform_hlds__term_util__V_6_6);
        }
#line 68 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 68 "term_util.m"
          {
#line 1048 "transform_hlds.term_util.c"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_4_4 == transform_hlds__term_util__V_7_7);
#line 68 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 1052 "transform_hlds.term_util.c"
              transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_5_5 == transform_hlds__term_util__V_8_8);
#line 68 "term_util.m"
          }
#line 68 "term_util.m"
      }
#line 68 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 68 "term_util.m"
  }
#line 68 "term_util.m"
}

#line 58 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0(
#line 58 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 58 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 58 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 58 "term_util.m"
{
#line 58 "term_util.m"
  {
#line 58 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 58 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 58 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 58 "term_util.m"
    {
#line 58 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
#line 58 "term_util.m"
      return;
    }
#line 58 "term_util.m"
  }
#line 58 "term_util.m"
}

#line 58 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0(
#line 58 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 58 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 58 "term_util.m"
{
#line 58 "term_util.m"
  {
#line 58 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 58 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 58 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 58 "term_util.m"
    {
#line 58 "term_util.m"
      return transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 58 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 58 "term_util.m"
  }
#line 58 "term_util.m"
}

#line 397 "term_util.m"
static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
#line 397 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 397 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 397 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3)
#line 397 "term_util.m"
{
#line 400 "term_util.m"
  while (MR_TRUE)
#line 400 "term_util.m"
    {
#line 400 "term_util.m"
      /* tailcall optimized into a loop */
#line 400 "term_util.m"
      {
#line 400 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 400 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "term_util.m"
          {
#line 400 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "term_util.m"
              {
#line 400 "term_util.m"
              }
#line 400 "term_util.m"
            else
#line 401 "term_util.m"
              {
#line 402 "term_util.m"
                {
#line 402 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
#line 401 "term_util.m"
              }
#line 400 "term_util.m"
            transform_hlds__term_util__succeeded = MR_TRUE;
#line 400 "term_util.m"
          }
#line 400 "term_util.m"
        else
#line 400 "term_util.m"
          {
#line 400 "term_util.m"
            MR_Word transform_hlds__term_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 400 "term_util.m"
            MR_Word transform_hlds__term_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 400 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "term_util.m"
              {
#line 404 "term_util.m"
                {
#line 404 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
#line 403 "term_util.m"
                transform_hlds__term_util__succeeded = MR_TRUE;
#line 403 "term_util.m"
              }
#line 400 "term_util.m"
            else
#line 405 "term_util.m"
              {
#line 405 "term_util.m"
                MR_Word transform_hlds__term_util__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "term_util.m"
                MR_Word transform_hlds__term_util__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));

#line 406 "term_util.m"
                {
#line 406 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__Mode_19);
                }
#line 409 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 408 "term_util.m"
                  {
#line 408 "term_util.m"
                    /* direct tailcall eliminated */
#line 408 "term_util.m"
                    {
#line 408 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__V_22_22;
#line 408 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__Modes_20;

#line 408 "term_util.m"
                      transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 408 "term_util.m"
                      transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 408 "term_util.m"
                    }
#line 408 "term_util.m"
                    continue;
#line 408 "term_util.m"
                  }
#line 409 "term_util.m"
                else
#line 410 "term_util.m"
                  {
#line 410 "term_util.m"
                    {
#line 410 "term_util.m"
                      transform_hlds__term_util__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__V_23_23);
                    }
#line 410 "term_util.m"
                    if (transform_hlds__term_util__succeeded)
#line 411 "term_util.m"
                      {
#line 411 "term_util.m"
                        /* direct tailcall eliminated */
#line 411 "term_util.m"
                        {
#line 411 "term_util.m"
                          MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__V_22_22;
#line 411 "term_util.m"
                          MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__Modes_20;

#line 411 "term_util.m"
                          transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 411 "term_util.m"
                          transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 411 "term_util.m"
                        }
#line 411 "term_util.m"
                        continue;
#line 411 "term_util.m"
                      }
#line 410 "term_util.m"
                  }
#line 405 "term_util.m"
              }
#line 400 "term_util.m"
          }
#line 400 "term_util.m"
        return transform_hlds__term_util__succeeded;
#line 400 "term_util.m"
      }
#line 400 "term_util.m"
      break;
#line 400 "term_util.m"
    }
#line 397 "term_util.m"
}

#line 191 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
#line 191 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 191 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 191 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 191 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 191 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
#line 191 "term_util.m"
{
#line 194 "term_util.m"
  {
#line 194 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 194 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "term_util.m"
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "term_util.m"
        {
#line 194 "term_util.m"
          *transform_hlds__term_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "term_util.m"
          *transform_hlds__term_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "term_util.m"
        }
#line 194 "term_util.m"
      else
#line 195 "term_util.m"
        {
#line 196 "term_util.m"
          {
#line 196 "term_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
#line 196 "term_util.m"
            return;
          }
#line 195 "term_util.m"
        }
#line 194 "term_util.m"
    else
#line 194 "term_util.m"
      {
#line 194 "term_util.m"
        MR_Word transform_hlds__term_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 194 "term_util.m"
        MR_Word transform_hlds__term_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 194 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "term_util.m"
          {
#line 198 "term_util.m"
            {
#line 198 "term_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
#line 198 "term_util.m"
              return;
            }
#line 197 "term_util.m"
          }
#line 194 "term_util.m"
        else
#line 200 "term_util.m"
          {
#line 200 "term_util.m"
            MR_Word transform_hlds__term_util__Arg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 200 "term_util.m"
            MR_Word transform_hlds__term_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 200 "term_util.m"
            MR_Word transform_hlds__term_util__InputArgs1_30;
#line 200 "term_util.m"
            MR_Word transform_hlds__term_util__OutputArgs1_31;

#line 201 "term_util.m"
            {
#line 201 "term_util.m"
              transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_32_32, transform_hlds__term_util__Args_27, &transform_hlds__term_util__InputArgs1_30, &transform_hlds__term_util__OutputArgs1_31);
            }
#line 203 "term_util.m"
            {
#line 203 "term_util.m"
              transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_33_33);
            }
#line 206 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 204 "term_util.m"
              {
#line 204 "term_util.m"
                {
#line 204 "term_util.m"
                  MR_Word base;
#line 204 "term_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "term_util.m"
                  *transform_hlds__term_util__HeadVar__4_4 = base;
#line 204 "term_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
#line 204 "term_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__InputArgs1_30));
#line 204 "term_util.m"
                }
#line 205 "term_util.m"
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
#line 204 "term_util.m"
              }
#line 206 "term_util.m"
            else
#line 209 "term_util.m"
              {
#line 206 "term_util.m"
                {
#line 206 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_33_33);
                }
#line 209 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 207 "term_util.m"
                  {
#line 207 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
#line 208 "term_util.m"
                    {
#line 208 "term_util.m"
                      MR_Word base;
#line 208 "term_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "term_util.m"
                      *transform_hlds__term_util__HeadVar__5_5 = base;
#line 208 "term_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
#line 208 "term_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__OutputArgs1_31));
#line 208 "term_util.m"
                    }
#line 207 "term_util.m"
                  }
#line 209 "term_util.m"
                else
#line 210 "term_util.m"
                  {
#line 210 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
#line 211 "term_util.m"
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
#line 210 "term_util.m"
                  }
#line 209 "term_util.m"
              }
#line 200 "term_util.m"
          }
#line 194 "term_util.m"
      }
#line 194 "term_util.m"
  }
#line 191 "term_util.m"
}

#line 168 "term_util.m"
void MR_CALL 
transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(
#line 168 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 168 "term_util.m"
  MR_Word transform_hlds__term_util__Context_2,
#line 168 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 168 "term_util.m"
{
#line 364 "term_util.m"
  {
#line 364 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 364 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 364 "term_util.m"
    else
#line 364 "term_util.m"
      {
#line 364 "term_util.m"
        MR_Word transform_hlds__term_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 364 "term_util.m"
        if (((MR_tag((MR_Word) transform_hlds__term_util__V_18_18)) == (MR_mktag((MR_Integer) 0))))
#line 365 "term_util.m"
          {
#line 365 "term_util.m"
            MR_Word transform_hlds__term_util__V_9_9 = (MR_Word) transform_hlds__term_util__V_18_18;

#line 365 "term_util.m"
            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) transform_hlds__term_util__HeadVar__1_1;
#line 365 "term_util.m"
          }
#line 364 "term_util.m"
        else
#line 366 "term_util.m"
          {
#line 366 "term_util.m"
            MR_Word transform_hlds__term_util__V_13_13;
#line 366 "term_util.m"
            MR_Word transform_hlds__term_util__V_14_14;
#line 366 "term_util.m"
            MR_Word transform_hlds__term_util__V_15_15;

#line 367 "term_util.m"
            {
#line 367 "term_util.m"
              transform_hlds__term_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 367 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 1) = ((MR_Box) (transform_hlds__term_util__Context_2));
#line 367 "term_util.m"
            }
#line 367 "term_util.m"
            {
#line 367 "term_util.m"
              transform_hlds__term_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 0) = ((MR_Box) (transform_hlds__term_util__V_15_15));
#line 367 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "term_util.m"
            }
#line 367 "term_util.m"
            {
#line 367 "term_util.m"
              transform_hlds__term_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_13_13, 0) = ((MR_Box) (transform_hlds__term_util__V_14_14));
#line 367 "term_util.m"
            }
#line 367 "term_util.m"
            {
#line 367 "term_util.m"
              MR_Word base;
#line 367 "term_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "term_util.m"
              *transform_hlds__term_util__HeadVar__3_3 = base;
#line 367 "term_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__V_13_13));
#line 367 "term_util.m"
            }
#line 366 "term_util.m"
          }
#line 364 "term_util.m"
      }
#line 364 "term_util.m"
  }
#line 168 "term_util.m"
}

#line 162 "term_util.m"
void MR_CALL 
transform_hlds__term_util__add_context_to_termination_info_3_p_0(
#line 162 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 162 "term_util.m"
  MR_Word transform_hlds__term_util__Context_2,
#line 162 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 162 "term_util.m"
{
#line 358 "term_util.m"
  {
#line 358 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 358 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "term_util.m"
    else
#line 358 "term_util.m"
      {
#line 358 "term_util.m"
        MR_Word transform_hlds__term_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 358 "term_util.m"
        if (((MR_tag((MR_Word) transform_hlds__term_util__V_18_18)) == (MR_mktag((MR_Integer) 1))))
#line 361 "term_util.m"
          {
#line 361 "term_util.m"
            MR_Word transform_hlds__term_util__V_13_13;
#line 361 "term_util.m"
            MR_Word transform_hlds__term_util__V_14_14;
#line 361 "term_util.m"
            MR_Word transform_hlds__term_util__V_15_15;

#line 362 "term_util.m"
            {
#line 362 "term_util.m"
              transform_hlds__term_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 362 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 362 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 1) = ((MR_Box) (transform_hlds__term_util__Context_2));
#line 362 "term_util.m"
            }
#line 362 "term_util.m"
            {
#line 362 "term_util.m"
              transform_hlds__term_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 0) = ((MR_Box) (transform_hlds__term_util__V_15_15));
#line 362 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "term_util.m"
            }
#line 362 "term_util.m"
            {
#line 362 "term_util.m"
              transform_hlds__term_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 362 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_13_13, 0) = ((MR_Box) (transform_hlds__term_util__V_14_14));
#line 362 "term_util.m"
            }
#line 362 "term_util.m"
            {
#line 362 "term_util.m"
              MR_Word base;
#line 362 "term_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 362 "term_util.m"
              *transform_hlds__term_util__HeadVar__3_3 = base;
#line 362 "term_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__V_13_13));
#line 362 "term_util.m"
            }
#line 361 "term_util.m"
          }
#line 358 "term_util.m"
        else
#line 359 "term_util.m"
          {
#line 360 "term_util.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 360 "term_util.m"
            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_util_scalar_common_3[1]);
#line 359 "term_util.m"
          }
#line 358 "term_util.m"
      }
#line 358 "term_util.m"
  }
#line 162 "term_util.m"
}

#line 154 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(
#line 154 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 154 "term_util.m"
  MR_Word transform_hlds__term_util__PredInfo_5,
#line 154 "term_util.m"
  MR_Word transform_hlds__term_util__ProcInfo_6)
#line 154 "term_util.m"
{
#line 392 "term_util.m"
  {
#line 392 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 392 "term_util.m"
    MR_Word transform_hlds__term_util__TypeList_7;
#line 392 "term_util.m"
    MR_Word transform_hlds__term_util__ModeList_8;

#line 393 "term_util.m"
    {
#line 393 "term_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__term_util__PredInfo_5, &transform_hlds__term_util__TypeList_7);
    }
#line 394 "term_util.m"
    {
#line 394 "term_util.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__ModeList_8);
    }
#line 395 "term_util.m"
    {
#line 395 "term_util.m"
      return transform_hlds__term_util__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(transform_hlds__term_util__TypeList_7, transform_hlds__term_util__ModeList_8, transform_hlds__term_util__ModuleInfo_4);
    }
#line 392 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 392 "term_util.m"
  }
#line 154 "term_util.m"
}

#line 149 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__pred_proc_id_terminates_2_p_0(
#line 149 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 149 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_4)
#line 149 "term_util.m"
{
#line 385 "term_util.m"
  {
#line 385 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 385 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_6;
#line 385 "term_util.m"
    MR_Word transform_hlds__term_util__TerminationInfo_7;
#line 385 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;
#line 386 "term_util.m"
    MR_Word transform_hlds__term_util__V_5_5;

#line 386 "term_util.m"
    {
#line 386 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__V_5_5, &transform_hlds__term_util__ProcInfo_6);
    }
#line 387 "term_util.m"
    {
#line 387 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__TerminationInfo_7);
    }
#line 388 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__TerminationInfo_7)) == (MR_mktag((MR_Integer) 1)));
#line 388 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 388 "term_util.m"
      {
#line 388 "term_util.m"
        transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__TerminationInfo_7, (MR_Integer) 0)));
#line 388 "term_util.m"
        transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 388 "term_util.m"
      }
#line 385 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 385 "term_util.m"
  }
#line 149 "term_util.m"
}

#line 142 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__attributes_imply_termination_1_p_0(
#line 142 "term_util.m"
  MR_Word transform_hlds__term_util__Attributes_2)
#line 142 "term_util.m"
{
#line 377 "term_util.m"
  {
#line 377 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 377 "term_util.m"
    {
#line 377 "term_util.m"
      MR_Word transform_hlds__term_util__V_5_5;

#line 377 "term_util.m"
      {
#line 377 "term_util.m"
        transform_hlds__term_util__V_5_5 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
      }
#line 377 "term_util.m"
      transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_5_5 == (MR_Integer) 0);
#line 377 "term_util.m"
    }
#line 377 "term_util.m"
    if (!(transform_hlds__term_util__succeeded))
#line 379 "term_util.m"
      {
#line 379 "term_util.m"
        MR_Word transform_hlds__term_util__V_3_3;
#line 379 "term_util.m"
        MR_Word transform_hlds__term_util__V_4_4;

#line 379 "term_util.m"
        {
#line 379 "term_util.m"
          transform_hlds__term_util__V_3_3 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
        }
#line 379 "term_util.m"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_3_3 == (MR_Integer) 2);
#line 379 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 379 "term_util.m"
          {
#line 380 "term_util.m"
            {
#line 380 "term_util.m"
              transform_hlds__term_util__V_4_4 = parse_tree__prog_data__get_may_call_mercury_1_f_0(transform_hlds__term_util__Attributes_2);
            }
#line 380 "term_util.m"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_4_4 == (MR_Integer) 1);
#line 379 "term_util.m"
          }
#line 379 "term_util.m"
      }
#line 377 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 377 "term_util.m"
  }
#line 142 "term_util.m"
}

#line 137 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__is_termination_known_2_p_0(
#line 137 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 137 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_4)
#line 137 "term_util.m"
{
#line 371 "term_util.m"
  {
#line 371 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 371 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_6;
#line 371 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;
#line 372 "term_util.m"
    MR_Word transform_hlds__term_util__V_5_5;
#line 373 "term_util.m"
    MR_Word transform_hlds__term_util__V_14_14;

#line 372 "term_util.m"
    {
#line 372 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__V_5_5, &transform_hlds__term_util__ProcInfo_6);
    }
#line 373 "term_util.m"
    {
#line 373 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__V_9_9);
    }
#line 373 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 373 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 373 "term_util.m"
      transform_hlds__term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_9_9, (MR_Integer) 0)));
#line 371 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 371 "term_util.m"
  }
#line 137 "term_util.m"
}

#line 132 "term_util.m"
void MR_CALL 
transform_hlds__term_util__get_context_from_scc_3_p_0(
#line 132 "term_util.m"
  MR_Word transform_hlds__term_util__SCC_4,
#line 132 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_5,
#line 132 "term_util.m"
  MR_Word * transform_hlds__term_util__Context_6)
#line 132 "term_util.m"
{
#line 348 "term_util.m"
  {
#line 348 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 348 "term_util.m"
    if ((transform_hlds__term_util__SCC_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "term_util.m"
      {
#line 353 "term_util.m"
        {
#line 353 "term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.get_context_from_scc\'/3", (MR_String) "empty SCC");
#line 353 "term_util.m"
          return;
        }
#line 352 "term_util.m"
      }
#line 348 "term_util.m"
    else
#line 348 "term_util.m"
      {
#line 348 "term_util.m"
        MR_Word transform_hlds__term_util__PredId_7;
#line 348 "term_util.m"
        MR_Word transform_hlds__term_util__PredInfo_10;
#line 348 "term_util.m"
        MR_Word transform_hlds__term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCC_4, (MR_Integer) 0)));
#line 348 "term_util.m"
        MR_Word transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCC_4, (MR_Integer) 1)));
#line 348 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8;

#line 348 "term_util.m"
        transform_hlds__term_util__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_14_14, (MR_Integer) 0)));
#line 348 "term_util.m"
        transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_14_14, (MR_Integer) 1)));
#line 349 "term_util.m"
        {
#line 349 "term_util.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_util__ModuleInfo_5, transform_hlds__term_util__PredId_7, &transform_hlds__term_util__PredInfo_10);
        }
#line 350 "term_util.m"
        {
#line 350 "term_util.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_util__PredInfo_10, transform_hlds__term_util__Context_6);
#line 350 "term_util.m"
          return;
        }
#line 348 "term_util.m"
      }
#line 348 "term_util.m"
  }
#line 132 "term_util.m"
}

#line 130 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__horder_vars_2_p_0(
#line 130 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 130 "term_util.m"
  MR_Word transform_hlds__term_util__VarType_5)
#line 130 "term_util.m"
{
#line 336 "term_util.m"
  while (MR_TRUE)
#line 336 "term_util.m"
    {
#line 336 "term_util.m"
      /* tailcall optimized into a loop */
#line 336 "term_util.m"
      {
#line 336 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 336 "term_util.m"
        MR_Word transform_hlds__term_util__Arg_3;
#line 336 "term_util.m"
        MR_Word transform_hlds__term_util__Args_4;

#line 336 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 336 "term_util.m"
          {
#line 336 "term_util.m"
            transform_hlds__term_util__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 336 "term_util.m"
            transform_hlds__term_util__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 338 "term_util.m"
            {
#line 338 "term_util.m"
              MR_Word transform_hlds__term_util__Type_6;

#line 338 "term_util.m"
              {
#line 338 "term_util.m"
                hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_util__VarType_5, transform_hlds__term_util__Arg_3, &transform_hlds__term_util__Type_6);
              }
#line 339 "term_util.m"
              {
#line 339 "term_util.m"
                transform_hlds__term_util__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_util__Type_6);
              }
#line 338 "term_util.m"
            }
#line 340 "term_util.m"
            if (!(transform_hlds__term_util__succeeded))
#line 341 "term_util.m"
              {
#line 341 "term_util.m"
                /* direct tailcall eliminated */
#line 341 "term_util.m"
                {
#line 341 "term_util.m"
                  MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__Args_4;

#line 341 "term_util.m"
                  transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 341 "term_util.m"
                }
#line 341 "term_util.m"
                continue;
#line 341 "term_util.m"
              }
#line 336 "term_util.m"
          }
#line 336 "term_util.m"
        return transform_hlds__term_util__succeeded;
#line 336 "term_util.m"
      }
#line 336 "term_util.m"
      break;
#line 336 "term_util.m"
    }
#line 130 "term_util.m"
}

#line 125 "term_util.m"
void MR_CALL 
transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(
#line 125 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 125 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_5,
#line 125 "term_util.m"
  MR_Word * transform_hlds__term_util__MaybeArgSize_6)
#line 125 "term_util.m"
{
#line 332 "term_util.m"
  {
#line 332 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 332 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_8;
#line 333 "term_util.m"
    MR_Word transform_hlds__term_util__V_7_7;

#line 333 "term_util.m"
    {
#line 333 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__V_7_7, &transform_hlds__term_util__ProcInfo_8);
    }
#line 334 "term_util.m"
    {
#line 334 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeArgSize_6);
#line 334 "term_util.m"
      return;
    }
#line 332 "term_util.m"
  }
#line 125 "term_util.m"
}

#line 122 "term_util.m"
void MR_CALL 
transform_hlds__term_util__lookup_proc_termination_info_3_p_0(
#line 122 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 122 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_5,
#line 122 "term_util.m"
  MR_Word * transform_hlds__term_util__MaybeTermination_6)
#line 122 "term_util.m"
{
#line 328 "term_util.m"
  {
#line 328 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 328 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_8;
#line 329 "term_util.m"
    MR_Word transform_hlds__term_util__V_7_7;

#line 329 "term_util.m"
    {
#line 329 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__V_7_7, &transform_hlds__term_util__ProcInfo_8);
    }
#line 330 "term_util.m"
    {
#line 330 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeTermination_6);
#line 330 "term_util.m"
      return;
    }
#line 328 "term_util.m"
  }
#line 122 "term_util.m"
}

#line 119 "term_util.m"
void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_termination_info_4_p_0(
#line 119 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 119 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 119 "term_util.m"
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 119 "term_util.m"
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
#line 119 "term_util.m"
{
#line 311 "term_util.m"
  while (MR_TRUE)
#line 311 "term_util.m"
    {
#line 311 "term_util.m"
      /* tailcall optimized into a loop */
#line 311 "term_util.m"
      {
#line 311 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 311 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 311 "term_util.m"
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 311 "term_util.m"
        else
#line 312 "term_util.m"
          {
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
#line 312 "term_util.m"
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable0_15;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo0_16;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable0_17;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo0_18;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo_19;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable_20;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo_21;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable_22;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__V_25_25;
#line 312 "term_util.m"
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 315 "term_util.m"
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
#line 317 "term_util.m"
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

#line 314 "term_util.m"
            {
#line 314 "term_util.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
#line 2141 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2143 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 315 "term_util.m"
            {
#line 315 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
#line 315 "term_util.m"
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
#line 316 "term_util.m"
            {
#line 316 "term_util.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
#line 2157 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 317 "term_util.m"
            {
#line 317 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, transform_hlds__term_util__ProcId_14, &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
#line 317 "term_util.m"
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
#line 319 "term_util.m"
            {
#line 319 "term_util.m"
              transform_hlds__term_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_25_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
#line 319 "term_util.m"
            }
#line 319 "term_util.m"
            {
#line 319 "term_util.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__term_util__V_25_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
#line 322 "term_util.m"
            {
#line 322 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcId_14, ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
#line 323 "term_util.m"
            {
#line 323 "term_util.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
#line 324 "term_util.m"
            {
#line 324 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
#line 325 "term_util.m"
            {
#line 325 "term_util.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 326 "term_util.m"
            /* direct tailcall eliminated */
#line 326 "term_util.m"
            {
#line 326 "term_util.m"
              MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__PPIds_10;
#line 326 "term_util.m"
              MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

#line 326 "term_util.m"
              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 326 "term_util.m"
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 326 "term_util.m"
            }
#line 326 "term_util.m"
            continue;
#line 312 "term_util.m"
          }
#line 311 "term_util.m"
      }
#line 311 "term_util.m"
      break;
#line 311 "term_util.m"
    }
#line 119 "term_util.m"
}

#line 113 "term_util.m"
void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_p_0(
#line 113 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 113 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 113 "term_util.m"
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 113 "term_util.m"
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
#line 113 "term_util.m"
{
#line 295 "term_util.m"
  while (MR_TRUE)
#line 295 "term_util.m"
    {
#line 295 "term_util.m"
      /* tailcall optimized into a loop */
#line 295 "term_util.m"
      {
#line 295 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 295 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "term_util.m"
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 295 "term_util.m"
        else
#line 296 "term_util.m"
          {
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
#line 296 "term_util.m"
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable0_15;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo0_16;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable0_17;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo0_18;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo_19;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable_20;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo_21;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable_22;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__V_25_25;
#line 296 "term_util.m"
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 299 "term_util.m"
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
#line 301 "term_util.m"
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

#line 298 "term_util.m"
            {
#line 298 "term_util.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
#line 2303 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2305 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 299 "term_util.m"
            {
#line 299 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
#line 299 "term_util.m"
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
#line 300 "term_util.m"
            {
#line 300 "term_util.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
#line 2319 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 301 "term_util.m"
            {
#line 301 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, transform_hlds__term_util__ProcId_14, &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
#line 301 "term_util.m"
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
#line 303 "term_util.m"
            {
#line 303 "term_util.m"
              transform_hlds__term_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 303 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_25_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
#line 303 "term_util.m"
            }
#line 303 "term_util.m"
            {
#line 303 "term_util.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__term_util__V_25_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
#line 305 "term_util.m"
            {
#line 305 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcId_14, ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
#line 306 "term_util.m"
            {
#line 306 "term_util.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
#line 307 "term_util.m"
            {
#line 307 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
#line 308 "term_util.m"
            {
#line 308 "term_util.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 309 "term_util.m"
            /* direct tailcall eliminated */
#line 309 "term_util.m"
            {
#line 309 "term_util.m"
              MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__PPIds_10;
#line 309 "term_util.m"
              MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

#line 309 "term_util.m"
              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 309 "term_util.m"
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 309 "term_util.m"
            }
#line 309 "term_util.m"
            continue;
#line 296 "term_util.m"
          }
#line 295 "term_util.m"
      }
#line 295 "term_util.m"
      break;
#line 295 "term_util.m"
    }
#line 113 "term_util.m"
}

#line 107 "term_util.m"
void MR_CALL 
transform_hlds__term_util__remove_unused_args_4_p_0(
#line 107 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 107 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 107 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 107 "term_util.m"
  MR_Word * transform_hlds__term_util__Vars_4)
#line 107 "term_util.m"
{
#line 275 "term_util.m"
  while (MR_TRUE)
#line 275 "term_util.m"
    {
#line 275 "term_util.m"
      /* tailcall optimized into a loop */
#line 275 "term_util.m"
      {
#line 275 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 275 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "term_util.m"
          if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "term_util.m"
            *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 275 "term_util.m"
          else
#line 276 "term_util.m"
            {
#line 276 "term_util.m"
              *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 277 "term_util.m"
              {
#line 277 "term_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
#line 277 "term_util.m"
                return;
              }
#line 276 "term_util.m"
            }
#line 275 "term_util.m"
        else
#line 275 "term_util.m"
          {
#line 275 "term_util.m"
            MR_Word transform_hlds__term_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "term_util.m"
            MR_Word transform_hlds__term_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 275 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "term_util.m"
              {
#line 278 "term_util.m"
                *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 279 "term_util.m"
                {
#line 279 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
#line 279 "term_util.m"
                  return;
                }
#line 278 "term_util.m"
              }
#line 275 "term_util.m"
            else
#line 280 "term_util.m"
              {
#line 280 "term_util.m"
                MR_Word transform_hlds__term_util__UsedVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 280 "term_util.m"
                MR_Word transform_hlds__term_util__UsedVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));

#line 285 "term_util.m"
#line 285 "term_util.m"
                switch (transform_hlds__term_util__UsedVar_21) {
#line 285 "term_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 285 "term_util.m"
                  case (MR_Integer) 0:
#line 288 "term_util.m"
                    {
#line 288 "term_util.m"
                      MR_Word transform_hlds__term_util__Vars1_24;

#line 289 "term_util.m"
                      {
#line 289 "term_util.m"
                        mercury__bag__delete_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_27_27)), transform_hlds__term_util__HeadVar__1_1, &transform_hlds__term_util__Vars1_24);
                      }
#line 290 "term_util.m"
                      /* direct tailcall eliminated */
#line 290 "term_util.m"
                      {
#line 290 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__Vars1_24;
#line 290 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__V_26_26;
#line 290 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__3__tmp_copy_3 = transform_hlds__term_util__UsedVars_22;

#line 290 "term_util.m"
                        transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__HeadVar__3__tmp_copy_3;
#line 290 "term_util.m"
                        transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 290 "term_util.m"
                        transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 290 "term_util.m"
                      }
#line 290 "term_util.m"
                      continue;
#line 288 "term_util.m"
                    }
#line 285 "term_util.m"
                    break;
#line 285 "term_util.m"
                  case (MR_Integer) 1:
#line 283 "term_util.m"
                    {
#line 283 "term_util.m"
                      /* direct tailcall eliminated */
#line 283 "term_util.m"
                      {
#line 283 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__V_26_26;
#line 283 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__3__tmp_copy_3 = transform_hlds__term_util__UsedVars_22;

#line 283 "term_util.m"
                        transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__HeadVar__3__tmp_copy_3;
#line 283 "term_util.m"
                        transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 283 "term_util.m"
                      }
#line 283 "term_util.m"
                      continue;
#line 283 "term_util.m"
                    }
#line 285 "term_util.m"
                    break;
#line 285 "term_util.m"
                }
#line 280 "term_util.m"
              }
#line 275 "term_util.m"
          }
#line 275 "term_util.m"
      }
#line 275 "term_util.m"
      break;
#line 275 "term_util.m"
    }
#line 107 "term_util.m"
}

#line 99 "term_util.m"
void MR_CALL 
transform_hlds__term_util__make_bool_list_3_p_0(
#line 99 "term_util.m"
  MR_Word transform_hlds__term_util__TypeInfo_for__T_13,
#line 99 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVars0_4,
#line 99 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_5,
#line 99 "term_util.m"
  MR_Word * transform_hlds__term_util__Out_6)
#line 99 "term_util.m"
{
#line 260 "term_util.m"
  {
#line 260 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 260 "term_util.m"
    MR_Integer transform_hlds__term_util__Arity_7;
#line 260 "term_util.m"
    MR_Word transform_hlds__term_util__HeadVars_9;
#line 264 "term_util.m"
    MR_Word transform_hlds__term_util__HeadVars1_8;

#line 261 "term_util.m"
    {
#line 261 "term_util.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_util__Bools_5, &transform_hlds__term_util__Arity_7);
    }
#line 262 "term_util.m"
    {
#line 262 "term_util.m"
      transform_hlds__term_util__succeeded = mercury__list__drop_3_p_0(transform_hlds__term_util__TypeInfo_for__T_13, transform_hlds__term_util__Arity_7, transform_hlds__term_util__HeadVars0_4, &transform_hlds__term_util__HeadVars1_8);
    }
#line 264 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 263 "term_util.m"
      transform_hlds__term_util__HeadVars_9 = transform_hlds__term_util__HeadVars1_8;
#line 264 "term_util.m"
    else
#line 265 "term_util.m"
      {
#line 265 "term_util.m"
        {
#line 265 "term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.make_bool_list\'/3", (MR_String) "unmatched variables");
#line 265 "term_util.m"
          return;
        }
#line 265 "term_util.m"
      }
#line 267 "term_util.m"
    {
#line 267 "term_util.m"
      transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__HeadVars_9, transform_hlds__term_util__Bools_5, transform_hlds__term_util__Out_6);
#line 267 "term_util.m"
      return;
    }
#line 260 "term_util.m"
  }
#line 99 "term_util.m"
}

#line 86 "term_util.m"
void MR_CALL 
transform_hlds__term_util__split_unification_vars_5_p_0(
#line 86 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 86 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 86 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 86 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 86 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
#line 86 "term_util.m"
{
#line 230 "term_util.m"
  {
#line 230 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 230 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "term_util.m"
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "term_util.m"
        {
#line 231 "term_util.m"
          {
#line 231 "term_util.m"
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], transform_hlds__term_util__HeadVar__4_4);
          }
#line 230 "term_util.m"
          *transform_hlds__term_util__HeadVar__5_5 = *transform_hlds__term_util__HeadVar__4_4;
#line 230 "term_util.m"
        }
#line 230 "term_util.m"
      else
#line 232 "term_util.m"
        {
#line 233 "term_util.m"
          {
#line 233 "term_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
#line 233 "term_util.m"
            return;
          }
#line 232 "term_util.m"
        }
#line 230 "term_util.m"
    else
#line 230 "term_util.m"
      {
#line 230 "term_util.m"
        MR_Word transform_hlds__term_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 230 "term_util.m"
        MR_Word transform_hlds__term_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 230 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "term_util.m"
          {
#line 235 "term_util.m"
            {
#line 235 "term_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
#line 235 "term_util.m"
              return;
            }
#line 234 "term_util.m"
          }
#line 230 "term_util.m"
        else
#line 237 "term_util.m"
          {
#line 237 "term_util.m"
            MR_Word transform_hlds__term_util__UniMode_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "term_util.m"
            MR_Word transform_hlds__term_util__UniModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "term_util.m"
            MR_Word transform_hlds__term_util__InVars0_31;
#line 237 "term_util.m"
            MR_Word transform_hlds__term_util__OutVars0_32;
#line 237 "term_util.m"
            MR_Word transform_hlds__term_util__ArgInit_34;
#line 237 "term_util.m"
            MR_Word transform_hlds__term_util__ArgFinal_36;
#line 237 "term_util.m"
            MR_Word transform_hlds__term_util__V_37_37;
#line 237 "term_util.m"
            MR_Word transform_hlds__term_util__V_38_38;
#line 239 "term_util.m"
            MR_Word transform_hlds__term_util___VarInit_33;
#line 239 "term_util.m"
            MR_Word transform_hlds__term_util___VarFinal_35;

#line 238 "term_util.m"
            {
#line 238 "term_util.m"
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_42_42, transform_hlds__term_util__UniModes_28, &transform_hlds__term_util__InVars0_31, &transform_hlds__term_util__OutVars0_32);
            }
#line 239 "term_util.m"
            transform_hlds__term_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__UniMode_27, (MR_Integer) 0)));
#line 239 "term_util.m"
            transform_hlds__term_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__UniMode_27, (MR_Integer) 1)));
#line 239 "term_util.m"
            transform_hlds__term_util___VarInit_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_37_37, (MR_Integer) 0)));
#line 239 "term_util.m"
            transform_hlds__term_util__ArgInit_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_37_37, (MR_Integer) 1)));
#line 239 "term_util.m"
            transform_hlds__term_util___VarFinal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_38_38, (MR_Integer) 0)));
#line 239 "term_util.m"
            transform_hlds__term_util__ArgFinal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_38_38, (MR_Integer) 1)));
#line 241 "term_util.m"
            {
#line 241 "term_util.m"
              transform_hlds__term_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
            }
#line 246 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 244 "term_util.m"
              {
#line 244 "term_util.m"
                {
#line 244 "term_util.m"
                  mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_43_43)), transform_hlds__term_util__InVars0_31, transform_hlds__term_util__HeadVar__4_4);
                }
#line 245 "term_util.m"
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
#line 244 "term_util.m"
              }
#line 246 "term_util.m"
            else
#line 253 "term_util.m"
              {
#line 247 "term_util.m"
                {
#line 247 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
                }
#line 247 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 248 "term_util.m"
                  {
#line 248 "term_util.m"
                    transform_hlds__term_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgFinal_36);
                  }
#line 253 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 251 "term_util.m"
                  {
#line 251 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
#line 252 "term_util.m"
                    {
#line 252 "term_util.m"
                      mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_43_43)), transform_hlds__term_util__OutVars0_32, transform_hlds__term_util__HeadVar__5_5);
#line 252 "term_util.m"
                      return;
                    }
#line 251 "term_util.m"
                  }
#line 253 "term_util.m"
                else
#line 254 "term_util.m"
                  {
#line 254 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
#line 255 "term_util.m"
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
#line 254 "term_util.m"
                  }
#line 253 "term_util.m"
              }
#line 237 "term_util.m"
          }
#line 230 "term_util.m"
      }
#line 230 "term_util.m"
  }
#line 86 "term_util.m"
}

#line 80 "term_util.m"
void MR_CALL 
transform_hlds__term_util__partition_call_args_5_p_0(
#line 80 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_6,
#line 80 "term_util.m"
  MR_Word transform_hlds__term_util__ArgModes_7,
#line 80 "term_util.m"
  MR_Word transform_hlds__term_util__Args_8,
#line 80 "term_util.m"
  MR_Word * transform_hlds__term_util__InVarsBag_9,
#line 80 "term_util.m"
  MR_Word * transform_hlds__term_util__OutVarsBag_10)
#line 80 "term_util.m"
{
#line 186 "term_util.m"
  {
#line 186 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 186 "term_util.m"
    MR_Word transform_hlds__term_util__TypeInfo_13_13;
#line 186 "term_util.m"
    MR_Word transform_hlds__term_util__InVars_11;
#line 186 "term_util.m"
    MR_Word transform_hlds__term_util__OutVars_12;

#line 187 "term_util.m"
    {
#line 187 "term_util.m"
      transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_6, transform_hlds__term_util__ArgModes_7, transform_hlds__term_util__Args_8, &transform_hlds__term_util__InVars_11, &transform_hlds__term_util__OutVars_12);
    }
#line 2825 "transform_hlds.term_util.c"
    transform_hlds__term_util__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_util_scalar_common_1[0];
#line 188 "term_util.m"
    {
#line 188 "term_util.m"
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__InVars_11, transform_hlds__term_util__InVarsBag_9);
    }
#line 189 "term_util.m"
    {
#line 189 "term_util.m"
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__OutVars_12, transform_hlds__term_util__OutVarsBag_10);
#line 189 "term_util.m"
      return;
    }
#line 186 "term_util.m"
  }
#line 80 "term_util.m"
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
