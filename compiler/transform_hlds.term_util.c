/*
** Automatically generated from `term_util.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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
#include "require.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 132 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 135 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 138 "transform_hlds.term_util.c"
static const MR_PseudoTypeInfo transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0[3];

#line 141 "transform_hlds.term_util.c"
static const MR_DuFunctorDesc transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0;

#line 144 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0[1];

#line 147 "transform_hlds.term_util.c"
static const MR_DuPtagLayout transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0[1];

#line 150 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0[1];

#line 153 "transform_hlds.term_util.c"
static const MR_Integer transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0[1];

#line 156 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 159 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0;

#line 162 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 165 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0_10001(
#line 168 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 170 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 173 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0_10001(
#line 176 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 178 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 180 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 183 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0_10001(
#line 186 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 188 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 191 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0_10001(
#line 194 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 196 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 198 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 201 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0_10001(
#line 204 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 206 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 209 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0_10001(
#line 212 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 214 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 216 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 219 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0_10001(
#line 222 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 224 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 227 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0_10001(
#line 230 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 232 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 234 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 268 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 268 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 268 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_2,
#line 268 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3);

#line 396 "term_util.m"
static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
#line 396 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 396 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 396 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3);

#line 190 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
#line 190 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 190 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 190 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 190 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 190 "term_util.m"
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
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 347 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 355 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1,
  {
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 363 "transform_hlds.term_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_arg_size_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_util____Unify____arg_size_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____arg_size_info_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "arg_size_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 384 "transform_hlds.term_util.c"
static const MR_PseudoTypeInfo transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 391 "transform_hlds.term_util.c"
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

#line 406 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0[1] = {
  &transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0
};

#line 411 "transform_hlds.term_util.c"
static const MR_DuPtagLayout transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0
  }
};

#line 420 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0[1] = {
  &transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0
};

#line 425 "transform_hlds.term_util.c"
static const MR_Integer transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0[1] = {
  (MR_Integer) 0
};

#line 430 "transform_hlds.term_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_pass_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_util____Unify____pass_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____pass_info_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "pass_info",
  {
    transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0
  },
  {
    transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0
};

#line 451 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 460 "transform_hlds.term_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_termination_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_util____Unify____termination_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____termination_info_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "termination_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 481 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 489 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 498 "transform_hlds.term_util.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_used_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_util____Unify____used_args_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____used_args_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "used_args",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 519 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0_10001(
#line 522 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 524 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 526 "transform_hlds.term_util.c"
{
#line 528 "transform_hlds.term_util.c"
  {
#line 530 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 533 "transform_hlds.term_util.c"
    {
#line 535 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____arg_size_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 538 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 540 "transform_hlds.term_util.c"
  }
#line 542 "transform_hlds.term_util.c"
}

#line 545 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0_10001(
#line 548 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 550 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 552 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 554 "transform_hlds.term_util.c"
{
#line 556 "transform_hlds.term_util.c"
  {
#line 558 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 561 "transform_hlds.term_util.c"
    {
#line 563 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____arg_size_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 566 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 568 "transform_hlds.term_util.c"
  }
#line 570 "transform_hlds.term_util.c"
}

#line 573 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0_10001(
#line 576 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 578 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 580 "transform_hlds.term_util.c"
{
#line 582 "transform_hlds.term_util.c"
  {
#line 584 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 587 "transform_hlds.term_util.c"
    {
#line 589 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____pass_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 592 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 594 "transform_hlds.term_util.c"
  }
#line 596 "transform_hlds.term_util.c"
}

#line 599 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0_10001(
#line 602 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 604 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 606 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 608 "transform_hlds.term_util.c"
{
#line 610 "transform_hlds.term_util.c"
  {
#line 612 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 615 "transform_hlds.term_util.c"
    {
#line 617 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____pass_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 620 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 622 "transform_hlds.term_util.c"
  }
#line 624 "transform_hlds.term_util.c"
}

#line 627 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0_10001(
#line 630 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 632 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 634 "transform_hlds.term_util.c"
{
#line 636 "transform_hlds.term_util.c"
  {
#line 638 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 641 "transform_hlds.term_util.c"
    {
#line 643 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____termination_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 646 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 648 "transform_hlds.term_util.c"
  }
#line 650 "transform_hlds.term_util.c"
}

#line 653 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0_10001(
#line 656 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 658 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 660 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 662 "transform_hlds.term_util.c"
{
#line 664 "transform_hlds.term_util.c"
  {
#line 666 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 669 "transform_hlds.term_util.c"
    {
#line 671 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____termination_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 674 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 676 "transform_hlds.term_util.c"
  }
#line 678 "transform_hlds.term_util.c"
}

#line 681 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0_10001(
#line 684 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 686 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 688 "transform_hlds.term_util.c"
{
#line 690 "transform_hlds.term_util.c"
  {
#line 692 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 695 "transform_hlds.term_util.c"
    {
#line 697 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____used_args_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 700 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 702 "transform_hlds.term_util.c"
  }
#line 704 "transform_hlds.term_util.c"
}

#line 707 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0_10001(
#line 710 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 712 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 714 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 716 "transform_hlds.term_util.c"
{
#line 718 "transform_hlds.term_util.c"
  {
#line 720 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 723 "transform_hlds.term_util.c"
    {
#line 725 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____used_args_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 728 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 730 "transform_hlds.term_util.c"
  }
#line 732 "transform_hlds.term_util.c"
}

#line 268 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 268 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 268 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_2,
#line 268 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 268 "term_util.m"
{
#line 270 "term_util.m"
  {
#line 270 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 270 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__Bools_2;
#line 270 "term_util.m"
    else
#line 271 "term_util.m"
      {
#line 271 "term_util.m"
        MR_Word transform_hlds__term_util__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 271 "term_util.m"
        MR_Word transform_hlds__term_util__Out_8;
#line 271 "term_util.m"
        MR_Box transform_hlds__term_util__V_5_5 = (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0));

#line 272 "term_util.m"
        {
#line 272 "term_util.m"
          transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__Vars_6, transform_hlds__term_util__Bools_2, &transform_hlds__term_util__Out_8);
        }
#line 271 "term_util.m"
        {
#line 271 "term_util.m"
          MR_Word base;
#line 271 "term_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "term_util.m"
          *transform_hlds__term_util__HeadVar__3_3 = base;
#line 271 "term_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 271 "term_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__Out_8));
#line 271 "term_util.m"
        }
#line 271 "term_util.m"
      }
#line 270 "term_util.m"
  }
#line 268 "term_util.m"
}

#line 65 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0(
#line 65 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 65 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 65 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 65 "term_util.m"
{
#line 65 "term_util.m"
  {
#line 65 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 65 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 65 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 65 "term_util.m"
    {
#line 65 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
#line 65 "term_util.m"
      return;
    }
#line 65 "term_util.m"
  }
#line 65 "term_util.m"
}

#line 65 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0(
#line 65 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 65 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 65 "term_util.m"
{
#line 65 "term_util.m"
  {
#line 65 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 65 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 65 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 65 "term_util.m"
    {
#line 65 "term_util.m"
      return transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 65 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 65 "term_util.m"
  }
#line 65 "term_util.m"
}

#line 59 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0(
#line 59 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 59 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 59 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 59 "term_util.m"
{
#line 59 "term_util.m"
  {
#line 59 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 59 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 59 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 59 "term_util.m"
    {
#line 59 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
#line 59 "term_util.m"
      return;
    }
#line 59 "term_util.m"
  }
#line 59 "term_util.m"
}

#line 59 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0(
#line 59 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 59 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 59 "term_util.m"
{
#line 59 "term_util.m"
  {
#line 59 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 59 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 59 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 59 "term_util.m"
    {
#line 59 "term_util.m"
      return transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 59 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 59 "term_util.m"
  }
#line 59 "term_util.m"
}

#line 67 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0(
#line 67 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 67 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 67 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 67 "term_util.m"
{
#line 67 "term_util.m"
  {
#line 67 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 67 "term_util.m"
    MR_Integer transform_hlds__term_util__CastX_12 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;
#line 67 "term_util.m"
    MR_Integer transform_hlds__term_util__CastY_13 = (MR_Integer) transform_hlds__term_util__HeadVar__3_3;

#line 67 "term_util.m"
    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_12 == transform_hlds__term_util__CastY_13);
#line 67 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 940 "transform_hlds.term_util.c"
      *transform_hlds__term_util__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "term_util.m"
    else
#line 67 "term_util.m"
      {
#line 67 "term_util.m"
        MR_Word transform_hlds__term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "term_util.m"
        MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "term_util.m"
        MR_Integer transform_hlds__term_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));
#line 67 "term_util.m"
        MR_Word transform_hlds__term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 67 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 67 "term_util.m"
        MR_Integer transform_hlds__term_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 2)));
#line 67 "term_util.m"
        MR_Word transform_hlds__term_util__V_10_10;

#line 67 "term_util.m"
        {
#line 67 "term_util.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_util__V_10_10, transform_hlds__term_util__V_4_4, transform_hlds__term_util__V_7_7);
        }
#line 966 "transform_hlds.term_util.c"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_10_10 == (MR_Integer) 0);
#line 67 "term_util.m"
        transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
#line 67 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 67 "term_util.m"
          *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__V_10_10;
#line 67 "term_util.m"
        else
#line 67 "term_util.m"
          {
#line 67 "term_util.m"
            MR_Word transform_hlds__term_util__V_11_11;

#line 67 "term_util.m"
            {
#line 67 "term_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_util__V_11_11, transform_hlds__term_util__V_5_5, transform_hlds__term_util__V_8_8);
            }
#line 986 "transform_hlds.term_util.c"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_11_11 == (MR_Integer) 0);
#line 67 "term_util.m"
            transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
#line 67 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 67 "term_util.m"
              *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__V_11_11;
#line 67 "term_util.m"
            else
#line 67 "term_util.m"
              {
#line 67 "term_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_util__HeadVar__1_1, transform_hlds__term_util__V_6_6, transform_hlds__term_util__V_9_9);
#line 67 "term_util.m"
                return;
              }
#line 67 "term_util.m"
          }
#line 67 "term_util.m"
      }
#line 67 "term_util.m"
  }
#line 67 "term_util.m"
}

#line 67 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0(
#line 67 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 67 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 67 "term_util.m"
{
#line 67 "term_util.m"
  {
#line 67 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 67 "term_util.m"
    MR_Integer transform_hlds__term_util__CastX_9 = (MR_Integer) transform_hlds__term_util__HeadVar__1_1;
#line 67 "term_util.m"
    MR_Integer transform_hlds__term_util__CastY_10 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;

#line 67 "term_util.m"
    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_9 == transform_hlds__term_util__CastY_10);
#line 67 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 67 "term_util.m"
      transform_hlds__term_util__succeeded = MR_TRUE;
#line 67 "term_util.m"
    else
#line 67 "term_util.m"
      {
#line 67 "term_util.m"
        MR_Word transform_hlds__term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "term_util.m"
        MR_Integer transform_hlds__term_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 67 "term_util.m"
        MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 2)));
#line 67 "term_util.m"
        MR_Word transform_hlds__term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "term_util.m"
        MR_Integer transform_hlds__term_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));

#line 1053 "transform_hlds.term_util.c"
        {
#line 1055 "transform_hlds.term_util.c"
          transform_hlds__term_util__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_util__V_3_3, transform_hlds__term_util__V_6_6);
        }
#line 67 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 67 "term_util.m"
          {
#line 1062 "transform_hlds.term_util.c"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_4_4 == transform_hlds__term_util__V_7_7);
#line 67 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 1066 "transform_hlds.term_util.c"
              transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_5_5 == transform_hlds__term_util__V_8_8);
#line 67 "term_util.m"
          }
#line 67 "term_util.m"
      }
#line 67 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 67 "term_util.m"
  }
#line 67 "term_util.m"
}

#line 57 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0(
#line 57 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
#line 57 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 57 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3)
#line 57 "term_util.m"
{
#line 57 "term_util.m"
  {
#line 57 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 57 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 57 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 57 "term_util.m"
    {
#line 57 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
#line 57 "term_util.m"
      return;
    }
#line 57 "term_util.m"
  }
#line 57 "term_util.m"
}

#line 57 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0(
#line 57 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 57 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 57 "term_util.m"
{
#line 57 "term_util.m"
  {
#line 57 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 57 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 57 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 57 "term_util.m"
    {
#line 57 "term_util.m"
      return transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 57 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 57 "term_util.m"
  }
#line 57 "term_util.m"
}

#line 396 "term_util.m"
static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
#line 396 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 396 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 396 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3)
#line 396 "term_util.m"
{
#line 399 "term_util.m"
  while (MR_TRUE)
#line 399 "term_util.m"
    {
#line 399 "term_util.m"
      /* tailcall optimized into a loop */
#line 399 "term_util.m"
      {
#line 399 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 399 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "term_util.m"
          {
#line 399 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "term_util.m"
              {
#line 399 "term_util.m"
              }
#line 399 "term_util.m"
            else
#line 400 "term_util.m"
              {
#line 401 "term_util.m"
                {
#line 401 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
#line 400 "term_util.m"
              }
#line 399 "term_util.m"
            transform_hlds__term_util__succeeded = MR_TRUE;
#line 399 "term_util.m"
          }
#line 399 "term_util.m"
        else
#line 399 "term_util.m"
          {
#line 399 "term_util.m"
            MR_Word transform_hlds__term_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 399 "term_util.m"
            MR_Word transform_hlds__term_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 399 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "term_util.m"
              {
#line 403 "term_util.m"
                {
#line 403 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
#line 402 "term_util.m"
                transform_hlds__term_util__succeeded = MR_TRUE;
#line 402 "term_util.m"
              }
#line 399 "term_util.m"
            else
#line 404 "term_util.m"
              {
#line 404 "term_util.m"
                MR_Word transform_hlds__term_util__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "term_util.m"
                MR_Word transform_hlds__term_util__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));

#line 405 "term_util.m"
                {
#line 405 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__Mode_19);
                }
#line 408 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 407 "term_util.m"
                  {
#line 407 "term_util.m"
                    /* direct tailcall eliminated */
#line 407 "term_util.m"
                    {
#line 407 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__V_22_22;
#line 407 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__Modes_20;

#line 407 "term_util.m"
                      transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 407 "term_util.m"
                      transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 407 "term_util.m"
                    }
#line 407 "term_util.m"
                    continue;
#line 407 "term_util.m"
                  }
#line 408 "term_util.m"
                else
#line 409 "term_util.m"
                  {
#line 409 "term_util.m"
                    {
#line 409 "term_util.m"
                      transform_hlds__term_util__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__V_23_23);
                    }
#line 409 "term_util.m"
                    if (transform_hlds__term_util__succeeded)
#line 410 "term_util.m"
                      {
#line 410 "term_util.m"
                        /* direct tailcall eliminated */
#line 410 "term_util.m"
                        {
#line 410 "term_util.m"
                          MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__V_22_22;
#line 410 "term_util.m"
                          MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__Modes_20;

#line 410 "term_util.m"
                          transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 410 "term_util.m"
                          transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 410 "term_util.m"
                        }
#line 410 "term_util.m"
                        continue;
#line 410 "term_util.m"
                      }
#line 409 "term_util.m"
                  }
#line 404 "term_util.m"
              }
#line 399 "term_util.m"
          }
#line 399 "term_util.m"
        return transform_hlds__term_util__succeeded;
#line 399 "term_util.m"
      }
#line 399 "term_util.m"
      break;
#line 399 "term_util.m"
    }
#line 396 "term_util.m"
}

#line 190 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
#line 190 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 190 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 190 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 190 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 190 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
#line 190 "term_util.m"
{
#line 193 "term_util.m"
  {
#line 193 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 193 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "term_util.m"
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "term_util.m"
        {
#line 193 "term_util.m"
          *transform_hlds__term_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "term_util.m"
          *transform_hlds__term_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "term_util.m"
        }
#line 193 "term_util.m"
      else
#line 194 "term_util.m"
        {
#line 195 "term_util.m"
          {
#line 195 "term_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
#line 195 "term_util.m"
            return;
          }
#line 194 "term_util.m"
        }
#line 193 "term_util.m"
    else
#line 193 "term_util.m"
      {
#line 193 "term_util.m"
        MR_Word transform_hlds__term_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 193 "term_util.m"
        MR_Word transform_hlds__term_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 193 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "term_util.m"
          {
#line 197 "term_util.m"
            {
#line 197 "term_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
#line 197 "term_util.m"
              return;
            }
#line 196 "term_util.m"
          }
#line 193 "term_util.m"
        else
#line 199 "term_util.m"
          {
#line 199 "term_util.m"
            MR_Word transform_hlds__term_util__Arg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "term_util.m"
            MR_Word transform_hlds__term_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "term_util.m"
            MR_Word transform_hlds__term_util__InputArgs1_30;
#line 199 "term_util.m"
            MR_Word transform_hlds__term_util__OutputArgs1_31;

#line 200 "term_util.m"
            {
#line 200 "term_util.m"
              transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_32_32, transform_hlds__term_util__Args_27, &transform_hlds__term_util__InputArgs1_30, &transform_hlds__term_util__OutputArgs1_31);
            }
#line 202 "term_util.m"
            {
#line 202 "term_util.m"
              transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_33_33);
            }
#line 205 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 203 "term_util.m"
              {
#line 203 "term_util.m"
                {
#line 203 "term_util.m"
                  MR_Word base;
#line 203 "term_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "term_util.m"
                  *transform_hlds__term_util__HeadVar__4_4 = base;
#line 203 "term_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
#line 203 "term_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__InputArgs1_30));
#line 203 "term_util.m"
                }
#line 204 "term_util.m"
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
#line 203 "term_util.m"
              }
#line 205 "term_util.m"
            else
#line 208 "term_util.m"
              {
#line 205 "term_util.m"
                {
#line 205 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_33_33);
                }
#line 208 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 206 "term_util.m"
                  {
#line 206 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
#line 207 "term_util.m"
                    {
#line 207 "term_util.m"
                      MR_Word base;
#line 207 "term_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "term_util.m"
                      *transform_hlds__term_util__HeadVar__5_5 = base;
#line 207 "term_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
#line 207 "term_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__OutputArgs1_31));
#line 207 "term_util.m"
                    }
#line 206 "term_util.m"
                  }
#line 208 "term_util.m"
                else
#line 209 "term_util.m"
                  {
#line 209 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
#line 210 "term_util.m"
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
#line 209 "term_util.m"
                  }
#line 208 "term_util.m"
              }
#line 199 "term_util.m"
          }
#line 193 "term_util.m"
      }
#line 193 "term_util.m"
  }
#line 190 "term_util.m"
}

#line 167 "term_util.m"
void MR_CALL 
transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(
#line 167 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 167 "term_util.m"
  MR_Word transform_hlds__term_util__Context_2,
#line 167 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 167 "term_util.m"
{
#line 363 "term_util.m"
  {
#line 363 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 363 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 363 "term_util.m"
    else
#line 363 "term_util.m"
      {
#line 363 "term_util.m"
        MR_Word transform_hlds__term_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 363 "term_util.m"
        if (((MR_tag((MR_Word) transform_hlds__term_util__V_18_18)) == (MR_mktag((MR_Integer) 0))))
#line 364 "term_util.m"
          {
#line 364 "term_util.m"
            MR_Word transform_hlds__term_util__V_9_9 = (MR_Word) transform_hlds__term_util__V_18_18;

#line 364 "term_util.m"
            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) transform_hlds__term_util__HeadVar__1_1;
#line 364 "term_util.m"
          }
#line 363 "term_util.m"
        else
#line 365 "term_util.m"
          {
#line 365 "term_util.m"
            MR_Word transform_hlds__term_util__V_13_13;
#line 365 "term_util.m"
            MR_Word transform_hlds__term_util__V_14_14;
#line 365 "term_util.m"
            MR_Word transform_hlds__term_util__V_15_15;

#line 366 "term_util.m"
            {
#line 366 "term_util.m"
              transform_hlds__term_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 366 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 1) = ((MR_Box) (transform_hlds__term_util__Context_2));
#line 366 "term_util.m"
            }
#line 366 "term_util.m"
            {
#line 366 "term_util.m"
              transform_hlds__term_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 0) = ((MR_Box) (transform_hlds__term_util__V_15_15));
#line 366 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "term_util.m"
            }
#line 366 "term_util.m"
            {
#line 366 "term_util.m"
              transform_hlds__term_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 366 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_13_13, 0) = ((MR_Box) (transform_hlds__term_util__V_14_14));
#line 366 "term_util.m"
            }
#line 365 "term_util.m"
            {
#line 365 "term_util.m"
              MR_Word base;
#line 365 "term_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 365 "term_util.m"
              *transform_hlds__term_util__HeadVar__3_3 = base;
#line 365 "term_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__V_13_13));
#line 365 "term_util.m"
            }
#line 365 "term_util.m"
          }
#line 363 "term_util.m"
      }
#line 363 "term_util.m"
  }
#line 167 "term_util.m"
}

#line 161 "term_util.m"
void MR_CALL 
transform_hlds__term_util__add_context_to_termination_info_3_p_0(
#line 161 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 161 "term_util.m"
  MR_Word transform_hlds__term_util__Context_2,
#line 161 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 161 "term_util.m"
{
#line 357 "term_util.m"
  {
#line 357 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 357 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "term_util.m"
    else
#line 357 "term_util.m"
      {
#line 357 "term_util.m"
        MR_Word transform_hlds__term_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 357 "term_util.m"
        if (((MR_tag((MR_Word) transform_hlds__term_util__V_18_18)) == (MR_mktag((MR_Integer) 1))))
#line 360 "term_util.m"
          {
#line 360 "term_util.m"
            MR_Word transform_hlds__term_util__V_13_13;
#line 360 "term_util.m"
            MR_Word transform_hlds__term_util__V_14_14;
#line 360 "term_util.m"
            MR_Word transform_hlds__term_util__V_15_15;

#line 361 "term_util.m"
            {
#line 361 "term_util.m"
              transform_hlds__term_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 361 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 1) = ((MR_Box) (transform_hlds__term_util__Context_2));
#line 361 "term_util.m"
            }
#line 361 "term_util.m"
            {
#line 361 "term_util.m"
              transform_hlds__term_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 0) = ((MR_Box) (transform_hlds__term_util__V_15_15));
#line 361 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "term_util.m"
            }
#line 361 "term_util.m"
            {
#line 361 "term_util.m"
              transform_hlds__term_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 361 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_13_13, 0) = ((MR_Box) (transform_hlds__term_util__V_14_14));
#line 361 "term_util.m"
            }
#line 360 "term_util.m"
            {
#line 360 "term_util.m"
              MR_Word base;
#line 360 "term_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 360 "term_util.m"
              *transform_hlds__term_util__HeadVar__3_3 = base;
#line 360 "term_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__V_13_13));
#line 360 "term_util.m"
            }
#line 360 "term_util.m"
          }
#line 357 "term_util.m"
        else
#line 358 "term_util.m"
          {
#line 359 "term_util.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 358 "term_util.m"
            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_util_scalar_common_3[1]);
#line 358 "term_util.m"
          }
#line 357 "term_util.m"
      }
#line 357 "term_util.m"
  }
#line 161 "term_util.m"
}

#line 153 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(
#line 153 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 153 "term_util.m"
  MR_Word transform_hlds__term_util__PredInfo_5,
#line 153 "term_util.m"
  MR_Word transform_hlds__term_util__ProcInfo_6)
#line 153 "term_util.m"
{
#line 391 "term_util.m"
  {
#line 391 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 391 "term_util.m"
    MR_Word transform_hlds__term_util__TypeList_7;
#line 391 "term_util.m"
    MR_Word transform_hlds__term_util__ModeList_8;

#line 392 "term_util.m"
    {
#line 392 "term_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__term_util__PredInfo_5, &transform_hlds__term_util__TypeList_7);
    }
#line 393 "term_util.m"
    {
#line 393 "term_util.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__ModeList_8);
    }
#line 394 "term_util.m"
    {
#line 394 "term_util.m"
      return transform_hlds__term_util__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(transform_hlds__term_util__TypeList_7, transform_hlds__term_util__ModeList_8, transform_hlds__term_util__ModuleInfo_4);
    }
#line 391 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 391 "term_util.m"
  }
#line 153 "term_util.m"
}

#line 148 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__pred_proc_id_terminates_2_p_0(
#line 148 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 148 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_4)
#line 148 "term_util.m"
{
#line 384 "term_util.m"
  {
#line 384 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 384 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_6;
#line 384 "term_util.m"
    MR_Word transform_hlds__term_util__TerminationInfo_7;
#line 384 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;
#line 385 "term_util.m"
    MR_Word transform_hlds__term_util__V_5_5;

#line 385 "term_util.m"
    {
#line 385 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__V_5_5, &transform_hlds__term_util__ProcInfo_6);
    }
#line 386 "term_util.m"
    {
#line 386 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__TerminationInfo_7);
    }
#line 387 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__TerminationInfo_7)) == (MR_mktag((MR_Integer) 1)));
#line 387 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 387 "term_util.m"
      {
#line 387 "term_util.m"
        transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__TerminationInfo_7, (MR_Integer) 0)));
#line 387 "term_util.m"
        transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 387 "term_util.m"
      }
#line 384 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 384 "term_util.m"
  }
#line 148 "term_util.m"
}

#line 141 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__attributes_imply_termination_1_p_0(
#line 141 "term_util.m"
  MR_Word transform_hlds__term_util__Attributes_2)
#line 141 "term_util.m"
{
#line 376 "term_util.m"
  {
#line 376 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 376 "term_util.m"
    {
#line 376 "term_util.m"
      MR_Word transform_hlds__term_util__V_5_5;

#line 376 "term_util.m"
      {
#line 376 "term_util.m"
        transform_hlds__term_util__V_5_5 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
      }
#line 376 "term_util.m"
      transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_5_5 == (MR_Integer) 0);
#line 376 "term_util.m"
    }
#line 376 "term_util.m"
    if (!(transform_hlds__term_util__succeeded))
#line 378 "term_util.m"
      {
#line 378 "term_util.m"
        MR_Word transform_hlds__term_util__V_3_3;
#line 378 "term_util.m"
        MR_Word transform_hlds__term_util__V_4_4;

#line 378 "term_util.m"
        {
#line 378 "term_util.m"
          transform_hlds__term_util__V_3_3 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
        }
#line 378 "term_util.m"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_3_3 == (MR_Integer) 2);
#line 378 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 378 "term_util.m"
          {
#line 379 "term_util.m"
            {
#line 379 "term_util.m"
              transform_hlds__term_util__V_4_4 = parse_tree__prog_data__get_may_call_mercury_1_f_0(transform_hlds__term_util__Attributes_2);
            }
#line 379 "term_util.m"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_4_4 == (MR_Integer) 1);
#line 378 "term_util.m"
          }
#line 378 "term_util.m"
      }
#line 376 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 376 "term_util.m"
  }
#line 141 "term_util.m"
}

#line 136 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__is_termination_known_2_p_0(
#line 136 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 136 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_4)
#line 136 "term_util.m"
{
#line 370 "term_util.m"
  {
#line 370 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 370 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_6;
#line 370 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;
#line 371 "term_util.m"
    MR_Word transform_hlds__term_util__V_5_5;
#line 372 "term_util.m"
    MR_Word transform_hlds__term_util__V_14_14;

#line 371 "term_util.m"
    {
#line 371 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__V_5_5, &transform_hlds__term_util__ProcInfo_6);
    }
#line 372 "term_util.m"
    {
#line 372 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__V_9_9);
    }
#line 372 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 372 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 372 "term_util.m"
      transform_hlds__term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_9_9, (MR_Integer) 0)));
#line 370 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 370 "term_util.m"
  }
#line 136 "term_util.m"
}

#line 131 "term_util.m"
void MR_CALL 
transform_hlds__term_util__get_context_from_scc_3_p_0(
#line 131 "term_util.m"
  MR_Word transform_hlds__term_util__SCC_4,
#line 131 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_5,
#line 131 "term_util.m"
  MR_Word * transform_hlds__term_util__Context_6)
#line 131 "term_util.m"
{
#line 347 "term_util.m"
  {
#line 347 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 347 "term_util.m"
    if ((transform_hlds__term_util__SCC_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "term_util.m"
      {
#line 352 "term_util.m"
        {
#line 352 "term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.get_context_from_scc\'/3", (MR_String) "empty SCC");
#line 352 "term_util.m"
          return;
        }
#line 351 "term_util.m"
      }
#line 347 "term_util.m"
    else
#line 347 "term_util.m"
      {
#line 347 "term_util.m"
        MR_Word transform_hlds__term_util__PredId_7;
#line 347 "term_util.m"
        MR_Word transform_hlds__term_util__PredInfo_10;
#line 347 "term_util.m"
        MR_Word transform_hlds__term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCC_4, (MR_Integer) 0)));
#line 347 "term_util.m"
        MR_Word transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCC_4, (MR_Integer) 1)));
#line 347 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8;

#line 347 "term_util.m"
        transform_hlds__term_util__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_14_14, (MR_Integer) 0)));
#line 347 "term_util.m"
        transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_14_14, (MR_Integer) 1)));
#line 348 "term_util.m"
        {
#line 348 "term_util.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_util__ModuleInfo_5, transform_hlds__term_util__PredId_7, &transform_hlds__term_util__PredInfo_10);
        }
#line 349 "term_util.m"
        {
#line 349 "term_util.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_util__PredInfo_10, transform_hlds__term_util__Context_6);
#line 349 "term_util.m"
          return;
        }
#line 347 "term_util.m"
      }
#line 347 "term_util.m"
  }
#line 131 "term_util.m"
}

#line 129 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__horder_vars_2_p_0(
#line 129 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 129 "term_util.m"
  MR_Word transform_hlds__term_util__VarType_5)
#line 129 "term_util.m"
{
#line 335 "term_util.m"
  while (MR_TRUE)
#line 335 "term_util.m"
    {
#line 335 "term_util.m"
      /* tailcall optimized into a loop */
#line 335 "term_util.m"
      {
#line 335 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 335 "term_util.m"
        MR_Word transform_hlds__term_util__Arg_3;
#line 335 "term_util.m"
        MR_Word transform_hlds__term_util__Args_4;

#line 335 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 335 "term_util.m"
          {
#line 335 "term_util.m"
            transform_hlds__term_util__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 335 "term_util.m"
            transform_hlds__term_util__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 337 "term_util.m"
            {
#line 337 "term_util.m"
              MR_Word transform_hlds__term_util__Type_6;

#line 337 "term_util.m"
              {
#line 337 "term_util.m"
                parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__term_util__VarType_5, transform_hlds__term_util__Arg_3, &transform_hlds__term_util__Type_6);
              }
#line 338 "term_util.m"
              {
#line 338 "term_util.m"
                transform_hlds__term_util__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_util__Type_6);
              }
#line 337 "term_util.m"
            }
#line 339 "term_util.m"
            if (!(transform_hlds__term_util__succeeded))
#line 340 "term_util.m"
              {
#line 340 "term_util.m"
                /* direct tailcall eliminated */
#line 340 "term_util.m"
                {
#line 340 "term_util.m"
                  MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__Args_4;

#line 340 "term_util.m"
                  transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 340 "term_util.m"
                }
#line 340 "term_util.m"
                continue;
#line 340 "term_util.m"
              }
#line 335 "term_util.m"
          }
#line 335 "term_util.m"
        return transform_hlds__term_util__succeeded;
#line 335 "term_util.m"
      }
#line 335 "term_util.m"
      break;
#line 335 "term_util.m"
    }
#line 129 "term_util.m"
}

#line 124 "term_util.m"
void MR_CALL 
transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(
#line 124 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 124 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_5,
#line 124 "term_util.m"
  MR_Word * transform_hlds__term_util__MaybeArgSize_6)
#line 124 "term_util.m"
{
#line 331 "term_util.m"
  {
#line 331 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 331 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_8;
#line 332 "term_util.m"
    MR_Word transform_hlds__term_util__V_7_7;

#line 332 "term_util.m"
    {
#line 332 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__V_7_7, &transform_hlds__term_util__ProcInfo_8);
    }
#line 333 "term_util.m"
    {
#line 333 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeArgSize_6);
#line 333 "term_util.m"
      return;
    }
#line 331 "term_util.m"
  }
#line 124 "term_util.m"
}

#line 121 "term_util.m"
void MR_CALL 
transform_hlds__term_util__lookup_proc_termination_info_3_p_0(
#line 121 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 121 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_5,
#line 121 "term_util.m"
  MR_Word * transform_hlds__term_util__MaybeTermination_6)
#line 121 "term_util.m"
{
#line 327 "term_util.m"
  {
#line 327 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 327 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_8;
#line 328 "term_util.m"
    MR_Word transform_hlds__term_util__V_7_7;

#line 328 "term_util.m"
    {
#line 328 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__V_7_7, &transform_hlds__term_util__ProcInfo_8);
    }
#line 329 "term_util.m"
    {
#line 329 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeTermination_6);
#line 329 "term_util.m"
      return;
    }
#line 327 "term_util.m"
  }
#line 121 "term_util.m"
}

#line 118 "term_util.m"
void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_termination_info_4_p_0(
#line 118 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 118 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 118 "term_util.m"
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 118 "term_util.m"
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
#line 118 "term_util.m"
{
#line 310 "term_util.m"
  while (MR_TRUE)
#line 310 "term_util.m"
    {
#line 310 "term_util.m"
      /* tailcall optimized into a loop */
#line 310 "term_util.m"
      {
#line 310 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 310 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "term_util.m"
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 310 "term_util.m"
        else
#line 311 "term_util.m"
          {
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_30_30;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
#line 311 "term_util.m"
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable0_15;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo0_16;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable0_17;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo0_18;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo_19;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable_20;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo_21;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable_22;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__V_25_25;
#line 311 "term_util.m"
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 314 "term_util.m"
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
#line 316 "term_util.m"
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

#line 313 "term_util.m"
            {
#line 313 "term_util.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
#line 2157 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2159 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 314 "term_util.m"
            {
#line 314 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
#line 314 "term_util.m"
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
#line 315 "term_util.m"
            {
#line 315 "term_util.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
#line 2173 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 2175 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 316 "term_util.m"
            {
#line 316 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_30_30, transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, ((MR_Box) (transform_hlds__term_util__ProcId_14)), &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
#line 316 "term_util.m"
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
#line 318 "term_util.m"
            {
#line 318 "term_util.m"
              transform_hlds__term_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_25_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
#line 318 "term_util.m"
            }
#line 318 "term_util.m"
            {
#line 318 "term_util.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__term_util__V_25_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
#line 321 "term_util.m"
            {
#line 321 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_30_30, transform_hlds__term_util__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__term_util__ProcId_14)), ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
#line 322 "term_util.m"
            {
#line 322 "term_util.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
#line 323 "term_util.m"
            {
#line 323 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
#line 324 "term_util.m"
            {
#line 324 "term_util.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 325 "term_util.m"
            /* direct tailcall eliminated */
#line 325 "term_util.m"
            {
#line 325 "term_util.m"
              MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__PPIds_10;
#line 325 "term_util.m"
              MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

#line 325 "term_util.m"
              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 325 "term_util.m"
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 325 "term_util.m"
            }
#line 325 "term_util.m"
            continue;
#line 311 "term_util.m"
          }
#line 310 "term_util.m"
      }
#line 310 "term_util.m"
      break;
#line 310 "term_util.m"
    }
#line 118 "term_util.m"
}

#line 112 "term_util.m"
void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_p_0(
#line 112 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 112 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 112 "term_util.m"
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 112 "term_util.m"
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
#line 112 "term_util.m"
{
#line 294 "term_util.m"
  while (MR_TRUE)
#line 294 "term_util.m"
    {
#line 294 "term_util.m"
      /* tailcall optimized into a loop */
#line 294 "term_util.m"
      {
#line 294 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 294 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "term_util.m"
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 294 "term_util.m"
        else
#line 295 "term_util.m"
          {
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_30_30;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
#line 295 "term_util.m"
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable0_15;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo0_16;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable0_17;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo0_18;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo_19;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable_20;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo_21;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable_22;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__V_25_25;
#line 295 "term_util.m"
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 298 "term_util.m"
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
#line 300 "term_util.m"
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

#line 297 "term_util.m"
            {
#line 297 "term_util.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
#line 2323 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2325 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 298 "term_util.m"
            {
#line 298 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
#line 298 "term_util.m"
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
#line 299 "term_util.m"
            {
#line 299 "term_util.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
#line 2339 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 2341 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 300 "term_util.m"
            {
#line 300 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_30_30, transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, ((MR_Box) (transform_hlds__term_util__ProcId_14)), &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
#line 300 "term_util.m"
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
#line 302 "term_util.m"
            {
#line 302 "term_util.m"
              transform_hlds__term_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_25_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
#line 302 "term_util.m"
            }
#line 302 "term_util.m"
            {
#line 302 "term_util.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__term_util__V_25_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
#line 304 "term_util.m"
            {
#line 304 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_30_30, transform_hlds__term_util__TypeCtorInfo_31_31, ((MR_Box) (transform_hlds__term_util__ProcId_14)), ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
#line 305 "term_util.m"
            {
#line 305 "term_util.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
#line 306 "term_util.m"
            {
#line 306 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
#line 307 "term_util.m"
            {
#line 307 "term_util.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 308 "term_util.m"
            /* direct tailcall eliminated */
#line 308 "term_util.m"
            {
#line 308 "term_util.m"
              MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__PPIds_10;
#line 308 "term_util.m"
              MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

#line 308 "term_util.m"
              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 308 "term_util.m"
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 308 "term_util.m"
            }
#line 308 "term_util.m"
            continue;
#line 295 "term_util.m"
          }
#line 294 "term_util.m"
      }
#line 294 "term_util.m"
      break;
#line 294 "term_util.m"
    }
#line 112 "term_util.m"
}

#line 106 "term_util.m"
void MR_CALL 
transform_hlds__term_util__remove_unused_args_4_p_0(
#line 106 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 106 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 106 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 106 "term_util.m"
  MR_Word * transform_hlds__term_util__Vars_4)
#line 106 "term_util.m"
{
#line 274 "term_util.m"
  while (MR_TRUE)
#line 274 "term_util.m"
    {
#line 274 "term_util.m"
      /* tailcall optimized into a loop */
#line 274 "term_util.m"
      {
#line 274 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 274 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "term_util.m"
          if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "term_util.m"
            *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 274 "term_util.m"
          else
#line 275 "term_util.m"
            {
#line 275 "term_util.m"
              *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 276 "term_util.m"
              {
#line 276 "term_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
#line 276 "term_util.m"
                return;
              }
#line 275 "term_util.m"
            }
#line 274 "term_util.m"
        else
#line 274 "term_util.m"
          {
#line 274 "term_util.m"
            MR_Word transform_hlds__term_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "term_util.m"
            MR_Word transform_hlds__term_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 274 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "term_util.m"
              {
#line 277 "term_util.m"
                *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 278 "term_util.m"
                {
#line 278 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
#line 278 "term_util.m"
                  return;
                }
#line 277 "term_util.m"
              }
#line 274 "term_util.m"
            else
#line 279 "term_util.m"
              {
#line 279 "term_util.m"
                MR_Word transform_hlds__term_util__UsedVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 279 "term_util.m"
                MR_Word transform_hlds__term_util__UsedVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));

#line 284 "term_util.m"
                if ((transform_hlds__term_util__UsedVar_21 == (MR_Integer) 0))
#line 287 "term_util.m"
                  {
#line 287 "term_util.m"
                    MR_Word transform_hlds__term_util__Vars1_24;

#line 288 "term_util.m"
                    {
#line 288 "term_util.m"
                      mercury__bag__delete_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_27_27)), transform_hlds__term_util__HeadVar__1_1, &transform_hlds__term_util__Vars1_24);
                    }
#line 289 "term_util.m"
                    /* direct tailcall eliminated */
#line 289 "term_util.m"
                    {
#line 289 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__Vars1_24;
#line 289 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__V_26_26;
#line 289 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__3__tmp_copy_3 = transform_hlds__term_util__UsedVars_22;

#line 289 "term_util.m"
                      transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__HeadVar__3__tmp_copy_3;
#line 289 "term_util.m"
                      transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 289 "term_util.m"
                      transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 289 "term_util.m"
                    }
#line 289 "term_util.m"
                    continue;
#line 287 "term_util.m"
                  }
#line 284 "term_util.m"
                else
#line 282 "term_util.m"
                  {
#line 282 "term_util.m"
                    /* direct tailcall eliminated */
#line 282 "term_util.m"
                    {
#line 282 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__V_26_26;
#line 282 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__3__tmp_copy_3 = transform_hlds__term_util__UsedVars_22;

#line 282 "term_util.m"
                      transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__HeadVar__3__tmp_copy_3;
#line 282 "term_util.m"
                      transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 282 "term_util.m"
                    }
#line 282 "term_util.m"
                    continue;
#line 282 "term_util.m"
                  }
#line 279 "term_util.m"
              }
#line 274 "term_util.m"
          }
#line 274 "term_util.m"
      }
#line 274 "term_util.m"
      break;
#line 274 "term_util.m"
    }
#line 106 "term_util.m"
}

#line 98 "term_util.m"
void MR_CALL 
transform_hlds__term_util__make_bool_list_3_p_0(
#line 98 "term_util.m"
  MR_Word transform_hlds__term_util__TypeInfo_for__T_13,
#line 98 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVars0_4,
#line 98 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_5,
#line 98 "term_util.m"
  MR_Word * transform_hlds__term_util__Out_6)
#line 98 "term_util.m"
{
#line 259 "term_util.m"
  {
#line 259 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 259 "term_util.m"
    MR_Integer transform_hlds__term_util__Arity_7;
#line 259 "term_util.m"
    MR_Word transform_hlds__term_util__HeadVars_9;
#line 263 "term_util.m"
    MR_Word transform_hlds__term_util__HeadVars1_8;

#line 260 "term_util.m"
    {
#line 260 "term_util.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_util__Bools_5, &transform_hlds__term_util__Arity_7);
    }
#line 261 "term_util.m"
    {
#line 261 "term_util.m"
      transform_hlds__term_util__succeeded = mercury__list__drop_3_p_0(transform_hlds__term_util__TypeInfo_for__T_13, transform_hlds__term_util__Arity_7, transform_hlds__term_util__HeadVars0_4, &transform_hlds__term_util__HeadVars1_8);
    }
#line 263 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 262 "term_util.m"
      transform_hlds__term_util__HeadVars_9 = transform_hlds__term_util__HeadVars1_8;
#line 263 "term_util.m"
    else
#line 264 "term_util.m"
      {
#line 264 "term_util.m"
        {
#line 264 "term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.make_bool_list\'/3", (MR_String) "unmatched variables");
#line 264 "term_util.m"
          return;
        }
#line 264 "term_util.m"
      }
#line 266 "term_util.m"
    {
#line 266 "term_util.m"
      transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__HeadVars_9, transform_hlds__term_util__Bools_5, transform_hlds__term_util__Out_6);
#line 266 "term_util.m"
      return;
    }
#line 259 "term_util.m"
  }
#line 98 "term_util.m"
}

#line 85 "term_util.m"
void MR_CALL 
transform_hlds__term_util__split_unification_vars_5_p_0(
#line 85 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 85 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 85 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 85 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 85 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
#line 85 "term_util.m"
{
#line 229 "term_util.m"
  {
#line 229 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 229 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "term_util.m"
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "term_util.m"
        {
#line 230 "term_util.m"
          {
#line 230 "term_util.m"
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], transform_hlds__term_util__HeadVar__4_4);
          }
#line 229 "term_util.m"
          *transform_hlds__term_util__HeadVar__5_5 = *transform_hlds__term_util__HeadVar__4_4;
#line 229 "term_util.m"
        }
#line 229 "term_util.m"
      else
#line 231 "term_util.m"
        {
#line 232 "term_util.m"
          {
#line 232 "term_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
#line 232 "term_util.m"
            return;
          }
#line 231 "term_util.m"
        }
#line 229 "term_util.m"
    else
#line 229 "term_util.m"
      {
#line 229 "term_util.m"
        MR_Word transform_hlds__term_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "term_util.m"
        MR_Word transform_hlds__term_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 229 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 233 "term_util.m"
          {
#line 234 "term_util.m"
            {
#line 234 "term_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
#line 234 "term_util.m"
              return;
            }
#line 233 "term_util.m"
          }
#line 229 "term_util.m"
        else
#line 236 "term_util.m"
          {
#line 236 "term_util.m"
            MR_Word transform_hlds__term_util__UniMode_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 236 "term_util.m"
            MR_Word transform_hlds__term_util__UniModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 236 "term_util.m"
            MR_Word transform_hlds__term_util__InVars0_31;
#line 236 "term_util.m"
            MR_Word transform_hlds__term_util__OutVars0_32;
#line 236 "term_util.m"
            MR_Word transform_hlds__term_util__ArgInit_34;
#line 236 "term_util.m"
            MR_Word transform_hlds__term_util__ArgFinal_36;
#line 236 "term_util.m"
            MR_Word transform_hlds__term_util__V_37_37;
#line 236 "term_util.m"
            MR_Word transform_hlds__term_util__V_38_38;
#line 238 "term_util.m"
            MR_Word transform_hlds__term_util___VarInit_33;
#line 238 "term_util.m"
            MR_Word transform_hlds__term_util___VarFinal_35;

#line 237 "term_util.m"
            {
#line 237 "term_util.m"
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_42_42, transform_hlds__term_util__UniModes_28, &transform_hlds__term_util__InVars0_31, &transform_hlds__term_util__OutVars0_32);
            }
#line 238 "term_util.m"
            transform_hlds__term_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__UniMode_27, (MR_Integer) 0)));
#line 238 "term_util.m"
            transform_hlds__term_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__UniMode_27, (MR_Integer) 1)));
#line 238 "term_util.m"
            transform_hlds__term_util___VarInit_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_37_37, (MR_Integer) 0)));
#line 238 "term_util.m"
            transform_hlds__term_util__ArgInit_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_37_37, (MR_Integer) 1)));
#line 238 "term_util.m"
            transform_hlds__term_util___VarFinal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_38_38, (MR_Integer) 0)));
#line 238 "term_util.m"
            transform_hlds__term_util__ArgFinal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_38_38, (MR_Integer) 1)));
#line 240 "term_util.m"
            {
#line 240 "term_util.m"
              transform_hlds__term_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
            }
#line 245 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 243 "term_util.m"
              {
#line 243 "term_util.m"
                {
#line 243 "term_util.m"
                  mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_43_43)), transform_hlds__term_util__InVars0_31, transform_hlds__term_util__HeadVar__4_4);
                }
#line 244 "term_util.m"
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
#line 243 "term_util.m"
              }
#line 245 "term_util.m"
            else
#line 252 "term_util.m"
              {
#line 246 "term_util.m"
                {
#line 246 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
                }
#line 246 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 247 "term_util.m"
                  {
#line 247 "term_util.m"
                    transform_hlds__term_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgFinal_36);
                  }
#line 252 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 250 "term_util.m"
                  {
#line 250 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
#line 251 "term_util.m"
                    {
#line 251 "term_util.m"
                      mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_43_43)), transform_hlds__term_util__OutVars0_32, transform_hlds__term_util__HeadVar__5_5);
#line 251 "term_util.m"
                      return;
                    }
#line 250 "term_util.m"
                  }
#line 252 "term_util.m"
                else
#line 253 "term_util.m"
                  {
#line 253 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
#line 254 "term_util.m"
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
#line 253 "term_util.m"
                  }
#line 252 "term_util.m"
              }
#line 236 "term_util.m"
          }
#line 229 "term_util.m"
      }
#line 229 "term_util.m"
  }
#line 85 "term_util.m"
}

#line 79 "term_util.m"
void MR_CALL 
transform_hlds__term_util__partition_call_args_5_p_0(
#line 79 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_6,
#line 79 "term_util.m"
  MR_Word transform_hlds__term_util__ArgModes_7,
#line 79 "term_util.m"
  MR_Word transform_hlds__term_util__Args_8,
#line 79 "term_util.m"
  MR_Word * transform_hlds__term_util__InVarsBag_9,
#line 79 "term_util.m"
  MR_Word * transform_hlds__term_util__OutVarsBag_10)
#line 79 "term_util.m"
{
#line 185 "term_util.m"
  {
#line 185 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 185 "term_util.m"
    MR_Word transform_hlds__term_util__TypeInfo_13_13;
#line 185 "term_util.m"
    MR_Word transform_hlds__term_util__InVars_11;
#line 185 "term_util.m"
    MR_Word transform_hlds__term_util__OutVars_12;

#line 186 "term_util.m"
    {
#line 186 "term_util.m"
      transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_6, transform_hlds__term_util__ArgModes_7, transform_hlds__term_util__Args_8, &transform_hlds__term_util__InVars_11, &transform_hlds__term_util__OutVars_12);
    }
#line 2836 "transform_hlds.term_util.c"
    transform_hlds__term_util__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_util_scalar_common_1[0];
#line 187 "term_util.m"
    {
#line 187 "term_util.m"
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__InVars_11, transform_hlds__term_util__InVarsBag_9);
    }
#line 188 "term_util.m"
    {
#line 188 "term_util.m"
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__OutVars_12, transform_hlds__term_util__OutVarsBag_10);
#line 188 "term_util.m"
      return;
    }
#line 185 "term_util.m"
  }
#line 79 "term_util.m"
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
