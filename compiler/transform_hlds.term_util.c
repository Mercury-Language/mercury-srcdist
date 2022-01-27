/*
** Automatically generated from `term_util.m'
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




#line 141 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 144 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 147 "transform_hlds.term_util.c"
static const MR_PseudoTypeInfo transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0[3];

#line 150 "transform_hlds.term_util.c"
static const MR_DuFunctorDesc transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0;

#line 153 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0[1];

#line 156 "transform_hlds.term_util.c"
static const MR_DuPtagLayout transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0[1];

#line 159 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0[1];

#line 162 "transform_hlds.term_util.c"
static const MR_Integer transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0[1];

#line 165 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 168 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0;

#line 171 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 174 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0_10001(
#line 177 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 179 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 182 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0_10001(
#line 185 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 187 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 189 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 192 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0_10001(
#line 195 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 197 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 200 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0_10001(
#line 203 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 205 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 207 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 210 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0_10001(
#line 213 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 215 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 218 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0_10001(
#line 221 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 223 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 225 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 228 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0_10001(
#line 231 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 233 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2);

#line 236 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0_10001(
#line 239 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 241 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 243 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3);

#line 296 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 296 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 296 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_2,
#line 296 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3);

#line 358 "term_util.m"
static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
#line 358 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 358 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 358 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3);

#line 218 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
#line 218 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 218 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 218 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 218 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 218 "term_util.m"
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



#line 348 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 356 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1,
  {
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 364 "transform_hlds.term_util.c"
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

#line 381 "transform_hlds.term_util.c"
static const MR_PseudoTypeInfo transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 388 "transform_hlds.term_util.c"
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

#line 403 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0[1] = {
  &transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0
};

#line 408 "transform_hlds.term_util.c"
static const MR_DuPtagLayout transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0
  }
};

#line 417 "transform_hlds.term_util.c"
static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0[1] = {
  &transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0
};

#line 422 "transform_hlds.term_util.c"
static const MR_Integer transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0[1] = {
  (MR_Integer) 0
};

#line 427 "transform_hlds.term_util.c"
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

#line 444 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 453 "transform_hlds.term_util.c"
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

#line 470 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 478 "transform_hlds.term_util.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 487 "transform_hlds.term_util.c"
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

#line 504 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0_10001(
#line 507 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 509 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 511 "transform_hlds.term_util.c"
{
#line 513 "transform_hlds.term_util.c"
  {
#line 515 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 518 "transform_hlds.term_util.c"
    {
#line 520 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____arg_size_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 523 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 525 "transform_hlds.term_util.c"
  }
#line 527 "transform_hlds.term_util.c"
}

#line 530 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0_10001(
#line 533 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 535 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 537 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 539 "transform_hlds.term_util.c"
{
#line 541 "transform_hlds.term_util.c"
  {
#line 543 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 546 "transform_hlds.term_util.c"
    {
#line 548 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____arg_size_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 551 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 553 "transform_hlds.term_util.c"
  }
#line 555 "transform_hlds.term_util.c"
}

#line 558 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0_10001(
#line 561 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 563 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 565 "transform_hlds.term_util.c"
{
#line 567 "transform_hlds.term_util.c"
  {
#line 569 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 572 "transform_hlds.term_util.c"
    {
#line 574 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____pass_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 577 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 579 "transform_hlds.term_util.c"
  }
#line 581 "transform_hlds.term_util.c"
}

#line 584 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0_10001(
#line 587 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 589 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 591 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 593 "transform_hlds.term_util.c"
{
#line 595 "transform_hlds.term_util.c"
  {
#line 597 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 600 "transform_hlds.term_util.c"
    {
#line 602 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____pass_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 605 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 607 "transform_hlds.term_util.c"
  }
#line 609 "transform_hlds.term_util.c"
}

#line 612 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0_10001(
#line 615 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 617 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 619 "transform_hlds.term_util.c"
{
#line 621 "transform_hlds.term_util.c"
  {
#line 623 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 626 "transform_hlds.term_util.c"
    {
#line 628 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____termination_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 631 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 633 "transform_hlds.term_util.c"
  }
#line 635 "transform_hlds.term_util.c"
}

#line 638 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0_10001(
#line 641 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 643 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 645 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 647 "transform_hlds.term_util.c"
{
#line 649 "transform_hlds.term_util.c"
  {
#line 651 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 654 "transform_hlds.term_util.c"
    {
#line 656 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____termination_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 659 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 661 "transform_hlds.term_util.c"
  }
#line 663 "transform_hlds.term_util.c"
}

#line 666 "transform_hlds.term_util.c"
static MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0_10001(
#line 669 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_1,
#line 671 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2)
#line 673 "transform_hlds.term_util.c"
{
#line 675 "transform_hlds.term_util.c"
  {
#line 677 "transform_hlds.term_util.c"
    MR_bool transform_hlds__term_util__succeeded;

#line 680 "transform_hlds.term_util.c"
    {
#line 682 "transform_hlds.term_util.c"
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____used_args_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
#line 685 "transform_hlds.term_util.c"
    return transform_hlds__term_util__succeeded;
#line 687 "transform_hlds.term_util.c"
  }
#line 689 "transform_hlds.term_util.c"
}

#line 692 "transform_hlds.term_util.c"
static void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0_10001(
#line 695 "transform_hlds.term_util.c"
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
#line 697 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_2,
#line 699 "transform_hlds.term_util.c"
  MR_Box transform_hlds__term_util__wrapper_arg_3)
#line 701 "transform_hlds.term_util.c"
{
#line 703 "transform_hlds.term_util.c"
  {
#line 705 "transform_hlds.term_util.c"
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

#line 708 "transform_hlds.term_util.c"
    {
#line 710 "transform_hlds.term_util.c"
      transform_hlds__term_util____Compare____used_args_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
#line 713 "transform_hlds.term_util.c"
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
#line 715 "transform_hlds.term_util.c"
  }
#line 717 "transform_hlds.term_util.c"
}

#line 296 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 296 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 296 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_2,
#line 296 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 296 "term_util.m"
{
#line 298 "term_util.m"
  {
#line 298 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 298 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__Bools_2;
#line 298 "term_util.m"
    else
#line 299 "term_util.m"
      {
#line 299 "term_util.m"
        MR_Word transform_hlds__term_util__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 299 "term_util.m"
        MR_Word transform_hlds__term_util__Out_8;
#line 299 "term_util.m"
        MR_Box transform_hlds__term_util__V_5_5 = (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0));

#line 300 "term_util.m"
        {
#line 300 "term_util.m"
          transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__Vars_6, transform_hlds__term_util__Bools_2, &transform_hlds__term_util__Out_8);
        }
#line 299 "term_util.m"
        {
#line 299 "term_util.m"
          MR_Word base;
#line 299 "term_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "term_util.m"
          *transform_hlds__term_util__HeadVar__3_3 = base;
#line 299 "term_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 299 "term_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__Out_8));
#line 299 "term_util.m"
        }
#line 299 "term_util.m"
      }
#line 298 "term_util.m"
  }
#line 296 "term_util.m"
}

#line 67 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0(
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
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
#line 67 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

#line 67 "term_util.m"
    {
#line 67 "term_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
    }
#line 67 "term_util.m"
  }
#line 67 "term_util.m"
}

#line 67 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0(
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
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
#line 67 "term_util.m"
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

#line 67 "term_util.m"
    {
#line 67 "term_util.m"
      transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 67 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 67 "term_util.m"
  }
#line 67 "term_util.m"
}

#line 61 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
    }
#line 61 "term_util.m"
  }
#line 61 "term_util.m"
}

#line 61 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0(
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
      transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 61 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 61 "term_util.m"
  }
#line 61 "term_util.m"
}

#line 69 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0(
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
    MR_Integer transform_hlds__term_util__CastX_12 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;
#line 69 "term_util.m"
    MR_Integer transform_hlds__term_util__CastY_13 = (MR_Integer) transform_hlds__term_util__HeadVar__3_3;

#line 69 "term_util.m"
    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_12 == transform_hlds__term_util__CastY_13);
#line 69 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 921 "transform_hlds.term_util.c"
      *transform_hlds__term_util__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "term_util.m"
    else
#line 69 "term_util.m"
      {
#line 69 "term_util.m"
        MR_Word transform_hlds__term_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "term_util.m"
        MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "term_util.m"
        MR_Integer transform_hlds__term_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));
#line 69 "term_util.m"
        MR_Word transform_hlds__term_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "term_util.m"
        MR_Integer transform_hlds__term_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 2)));
#line 69 "term_util.m"
        MR_Word transform_hlds__term_util__V_10_10;

#line 69 "term_util.m"
        {
#line 69 "term_util.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_util__V_10_10, transform_hlds__term_util__V_4_4, transform_hlds__term_util__V_7_7);
        }
#line 947 "transform_hlds.term_util.c"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_10_10 == (MR_Integer) 0);
#line 69 "term_util.m"
        transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
#line 69 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 69 "term_util.m"
          *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__V_10_10;
#line 69 "term_util.m"
        else
#line 69 "term_util.m"
          {
#line 69 "term_util.m"
            MR_Word transform_hlds__term_util__V_11_11;

#line 69 "term_util.m"
            {
#line 69 "term_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_util__V_11_11, transform_hlds__term_util__V_5_5, transform_hlds__term_util__V_8_8);
            }
#line 967 "transform_hlds.term_util.c"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_11_11 == (MR_Integer) 0);
#line 69 "term_util.m"
            transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
#line 69 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 69 "term_util.m"
              *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__V_11_11;
#line 69 "term_util.m"
            else
#line 69 "term_util.m"
              {
#line 69 "term_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_util__HeadVar__1_1, transform_hlds__term_util__V_6_6, transform_hlds__term_util__V_9_9);
              }
#line 69 "term_util.m"
          }
#line 69 "term_util.m"
      }
#line 69 "term_util.m"
  }
#line 69 "term_util.m"
}

#line 69 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0(
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
    MR_Integer transform_hlds__term_util__CastX_9 = (MR_Integer) transform_hlds__term_util__HeadVar__1_1;
#line 69 "term_util.m"
    MR_Integer transform_hlds__term_util__CastY_10 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;

#line 69 "term_util.m"
    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_9 == transform_hlds__term_util__CastY_10);
#line 69 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 69 "term_util.m"
      transform_hlds__term_util__succeeded = MR_TRUE;
#line 69 "term_util.m"
    else
#line 69 "term_util.m"
      {
#line 69 "term_util.m"
        MR_Word transform_hlds__term_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "term_util.m"
        MR_Integer transform_hlds__term_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "term_util.m"
        MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 2)));
#line 69 "term_util.m"
        MR_Word transform_hlds__term_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "term_util.m"
        MR_Integer transform_hlds__term_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));

#line 1032 "transform_hlds.term_util.c"
        {
#line 1034 "transform_hlds.term_util.c"
          transform_hlds__term_util__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_util__V_3_3, transform_hlds__term_util__V_6_6);
        }
#line 69 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 69 "term_util.m"
          {
#line 1041 "transform_hlds.term_util.c"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_4_4 == transform_hlds__term_util__V_7_7);
#line 69 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 1045 "transform_hlds.term_util.c"
              transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_5_5 == transform_hlds__term_util__V_8_8);
#line 69 "term_util.m"
          }
#line 69 "term_util.m"
      }
#line 69 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 69 "term_util.m"
  }
#line 69 "term_util.m"
}

#line 59 "term_util.m"
void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
    }
#line 59 "term_util.m"
  }
#line 59 "term_util.m"
}

#line 59 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0(
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
      transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
#line 59 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 59 "term_util.m"
  }
#line 59 "term_util.m"
}

#line 358 "term_util.m"
static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
#line 358 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 358 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 358 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3)
#line 358 "term_util.m"
{
#line 361 "term_util.m"
  while (MR_TRUE)
#line 361 "term_util.m"
    {
#line 361 "term_util.m"
      /* tailcall optimized into a loop */
#line 361 "term_util.m"
      {
#line 361 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 361 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "term_util.m"
          {
#line 361 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "term_util.m"
              {
#line 361 "term_util.m"
              }
#line 361 "term_util.m"
            else
#line 362 "term_util.m"
              {
#line 363 "term_util.m"
                {
#line 363 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
#line 362 "term_util.m"
              }
#line 361 "term_util.m"
            transform_hlds__term_util__succeeded = MR_TRUE;
#line 361 "term_util.m"
          }
#line 361 "term_util.m"
        else
#line 361 "term_util.m"
          {
#line 361 "term_util.m"
            MR_Word transform_hlds__term_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 361 "term_util.m"
            MR_Word transform_hlds__term_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 361 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "term_util.m"
              {
#line 365 "term_util.m"
                {
#line 365 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
#line 364 "term_util.m"
                transform_hlds__term_util__succeeded = MR_TRUE;
#line 364 "term_util.m"
              }
#line 361 "term_util.m"
            else
#line 366 "term_util.m"
              {
#line 366 "term_util.m"
                MR_Word transform_hlds__term_util__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "term_util.m"
                MR_Word transform_hlds__term_util__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));

#line 367 "term_util.m"
                {
#line 367 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__Mode_19);
                }
#line 370 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 369 "term_util.m"
                  {
#line 369 "term_util.m"
                    /* direct tailcall eliminated */
#line 369 "term_util.m"
                    {
#line 369 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__V_22_22;
#line 369 "term_util.m"
                      MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__Modes_20;

#line 369 "term_util.m"
                      transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 369 "term_util.m"
                      transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 369 "term_util.m"
                    }
#line 369 "term_util.m"
                    continue;
#line 369 "term_util.m"
                  }
#line 370 "term_util.m"
                else
#line 371 "term_util.m"
                  {
#line 371 "term_util.m"
                    {
#line 371 "term_util.m"
                      transform_hlds__term_util__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__V_23_23);
                    }
#line 371 "term_util.m"
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
#line 371 "term_util.m"
                  }
#line 366 "term_util.m"
              }
#line 361 "term_util.m"
          }
#line 361 "term_util.m"
        return transform_hlds__term_util__succeeded;
#line 361 "term_util.m"
      }
#line 361 "term_util.m"
      break;
#line 361 "term_util.m"
    }
#line 358 "term_util.m"
}

#line 218 "term_util.m"
static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
#line 218 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 218 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 218 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 218 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 218 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
#line 218 "term_util.m"
{
#line 221 "term_util.m"
  {
#line 221 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 221 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "term_util.m"
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "term_util.m"
        {
#line 221 "term_util.m"
          *transform_hlds__term_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 221 "term_util.m"
          *transform_hlds__term_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 221 "term_util.m"
        }
#line 221 "term_util.m"
      else
#line 222 "term_util.m"
        {
#line 223 "term_util.m"
          {
#line 223 "term_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
#line 223 "term_util.m"
            return;
          }
#line 222 "term_util.m"
        }
#line 221 "term_util.m"
    else
#line 221 "term_util.m"
      {
#line 221 "term_util.m"
        MR_Word transform_hlds__term_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 221 "term_util.m"
        MR_Word transform_hlds__term_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 221 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "term_util.m"
          {
#line 225 "term_util.m"
            {
#line 225 "term_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
#line 225 "term_util.m"
              return;
            }
#line 224 "term_util.m"
          }
#line 221 "term_util.m"
        else
#line 227 "term_util.m"
          {
#line 227 "term_util.m"
            MR_Word transform_hlds__term_util__Arg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 227 "term_util.m"
            MR_Word transform_hlds__term_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 227 "term_util.m"
            MR_Word transform_hlds__term_util__InputArgs1_30;
#line 227 "term_util.m"
            MR_Word transform_hlds__term_util__OutputArgs1_31;

#line 228 "term_util.m"
            {
#line 228 "term_util.m"
              transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_32_32, transform_hlds__term_util__Args_27, &transform_hlds__term_util__InputArgs1_30, &transform_hlds__term_util__OutputArgs1_31);
            }
#line 230 "term_util.m"
            {
#line 230 "term_util.m"
              transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_33_33);
            }
#line 233 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 231 "term_util.m"
              {
#line 231 "term_util.m"
                {
#line 231 "term_util.m"
                  MR_Word base;
#line 231 "term_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "term_util.m"
                  *transform_hlds__term_util__HeadVar__4_4 = base;
#line 231 "term_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
#line 231 "term_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__InputArgs1_30));
#line 231 "term_util.m"
                }
#line 232 "term_util.m"
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
#line 231 "term_util.m"
              }
#line 233 "term_util.m"
            else
#line 236 "term_util.m"
              {
#line 233 "term_util.m"
                {
#line 233 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_33_33);
                }
#line 236 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 234 "term_util.m"
                  {
#line 234 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
#line 235 "term_util.m"
                    {
#line 235 "term_util.m"
                      MR_Word base;
#line 235 "term_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "term_util.m"
                      *transform_hlds__term_util__HeadVar__5_5 = base;
#line 235 "term_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
#line 235 "term_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__OutputArgs1_31));
#line 235 "term_util.m"
                    }
#line 234 "term_util.m"
                  }
#line 236 "term_util.m"
                else
#line 237 "term_util.m"
                  {
#line 237 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
#line 238 "term_util.m"
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
#line 237 "term_util.m"
                  }
#line 236 "term_util.m"
              }
#line 227 "term_util.m"
          }
#line 221 "term_util.m"
      }
#line 221 "term_util.m"
  }
#line 218 "term_util.m"
}

#line 193 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__attributes_imply_termination_1_p_0(
#line 193 "term_util.m"
  MR_Word transform_hlds__term_util__Attributes_2)
#line 193 "term_util.m"
{
#line 447 "term_util.m"
  {
#line 447 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 447 "term_util.m"
    {
#line 447 "term_util.m"
      MR_Word transform_hlds__term_util__V_5_5;

#line 447 "term_util.m"
      {
#line 447 "term_util.m"
        transform_hlds__term_util__V_5_5 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
      }
#line 447 "term_util.m"
      transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_5_5 == (MR_Integer) 0);
#line 447 "term_util.m"
    }
#line 447 "term_util.m"
    if (!(transform_hlds__term_util__succeeded))
#line 449 "term_util.m"
      {
#line 449 "term_util.m"
        MR_Word transform_hlds__term_util__V_3_3;
#line 449 "term_util.m"
        MR_Word transform_hlds__term_util__V_4_4;

#line 449 "term_util.m"
        {
#line 449 "term_util.m"
          transform_hlds__term_util__V_3_3 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
        }
#line 449 "term_util.m"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_3_3 == (MR_Integer) 2);
#line 449 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 449 "term_util.m"
          {
#line 450 "term_util.m"
            {
#line 450 "term_util.m"
              transform_hlds__term_util__V_4_4 = parse_tree__prog_data__get_may_call_mercury_1_f_0(transform_hlds__term_util__Attributes_2);
            }
#line 450 "term_util.m"
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__V_4_4 == (MR_Integer) 1);
#line 449 "term_util.m"
          }
#line 449 "term_util.m"
      }
#line 447 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 447 "term_util.m"
  }
#line 193 "term_util.m"
}

#line 185 "term_util.m"
void MR_CALL 
transform_hlds__term_util__get_context_from_scc_3_p_0(
#line 185 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 185 "term_util.m"
  MR_Word transform_hlds__term_util__SCC_5,
#line 185 "term_util.m"
  MR_Word * transform_hlds__term_util__Context_6)
#line 185 "term_util.m"
{
#line 435 "term_util.m"
  {
#line 435 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 435 "term_util.m"
    if ((transform_hlds__term_util__SCC_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "term_util.m"
      {
#line 440 "term_util.m"
        {
#line 440 "term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.get_context_from_scc\'/3", (MR_String) "empty SCC");
#line 440 "term_util.m"
          return;
        }
#line 439 "term_util.m"
      }
#line 435 "term_util.m"
    else
#line 435 "term_util.m"
      {
#line 435 "term_util.m"
        MR_Word transform_hlds__term_util__PredId_7;
#line 435 "term_util.m"
        MR_Word transform_hlds__term_util__PredInfo_10;
#line 435 "term_util.m"
        MR_Word transform_hlds__term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCC_5, (MR_Integer) 0)));
#line 435 "term_util.m"
        MR_Word transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCC_5, (MR_Integer) 1)));
#line 435 "term_util.m"
        MR_Integer transform_hlds__term_util__V_8_8;

#line 435 "term_util.m"
        transform_hlds__term_util__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_14_14, (MR_Integer) 0)));
#line 435 "term_util.m"
        transform_hlds__term_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_14_14, (MR_Integer) 1)));
#line 436 "term_util.m"
        {
#line 436 "term_util.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PredId_7, &transform_hlds__term_util__PredInfo_10);
        }
#line 437 "term_util.m"
        {
#line 437 "term_util.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_util__PredInfo_10, transform_hlds__term_util__Context_6);
        }
#line 435 "term_util.m"
      }
#line 435 "term_util.m"
  }
#line 185 "term_util.m"
}

#line 180 "term_util.m"
void MR_CALL 
transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(
#line 180 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 180 "term_util.m"
  MR_Word transform_hlds__term_util__Context_2,
#line 180 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 180 "term_util.m"
{
#line 426 "term_util.m"
  {
#line 426 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 426 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "term_util.m"
    else
#line 426 "term_util.m"
      {
#line 426 "term_util.m"
        MR_Word transform_hlds__term_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 426 "term_util.m"
        if (((MR_tag((MR_Word) transform_hlds__term_util__V_18_18)) == (MR_mktag((MR_Integer) 0))))
#line 427 "term_util.m"
          {
#line 427 "term_util.m"
            MR_Word transform_hlds__term_util__V_9_9 = (MR_Word) transform_hlds__term_util__V_18_18;

#line 427 "term_util.m"
            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) transform_hlds__term_util__HeadVar__1_1;
#line 427 "term_util.m"
          }
#line 426 "term_util.m"
        else
#line 428 "term_util.m"
          {
#line 428 "term_util.m"
            MR_Word transform_hlds__term_util__V_13_13;
#line 428 "term_util.m"
            MR_Word transform_hlds__term_util__V_14_14;
#line 428 "term_util.m"
            MR_Word transform_hlds__term_util__V_15_15;

#line 429 "term_util.m"
            {
#line 429 "term_util.m"
              transform_hlds__term_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 0) = ((MR_Box) (transform_hlds__term_util__Context_2));
#line 429 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 429 "term_util.m"
            }
#line 429 "term_util.m"
            {
#line 429 "term_util.m"
              transform_hlds__term_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 0) = ((MR_Box) (transform_hlds__term_util__V_15_15));
#line 429 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "term_util.m"
            }
#line 429 "term_util.m"
            {
#line 429 "term_util.m"
              transform_hlds__term_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 429 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_13_13, 0) = ((MR_Box) (transform_hlds__term_util__V_14_14));
#line 429 "term_util.m"
            }
#line 429 "term_util.m"
            {
#line 429 "term_util.m"
              MR_Word base;
#line 429 "term_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 429 "term_util.m"
              *transform_hlds__term_util__HeadVar__3_3 = base;
#line 429 "term_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__V_13_13));
#line 429 "term_util.m"
            }
#line 428 "term_util.m"
          }
#line 426 "term_util.m"
      }
#line 426 "term_util.m"
  }
#line 180 "term_util.m"
}

#line 174 "term_util.m"
void MR_CALL 
transform_hlds__term_util__add_context_to_termination_info_3_p_0(
#line 174 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 174 "term_util.m"
  MR_Word transform_hlds__term_util__Context_2,
#line 174 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
#line 174 "term_util.m"
{
#line 420 "term_util.m"
  {
#line 420 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 420 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "term_util.m"
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "term_util.m"
    else
#line 420 "term_util.m"
      {
#line 420 "term_util.m"
        MR_Word transform_hlds__term_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

#line 420 "term_util.m"
        if (((MR_tag((MR_Word) transform_hlds__term_util__V_18_18)) == (MR_mktag((MR_Integer) 1))))
#line 423 "term_util.m"
          {
#line 423 "term_util.m"
            MR_Word transform_hlds__term_util__V_13_13;
#line 423 "term_util.m"
            MR_Word transform_hlds__term_util__V_14_14;
#line 423 "term_util.m"
            MR_Word transform_hlds__term_util__V_15_15;

#line 424 "term_util.m"
            {
#line 424 "term_util.m"
              transform_hlds__term_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 0) = ((MR_Box) (transform_hlds__term_util__Context_2));
#line 424 "term_util.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 424 "term_util.m"
            }
#line 424 "term_util.m"
            {
#line 424 "term_util.m"
              transform_hlds__term_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 0) = ((MR_Box) (transform_hlds__term_util__V_15_15));
#line 424 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "term_util.m"
            }
#line 424 "term_util.m"
            {
#line 424 "term_util.m"
              transform_hlds__term_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 424 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_13_13, 0) = ((MR_Box) (transform_hlds__term_util__V_14_14));
#line 424 "term_util.m"
            }
#line 424 "term_util.m"
            {
#line 424 "term_util.m"
              MR_Word base;
#line 424 "term_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 424 "term_util.m"
              *transform_hlds__term_util__HeadVar__3_3 = base;
#line 424 "term_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__V_13_13));
#line 424 "term_util.m"
            }
#line 423 "term_util.m"
          }
#line 420 "term_util.m"
        else
#line 421 "term_util.m"
          {
#line 422 "term_util.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 422 "term_util.m"
            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_util_scalar_common_3[1]);
#line 421 "term_util.m"
          }
#line 420 "term_util.m"
      }
#line 420 "term_util.m"
  }
#line 174 "term_util.m"
}

#line 166 "term_util.m"
void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_termination_info_4_p_0(
#line 166 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 166 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 166 "term_util.m"
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 166 "term_util.m"
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
#line 166 "term_util.m"
{
#line 401 "term_util.m"
  while (MR_TRUE)
#line 401 "term_util.m"
    {
#line 401 "term_util.m"
      /* tailcall optimized into a loop */
#line 401 "term_util.m"
      {
#line 401 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 401 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 401 "term_util.m"
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 401 "term_util.m"
        else
#line 402 "term_util.m"
          {
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
#line 402 "term_util.m"
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable0_15;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo0_16;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable0_17;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo0_18;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo_19;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable_20;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo_21;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable_22;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__V_25_25;
#line 402 "term_util.m"
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 405 "term_util.m"
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
#line 407 "term_util.m"
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

#line 404 "term_util.m"
            {
#line 404 "term_util.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
#line 1837 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1839 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 405 "term_util.m"
            {
#line 405 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
#line 405 "term_util.m"
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
#line 406 "term_util.m"
            {
#line 406 "term_util.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
#line 1853 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 407 "term_util.m"
            {
#line 407 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, transform_hlds__term_util__ProcId_14, &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
#line 407 "term_util.m"
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
#line 409 "term_util.m"
            {
#line 409 "term_util.m"
              transform_hlds__term_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_25_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
#line 409 "term_util.m"
            }
#line 409 "term_util.m"
            {
#line 409 "term_util.m"
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__term_util__V_25_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
#line 412 "term_util.m"
            {
#line 412 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcId_14, ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
#line 413 "term_util.m"
            {
#line 413 "term_util.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
#line 414 "term_util.m"
            {
#line 414 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
#line 415 "term_util.m"
            {
#line 415 "term_util.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 416 "term_util.m"
            /* direct tailcall eliminated */
#line 416 "term_util.m"
            {
#line 416 "term_util.m"
              MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__PPIds_10;
#line 416 "term_util.m"
              MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

#line 416 "term_util.m"
              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 416 "term_util.m"
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 416 "term_util.m"
            }
#line 416 "term_util.m"
            continue;
#line 402 "term_util.m"
          }
#line 401 "term_util.m"
      }
#line 401 "term_util.m"
      break;
#line 401 "term_util.m"
    }
#line 166 "term_util.m"
}

#line 160 "term_util.m"
void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_p_0(
#line 160 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 160 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 160 "term_util.m"
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
#line 160 "term_util.m"
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
#line 160 "term_util.m"
{
#line 385 "term_util.m"
  while (MR_TRUE)
#line 385 "term_util.m"
    {
#line 385 "term_util.m"
      /* tailcall optimized into a loop */
#line 385 "term_util.m"
      {
#line 385 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 385 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "term_util.m"
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
#line 385 "term_util.m"
        else
#line 386 "term_util.m"
          {
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
#line 386 "term_util.m"
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable0_15;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo0_16;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable0_17;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo0_18;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__ProcInfo_19;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__ProcTable_20;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__PredInfo_21;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__PredTable_22;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__V_25_25;
#line 386 "term_util.m"
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
#line 389 "term_util.m"
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
#line 391 "term_util.m"
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

#line 388 "term_util.m"
            {
#line 388 "term_util.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
#line 1999 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2001 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 389 "term_util.m"
            {
#line 389 "term_util.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
#line 389 "term_util.m"
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
#line 390 "term_util.m"
            {
#line 390 "term_util.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
#line 2015 "transform_hlds.term_util.c"
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 391 "term_util.m"
            {
#line 391 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, transform_hlds__term_util__ProcId_14, &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
#line 391 "term_util.m"
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
#line 393 "term_util.m"
            {
#line 393 "term_util.m"
              transform_hlds__term_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 393 "term_util.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_25_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
#line 393 "term_util.m"
            }
#line 393 "term_util.m"
            {
#line 393 "term_util.m"
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__term_util__V_25_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
#line 395 "term_util.m"
            {
#line 395 "term_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcId_14, ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
#line 396 "term_util.m"
            {
#line 396 "term_util.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
#line 397 "term_util.m"
            {
#line 397 "term_util.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
#line 398 "term_util.m"
            {
#line 398 "term_util.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
#line 399 "term_util.m"
            /* direct tailcall eliminated */
#line 399 "term_util.m"
            {
#line 399 "term_util.m"
              MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__PPIds_10;
#line 399 "term_util.m"
              MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

#line 399 "term_util.m"
              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 399 "term_util.m"
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 399 "term_util.m"
            }
#line 399 "term_util.m"
            continue;
#line 386 "term_util.m"
          }
#line 385 "term_util.m"
      }
#line 385 "term_util.m"
      break;
#line 385 "term_util.m"
    }
#line 160 "term_util.m"
}

#line 152 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__is_solver_init_wrapper_pred_2_p_0(
#line 152 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 152 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2)
#line 152 "term_util.m"
{
#line 377 "term_util.m"
  {
#line 377 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 377 "term_util.m"
    MR_Word transform_hlds__term_util__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
#line 377 "term_util.m"
    MR_Word transform_hlds__term_util__PredInfo_6;
#line 377 "term_util.m"
    MR_Word transform_hlds__term_util__PredOrigin_7;
#line 377 "term_util.m"
    MR_Word transform_hlds__term_util__SpecialPredId_8;
#line 377 "term_util.m"
    MR_Integer transform_hlds__term_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;

#line 378 "term_util.m"
    {
#line 378 "term_util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PredId_4, &transform_hlds__term_util__PredInfo_6);
    }
#line 379 "term_util.m"
    {
#line 379 "term_util.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__term_util__PredInfo_6, &transform_hlds__term_util__PredOrigin_7);
    }
#line 380 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__PredOrigin_7)) == (MR_mktag((MR_Integer) 0)));
#line 380 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 380 "term_util.m"
      {
#line 380 "term_util.m"
        transform_hlds__term_util__SpecialPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PredOrigin_7, (MR_Integer) 0)));
#line 380 "term_util.m"
        transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PredOrigin_7, (MR_Integer) 1)));
#line 381 "term_util.m"
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__SpecialPredId_8 == (MR_Integer) 3);
#line 380 "term_util.m"
      }
#line 377 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 377 "term_util.m"
  }
#line 152 "term_util.m"
}

#line 146 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(
#line 146 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 146 "term_util.m"
  MR_Word transform_hlds__term_util__PredInfo_5,
#line 146 "term_util.m"
  MR_Word transform_hlds__term_util__ProcInfo_6)
#line 146 "term_util.m"
{
#line 353 "term_util.m"
  {
#line 353 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 353 "term_util.m"
    MR_Word transform_hlds__term_util__TypeList_7;
#line 353 "term_util.m"
    MR_Word transform_hlds__term_util__ModeList_8;

#line 354 "term_util.m"
    {
#line 354 "term_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__term_util__PredInfo_5, &transform_hlds__term_util__TypeList_7);
    }
#line 355 "term_util.m"
    {
#line 355 "term_util.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__ModeList_8);
    }
#line 356 "term_util.m"
    {
#line 356 "term_util.m"
      transform_hlds__term_util__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(transform_hlds__term_util__TypeList_7, transform_hlds__term_util__ModeList_8, transform_hlds__term_util__ModuleInfo_4);
    }
#line 353 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 353 "term_util.m"
  }
#line 146 "term_util.m"
}

#line 139 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__pred_proc_id_terminates_2_p_0(
#line 139 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 139 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_4)
#line 139 "term_util.m"
{
#line 346 "term_util.m"
  {
#line 346 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 346 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_6;
#line 346 "term_util.m"
    MR_Word transform_hlds__term_util__TerminationInfo_7;
#line 346 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;
#line 347 "term_util.m"
    MR_Word transform_hlds__term_util__V_5_5;

#line 347 "term_util.m"
    {
#line 347 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__V_5_5, &transform_hlds__term_util__ProcInfo_6);
    }
#line 348 "term_util.m"
    {
#line 348 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__TerminationInfo_7);
    }
#line 349 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__TerminationInfo_7)) == (MR_mktag((MR_Integer) 1)));
#line 349 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 349 "term_util.m"
      {
#line 349 "term_util.m"
        transform_hlds__term_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__TerminationInfo_7, (MR_Integer) 0)));
#line 349 "term_util.m"
        transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 349 "term_util.m"
      }
#line 346 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 346 "term_util.m"
  }
#line 139 "term_util.m"
}

#line 133 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__is_termination_known_2_p_0(
#line 133 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_3,
#line 133 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_4)
#line 133 "term_util.m"
{
#line 342 "term_util.m"
  {
#line 342 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 342 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_6;
#line 342 "term_util.m"
    MR_Word transform_hlds__term_util__V_9_9;
#line 343 "term_util.m"
    MR_Word transform_hlds__term_util__V_5_5;
#line 344 "term_util.m"
    MR_Word transform_hlds__term_util__V_14_14;

#line 343 "term_util.m"
    {
#line 343 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__V_5_5, &transform_hlds__term_util__ProcInfo_6);
    }
#line 344 "term_util.m"
    {
#line 344 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__V_9_9);
    }
#line 344 "term_util.m"
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 344 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 344 "term_util.m"
      transform_hlds__term_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__V_9_9, (MR_Integer) 0)));
#line 342 "term_util.m"
    return transform_hlds__term_util__succeeded;
#line 342 "term_util.m"
  }
#line 133 "term_util.m"
}

#line 126 "term_util.m"
void MR_CALL 
transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(
#line 126 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 126 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_5,
#line 126 "term_util.m"
  MR_Word * transform_hlds__term_util__MaybeArgSize_6)
#line 126 "term_util.m"
{
#line 338 "term_util.m"
  {
#line 338 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 338 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_8;
#line 339 "term_util.m"
    MR_Word transform_hlds__term_util__V_7_7;

#line 339 "term_util.m"
    {
#line 339 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__V_7_7, &transform_hlds__term_util__ProcInfo_8);
    }
#line 340 "term_util.m"
    {
#line 340 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeArgSize_6);
    }
#line 338 "term_util.m"
  }
#line 126 "term_util.m"
}

#line 123 "term_util.m"
void MR_CALL 
transform_hlds__term_util__lookup_proc_termination_info_3_p_0(
#line 123 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_4,
#line 123 "term_util.m"
  MR_Word transform_hlds__term_util__PPId_5,
#line 123 "term_util.m"
  MR_Word * transform_hlds__term_util__MaybeTermination_6)
#line 123 "term_util.m"
{
#line 334 "term_util.m"
  {
#line 334 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 334 "term_util.m"
    MR_Word transform_hlds__term_util__ProcInfo_8;
#line 335 "term_util.m"
    MR_Word transform_hlds__term_util__V_7_7;

#line 335 "term_util.m"
    {
#line 335 "term_util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__V_7_7, &transform_hlds__term_util__ProcInfo_8);
    }
#line 336 "term_util.m"
    {
#line 336 "term_util.m"
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeTermination_6);
    }
#line 334 "term_util.m"
  }
#line 123 "term_util.m"
}

#line 119 "term_util.m"
MR_bool MR_CALL 
transform_hlds__term_util__horder_vars_2_p_0(
#line 119 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 119 "term_util.m"
  MR_Word transform_hlds__term_util__VarType_5)
#line 119 "term_util.m"
{
#line 324 "term_util.m"
  while (MR_TRUE)
#line 324 "term_util.m"
    {
#line 324 "term_util.m"
      /* tailcall optimized into a loop */
#line 324 "term_util.m"
      {
#line 324 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 324 "term_util.m"
        MR_Word transform_hlds__term_util__Arg_3;
#line 324 "term_util.m"
        MR_Word transform_hlds__term_util__Args_4;

#line 324 "term_util.m"
        if (transform_hlds__term_util__succeeded)
#line 324 "term_util.m"
          {
#line 324 "term_util.m"
            transform_hlds__term_util__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
#line 324 "term_util.m"
            transform_hlds__term_util__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
#line 326 "term_util.m"
            {
#line 326 "term_util.m"
              MR_Word transform_hlds__term_util__Type_6;

#line 326 "term_util.m"
              {
#line 326 "term_util.m"
                hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_util__VarType_5, transform_hlds__term_util__Arg_3, &transform_hlds__term_util__Type_6);
              }
#line 327 "term_util.m"
              {
#line 327 "term_util.m"
                transform_hlds__term_util__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_util__Type_6);
              }
#line 326 "term_util.m"
            }
#line 328 "term_util.m"
            if (!(transform_hlds__term_util__succeeded))
#line 329 "term_util.m"
              {
#line 329 "term_util.m"
                /* direct tailcall eliminated */
#line 329 "term_util.m"
                {
#line 329 "term_util.m"
                  MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__Args_4;

#line 329 "term_util.m"
                  transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 329 "term_util.m"
                }
#line 329 "term_util.m"
                continue;
#line 329 "term_util.m"
              }
#line 324 "term_util.m"
          }
#line 324 "term_util.m"
        return transform_hlds__term_util__succeeded;
#line 324 "term_util.m"
      }
#line 324 "term_util.m"
      break;
#line 324 "term_util.m"
    }
#line 119 "term_util.m"
}

#line 112 "term_util.m"
void MR_CALL 
transform_hlds__term_util__remove_unused_args_4_p_0(
#line 112 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__1_1,
#line 112 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 112 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 112 "term_util.m"
  MR_Word * transform_hlds__term_util__Vars_4)
#line 112 "term_util.m"
{
#line 304 "term_util.m"
  while (MR_TRUE)
#line 304 "term_util.m"
    {
#line 304 "term_util.m"
      /* tailcall optimized into a loop */
#line 304 "term_util.m"
      {
#line 304 "term_util.m"
        MR_bool transform_hlds__term_util__succeeded;

#line 304 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "term_util.m"
          if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "term_util.m"
            *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 304 "term_util.m"
          else
#line 305 "term_util.m"
            {
#line 305 "term_util.m"
              *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 306 "term_util.m"
              {
#line 306 "term_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
#line 306 "term_util.m"
                return;
              }
#line 305 "term_util.m"
            }
#line 304 "term_util.m"
        else
#line 304 "term_util.m"
          {
#line 304 "term_util.m"
            MR_Word transform_hlds__term_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 304 "term_util.m"
            MR_Word transform_hlds__term_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 304 "term_util.m"
            if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "term_util.m"
              {
#line 307 "term_util.m"
                *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
#line 308 "term_util.m"
                {
#line 308 "term_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
#line 308 "term_util.m"
                  return;
                }
#line 307 "term_util.m"
              }
#line 304 "term_util.m"
            else
#line 309 "term_util.m"
              {
#line 309 "term_util.m"
                MR_Word transform_hlds__term_util__UsedVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 309 "term_util.m"
                MR_Word transform_hlds__term_util__UsedVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));

#line 314 "term_util.m"
#line 314 "term_util.m"
                switch (transform_hlds__term_util__UsedVar_21) {
#line 314 "term_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 314 "term_util.m"
                  case (MR_Integer) 0:
#line 317 "term_util.m"
                    {
#line 317 "term_util.m"
                      MR_Word transform_hlds__term_util__Vars1_24;

#line 318 "term_util.m"
                      {
#line 318 "term_util.m"
                        mercury__bag__delete_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_27_27)), transform_hlds__term_util__HeadVar__1_1, &transform_hlds__term_util__Vars1_24);
                      }
#line 319 "term_util.m"
                      /* direct tailcall eliminated */
#line 319 "term_util.m"
                      {
#line 319 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__1__tmp_copy_1 = transform_hlds__term_util__Vars1_24;
#line 319 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__V_26_26;
#line 319 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__3__tmp_copy_3 = transform_hlds__term_util__UsedVars_22;

#line 319 "term_util.m"
                        transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__HeadVar__3__tmp_copy_3;
#line 319 "term_util.m"
                        transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 319 "term_util.m"
                        transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__HeadVar__1__tmp_copy_1;
#line 319 "term_util.m"
                      }
#line 319 "term_util.m"
                      continue;
#line 317 "term_util.m"
                    }
#line 314 "term_util.m"
                    break;
#line 314 "term_util.m"
                  case (MR_Integer) 1:
#line 312 "term_util.m"
                    {
#line 312 "term_util.m"
                      /* direct tailcall eliminated */
#line 312 "term_util.m"
                      {
#line 312 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__2__tmp_copy_2 = transform_hlds__term_util__V_26_26;
#line 312 "term_util.m"
                        MR_Word transform_hlds__term_util__HeadVar__3__tmp_copy_3 = transform_hlds__term_util__UsedVars_22;

#line 312 "term_util.m"
                        transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__HeadVar__3__tmp_copy_3;
#line 312 "term_util.m"
                        transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__HeadVar__2__tmp_copy_2;
#line 312 "term_util.m"
                      }
#line 312 "term_util.m"
                      continue;
#line 312 "term_util.m"
                    }
#line 314 "term_util.m"
                    break;
#line 314 "term_util.m"
                }
#line 309 "term_util.m"
              }
#line 304 "term_util.m"
          }
#line 304 "term_util.m"
      }
#line 304 "term_util.m"
      break;
#line 304 "term_util.m"
    }
#line 112 "term_util.m"
}

#line 102 "term_util.m"
void MR_CALL 
transform_hlds__term_util__make_bool_list_3_p_0(
#line 102 "term_util.m"
  MR_Word transform_hlds__term_util__TypeInfo_for__T_13,
#line 102 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVars0_4,
#line 102 "term_util.m"
  MR_Word transform_hlds__term_util__Bools_5,
#line 102 "term_util.m"
  MR_Word * transform_hlds__term_util__Out_6)
#line 102 "term_util.m"
{
#line 287 "term_util.m"
  {
#line 287 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 287 "term_util.m"
    MR_Integer transform_hlds__term_util__Arity_7;
#line 287 "term_util.m"
    MR_Word transform_hlds__term_util__HeadVars_9;
#line 291 "term_util.m"
    MR_Word transform_hlds__term_util__HeadVars1_8;

#line 288 "term_util.m"
    {
#line 288 "term_util.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_util__Bools_5, &transform_hlds__term_util__Arity_7);
    }
#line 289 "term_util.m"
    {
#line 289 "term_util.m"
      transform_hlds__term_util__succeeded = mercury__list__drop_3_p_0(transform_hlds__term_util__TypeInfo_for__T_13, transform_hlds__term_util__Arity_7, transform_hlds__term_util__HeadVars0_4, &transform_hlds__term_util__HeadVars1_8);
    }
#line 291 "term_util.m"
    if (transform_hlds__term_util__succeeded)
#line 290 "term_util.m"
      transform_hlds__term_util__HeadVars_9 = transform_hlds__term_util__HeadVars1_8;
#line 291 "term_util.m"
    else
#line 292 "term_util.m"
      {
#line 292 "term_util.m"
        {
#line 292 "term_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.make_bool_list\'/3", (MR_String) "unmatched variables");
#line 292 "term_util.m"
          return;
        }
#line 292 "term_util.m"
      }
#line 294 "term_util.m"
    {
#line 294 "term_util.m"
      transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__HeadVars_9, transform_hlds__term_util__Bools_5, transform_hlds__term_util__Out_6);
    }
#line 287 "term_util.m"
  }
#line 102 "term_util.m"
}

#line 87 "term_util.m"
void MR_CALL 
transform_hlds__term_util__split_unification_vars_5_p_0(
#line 87 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_1,
#line 87 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__2_2,
#line 87 "term_util.m"
  MR_Word transform_hlds__term_util__HeadVar__3_3,
#line 87 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
#line 87 "term_util.m"
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
#line 87 "term_util.m"
{
#line 257 "term_util.m"
  {
#line 257 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;

#line 257 "term_util.m"
    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 257 "term_util.m"
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 257 "term_util.m"
        {
#line 258 "term_util.m"
          {
#line 258 "term_util.m"
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], transform_hlds__term_util__HeadVar__4_4);
          }
#line 257 "term_util.m"
          *transform_hlds__term_util__HeadVar__5_5 = *transform_hlds__term_util__HeadVar__4_4;
#line 257 "term_util.m"
        }
#line 257 "term_util.m"
      else
#line 259 "term_util.m"
        {
#line 260 "term_util.m"
          {
#line 260 "term_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
#line 260 "term_util.m"
            return;
          }
#line 259 "term_util.m"
        }
#line 257 "term_util.m"
    else
#line 257 "term_util.m"
      {
#line 257 "term_util.m"
        MR_Word transform_hlds__term_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
#line 257 "term_util.m"
        MR_Word transform_hlds__term_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

#line 257 "term_util.m"
        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "term_util.m"
          {
#line 262 "term_util.m"
            {
#line 262 "term_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
#line 262 "term_util.m"
              return;
            }
#line 261 "term_util.m"
          }
#line 257 "term_util.m"
        else
#line 264 "term_util.m"
          {
#line 264 "term_util.m"
            MR_Word transform_hlds__term_util__UniMode_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
#line 264 "term_util.m"
            MR_Word transform_hlds__term_util__UniModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
#line 264 "term_util.m"
            MR_Word transform_hlds__term_util__InVars0_31;
#line 264 "term_util.m"
            MR_Word transform_hlds__term_util__OutVars0_32;
#line 264 "term_util.m"
            MR_Word transform_hlds__term_util__ArgInit_34;
#line 264 "term_util.m"
            MR_Word transform_hlds__term_util__ArgFinal_36;
#line 264 "term_util.m"
            MR_Word transform_hlds__term_util__V_37_37;
#line 264 "term_util.m"
            MR_Word transform_hlds__term_util__V_38_38;
#line 266 "term_util.m"
            MR_Word transform_hlds__term_util___VarInit_33;
#line 266 "term_util.m"
            MR_Word transform_hlds__term_util___VarFinal_35;

#line 265 "term_util.m"
            {
#line 265 "term_util.m"
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__V_42_42, transform_hlds__term_util__UniModes_28, &transform_hlds__term_util__InVars0_31, &transform_hlds__term_util__OutVars0_32);
            }
#line 266 "term_util.m"
            transform_hlds__term_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__UniMode_27, (MR_Integer) 0)));
#line 266 "term_util.m"
            transform_hlds__term_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__UniMode_27, (MR_Integer) 1)));
#line 266 "term_util.m"
            transform_hlds__term_util___VarInit_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_37_37, (MR_Integer) 0)));
#line 266 "term_util.m"
            transform_hlds__term_util__ArgInit_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_37_37, (MR_Integer) 1)));
#line 266 "term_util.m"
            transform_hlds__term_util___VarFinal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_38_38, (MR_Integer) 0)));
#line 266 "term_util.m"
            transform_hlds__term_util__ArgFinal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__V_38_38, (MR_Integer) 1)));
#line 268 "term_util.m"
            {
#line 268 "term_util.m"
              transform_hlds__term_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
            }
#line 273 "term_util.m"
            if (transform_hlds__term_util__succeeded)
#line 271 "term_util.m"
              {
#line 271 "term_util.m"
                {
#line 271 "term_util.m"
                  mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_43_43)), transform_hlds__term_util__InVars0_31, transform_hlds__term_util__HeadVar__4_4);
                }
#line 272 "term_util.m"
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
#line 271 "term_util.m"
              }
#line 273 "term_util.m"
            else
#line 280 "term_util.m"
              {
#line 274 "term_util.m"
                {
#line 274 "term_util.m"
                  transform_hlds__term_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
                }
#line 274 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 275 "term_util.m"
                  {
#line 275 "term_util.m"
                    transform_hlds__term_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgFinal_36);
                  }
#line 280 "term_util.m"
                if (transform_hlds__term_util__succeeded)
#line 278 "term_util.m"
                  {
#line 278 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
#line 279 "term_util.m"
                    {
#line 279 "term_util.m"
                      mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__V_43_43)), transform_hlds__term_util__OutVars0_32, transform_hlds__term_util__HeadVar__5_5);
                    }
#line 278 "term_util.m"
                  }
#line 280 "term_util.m"
                else
#line 281 "term_util.m"
                  {
#line 281 "term_util.m"
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
#line 282 "term_util.m"
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
#line 281 "term_util.m"
                  }
#line 280 "term_util.m"
              }
#line 264 "term_util.m"
          }
#line 257 "term_util.m"
      }
#line 257 "term_util.m"
  }
#line 87 "term_util.m"
}

#line 81 "term_util.m"
void MR_CALL 
transform_hlds__term_util__partition_call_args_5_p_0(
#line 81 "term_util.m"
  MR_Word transform_hlds__term_util__ModuleInfo_6,
#line 81 "term_util.m"
  MR_Word transform_hlds__term_util__ArgModes_7,
#line 81 "term_util.m"
  MR_Word transform_hlds__term_util__Args_8,
#line 81 "term_util.m"
  MR_Word * transform_hlds__term_util__InVarsBag_9,
#line 81 "term_util.m"
  MR_Word * transform_hlds__term_util__OutVarsBag_10)
#line 81 "term_util.m"
{
#line 213 "term_util.m"
  {
#line 213 "term_util.m"
    MR_bool transform_hlds__term_util__succeeded;
#line 213 "term_util.m"
    MR_Word transform_hlds__term_util__TypeInfo_13_13;
#line 213 "term_util.m"
    MR_Word transform_hlds__term_util__InVars_11;
#line 213 "term_util.m"
    MR_Word transform_hlds__term_util__OutVars_12;

#line 214 "term_util.m"
    {
#line 214 "term_util.m"
      transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_6, transform_hlds__term_util__ArgModes_7, transform_hlds__term_util__Args_8, &transform_hlds__term_util__InVars_11, &transform_hlds__term_util__OutVars_12);
    }
#line 2863 "transform_hlds.term_util.c"
    transform_hlds__term_util__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_util_scalar_common_1[0];
#line 215 "term_util.m"
    {
#line 215 "term_util.m"
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__InVars_11, transform_hlds__term_util__InVarsBag_9);
    }
#line 216 "term_util.m"
    {
#line 216 "term_util.m"
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__OutVars_12, transform_hlds__term_util__OutVarsBag_10);
    }
#line 213 "term_util.m"
  }
#line 81 "term_util.m"
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
