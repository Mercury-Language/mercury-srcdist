/*
** Automatically generated from `inst_user.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module check_hlds.inst_user. */
/* :- implementation. */

/*
INIT mercury__check_hlds__inst_user__init
ENDINIT
*/

#include "check_hlds.inst_user.mih"


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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "check_hlds.inst_user.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_user__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0check_hlds__inst_user__type_ctor_info_maybe_user_inst_0;

#line 139 "check_hlds.inst_user.c"
static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0;

#line 142 "check_hlds.inst_user.c"
static const MR_PseudoTypeInfo check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1[1];

#line 145 "check_hlds.inst_user.c"
static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1;

#line 148 "check_hlds.inst_user.c"
static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0[1];

#line 151 "check_hlds.inst_user.c"
static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_1[1];

#line 154 "check_hlds.inst_user.c"
static const MR_DuPtagLayout check_hlds__inst_user__check_hlds__inst_user__du_ptag_ordered_maybe_user_inst_0[2];

#line 157 "check_hlds.inst_user.c"
static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_name_ordered_maybe_user_inst_0[2];

#line 160 "check_hlds.inst_user.c"
static const MR_Integer check_hlds__inst_user__check_hlds__inst_user__functor_number_map_maybe_user_inst_0[2];

#line 163 "check_hlds.inst_user.c"
static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001(
#line 166 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_1,
#line 168 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_2);

#line 171 "check_hlds.inst_user.c"
static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001(
#line 174 "check_hlds.inst_user.c"
  MR_Box * check_hlds__inst_user__wrapper_arg_1,
#line 176 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_2,
#line 178 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_3);

#line 181 "check_hlds.inst_user.c"
static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001(
#line 184 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_1,
#line 186 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_2);

#line 189 "check_hlds.inst_user.c"
static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001(
#line 192 "check_hlds.inst_user.c"
  MR_Box * check_hlds__inst_user__wrapper_arg_1,
#line 194 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_2,
#line 196 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_3);

#line 272 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__2_2,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_Groundness_5,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15);

#line 246 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__2_2,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_Groundness_5,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15);

#line 150 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(
#line 150 "inst_user.m"
  MR_Word check_hlds__inst_user__Inst0_11,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__Inst_12,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__Groundness_14,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsAny_15,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsInstNames_16,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsInstVars_17,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsTypes_18,
#line 150 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39);

#line 73 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(
#line 73 "inst_user.m"
  MR_Word check_hlds__inst_user__ModuleInfo_1,
#line 73 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2,
#line 73 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__3_3,
#line 73 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5,
#line 73 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_6);

#line 45 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0(
#line 45 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__1_1,
#line 45 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2,
#line 45 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__3_3);

#line 45 "inst_user.m"
static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0(
#line 45 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 45 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2);

#line 49 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(
#line 49 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__1_1,
#line 49 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2,
#line 49 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__3_3);

#line 49 "inst_user.m"
static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(
#line 49 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 49 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2);

#line 417 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__record_user_inst_results_2_p_0(
#line 417 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 417 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__2_2);

#line 395 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__combine_contains_types_results_3_p_0(
#line 395 "inst_user.m"
  MR_Word check_hlds__inst_user__ContainsTypesA_4,
#line 395 "inst_user.m"
  MR_Word check_hlds__inst_user__ContainsTypesB_5,
#line 395 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsTypes_6);


static /* final */ const MR_Box check_hlds__inst_user_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__inst_user_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__inst_user_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_user_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 389 "check_hlds.inst_user.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_user__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0check_hlds__inst_user__type_ctor_info_maybe_user_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_TypeInfo) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0
  }
};

#line 398 "check_hlds.inst_user.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_inst_defns_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001)),
  ((MR_Box) (check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001)),
  (MR_String) "check_hlds.inst_user",
  (MR_String) "maybe_inst_defns_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_user__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0check_hlds__inst_user__type_ctor_info_maybe_user_inst_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 415 "check_hlds.inst_user.c"
static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0 = {
  (MR_String) "user_inst_being_processed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 430 "check_hlds.inst_user.c"
static const MR_PseudoTypeInfo check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0
};

#line 435 "check_hlds.inst_user.c"
static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1 = {
  (MR_String) "processed_user_inst",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1,
  NULL,
  NULL,
  NULL
};

#line 450 "check_hlds.inst_user.c"
static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0[1] = {
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0
};

#line 455 "check_hlds.inst_user.c"
static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_1[1] = {
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1
};

#line 460 "check_hlds.inst_user.c"
static const MR_DuPtagLayout check_hlds__inst_user__check_hlds__inst_user__du_ptag_ordered_maybe_user_inst_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_1
  }
};

#line 474 "check_hlds.inst_user.c"
static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_name_ordered_maybe_user_inst_0[2] = {
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1,
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0
};

#line 480 "check_hlds.inst_user.c"
static const MR_Integer check_hlds__inst_user__check_hlds__inst_user__functor_number_map_maybe_user_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 486 "check_hlds.inst_user.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001)),
  ((MR_Box) (check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001)),
  (MR_String) "check_hlds.inst_user",
  (MR_String) "maybe_user_inst",
  {     check_hlds__inst_user__check_hlds__inst_user__du_name_ordered_maybe_user_inst_0 },
  {     check_hlds__inst_user__check_hlds__inst_user__du_ptag_ordered_maybe_user_inst_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__inst_user__check_hlds__inst_user__functor_number_map_maybe_user_inst_0
};

#line 503 "check_hlds.inst_user.c"
static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001(
#line 506 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_1,
#line 508 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_2)
#line 510 "check_hlds.inst_user.c"
{
#line 512 "check_hlds.inst_user.c"
  {
#line 514 "check_hlds.inst_user.c"
    MR_bool check_hlds__inst_user__succeeded;

#line 517 "check_hlds.inst_user.c"
    {
#line 519 "check_hlds.inst_user.c"
      check_hlds__inst_user__succeeded = check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(((MR_Word) check_hlds__inst_user__wrapper_arg_1), ((MR_Word) check_hlds__inst_user__wrapper_arg_2));
    }
#line 522 "check_hlds.inst_user.c"
    return check_hlds__inst_user__succeeded;
#line 524 "check_hlds.inst_user.c"
  }
#line 526 "check_hlds.inst_user.c"
}

#line 529 "check_hlds.inst_user.c"
static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001(
#line 532 "check_hlds.inst_user.c"
  MR_Box * check_hlds__inst_user__wrapper_arg_1,
#line 534 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_2,
#line 536 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_3)
#line 538 "check_hlds.inst_user.c"
{
#line 540 "check_hlds.inst_user.c"
  {
#line 542 "check_hlds.inst_user.c"
    MR_Word check_hlds__inst_user__conv0_HeadVar__1_1;

#line 545 "check_hlds.inst_user.c"
    {
#line 547 "check_hlds.inst_user.c"
      check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(&check_hlds__inst_user__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_user__wrapper_arg_2), ((MR_Word) check_hlds__inst_user__wrapper_arg_3));
    }
#line 550 "check_hlds.inst_user.c"
    *check_hlds__inst_user__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_user__conv0_HeadVar__1_1));
#line 552 "check_hlds.inst_user.c"
  }
#line 554 "check_hlds.inst_user.c"
}

#line 557 "check_hlds.inst_user.c"
static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001(
#line 560 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_1,
#line 562 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_2)
#line 564 "check_hlds.inst_user.c"
{
#line 566 "check_hlds.inst_user.c"
  {
#line 568 "check_hlds.inst_user.c"
    MR_bool check_hlds__inst_user__succeeded;

#line 571 "check_hlds.inst_user.c"
    {
#line 573 "check_hlds.inst_user.c"
      check_hlds__inst_user__succeeded = check_hlds__inst_user____Unify____maybe_user_inst_0_0(((MR_Word) check_hlds__inst_user__wrapper_arg_1), ((MR_Word) check_hlds__inst_user__wrapper_arg_2));
    }
#line 576 "check_hlds.inst_user.c"
    return check_hlds__inst_user__succeeded;
#line 578 "check_hlds.inst_user.c"
  }
#line 580 "check_hlds.inst_user.c"
}

#line 583 "check_hlds.inst_user.c"
static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001(
#line 586 "check_hlds.inst_user.c"
  MR_Box * check_hlds__inst_user__wrapper_arg_1,
#line 588 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_2,
#line 590 "check_hlds.inst_user.c"
  MR_Box check_hlds__inst_user__wrapper_arg_3)
#line 592 "check_hlds.inst_user.c"
{
#line 594 "check_hlds.inst_user.c"
  {
#line 596 "check_hlds.inst_user.c"
    MR_Word check_hlds__inst_user__conv0_HeadVar__1_1;

#line 599 "check_hlds.inst_user.c"
    {
#line 601 "check_hlds.inst_user.c"
      check_hlds__inst_user____Compare____maybe_user_inst_0_0(&check_hlds__inst_user__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_user__wrapper_arg_2), ((MR_Word) check_hlds__inst_user__wrapper_arg_3));
    }
#line 604 "check_hlds.inst_user.c"
    *check_hlds__inst_user__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_user__conv0_HeadVar__1_1));
#line 606 "check_hlds.inst_user.c"
  }
#line 608 "check_hlds.inst_user.c"
}

#line 272 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__2_2,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_Groundness_5,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13,
#line 272 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14,
#line 272 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15)
#line 272 "inst_user.m"
{
#line 282 "inst_user.m"
  {
#line 282 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;

#line 282 "inst_user.m"
    if ((check_hlds__inst_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "inst_user.m"
      {
#line 282 "inst_user.m"
        *check_hlds__inst_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 284 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14;
#line 284 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13 = check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12;
#line 283 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11 = check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10;
#line 283 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9 = check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8;
#line 283 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7 = check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6;
#line 283 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_Groundness_5 = check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4;
#line 282 "inst_user.m"
      }
#line 282 "inst_user.m"
    else
#line 288 "inst_user.m"
      {
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgInst0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 0)));
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgInsts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 1)));
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgInst_37;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgInsts_38;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgGroundness_46;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgContainsAny_47;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgContainsInstNames_48;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgContainsInstVars_49;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgContainsTypes_50;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_63_63;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67;
#line 288 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_68_68;

#line 289 "inst_user.m"
        {
#line 289 "inst_user.m"
          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(check_hlds__inst_user__ArgInst0_35, &check_hlds__inst_user__ArgInst_37, &check_hlds__inst_user__ArgGroundness_46, &check_hlds__inst_user__ArgContainsAny_47, &check_hlds__inst_user__ArgContainsInstNames_48, &check_hlds__inst_user__ArgContainsInstVars_49, &check_hlds__inst_user__ArgContainsTypes_50, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_63_63);
        }
#line 308 "inst_user.m"
#line 308 "inst_user.m"
        switch (check_hlds__inst_user__ArgGroundness_46) {
#line 308 "inst_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 308 "inst_user.m"
          case (MR_Integer) 2:
#line 318 "inst_user.m"
#line 318 "inst_user.m"
            switch (check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4) {
#line 318 "inst_user.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 318 "inst_user.m"
              case (MR_Integer) 2:
#line 318 "inst_user.m"
              case (MR_Integer) 1:
#line 322 "inst_user.m"
                check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64 = (MR_Integer) 2;
#line 318 "inst_user.m"
                break;
#line 318 "inst_user.m"
              case (MR_Integer) 0:
#line 317 "inst_user.m"
                check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64 = (MR_Integer) 0;
#line 318 "inst_user.m"
                break;
#line 318 "inst_user.m"
            }
#line 308 "inst_user.m"
            break;
#line 308 "inst_user.m"
          case (MR_Integer) 1:
#line 312 "inst_user.m"
            check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64 = check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4;
#line 308 "inst_user.m"
            break;
#line 308 "inst_user.m"
          case (MR_Integer) 0:
#line 309 "inst_user.m"
            check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64 = (MR_Integer) 0;
#line 308 "inst_user.m"
            break;
#line 308 "inst_user.m"
        }
#line 331 "inst_user.m"
#line 331 "inst_user.m"
        switch (check_hlds__inst_user__ArgContainsAny_47) {
#line 331 "inst_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 331 "inst_user.m"
          case (MR_Integer) 2:
#line 341 "inst_user.m"
#line 341 "inst_user.m"
            switch (check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6) {
#line 341 "inst_user.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 341 "inst_user.m"
              case (MR_Integer) 2:
#line 341 "inst_user.m"
              case (MR_Integer) 0:
#line 345 "inst_user.m"
                check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65 = (MR_Integer) 2;
#line 341 "inst_user.m"
                break;
#line 341 "inst_user.m"
              case (MR_Integer) 1:
#line 340 "inst_user.m"
                check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65 = (MR_Integer) 1;
#line 341 "inst_user.m"
                break;
#line 341 "inst_user.m"
            }
#line 331 "inst_user.m"
            break;
#line 331 "inst_user.m"
          case (MR_Integer) 1:
#line 332 "inst_user.m"
            check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65 = (MR_Integer) 1;
#line 331 "inst_user.m"
            break;
#line 331 "inst_user.m"
          case (MR_Integer) 0:
#line 335 "inst_user.m"
            check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65 = check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6;
#line 331 "inst_user.m"
            break;
#line 331 "inst_user.m"
        }
#line 356 "inst_user.m"
        if ((check_hlds__inst_user__ArgContainsInstNames_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "inst_user.m"
          check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "inst_user.m"
        else
#line 359 "inst_user.m"
          {
#line 359 "inst_user.m"
            MR_Word check_hlds__inst_user__InstNamesA_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ArgContainsInstNames_48, (MR_Integer) 0)));

#line 363 "inst_user.m"
            if ((check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "inst_user.m"
              check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 363 "inst_user.m"
            else
#line 365 "inst_user.m"
              {
#line 365 "inst_user.m"
                MR_Word check_hlds__inst_user__InstNamesB_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8, (MR_Integer) 0)));
#line 365 "inst_user.m"
                MR_Word check_hlds__inst_user__InstNames_86;

#line 366 "inst_user.m"
                {
#line 366 "inst_user.m"
                  mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, check_hlds__inst_user__InstNamesA_84, check_hlds__inst_user__InstNamesB_85, &check_hlds__inst_user__InstNames_86);
                }
#line 367 "inst_user.m"
                {
#line 367 "inst_user.m"
                  check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "inst_user.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66, 0) = ((MR_Box) (check_hlds__inst_user__InstNames_86));
#line 367 "inst_user.m"
                }
#line 365 "inst_user.m"
              }
#line 359 "inst_user.m"
          }
#line 379 "inst_user.m"
        if ((check_hlds__inst_user__ArgContainsInstVars_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "inst_user.m"
          check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 379 "inst_user.m"
        else
#line 382 "inst_user.m"
          {
#line 382 "inst_user.m"
            MR_Word check_hlds__inst_user__InstVarsA_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ArgContainsInstVars_49, (MR_Integer) 0)));

#line 386 "inst_user.m"
            if ((check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "inst_user.m"
              check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "inst_user.m"
            else
#line 388 "inst_user.m"
              {
#line 388 "inst_user.m"
                MR_Word check_hlds__inst_user__InstVarsB_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10, (MR_Integer) 0)));
#line 388 "inst_user.m"
                MR_Word check_hlds__inst_user__InstVars_93;

#line 389 "inst_user.m"
                {
#line 389 "inst_user.m"
                  mercury__set__union_3_p_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0], check_hlds__inst_user__InstVarsA_91, check_hlds__inst_user__InstVarsB_92, &check_hlds__inst_user__InstVars_93);
                }
#line 390 "inst_user.m"
                {
#line 390 "inst_user.m"
                  check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "inst_user.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67, 0) = ((MR_Box) (check_hlds__inst_user__InstVars_93));
#line 390 "inst_user.m"
                }
#line 388 "inst_user.m"
              }
#line 382 "inst_user.m"
          }
#line 298 "inst_user.m"
        {
#line 298 "inst_user.m"
          check_hlds__inst_user__combine_contains_types_results_3_p_0(check_hlds__inst_user__ArgContainsTypes_50, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12, &check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_68_68);
        }
#line 299 "inst_user.m"
        {
#line 299 "inst_user.m"
          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(check_hlds__inst_user__ArgInsts0_36, &check_hlds__inst_user__ArgInsts_38, check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64, check_hlds__inst_user__STATE_VARIABLE_Groundness_5, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_68_68, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_63_63, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15);
        }
#line 285 "inst_user.m"
        {
#line 285 "inst_user.m"
          MR_Word base;
#line 285 "inst_user.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "inst_user.m"
          *check_hlds__inst_user__HeadVar__2_2 = base;
#line 285 "inst_user.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__ArgInst_37));
#line 285 "inst_user.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_user__ArgInsts_38));
#line 285 "inst_user.m"
        }
#line 288 "inst_user.m"
      }
#line 282 "inst_user.m"
  }
#line 272 "inst_user.m"
}

#line 246 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__2_2,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_Groundness_5,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13,
#line 246 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14,
#line 246 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15)
#line 246 "inst_user.m"
{
#line 256 "inst_user.m"
  {
#line 256 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;

#line 256 "inst_user.m"
    if ((check_hlds__inst_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "inst_user.m"
      {
#line 256 "inst_user.m"
        *check_hlds__inst_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 258 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14;
#line 258 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13 = check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12;
#line 257 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11 = check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10;
#line 257 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9 = check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8;
#line 257 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7 = check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6;
#line 257 "inst_user.m"
        *check_hlds__inst_user__STATE_VARIABLE_Groundness_5 = check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4;
#line 256 "inst_user.m"
      }
#line 256 "inst_user.m"
    else
#line 262 "inst_user.m"
      {
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__BoundInst0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__BoundInsts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__BoundInst_37;
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__BoundInsts_38;
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__ConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__BoundInst0_35, (MR_Integer) 0)));
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgInsts0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__BoundInst0_35, (MR_Integer) 1)));
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__ArgInsts_48;
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_61_61;
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_62_62;
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_63_63;
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_64_64;
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_65_65;
#line 262 "inst_user.m"
        MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_66_66;

#line 264 "inst_user.m"
        {
#line 264 "inst_user.m"
          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(check_hlds__inst_user__ArgInsts0_47, &check_hlds__inst_user__ArgInsts_48, check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4, &check_hlds__inst_user__STATE_VARIABLE_Groundness_61_61, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6, &check_hlds__inst_user__STATE_VARIABLE_ContainsAny_62_62, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8, &check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_63_63, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10, &check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_64_64, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12, &check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_65_65, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_66_66);
        }
#line 267 "inst_user.m"
        {
#line 267 "inst_user.m"
          check_hlds__inst_user__BoundInst_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "inst_user.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_user__BoundInst_37, 0) = ((MR_Box) (check_hlds__inst_user__ConsId_46));
#line 267 "inst_user.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_user__BoundInst_37, 1) = ((MR_Box) (check_hlds__inst_user__ArgInsts_48));
#line 267 "inst_user.m"
        }
#line 268 "inst_user.m"
        {
#line 268 "inst_user.m"
          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(check_hlds__inst_user__BoundInsts0_36, &check_hlds__inst_user__BoundInsts_38, check_hlds__inst_user__STATE_VARIABLE_Groundness_61_61, check_hlds__inst_user__STATE_VARIABLE_Groundness_5, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_62_62, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_63_63, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_64_64, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_65_65, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_66_66, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15);
        }
#line 259 "inst_user.m"
        {
#line 259 "inst_user.m"
          MR_Word base;
#line 259 "inst_user.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "inst_user.m"
          *check_hlds__inst_user__HeadVar__2_2 = base;
#line 259 "inst_user.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__BoundInst_37));
#line 259 "inst_user.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_user__BoundInsts_38));
#line 259 "inst_user.m"
        }
#line 262 "inst_user.m"
      }
#line 256 "inst_user.m"
  }
#line 246 "inst_user.m"
}

#line 150 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(
#line 150 "inst_user.m"
  MR_Word check_hlds__inst_user__Inst0_11,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__Inst_12,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__Groundness_14,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsAny_15,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsInstNames_16,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsInstVars_17,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsTypes_18,
#line 150 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38,
#line 150 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39)
#line 150 "inst_user.m"
{
#line 162 "inst_user.m"
  {
#line 162 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;

#line 162 "inst_user.m"
#line 162 "inst_user.m"
    switch (MR_tag((MR_Word) check_hlds__inst_user__Inst0_11)) {
#line 162 "inst_user.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 162 "inst_user.m"
      case (MR_Integer) 0:
#line 162 "inst_user.m"
#line 162 "inst_user.m"
        switch (MR_unmkbody(check_hlds__inst_user__Inst0_11)) {
#line 162 "inst_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 162 "inst_user.m"
          case (MR_Integer) 0:
#line 162 "inst_user.m"
            {
#line 162 "inst_user.m"
              MR_Word check_hlds__inst_user__V_70_70;
#line 162 "inst_user.m"
              MR_Word check_hlds__inst_user__V_71_71;
#line 162 "inst_user.m"
              MR_Word check_hlds__inst_user__V_72_72;

#line 163 "inst_user.m"
              *check_hlds__inst_user__Groundness_14 = (MR_Integer) 0;
#line 164 "inst_user.m"
              *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 0;
#line 165 "inst_user.m"
              {
#line 165 "inst_user.m"
                check_hlds__inst_user__V_70_70 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              }
#line 165 "inst_user.m"
              {
#line 165 "inst_user.m"
                MR_Word base;
#line 165 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "inst_user.m"
                *check_hlds__inst_user__ContainsInstNames_16 = base;
#line 165 "inst_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_70_70));
#line 165 "inst_user.m"
              }
#line 166 "inst_user.m"
              {
#line 166 "inst_user.m"
                check_hlds__inst_user__V_71_71 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              }
#line 166 "inst_user.m"
              {
#line 166 "inst_user.m"
                MR_Word base;
#line 166 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 166 "inst_user.m"
                *check_hlds__inst_user__ContainsInstVars_17 = base;
#line 166 "inst_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_71_71));
#line 166 "inst_user.m"
              }
#line 167 "inst_user.m"
              {
#line 167 "inst_user.m"
                check_hlds__inst_user__V_72_72 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              }
#line 167 "inst_user.m"
              {
#line 167 "inst_user.m"
                MR_Word base;
#line 167 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 167 "inst_user.m"
                *check_hlds__inst_user__ContainsTypes_18 = base;
#line 167 "inst_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_72_72));
#line 167 "inst_user.m"
              }
#line 168 "inst_user.m"
              *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
#line 162 "inst_user.m"
              *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
#line 162 "inst_user.m"
            }
#line 162 "inst_user.m"
            break;
#line 162 "inst_user.m"
          case (MR_Integer) 1:
#line 199 "inst_user.m"
            {
#line 201 "inst_user.m"
              {
#line 201 "inst_user.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_user", (MR_String) "predicate \140check_hlds.inst_user.pretest_inst\'/10", (MR_String) "Inst0 = not_reached");
#line 201 "inst_user.m"
                return;
              }
#line 199 "inst_user.m"
            }
#line 162 "inst_user.m"
            break;
#line 162 "inst_user.m"
        }
#line 162 "inst_user.m"
        break;
#line 162 "inst_user.m"
      case (MR_Integer) 1:
#line 170 "inst_user.m"
        {
#line 170 "inst_user.m"
          MR_Word check_hlds__inst_user__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__Inst0_11, (MR_Integer) 0)));
#line 170 "inst_user.m"
          MR_Word check_hlds__inst_user__V_68_68;
#line 170 "inst_user.m"
          MR_Word check_hlds__inst_user__V_69_69;
#line 178 "inst_user.m"
          MR_Word check_hlds__inst_user__TypeCtor_21;

#line 171 "inst_user.m"
          *check_hlds__inst_user__Groundness_14 = (MR_Integer) 0;
#line 172 "inst_user.m"
          *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 0;
#line 173 "inst_user.m"
          {
#line 173 "inst_user.m"
            check_hlds__inst_user__V_68_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
          }
#line 173 "inst_user.m"
          {
#line 173 "inst_user.m"
            MR_Word base;
#line 173 "inst_user.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 173 "inst_user.m"
            *check_hlds__inst_user__ContainsInstNames_16 = base;
#line 173 "inst_user.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_68_68));
#line 173 "inst_user.m"
          }
#line 174 "inst_user.m"
          {
#line 174 "inst_user.m"
            check_hlds__inst_user__V_69_69 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
          }
#line 174 "inst_user.m"
          {
#line 174 "inst_user.m"
            MR_Word base;
#line 174 "inst_user.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "inst_user.m"
            *check_hlds__inst_user__ContainsInstVars_17 = base;
#line 174 "inst_user.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_69_69));
#line 174 "inst_user.m"
          }
#line 175 "inst_user.m"
          {
#line 175 "inst_user.m"
            check_hlds__inst_user__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__inst_user__Type_20, &check_hlds__inst_user__TypeCtor_21);
          }
#line 178 "inst_user.m"
          if (check_hlds__inst_user__succeeded)
#line 176 "inst_user.m"
            {
#line 176 "inst_user.m"
              MR_Word check_hlds__inst_user__TypeCtors_22;

#line 176 "inst_user.m"
              {
#line 176 "inst_user.m"
                mercury__set__singleton_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (check_hlds__inst_user__TypeCtor_21)), &check_hlds__inst_user__TypeCtors_22);
              }
#line 177 "inst_user.m"
              {
#line 177 "inst_user.m"
                MR_Word base;
#line 177 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 177 "inst_user.m"
                *check_hlds__inst_user__ContainsTypes_18 = base;
#line 177 "inst_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__TypeCtors_22));
#line 177 "inst_user.m"
              }
#line 176 "inst_user.m"
            }
#line 178 "inst_user.m"
          else
#line 179 "inst_user.m"
            *check_hlds__inst_user__ContainsTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "inst_user.m"
          *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
#line 170 "inst_user.m"
          *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
#line 170 "inst_user.m"
        }
#line 162 "inst_user.m"
        break;
#line 162 "inst_user.m"
      case (MR_Integer) 2:
#line 191 "inst_user.m"
        {
#line 191 "inst_user.m"
          MR_Word check_hlds__inst_user__V_62_62;
#line 191 "inst_user.m"
          MR_Word check_hlds__inst_user__V_63_63;
#line 191 "inst_user.m"
          MR_Word check_hlds__inst_user__V_64_64;

#line 192 "inst_user.m"
          *check_hlds__inst_user__Groundness_14 = (MR_Integer) 0;
#line 193 "inst_user.m"
          *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 1;
#line 194 "inst_user.m"
          {
#line 194 "inst_user.m"
            check_hlds__inst_user__V_62_62 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
          }
#line 194 "inst_user.m"
          {
#line 194 "inst_user.m"
            MR_Word base;
#line 194 "inst_user.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 194 "inst_user.m"
            *check_hlds__inst_user__ContainsInstNames_16 = base;
#line 194 "inst_user.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_62_62));
#line 194 "inst_user.m"
          }
#line 195 "inst_user.m"
          {
#line 195 "inst_user.m"
            check_hlds__inst_user__V_63_63 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
          }
#line 195 "inst_user.m"
          {
#line 195 "inst_user.m"
            MR_Word base;
#line 195 "inst_user.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "inst_user.m"
            *check_hlds__inst_user__ContainsInstVars_17 = base;
#line 195 "inst_user.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_63_63));
#line 195 "inst_user.m"
          }
#line 196 "inst_user.m"
          {
#line 196 "inst_user.m"
            check_hlds__inst_user__V_64_64 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          }
#line 196 "inst_user.m"
          {
#line 196 "inst_user.m"
            MR_Word base;
#line 196 "inst_user.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 196 "inst_user.m"
            *check_hlds__inst_user__ContainsTypes_18 = base;
#line 196 "inst_user.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_64_64));
#line 196 "inst_user.m"
          }
#line 197 "inst_user.m"
          *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
#line 191 "inst_user.m"
          *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
#line 191 "inst_user.m"
        }
#line 162 "inst_user.m"
        break;
#line 162 "inst_user.m"
      case (MR_Integer) 3:
#line 162 "inst_user.m"
#line 162 "inst_user.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 0)))) {
#line 162 "inst_user.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 162 "inst_user.m"
          case (MR_Integer) 0:
#line 232 "inst_user.m"
            {
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__Uniq_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 1)));
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__BoundInsts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 3)));
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__BoundInsts_36;
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__TestResults_37;
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__V_42_42;
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__V_43_43;
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__V_44_44;
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__V_46_46;
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__V_47_47;
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user__V_48_48;
#line 232 "inst_user.m"
              MR_Word check_hlds__inst_user___TestResults0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 2)));

#line 236 "inst_user.m"
              {
#line 236 "inst_user.m"
                check_hlds__inst_user__V_46_46 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              }
#line 236 "inst_user.m"
              {
#line 236 "inst_user.m"
                check_hlds__inst_user__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 236 "inst_user.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_42_42, 0) = ((MR_Box) (check_hlds__inst_user__V_46_46));
#line 236 "inst_user.m"
              }
#line 237 "inst_user.m"
              {
#line 237 "inst_user.m"
                check_hlds__inst_user__V_47_47 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              }
#line 237 "inst_user.m"
              {
#line 237 "inst_user.m"
                check_hlds__inst_user__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 237 "inst_user.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_43_43, 0) = ((MR_Box) (check_hlds__inst_user__V_47_47));
#line 237 "inst_user.m"
              }
#line 238 "inst_user.m"
              {
#line 238 "inst_user.m"
                check_hlds__inst_user__V_48_48 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              }
#line 238 "inst_user.m"
              {
#line 238 "inst_user.m"
                check_hlds__inst_user__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 238 "inst_user.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_44_44, 0) = ((MR_Box) (check_hlds__inst_user__V_48_48));
#line 238 "inst_user.m"
              }
#line 233 "inst_user.m"
              {
#line 233 "inst_user.m"
                check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(check_hlds__inst_user__BoundInsts0_35, &check_hlds__inst_user__BoundInsts_36, (MR_Integer) 1, check_hlds__inst_user__Groundness_14, (MR_Integer) 0, check_hlds__inst_user__ContainsAny_15, check_hlds__inst_user__V_42_42, check_hlds__inst_user__ContainsInstNames_16, check_hlds__inst_user__V_43_43, check_hlds__inst_user__ContainsInstVars_17, check_hlds__inst_user__V_44_44, check_hlds__inst_user__ContainsTypes_18, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39);
              }
#line 240 "inst_user.m"
              {
#line 240 "inst_user.m"
                check_hlds__inst_user__TestResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 240 "inst_user.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 0) = ((MR_Box) (*check_hlds__inst_user__Groundness_14));
#line 240 "inst_user.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 1) = ((MR_Box) (*check_hlds__inst_user__ContainsAny_15));
#line 240 "inst_user.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 2) = ((MR_Box) (*check_hlds__inst_user__ContainsInstNames_16));
#line 240 "inst_user.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 3) = ((MR_Box) (*check_hlds__inst_user__ContainsInstVars_17));
#line 240 "inst_user.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 4) = ((MR_Box) (*check_hlds__inst_user__ContainsTypes_18));
#line 240 "inst_user.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "inst_user.m"
              }
#line 243 "inst_user.m"
              {
#line 243 "inst_user.m"
                MR_Word base;
#line 243 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 243 "inst_user.m"
                *check_hlds__inst_user__Inst_12 = base;
#line 243 "inst_user.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 243 "inst_user.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_user__Uniq_33));
#line 243 "inst_user.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_user__TestResults_37));
#line 243 "inst_user.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_user__BoundInsts_36));
#line 243 "inst_user.m"
              }
#line 232 "inst_user.m"
            }
#line 162 "inst_user.m"
            break;
#line 162 "inst_user.m"
          case (MR_Integer) 1:
#line 183 "inst_user.m"
            {
#line 183 "inst_user.m"
              MR_Word check_hlds__inst_user__V_65_65;
#line 183 "inst_user.m"
              MR_Word check_hlds__inst_user__V_66_66;
#line 183 "inst_user.m"
              MR_Word check_hlds__inst_user__V_67_67;

#line 184 "inst_user.m"
              *check_hlds__inst_user__Groundness_14 = (MR_Integer) 1;
#line 185 "inst_user.m"
              *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 0;
#line 186 "inst_user.m"
              {
#line 186 "inst_user.m"
                check_hlds__inst_user__V_65_65 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              }
#line 186 "inst_user.m"
              {
#line 186 "inst_user.m"
                MR_Word base;
#line 186 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 186 "inst_user.m"
                *check_hlds__inst_user__ContainsInstNames_16 = base;
#line 186 "inst_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_65_65));
#line 186 "inst_user.m"
              }
#line 187 "inst_user.m"
              {
#line 187 "inst_user.m"
                check_hlds__inst_user__V_66_66 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              }
#line 187 "inst_user.m"
              {
#line 187 "inst_user.m"
                MR_Word base;
#line 187 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 187 "inst_user.m"
                *check_hlds__inst_user__ContainsInstVars_17 = base;
#line 187 "inst_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_66_66));
#line 187 "inst_user.m"
              }
#line 188 "inst_user.m"
              {
#line 188 "inst_user.m"
                check_hlds__inst_user__V_67_67 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              }
#line 188 "inst_user.m"
              {
#line 188 "inst_user.m"
                MR_Word base;
#line 188 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 188 "inst_user.m"
                *check_hlds__inst_user__ContainsTypes_18 = base;
#line 188 "inst_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_67_67));
#line 188 "inst_user.m"
              }
#line 189 "inst_user.m"
              *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
#line 183 "inst_user.m"
              *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
#line 183 "inst_user.m"
            }
#line 162 "inst_user.m"
            break;
#line 162 "inst_user.m"
          case (MR_Integer) 2:
#line 203 "inst_user.m"
            {
#line 206 "inst_user.m"
              {
#line 206 "inst_user.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_user", (MR_String) "predicate \140check_hlds.inst_user.pretest_inst\'/10", (MR_String) "Inst0 = inst_var");
#line 206 "inst_user.m"
                return;
              }
#line 203 "inst_user.m"
            }
#line 162 "inst_user.m"
            break;
#line 162 "inst_user.m"
          case (MR_Integer) 3:
#line 208 "inst_user.m"
            {
#line 208 "inst_user.m"
              MR_Word check_hlds__inst_user__SubInst0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 2)));
#line 208 "inst_user.m"
              MR_Word check_hlds__inst_user__SubInst_28;
#line 208 "inst_user.m"
              MR_Word check_hlds__inst_user__ContainsInstVars0_29;
#line 208 "inst_user.m"
              MR_Word check_hlds__inst_user__InstVarsA_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 1)));

#line 209 "inst_user.m"
              {
#line 209 "inst_user.m"
                check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(check_hlds__inst_user__SubInst0_27, &check_hlds__inst_user__SubInst_28, check_hlds__inst_user__Groundness_14, check_hlds__inst_user__ContainsAny_15, check_hlds__inst_user__ContainsInstNames_16, &check_hlds__inst_user__ContainsInstVars0_29, check_hlds__inst_user__ContainsTypes_18, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39);
              }
#line 386 "inst_user.m"
              if ((check_hlds__inst_user__ContainsInstVars0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "inst_user.m"
                *check_hlds__inst_user__ContainsInstVars_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "inst_user.m"
              else
#line 388 "inst_user.m"
                {
#line 388 "inst_user.m"
                  MR_Word check_hlds__inst_user__InstVarsB_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ContainsInstVars0_29, (MR_Integer) 0)));
#line 388 "inst_user.m"
                  MR_Word check_hlds__inst_user__InstVars_98;

#line 389 "inst_user.m"
                  {
#line 389 "inst_user.m"
                    mercury__set__union_3_p_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0], check_hlds__inst_user__InstVarsA_96, check_hlds__inst_user__InstVarsB_97, &check_hlds__inst_user__InstVars_98);
                  }
#line 390 "inst_user.m"
                  {
#line 390 "inst_user.m"
                    MR_Word base;
#line 390 "inst_user.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "inst_user.m"
                    *check_hlds__inst_user__ContainsInstVars_17 = base;
#line 390 "inst_user.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__InstVars_98));
#line 390 "inst_user.m"
                  }
#line 388 "inst_user.m"
                }
#line 215 "inst_user.m"
              {
#line 215 "inst_user.m"
                MR_Word base;
#line 215 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 215 "inst_user.m"
                *check_hlds__inst_user__Inst_12 = base;
#line 215 "inst_user.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 215 "inst_user.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_user__InstVarsA_96));
#line 215 "inst_user.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_user__SubInst_28));
#line 215 "inst_user.m"
              }
#line 208 "inst_user.m"
            }
#line 162 "inst_user.m"
            break;
#line 162 "inst_user.m"
          case (MR_Integer) 4:
#line 217 "inst_user.m"
            {
#line 217 "inst_user.m"
              MR_Word check_hlds__inst_user__V_53_53;

#line 219 "inst_user.m"
              *check_hlds__inst_user__Groundness_14 = (MR_Integer) 2;
#line 220 "inst_user.m"
              *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 2;
#line 221 "inst_user.m"
              *check_hlds__inst_user__ContainsInstNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 224 "inst_user.m"
              {
#line 224 "inst_user.m"
                check_hlds__inst_user__V_53_53 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              }
#line 224 "inst_user.m"
              {
#line 224 "inst_user.m"
                MR_Word base;
#line 224 "inst_user.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "inst_user.m"
                *check_hlds__inst_user__ContainsInstVars_17 = base;
#line 224 "inst_user.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_53_53));
#line 224 "inst_user.m"
              }
#line 225 "inst_user.m"
              *check_hlds__inst_user__ContainsTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 226 "inst_user.m"
              *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
#line 217 "inst_user.m"
              *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
#line 217 "inst_user.m"
            }
#line 162 "inst_user.m"
            break;
#line 162 "inst_user.m"
          case (MR_Integer) 5:
#line 228 "inst_user.m"
            {
#line 230 "inst_user.m"
              {
#line 230 "inst_user.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_user", (MR_String) "predicate \140check_hlds.inst_user.pretest_inst\'/10", (MR_String) "Inst0 = abstract_inst");
#line 230 "inst_user.m"
                return;
              }
#line 228 "inst_user.m"
            }
#line 162 "inst_user.m"
            break;
#line 162 "inst_user.m"
        }
#line 162 "inst_user.m"
        break;
#line 162 "inst_user.m"
    }
#line 162 "inst_user.m"
  }
#line 150 "inst_user.m"
}

#line 73 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(
#line 73 "inst_user.m"
  MR_Word check_hlds__inst_user__ModuleInfo_1,
#line 73 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2,
#line 73 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__3_3,
#line 73 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5,
#line 73 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_6)
#line 73 "inst_user.m"
{
#line 80 "inst_user.m"
  while (MR_TRUE)
#line 80 "inst_user.m"
    {
#line 80 "inst_user.m"
      /* tailcall optimized into a loop */
#line 80 "inst_user.m"
      {
#line 80 "inst_user.m"
        MR_bool check_hlds__inst_user__succeeded;

#line 80 "inst_user.m"
        if ((check_hlds__inst_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 83 "inst_user.m"
          if ((check_hlds__inst_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 82 "inst_user.m"
            *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_6 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5;
#line 83 "inst_user.m"
          else
#line 84 "inst_user.m"
            {
#line 85 "inst_user.m"
              /* direct tailcall eliminated */
#line 85 "inst_user.m"
              {
#line 85 "inst_user.m"
                MR_Word check_hlds__inst_user__HeadVar__2__tmp_copy_2 = check_hlds__inst_user__HeadVar__3_3;

#line 85 "inst_user.m"
                check_hlds__inst_user__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 85 "inst_user.m"
                check_hlds__inst_user__HeadVar__2_2 = check_hlds__inst_user__HeadVar__2__tmp_copy_2;
#line 85 "inst_user.m"
              }
#line 85 "inst_user.m"
              continue;
#line 84 "inst_user.m"
            }
#line 80 "inst_user.m"
        else
#line 89 "inst_user.m"
          {
#line 89 "inst_user.m"
            MR_Word check_hlds__inst_user__InstDefnPair_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "inst_user.m"
            MR_Word check_hlds__inst_user__InstDefnPairs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "inst_user.m"
            MR_Word check_hlds__inst_user__InstId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefnPair_18, (MR_Integer) 0)));
#line 89 "inst_user.m"
            MR_Word check_hlds__inst_user__InstDefn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefnPair_18, (MR_Integer) 1)));
#line 89 "inst_user.m"
            MR_Word check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30;
#line 89 "inst_user.m"
            MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31;
#line 98 "inst_user.m"
            MR_Word check_hlds__inst_user__MaybeUserInst_25;
#line 91 "inst_user.m"
            MR_Box check_hlds__inst_user__conv0_MaybeUserInst_25;

#line 91 "inst_user.m"
            {
#line 91 "inst_user.m"
              check_hlds__inst_user__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5, ((MR_Box) (check_hlds__inst_user__InstId_23)), &check_hlds__inst_user__conv0_MaybeUserInst_25);
            }
#line 91 "inst_user.m"
            if (check_hlds__inst_user__succeeded)
#line 91 "inst_user.m"
              {
#line 91 "inst_user.m"
                check_hlds__inst_user__MaybeUserInst_25 = ((MR_Word) check_hlds__inst_user__conv0_MaybeUserInst_25);
#line 91 "inst_user.m"
                check_hlds__inst_user__succeeded = MR_TRUE;
#line 91 "inst_user.m"
              }
#line 98 "inst_user.m"
            if (check_hlds__inst_user__succeeded)
#line 95 "inst_user.m"
              {
#line 95 "inst_user.m"
                if ((check_hlds__inst_user__MaybeUserInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 94 "inst_user.m"
                  {
#line 94 "inst_user.m"
                    check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 94 "inst_user.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30, 0) = ((MR_Box) (check_hlds__inst_user__InstDefnPair_18));
#line 94 "inst_user.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30, 1) = ((MR_Box) (check_hlds__inst_user__HeadVar__3_3));
#line 94 "inst_user.m"
                  }
#line 95 "inst_user.m"
                else
#line 96 "inst_user.m"
                  check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30 = check_hlds__inst_user__HeadVar__3_3;
#line 95 "inst_user.m"
                check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5;
#line 95 "inst_user.m"
              }
#line 98 "inst_user.m"
            else
#line 99 "inst_user.m"
              {
#line 99 "inst_user.m"
                MR_Word check_hlds__inst_user__InstVarSet_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 0)));
#line 99 "inst_user.m"
                MR_Word check_hlds__inst_user__InstParams_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 1)));
#line 99 "inst_user.m"
                MR_Word check_hlds__inst_user__InstBody0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 2)));
#line 99 "inst_user.m"
                MR_Word check_hlds__inst_user__MaybeMatchingTypeCtors_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 3)));
#line 99 "inst_user.m"
                MR_Word check_hlds__inst_user__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 4)));
#line 99 "inst_user.m"
                MR_Word check_hlds__inst_user__Status_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 5)));

#line 118 "inst_user.m"
                if ((check_hlds__inst_user__InstBody0_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "inst_user.m"
                  {
#line 115 "inst_user.m"
                    MR_Word check_hlds__inst_user__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_user__InstDefn_24);

#line 116 "inst_user.m"
                    {
#line 116 "inst_user.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0, ((MR_Box) (check_hlds__inst_user__InstId_23)), ((MR_Box) (check_hlds__inst_user__V_78_78)), check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31);
                    }
#line 115 "inst_user.m"
                  }
#line 118 "inst_user.m"
                else
#line 119 "inst_user.m"
                  {
#line 119 "inst_user.m"
                    MR_Word check_hlds__inst_user__Inst0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__InstBody0_44, (MR_Integer) 0)));

#line 124 "inst_user.m"
                    if ((check_hlds__inst_user__InstParams_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 125 "inst_user.m"
                      {
#line 125 "inst_user.m"
                        MR_Word check_hlds__inst_user__TypeCtorInfo_56_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
#line 125 "inst_user.m"
                        MR_Word check_hlds__inst_user__TypeCtorInfo_57_85 = (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0;
#line 125 "inst_user.m"
                        MR_Word check_hlds__inst_user__Inst1_51;
#line 125 "inst_user.m"
                        MR_Word check_hlds__inst_user__Inst_64;
#line 125 "inst_user.m"
                        MR_Word check_hlds__inst_user__InstBody_65;
#line 125 "inst_user.m"
                        MR_Word check_hlds__inst_user__InstDefn_66;
#line 125 "inst_user.m"
                        MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_40_68;
#line 125 "inst_user.m"
                        MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_41_69;
#line 125 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_74_74;
#line 128 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_52_52;
#line 128 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_53_53;
#line 128 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_54_54;
#line 128 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_55_55;
#line 128 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_56_56;
#line 139 "inst_user.m"
                        MR_Word check_hlds__inst_user__TypeCtorSymName_61;
#line 131 "inst_user.m"
                        MR_Word check_hlds__inst_user__MatchingTypeCtor_60;
#line 131 "inst_user.m"
                        MR_Integer check_hlds__inst_user__TypeCtorArity_62;
#line 131 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_70_70;
#line 131 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_71_71;
#line 131 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_57_57;
#line 131 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_58_58;
#line 131 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_59_59;

#line 126 "inst_user.m"
                        {
#line 126 "inst_user.m"
                          mercury__map__det_insert_4_p_0(check_hlds__inst_user__TypeCtorInfo_56_84, check_hlds__inst_user__TypeCtorInfo_57_85, ((MR_Box) (check_hlds__inst_user__InstId_23)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_40_68);
                        }
#line 128 "inst_user.m"
                        {
#line 128 "inst_user.m"
                          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(check_hlds__inst_user__Inst0_48, &check_hlds__inst_user__Inst1_51, &check_hlds__inst_user__V_52_52, &check_hlds__inst_user__V_53_53, &check_hlds__inst_user__V_54_54, &check_hlds__inst_user__V_55_55, &check_hlds__inst_user__V_56_56, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_40_68, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_41_69);
                        }
#line 131 "inst_user.m"
                        check_hlds__inst_user__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_user__Inst1_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst1_51, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 131 "inst_user.m"
                        if (check_hlds__inst_user__succeeded)
#line 131 "inst_user.m"
                          {
#line 131 "inst_user.m"
                            check_hlds__inst_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst1_51, (MR_Integer) 1)));
#line 131 "inst_user.m"
                            check_hlds__inst_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst1_51, (MR_Integer) 2)));
#line 131 "inst_user.m"
                            check_hlds__inst_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst1_51, (MR_Integer) 3)));
#line 132 "inst_user.m"
                            check_hlds__inst_user__succeeded = ((MR_tag((MR_Word) check_hlds__inst_user__MaybeMatchingTypeCtors_45)) == (MR_mktag((MR_Integer) 1)));
#line 132 "inst_user.m"
                            if (check_hlds__inst_user__succeeded)
#line 132 "inst_user.m"
                              {
#line 132 "inst_user.m"
                                check_hlds__inst_user__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__MaybeMatchingTypeCtors_45, (MR_Integer) 0)));
#line 132 "inst_user.m"
                                check_hlds__inst_user__succeeded = ((MR_tag((MR_Word) check_hlds__inst_user__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 132 "inst_user.m"
                                if (check_hlds__inst_user__succeeded)
#line 132 "inst_user.m"
                                  {
#line 132 "inst_user.m"
                                    check_hlds__inst_user__MatchingTypeCtor_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_70_70, (MR_Integer) 0)));
#line 132 "inst_user.m"
                                    check_hlds__inst_user__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_70_70, (MR_Integer) 1)));
#line 132 "inst_user.m"
                                    check_hlds__inst_user__succeeded = (check_hlds__inst_user__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "inst_user.m"
                                    if (check_hlds__inst_user__succeeded)
#line 131 "inst_user.m"
                                      {
#line 133 "inst_user.m"
                                        check_hlds__inst_user__TypeCtorSymName_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__MatchingTypeCtor_60, (MR_Integer) 0)));
#line 133 "inst_user.m"
                                        check_hlds__inst_user__TypeCtorArity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__MatchingTypeCtor_60, (MR_Integer) 1)));
#line 134 "inst_user.m"
                                        check_hlds__inst_user__succeeded = (check_hlds__inst_user__TypeCtorArity_62 == (MR_Integer) 0);
#line 131 "inst_user.m"
                                      }
#line 132 "inst_user.m"
                                  }
#line 132 "inst_user.m"
                              }
#line 131 "inst_user.m"
                          }
#line 139 "inst_user.m"
                        if (check_hlds__inst_user__succeeded)
#line 136 "inst_user.m"
                          {
#line 136 "inst_user.m"
                            MR_Word check_hlds__inst_user__Type_63;

#line 136 "inst_user.m"
                            {
#line 136 "inst_user.m"
                              check_hlds__inst_user__Type_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 136 "inst_user.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_user__Type_63, 0) = ((MR_Box) (check_hlds__inst_user__TypeCtorSymName_61));
#line 136 "inst_user.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_user__Type_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 136 "inst_user.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_user__Type_63, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 136 "inst_user.m"
                            }
#line 137 "inst_user.m"
                            {
#line 137 "inst_user.m"
                              check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(check_hlds__inst_user__ModuleInfo_1, check_hlds__inst_user__Type_63, check_hlds__inst_user__Inst1_51, &check_hlds__inst_user__Inst_64);
                            }
#line 136 "inst_user.m"
                          }
#line 139 "inst_user.m"
                        else
#line 140 "inst_user.m"
                          check_hlds__inst_user__Inst_64 = check_hlds__inst_user__Inst1_51;
#line 142 "inst_user.m"
                        {
#line 142 "inst_user.m"
                          check_hlds__inst_user__InstBody_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 142 "inst_user.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_user__InstBody_65, 0) = ((MR_Box) (check_hlds__inst_user__Inst_64));
#line 142 "inst_user.m"
                        }
#line 143 "inst_user.m"
                        {
#line 143 "inst_user.m"
                          check_hlds__inst_user__InstDefn_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 143 "inst_user.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 0) = ((MR_Box) (check_hlds__inst_user__InstVarSet_42));
#line 143 "inst_user.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 1) = ((MR_Box) (check_hlds__inst_user__InstParams_43));
#line 143 "inst_user.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 2) = ((MR_Box) (check_hlds__inst_user__InstBody_65));
#line 143 "inst_user.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 3) = ((MR_Box) (check_hlds__inst_user__MaybeMatchingTypeCtors_45));
#line 143 "inst_user.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 4) = ((MR_Box) (check_hlds__inst_user__Context_46));
#line 143 "inst_user.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 5) = ((MR_Box) (check_hlds__inst_user__Status_47));
#line 143 "inst_user.m"
                        }
#line 145 "inst_user.m"
                        check_hlds__inst_user__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_user__InstDefn_66);
#line 145 "inst_user.m"
                        {
#line 145 "inst_user.m"
                          mercury__map__det_update_4_p_0(check_hlds__inst_user__TypeCtorInfo_56_84, check_hlds__inst_user__TypeCtorInfo_57_85, ((MR_Box) (check_hlds__inst_user__InstId_23)), ((MR_Box) (check_hlds__inst_user__V_74_74)), check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_41_69, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31);
                        }
#line 125 "inst_user.m"
                      }
#line 124 "inst_user.m"
                    else
#line 121 "inst_user.m"
                      {
#line 121 "inst_user.m"
                        MR_Word check_hlds__inst_user__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_user__InstDefn_24);

#line 122 "inst_user.m"
                        {
#line 122 "inst_user.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0, ((MR_Box) (check_hlds__inst_user__InstId_23)), ((MR_Box) (check_hlds__inst_user__V_76_76)), check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31);
                        }
#line 121 "inst_user.m"
                      }
#line 119 "inst_user.m"
                  }
#line 99 "inst_user.m"
                check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30 = check_hlds__inst_user__HeadVar__3_3;
#line 99 "inst_user.m"
              }
#line 102 "inst_user.m"
            /* direct tailcall eliminated */
#line 102 "inst_user.m"
            {
#line 102 "inst_user.m"
              MR_Word check_hlds__inst_user__HeadVar__2__tmp_copy_2 = check_hlds__inst_user__InstDefnPairs_19;
#line 102 "inst_user.m"
              MR_Word check_hlds__inst_user__HeadVar__3__tmp_copy_3 = check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30;
#line 102 "inst_user.m"
              MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0__tmp_copy_5 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31;

#line 102 "inst_user.m"
              check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0__tmp_copy_5;
#line 102 "inst_user.m"
              check_hlds__inst_user__HeadVar__3_3 = check_hlds__inst_user__HeadVar__3__tmp_copy_3;
#line 102 "inst_user.m"
              check_hlds__inst_user__HeadVar__2_2 = check_hlds__inst_user__HeadVar__2__tmp_copy_2;
#line 102 "inst_user.m"
            }
#line 102 "inst_user.m"
            continue;
#line 89 "inst_user.m"
          }
#line 80 "inst_user.m"
      }
#line 80 "inst_user.m"
      break;
#line 80 "inst_user.m"
    }
#line 73 "inst_user.m"
}

#line 45 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0(
#line 45 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__1_1,
#line 45 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2,
#line 45 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__3_3)
#line 45 "inst_user.m"
{
#line 45 "inst_user.m"
  {
#line 45 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;
#line 45 "inst_user.m"
    MR_Integer check_hlds__inst_user__CastX_8 = (MR_Integer) check_hlds__inst_user__HeadVar__2_2;
#line 45 "inst_user.m"
    MR_Integer check_hlds__inst_user__CastY_9 = (MR_Integer) check_hlds__inst_user__HeadVar__3_3;

#line 45 "inst_user.m"
    check_hlds__inst_user__succeeded = (check_hlds__inst_user__CastX_8 == check_hlds__inst_user__CastY_9);
#line 45 "inst_user.m"
    if (check_hlds__inst_user__succeeded)
#line 2085 "check_hlds.inst_user.c"
      *check_hlds__inst_user__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "inst_user.m"
    else
#line 45 "inst_user.m"
    if ((check_hlds__inst_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 45 "inst_user.m"
      if ((check_hlds__inst_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 45 "inst_user.m"
        *check_hlds__inst_user__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "inst_user.m"
      else
#line 2097 "check_hlds.inst_user.c"
        *check_hlds__inst_user__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "inst_user.m"
    else
#line 45 "inst_user.m"
      {
#line 45 "inst_user.m"
        MR_Word check_hlds__inst_user__V_11_11 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__HeadVar__2_2), (MR_Integer) 1);

#line 45 "inst_user.m"
        if ((check_hlds__inst_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2108 "check_hlds.inst_user.c"
          *check_hlds__inst_user__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "inst_user.m"
        else
#line 45 "inst_user.m"
          {
#line 45 "inst_user.m"
            MR_Word check_hlds__inst_user__V_7_7 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__HeadVar__3_3), (MR_Integer) 1);

#line 45 "inst_user.m"
            {
#line 45 "inst_user.m"
              hlds__hlds_data____Compare____hlds_inst_defn_0_0(check_hlds__inst_user__HeadVar__1_1, check_hlds__inst_user__V_11_11, check_hlds__inst_user__V_7_7);
#line 45 "inst_user.m"
              return;
            }
#line 45 "inst_user.m"
          }
#line 45 "inst_user.m"
      }
#line 45 "inst_user.m"
  }
#line 45 "inst_user.m"
}

#line 45 "inst_user.m"
static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0(
#line 45 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 45 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2)
#line 45 "inst_user.m"
{
#line 45 "inst_user.m"
  {
#line 45 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;
#line 45 "inst_user.m"
    MR_Integer check_hlds__inst_user__CastX_7 = (MR_Integer) check_hlds__inst_user__HeadVar__1_1;
#line 45 "inst_user.m"
    MR_Integer check_hlds__inst_user__CastY_8 = (MR_Integer) check_hlds__inst_user__HeadVar__2_2;

#line 45 "inst_user.m"
    check_hlds__inst_user__succeeded = (check_hlds__inst_user__CastX_7 == check_hlds__inst_user__CastY_8);
#line 45 "inst_user.m"
    if (check_hlds__inst_user__succeeded)
#line 45 "inst_user.m"
      check_hlds__inst_user__succeeded = MR_TRUE;
#line 45 "inst_user.m"
    else
#line 45 "inst_user.m"
    if ((check_hlds__inst_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 45 "inst_user.m"
      {
#line 45 "inst_user.m"
        MR_Integer check_hlds__inst_user__CastX_3 = (MR_Integer) check_hlds__inst_user__HeadVar__1_1;
#line 45 "inst_user.m"
        MR_Integer check_hlds__inst_user__CastY_4 = (MR_Integer) check_hlds__inst_user__HeadVar__2_2;

#line 45 "inst_user.m"
        check_hlds__inst_user__succeeded = (check_hlds__inst_user__CastY_4 == check_hlds__inst_user__CastX_3);
#line 45 "inst_user.m"
      }
#line 45 "inst_user.m"
    else
#line 45 "inst_user.m"
      {
#line 45 "inst_user.m"
        MR_Word check_hlds__inst_user__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__HeadVar__1_1), (MR_Integer) 1);
#line 45 "inst_user.m"
        MR_Word check_hlds__inst_user__V_6_6;

#line 45 "inst_user.m"
        check_hlds__inst_user__succeeded = ((MR_tag((MR_Word) check_hlds__inst_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 45 "inst_user.m"
        if (check_hlds__inst_user__succeeded)
#line 45 "inst_user.m"
          {
#line 45 "inst_user.m"
            check_hlds__inst_user__V_6_6 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__HeadVar__2_2), (MR_Integer) 1);
#line 2189 "check_hlds.inst_user.c"
            {
#line 2191 "check_hlds.inst_user.c"
              return check_hlds__inst_user__succeeded = hlds__hlds_data____Unify____hlds_inst_defn_0_0(check_hlds__inst_user__V_5_5, check_hlds__inst_user__V_6_6);
            }
#line 45 "inst_user.m"
          }
#line 45 "inst_user.m"
      }
#line 45 "inst_user.m"
    return check_hlds__inst_user__succeeded;
#line 45 "inst_user.m"
  }
#line 45 "inst_user.m"
}

#line 49 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(
#line 49 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__1_1,
#line 49 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2,
#line 49 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__3_3)
#line 49 "inst_user.m"
{
#line 49 "inst_user.m"
  {
#line 49 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;
#line 49 "inst_user.m"
    MR_Word check_hlds__inst_user__Cast_HeadVar1_4 = check_hlds__inst_user__HeadVar__2_2;
#line 49 "inst_user.m"
    MR_Word check_hlds__inst_user__Cast_HeadVar2_5 = check_hlds__inst_user__HeadVar__3_3;

#line 49 "inst_user.m"
    {
#line 49 "inst_user.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_user_scalar_common_2[0], check_hlds__inst_user__HeadVar__1_1, ((MR_Box) (check_hlds__inst_user__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_user__Cast_HeadVar2_5)));
#line 49 "inst_user.m"
      return;
    }
#line 49 "inst_user.m"
  }
#line 49 "inst_user.m"
}

#line 49 "inst_user.m"
static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(
#line 49 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 49 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__2_2)
#line 49 "inst_user.m"
{
#line 49 "inst_user.m"
  {
#line 49 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;
#line 49 "inst_user.m"
    MR_Word check_hlds__inst_user__Cast_HeadVar1_3 = check_hlds__inst_user__HeadVar__1_1;
#line 49 "inst_user.m"
    MR_Word check_hlds__inst_user__Cast_HeadVar2_4 = check_hlds__inst_user__HeadVar__2_2;

#line 49 "inst_user.m"
    {
#line 49 "inst_user.m"
      return check_hlds__inst_user__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_user_scalar_common_2[0], ((MR_Box) (check_hlds__inst_user__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_user__Cast_HeadVar2_4)));
    }
#line 49 "inst_user.m"
    return check_hlds__inst_user__succeeded;
#line 49 "inst_user.m"
  }
#line 49 "inst_user.m"
}

#line 417 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__record_user_inst_results_2_p_0(
#line 417 "inst_user.m"
  MR_Word check_hlds__inst_user__HeadVar__1_1,
#line 417 "inst_user.m"
  MR_Word * check_hlds__inst_user__HeadVar__2_2)
#line 417 "inst_user.m"
{
#line 420 "inst_user.m"
  {
#line 420 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;

#line 420 "inst_user.m"
    if ((check_hlds__inst_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "inst_user.m"
      *check_hlds__inst_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "inst_user.m"
    else
#line 422 "inst_user.m"
      {
#line 422 "inst_user.m"
        MR_Word check_hlds__inst_user__MaybeInstPair_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 0)));
#line 422 "inst_user.m"
        MR_Word check_hlds__inst_user__MaybeInstPairs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 1)));
#line 422 "inst_user.m"
        MR_Word check_hlds__inst_user__InstDefnPair_5;
#line 422 "inst_user.m"
        MR_Word check_hlds__inst_user__InstDefnPairs_6;
#line 422 "inst_user.m"
        MR_Word check_hlds__inst_user__InstId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__MaybeInstPair_3, (MR_Integer) 0)));
#line 422 "inst_user.m"
        MR_Word check_hlds__inst_user__MaybeUserInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__MaybeInstPair_3, (MR_Integer) 1)));
#line 422 "inst_user.m"
        MR_Word check_hlds__inst_user__UserInstDefn_9;

#line 427 "inst_user.m"
        if ((check_hlds__inst_user__MaybeUserInst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "inst_user.m"
          {
#line 426 "inst_user.m"
            {
#line 426 "inst_user.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_user", (MR_String) "predicate \140check_hlds.inst_user.record_user_inst_results\'/2", (MR_String) "MaybeUserInst = user_inst_being_processed");
#line 426 "inst_user.m"
              return;
            }
#line 425 "inst_user.m"
          }
#line 427 "inst_user.m"
        else
#line 428 "inst_user.m"
          check_hlds__inst_user__UserInstDefn_9 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__MaybeUserInst_8), (MR_Integer) 1);
#line 430 "inst_user.m"
        {
#line 430 "inst_user.m"
          check_hlds__inst_user__InstDefnPair_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 430 "inst_user.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefnPair_5, 0) = ((MR_Box) (check_hlds__inst_user__InstId_7));
#line 430 "inst_user.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefnPair_5, 1) = ((MR_Box) (check_hlds__inst_user__UserInstDefn_9));
#line 430 "inst_user.m"
        }
#line 431 "inst_user.m"
        {
#line 431 "inst_user.m"
          check_hlds__inst_user__record_user_inst_results_2_p_0(check_hlds__inst_user__MaybeInstPairs_4, &check_hlds__inst_user__InstDefnPairs_6);
        }
#line 422 "inst_user.m"
        {
#line 422 "inst_user.m"
          MR_Word base;
#line 422 "inst_user.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "inst_user.m"
          *check_hlds__inst_user__HeadVar__2_2 = base;
#line 422 "inst_user.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__InstDefnPair_5));
#line 422 "inst_user.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_user__InstDefnPairs_6));
#line 422 "inst_user.m"
        }
#line 422 "inst_user.m"
      }
#line 420 "inst_user.m"
  }
#line 417 "inst_user.m"
}

#line 395 "inst_user.m"
static void MR_CALL 
check_hlds__inst_user__combine_contains_types_results_3_p_0(
#line 395 "inst_user.m"
  MR_Word check_hlds__inst_user__ContainsTypesA_4,
#line 395 "inst_user.m"
  MR_Word check_hlds__inst_user__ContainsTypesB_5,
#line 395 "inst_user.m"
  MR_Word * check_hlds__inst_user__ContainsTypes_6)
#line 395 "inst_user.m"
{
#line 401 "inst_user.m"
  {
#line 401 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;

#line 401 "inst_user.m"
    if ((check_hlds__inst_user__ContainsTypesA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "inst_user.m"
      *check_hlds__inst_user__ContainsTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "inst_user.m"
    else
#line 404 "inst_user.m"
      {
#line 404 "inst_user.m"
        MR_Word check_hlds__inst_user__TypesA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ContainsTypesA_4, (MR_Integer) 0)));

#line 408 "inst_user.m"
        if ((check_hlds__inst_user__ContainsTypesB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "inst_user.m"
          *check_hlds__inst_user__ContainsTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 408 "inst_user.m"
        else
#line 409 "inst_user.m"
          {
#line 409 "inst_user.m"
            MR_Word check_hlds__inst_user__TypesB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ContainsTypesB_5, (MR_Integer) 0)));
#line 409 "inst_user.m"
            MR_Word check_hlds__inst_user__Types_9;

#line 410 "inst_user.m"
            {
#line 410 "inst_user.m"
              mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, check_hlds__inst_user__TypesA_7, check_hlds__inst_user__TypesB_8, &check_hlds__inst_user__Types_9);
            }
#line 411 "inst_user.m"
            {
#line 411 "inst_user.m"
              MR_Word base;
#line 411 "inst_user.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "inst_user.m"
              *check_hlds__inst_user__ContainsTypes_6 = base;
#line 411 "inst_user.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__Types_9));
#line 411 "inst_user.m"
            }
#line 409 "inst_user.m"
          }
#line 404 "inst_user.m"
      }
#line 401 "inst_user.m"
  }
#line 395 "inst_user.m"
}

#line 23 "inst_user.m"
void MR_CALL 
check_hlds__inst_user__pretest_user_inst_table_2_p_0(
#line 23 "inst_user.m"
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_0_12,
#line 23 "inst_user.m"
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_13)
#line 23 "inst_user.m"
{
#line 51 "inst_user.m"
  {
#line 51 "inst_user.m"
    MR_bool check_hlds__inst_user__succeeded;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__TypeCtorInfo_17_17;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__TypeCtorInfo_18_18;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__TypeCtorInfo_19_19;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__InstTable0_4;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__UserInstTable0_5;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__UserInstDefns0_6;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__MaybeInstDefnsMap_7;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__MaybeInstDefns_8;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__UserInstDefns_9;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__UserInstTable_10;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__InstTable_11;
#line 51 "inst_user.m"
    MR_Word check_hlds__inst_user__V_15_15;

#line 52 "inst_user.m"
    {
#line 52 "inst_user.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__inst_user__InstTable0_4);
    }
#line 53 "inst_user.m"
    {
#line 53 "inst_user.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__inst_user__InstTable0_4, &check_hlds__inst_user__UserInstTable0_5);
    }
#line 2471 "check_hlds.inst_user.c"
    check_hlds__inst_user__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
#line 2473 "check_hlds.inst_user.c"
    check_hlds__inst_user__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
#line 54 "inst_user.m"
    {
#line 54 "inst_user.m"
      mercury__map__to_sorted_assoc_list_2_p_0(check_hlds__inst_user__TypeCtorInfo_17_17, check_hlds__inst_user__TypeCtorInfo_18_18, check_hlds__inst_user__UserInstTable0_5, &check_hlds__inst_user__UserInstDefns0_6);
    }
#line 2480 "check_hlds.inst_user.c"
    check_hlds__inst_user__TypeCtorInfo_19_19 = (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0;
#line 60 "inst_user.m"
    {
#line 60 "inst_user.m"
      check_hlds__inst_user__V_15_15 = mercury__map__init_0_f_0(check_hlds__inst_user__TypeCtorInfo_17_17, check_hlds__inst_user__TypeCtorInfo_19_19);
    }
#line 59 "inst_user.m"
    {
#line 59 "inst_user.m"
      check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_user__UserInstDefns0_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_user__V_15_15, &check_hlds__inst_user__MaybeInstDefnsMap_7);
    }
#line 61 "inst_user.m"
    {
#line 61 "inst_user.m"
      mercury__map__to_sorted_assoc_list_2_p_0(check_hlds__inst_user__TypeCtorInfo_17_17, check_hlds__inst_user__TypeCtorInfo_19_19, check_hlds__inst_user__MaybeInstDefnsMap_7, &check_hlds__inst_user__MaybeInstDefns_8);
    }
#line 62 "inst_user.m"
    {
#line 62 "inst_user.m"
      check_hlds__inst_user__record_user_inst_results_2_p_0(check_hlds__inst_user__MaybeInstDefns_8, &check_hlds__inst_user__UserInstDefns_9);
    }
#line 67 "inst_user.m"
    {
#line 67 "inst_user.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__inst_user__TypeCtorInfo_17_17, check_hlds__inst_user__TypeCtorInfo_18_18, check_hlds__inst_user__UserInstDefns_9, &check_hlds__inst_user__UserInstTable_10);
    }
#line 68 "inst_user.m"
    {
#line 68 "inst_user.m"
      hlds__hlds_data__inst_table_set_user_insts_3_p_0(check_hlds__inst_user__UserInstTable_10, check_hlds__inst_user__InstTable0_4, &check_hlds__inst_user__InstTable_11);
    }
#line 69 "inst_user.m"
    {
#line 69 "inst_user.m"
      hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_user__InstTable_11, check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_13);
#line 69 "inst_user.m"
      return;
    }
#line 51 "inst_user.m"
  }
#line 23 "inst_user.m"
}

void mercury__check_hlds__inst_user__init(void)
{
}

void mercury__check_hlds__inst_user__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_inst_defns_map_0);
	MR_register_type_ctor_info(&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0);
}

void mercury__check_hlds__inst_user__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.inst_user. */
