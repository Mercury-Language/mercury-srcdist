/*
** Automatically generated from `dense_switch.m'
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


/* :- module ll_backend.dense_switch. */
/* :- implementation. */

/*
INIT mercury__ll_backend__dense_switch__init
ENDINIT
*/

#include "ll_backend.dense_switch.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
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
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 152 "ll_backend.dense_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 155 "ll_backend.dense_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0;

#line 158 "ll_backend.dense_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0;

#line 161 "ll_backend.dense_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__dense_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

#line 164 "ll_backend.dense_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

#line 167 "ll_backend.dense_switch.c"
static const MR_PseudoTypeInfo ll_backend__dense_switch__ll_backend__dense_switch__field_types_dense_switch_info_0_0[3];

#line 170 "ll_backend.dense_switch.c"
static const MR_ConstString ll_backend__dense_switch__ll_backend__dense_switch__field_names_dense_switch_info_0_0[3];

#line 173 "ll_backend.dense_switch.c"
static const MR_DuFunctorDesc ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0;

#line 176 "ll_backend.dense_switch.c"
static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0[1];

#line 179 "ll_backend.dense_switch.c"
static const MR_DuPtagLayout ll_backend__dense_switch__ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0[1];

#line 182 "ll_backend.dense_switch.c"
static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_name_ordered_dense_switch_info_0[1];

#line 185 "ll_backend.dense_switch.c"
static const MR_Integer ll_backend__dense_switch__ll_backend__dense_switch__functor_number_map_dense_switch_info_0[1];

#line 188 "ll_backend.dense_switch.c"
static MR_bool MR_CALL 
ll_backend__dense_switch____Unify____dense_switch_info_0_0_10001(
#line 191 "ll_backend.dense_switch.c"
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
#line 193 "ll_backend.dense_switch.c"
  MR_Box ll_backend__dense_switch__wrapper_arg_2);

#line 196 "ll_backend.dense_switch.c"
static void MR_CALL 
ll_backend__dense_switch____Compare____dense_switch_info_0_0_10001(
#line 199 "ll_backend.dense_switch.c"
  MR_Box * ll_backend__dense_switch__wrapper_arg_1,
#line 201 "ll_backend.dense_switch.c"
  MR_Box ll_backend__dense_switch__wrapper_arg_2,
#line 203 "ll_backend.dense_switch.c"
  MR_Box ll_backend__dense_switch__wrapper_arg_3);

#line 244 "dense_switch.m"
static MR_bool MR_CALL 
ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__244__1_2_p_0(
#line 244 "dense_switch.m"
  MR_Word ll_backend__dense_switch__IndexPairs_11,
#line 244 "dense_switch.m"
  MR_Word ll_backend__dense_switch__HeadVar__2_30);

#line 244 "dense_switch.m"
static MR_bool MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0_1(
#line 244 "dense_switch.m"
  MR_Box ll_backend__dense_switch__closure_arg);

#line 236 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0(
#line 236 "dense_switch.m"
  MR_Integer ll_backend__dense_switch__CurVal_9,
#line 236 "dense_switch.m"
  MR_Integer ll_backend__dense_switch__LastVal_10,
#line 236 "dense_switch.m"
  MR_Word ll_backend__dense_switch__IndexPairs_11,
#line 236 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__Targets_12,
#line 236 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22,
#line 236 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23,
#line 236 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_24,
#line 236 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_25);

#line 224 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(
#line 224 "dense_switch.m"
  MR_Word ll_backend__dense_switch__Label_5,
#line 224 "dense_switch.m"
  MR_Word ll_backend__dense_switch__ConsTag_6,
#line 224 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_9,
#line 224 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_IndexMap_10);

#line 205 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_12_p_0_2(
#line 205 "dense_switch.m"
  MR_Box ll_backend__dense_switch__closure_arg,
#line 205 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
#line 205 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_2,
#line 205 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_3);

#line 200 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_12_p_0_1(
#line 200 "dense_switch.m"
  MR_Box ll_backend__dense_switch__closure_arg,
#line 200 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
#line 200 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_2,
#line 200 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_3);

#line 190 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_12_p_0(
#line 190 "dense_switch.m"
  MR_String ll_backend__dense_switch__VarName_13,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__CodeModel_14,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__SwitchGoalInfo_15,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__EndLabel_16,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__TaggedCase_17,
#line 190 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__Code_18,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_39,
#line 190 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_IndexMap_40,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_0_41,
#line 190 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_42,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_43,
#line 190 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_44);

#line 152 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_switch_12_p_0_1(
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__closure_arg,
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
#line 152 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_2,
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_3,
#line 152 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_4,
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_5,
#line 152 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_6,
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_7,
#line 152 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_8);


static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_2[3][3];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_3[1][15];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_4[1][6];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_6[1][5];




static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_branch_end_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__dense_switch_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__dense_switch_scalar_common_4[0])),
    ((MR_Box) (ll_backend__dense_switch__generate_dense_case_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_3[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ll_backend__dense_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 455 "ll_backend.dense_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 463 "ll_backend.dense_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 472 "ll_backend.dense_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_info__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_branch_end_info_0
  }
};

#line 480 "ll_backend.dense_switch.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__dense_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 489 "ll_backend.dense_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__dense_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 497 "ll_backend.dense_switch.c"
static const MR_PseudoTypeInfo ll_backend__dense_switch__ll_backend__dense_switch__field_types_dense_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0
};

#line 504 "ll_backend.dense_switch.c"
static const MR_ConstString ll_backend__dense_switch__ll_backend__dense_switch__field_names_dense_switch_info_0_0[3] = {
  (MR_String) "first_value",
  (MR_String) "last_value",
  (MR_String) "new_can_fail"
};

#line 511 "ll_backend.dense_switch.c"
static const MR_DuFunctorDesc ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0 = {
  (MR_String) "dense_switch_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__dense_switch__ll_backend__dense_switch__field_types_dense_switch_info_0_0,
  ll_backend__dense_switch__ll_backend__dense_switch__field_names_dense_switch_info_0_0,
  NULL,
  NULL
};

#line 526 "ll_backend.dense_switch.c"
static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0[1] = {
  &ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0
};

#line 531 "ll_backend.dense_switch.c"
static const MR_DuPtagLayout ll_backend__dense_switch__ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__dense_switch__ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0
  }
};

#line 540 "ll_backend.dense_switch.c"
static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_name_ordered_dense_switch_info_0[1] = {
  &ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0
};

#line 545 "ll_backend.dense_switch.c"
static const MR_Integer ll_backend__dense_switch__ll_backend__dense_switch__functor_number_map_dense_switch_info_0[1] = {
  (MR_Integer) 0
};

#line 550 "ll_backend.dense_switch.c"
const MR_TypeCtorInfo_Struct ll_backend__dense_switch__ll_backend__dense_switch__type_ctor_info_dense_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__dense_switch____Unify____dense_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__dense_switch____Compare____dense_switch_info_0_0_10001)),
  (MR_String) "ll_backend.dense_switch",
  (MR_String) "dense_switch_info",
  {
    ll_backend__dense_switch__ll_backend__dense_switch__du_name_ordered_dense_switch_info_0
  },
  {
    ll_backend__dense_switch__ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__dense_switch__ll_backend__dense_switch__functor_number_map_dense_switch_info_0
};

#line 571 "ll_backend.dense_switch.c"
static MR_bool MR_CALL 
ll_backend__dense_switch____Unify____dense_switch_info_0_0_10001(
#line 574 "ll_backend.dense_switch.c"
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
#line 576 "ll_backend.dense_switch.c"
  MR_Box ll_backend__dense_switch__wrapper_arg_2)
#line 578 "ll_backend.dense_switch.c"
{
#line 580 "ll_backend.dense_switch.c"
  {
#line 582 "ll_backend.dense_switch.c"
    MR_bool ll_backend__dense_switch__succeeded;

#line 585 "ll_backend.dense_switch.c"
    {
#line 587 "ll_backend.dense_switch.c"
      ll_backend__dense_switch__succeeded = ll_backend__dense_switch____Unify____dense_switch_info_0_0(((MR_Word) ll_backend__dense_switch__wrapper_arg_1), ((MR_Word) ll_backend__dense_switch__wrapper_arg_2));
    }
#line 590 "ll_backend.dense_switch.c"
    return ll_backend__dense_switch__succeeded;
#line 592 "ll_backend.dense_switch.c"
  }
#line 594 "ll_backend.dense_switch.c"
}

#line 597 "ll_backend.dense_switch.c"
static void MR_CALL 
ll_backend__dense_switch____Compare____dense_switch_info_0_0_10001(
#line 600 "ll_backend.dense_switch.c"
  MR_Box * ll_backend__dense_switch__wrapper_arg_1,
#line 602 "ll_backend.dense_switch.c"
  MR_Box ll_backend__dense_switch__wrapper_arg_2,
#line 604 "ll_backend.dense_switch.c"
  MR_Box ll_backend__dense_switch__wrapper_arg_3)
#line 606 "ll_backend.dense_switch.c"
{
#line 608 "ll_backend.dense_switch.c"
  {
#line 610 "ll_backend.dense_switch.c"
    MR_Word ll_backend__dense_switch__conv0_HeadVar__1_1;

#line 613 "ll_backend.dense_switch.c"
    {
#line 615 "ll_backend.dense_switch.c"
      ll_backend__dense_switch____Compare____dense_switch_info_0_0(&ll_backend__dense_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__dense_switch__wrapper_arg_2), ((MR_Word) ll_backend__dense_switch__wrapper_arg_3));
    }
#line 618 "ll_backend.dense_switch.c"
    *ll_backend__dense_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__dense_switch__conv0_HeadVar__1_1));
#line 620 "ll_backend.dense_switch.c"
  }
#line 622 "ll_backend.dense_switch.c"
}

#line 244 "dense_switch.m"
static MR_bool MR_CALL 
ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__244__1_2_p_0(
#line 244 "dense_switch.m"
  MR_Word ll_backend__dense_switch__IndexPairs_11,
#line 244 "dense_switch.m"
  MR_Word ll_backend__dense_switch__HeadVar__2_30)
#line 244 "dense_switch.m"
{
#line 244 "dense_switch.m"
  {
#line 244 "dense_switch.m"
    MR_bool ll_backend__dense_switch__succeeded;

#line 244 "dense_switch.m"
    {
#line 244 "dense_switch.m"
      return ll_backend__dense_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__dense_switch_scalar_common_1[2], ((MR_Box) (ll_backend__dense_switch__IndexPairs_11)), ((MR_Box) (ll_backend__dense_switch__HeadVar__2_30)));
    }
#line 244 "dense_switch.m"
    return ll_backend__dense_switch__succeeded;
#line 244 "dense_switch.m"
  }
#line 244 "dense_switch.m"
}

#line 74 "dense_switch.m"
void MR_CALL 
ll_backend__dense_switch____Compare____dense_switch_info_0_0(
#line 74 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__HeadVar__1_1,
#line 74 "dense_switch.m"
  MR_Word ll_backend__dense_switch__HeadVar__2_2,
#line 74 "dense_switch.m"
  MR_Word ll_backend__dense_switch__HeadVar__3_3)
#line 74 "dense_switch.m"
{
#line 74 "dense_switch.m"
  {
#line 74 "dense_switch.m"
    MR_bool ll_backend__dense_switch__succeeded;
#line 74 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__CastX_12 = (MR_Integer) ll_backend__dense_switch__HeadVar__2_2;
#line 74 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__CastY_13 = (MR_Integer) ll_backend__dense_switch__HeadVar__3_3;

#line 74 "dense_switch.m"
    ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__CastX_12 == ll_backend__dense_switch__CastY_13);
#line 74 "dense_switch.m"
    if (ll_backend__dense_switch__succeeded)
#line 675 "ll_backend.dense_switch.c"
      *ll_backend__dense_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "dense_switch.m"
    else
#line 74 "dense_switch.m"
      {
#line 74 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 74 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_10_10;

#line 74 "dense_switch.m"
        {
#line 74 "dense_switch.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__dense_switch__V_10_10, ll_backend__dense_switch__V_4_4, ll_backend__dense_switch__V_7_7);
        }
#line 701 "ll_backend.dense_switch.c"
        ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__V_10_10 == (MR_Integer) 0);
#line 74 "dense_switch.m"
        ll_backend__dense_switch__succeeded = !(ll_backend__dense_switch__succeeded);
#line 74 "dense_switch.m"
        if (ll_backend__dense_switch__succeeded)
#line 74 "dense_switch.m"
          *ll_backend__dense_switch__HeadVar__1_1 = ll_backend__dense_switch__V_10_10;
#line 74 "dense_switch.m"
        else
#line 74 "dense_switch.m"
          {
#line 74 "dense_switch.m"
            MR_Word ll_backend__dense_switch__V_11_11;

#line 74 "dense_switch.m"
            {
#line 74 "dense_switch.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__dense_switch__V_11_11, ll_backend__dense_switch__V_5_5, ll_backend__dense_switch__V_8_8);
            }
#line 721 "ll_backend.dense_switch.c"
            ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__V_11_11 == (MR_Integer) 0);
#line 74 "dense_switch.m"
            ll_backend__dense_switch__succeeded = !(ll_backend__dense_switch__succeeded);
#line 74 "dense_switch.m"
            if (ll_backend__dense_switch__succeeded)
#line 74 "dense_switch.m"
              *ll_backend__dense_switch__HeadVar__1_1 = ll_backend__dense_switch__V_11_11;
#line 74 "dense_switch.m"
            else
#line 74 "dense_switch.m"
              {
#line 74 "dense_switch.m"
                MR_Integer ll_backend__dense_switch__V_17_17 = (MR_Integer) ll_backend__dense_switch__V_6_6;
#line 74 "dense_switch.m"
                MR_Integer ll_backend__dense_switch__V_18_18 = (MR_Integer) ll_backend__dense_switch__V_9_9;

#line 74 "dense_switch.m"
                {
#line 74 "dense_switch.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__dense_switch__HeadVar__1_1, ll_backend__dense_switch__V_17_17, ll_backend__dense_switch__V_18_18);
#line 74 "dense_switch.m"
                  return;
                }
#line 74 "dense_switch.m"
              }
#line 74 "dense_switch.m"
          }
#line 74 "dense_switch.m"
      }
#line 74 "dense_switch.m"
  }
#line 74 "dense_switch.m"
}

#line 74 "dense_switch.m"
MR_bool MR_CALL 
ll_backend__dense_switch____Unify____dense_switch_info_0_0(
#line 74 "dense_switch.m"
  MR_Word ll_backend__dense_switch__HeadVar__1_1,
#line 74 "dense_switch.m"
  MR_Word ll_backend__dense_switch__HeadVar__2_2)
#line 74 "dense_switch.m"
{
#line 74 "dense_switch.m"
  {
#line 74 "dense_switch.m"
    MR_bool ll_backend__dense_switch__succeeded;
#line 74 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__CastX_9 = (MR_Integer) ll_backend__dense_switch__HeadVar__1_1;
#line 74 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__CastY_10 = (MR_Integer) ll_backend__dense_switch__HeadVar__2_2;

#line 74 "dense_switch.m"
    ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__CastX_9 == ll_backend__dense_switch__CastY_10);
#line 74 "dense_switch.m"
    if (ll_backend__dense_switch__succeeded)
#line 74 "dense_switch.m"
      ll_backend__dense_switch__succeeded = MR_TRUE;
#line 74 "dense_switch.m"
    else
#line 74 "dense_switch.m"
      {
#line 74 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 74 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 2)));

#line 797 "ll_backend.dense_switch.c"
        ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__V_3_3 == ll_backend__dense_switch__V_6_6);
#line 74 "dense_switch.m"
        if (ll_backend__dense_switch__succeeded)
#line 74 "dense_switch.m"
          {
#line 803 "ll_backend.dense_switch.c"
            ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__V_4_4 == ll_backend__dense_switch__V_7_7);
#line 74 "dense_switch.m"
            if (ll_backend__dense_switch__succeeded)
#line 807 "ll_backend.dense_switch.c"
              ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__V_5_5 == ll_backend__dense_switch__V_8_8);
#line 74 "dense_switch.m"
          }
#line 74 "dense_switch.m"
      }
#line 74 "dense_switch.m"
    return ll_backend__dense_switch__succeeded;
#line 74 "dense_switch.m"
  }
#line 74 "dense_switch.m"
}

#line 244 "dense_switch.m"
static MR_bool MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0_1(
#line 244 "dense_switch.m"
  MR_Box ll_backend__dense_switch__closure_arg)
#line 244 "dense_switch.m"
{
#line 244 "dense_switch.m"
  {
#line 244 "dense_switch.m"
    MR_bool ll_backend__dense_switch__succeeded;
#line 244 "dense_switch.m"
    MR_Box ll_backend__dense_switch__closure = ll_backend__dense_switch__closure_arg;

#line 244 "dense_switch.m"
    {
#line 244 "dense_switch.m"
      return ll_backend__dense_switch__succeeded = ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__244__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 4))));
    }
#line 244 "dense_switch.m"
    return ll_backend__dense_switch__succeeded;
#line 244 "dense_switch.m"
  }
#line 244 "dense_switch.m"
}

#line 236 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0(
#line 236 "dense_switch.m"
  MR_Integer ll_backend__dense_switch__CurVal_9,
#line 236 "dense_switch.m"
  MR_Integer ll_backend__dense_switch__LastVal_10,
#line 236 "dense_switch.m"
  MR_Word ll_backend__dense_switch__IndexPairs_11,
#line 236 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__Targets_12,
#line 236 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22,
#line 236 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23,
#line 236 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_24,
#line 236 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_25)
#line 236 "dense_switch.m"
{
#line 247 "dense_switch.m"
  {
#line 247 "dense_switch.m"
    MR_bool ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__CurVal_9 > ll_backend__dense_switch__LastVal_10);

#line 247 "dense_switch.m"
    if (ll_backend__dense_switch__succeeded)
#line 245 "dense_switch.m"
      {
#line 245 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_26_26;

#line 244 "dense_switch.m"
        {
#line 244 "dense_switch.m"
          ll_backend__dense_switch__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 244 "dense_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_26_26, 0) = ((MR_Box) (&ll_backend__dense_switch_scalar_common_6[0]));
#line 244 "dense_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_26_26, 1) = ((MR_Box) (ll_backend__dense_switch__generate_dense_jump_table_8_p_0_1));
#line 244 "dense_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 244 "dense_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_26_26, 3) = ((MR_Box) (ll_backend__dense_switch__IndexPairs_11));
#line 244 "dense_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_26_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "dense_switch.m"
        }
#line 244 "dense_switch.m"
        {
#line 244 "dense_switch.m"
          mercury__require__expect_4_p_0(ll_backend__dense_switch__V_26_26, (MR_String) "ll_backend.dense_switch", (MR_String) "predicate \140ll_backend.dense_switch.generate_dense_jump_table\'/8", (MR_String) "NextVal > LastVal, IndexList not []");
        }
#line 246 "dense_switch.m"
        *ll_backend__dense_switch__Targets_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 246 "dense_switch.m"
        *ll_backend__dense_switch__STATE_VARIABLE_CI_25 = ll_backend__dense_switch__STATE_VARIABLE_CI_0_24;
#line 246 "dense_switch.m"
        *ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23 = ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22;
#line 245 "dense_switch.m"
      }
#line 247 "dense_switch.m"
    else
#line 248 "dense_switch.m"
      {
#line 248 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__NextVal_15 = (ll_backend__dense_switch__CurVal_9 + (MR_Integer) 1);

#line 255 "dense_switch.m"
        if ((ll_backend__dense_switch__IndexPairs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "dense_switch.m"
          {
#line 250 "dense_switch.m"
            MR_Word ll_backend__dense_switch__FailLabel_16;
#line 250 "dense_switch.m"
            MR_Word ll_backend__dense_switch__LaterTargets_17;
#line 250 "dense_switch.m"
            MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40;
#line 250 "dense_switch.m"
            MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_41_41;
#line 250 "dense_switch.m"
            MR_Word ll_backend__dense_switch__V_44_44;

#line 276 "dense_switch.m"
            if ((ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "dense_switch.m"
              {
#line 277 "dense_switch.m"
                {
#line 277 "dense_switch.m"
                  ll_backend__code_info__get_next_label_3_p_0(&ll_backend__dense_switch__FailLabel_16, ll_backend__dense_switch__STATE_VARIABLE_CI_0_24, &ll_backend__dense_switch__STATE_VARIABLE_CI_41_41);
                }
#line 278 "dense_switch.m"
                {
#line 278 "dense_switch.m"
                  ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "dense_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40, 0) = ((MR_Box) (ll_backend__dense_switch__FailLabel_16));
#line 278 "dense_switch.m"
                }
#line 276 "dense_switch.m"
              }
#line 276 "dense_switch.m"
            else
#line 280 "dense_switch.m"
              {
#line 280 "dense_switch.m"
                ll_backend__dense_switch__FailLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22, (MR_Integer) 0)));
#line 280 "dense_switch.m"
                ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40 = ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22;
#line 280 "dense_switch.m"
                ll_backend__dense_switch__STATE_VARIABLE_CI_41_41 = ll_backend__dense_switch__STATE_VARIABLE_CI_0_24;
#line 280 "dense_switch.m"
              }
#line 252 "dense_switch.m"
            {
#line 252 "dense_switch.m"
              ll_backend__dense_switch__generate_dense_jump_table_8_p_0(ll_backend__dense_switch__NextVal_15, ll_backend__dense_switch__LastVal_10, ll_backend__dense_switch__IndexPairs_11, &ll_backend__dense_switch__LaterTargets_17, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23, ll_backend__dense_switch__STATE_VARIABLE_CI_41_41, ll_backend__dense_switch__STATE_VARIABLE_CI_25);
            }
#line 254 "dense_switch.m"
            {
#line 254 "dense_switch.m"
              ll_backend__dense_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 254 "dense_switch.m"
              MR_hl_field(MR_mktag(1), ll_backend__dense_switch__V_44_44, 0) = ((MR_Box) (ll_backend__dense_switch__FailLabel_16));
#line 254 "dense_switch.m"
            }
#line 254 "dense_switch.m"
            {
#line 254 "dense_switch.m"
              MR_Word base;
#line 254 "dense_switch.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "dense_switch.m"
              *ll_backend__dense_switch__Targets_12 = base;
#line 254 "dense_switch.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dense_switch__V_44_44));
#line 254 "dense_switch.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dense_switch__LaterTargets_17));
#line 254 "dense_switch.m"
            }
#line 250 "dense_switch.m"
          }
#line 255 "dense_switch.m"
        else
#line 256 "dense_switch.m"
          {
#line 256 "dense_switch.m"
            MR_Word ll_backend__dense_switch__FirstIndexPair_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__IndexPairs_11, (MR_Integer) 0)));
#line 256 "dense_switch.m"
            MR_Word ll_backend__dense_switch__LaterIndexPairs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__IndexPairs_11, (MR_Integer) 1)));
#line 256 "dense_switch.m"
            MR_Integer ll_backend__dense_switch__FirstIndex_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__FirstIndexPair_18, (MR_Integer) 0)));
#line 256 "dense_switch.m"
            MR_Word ll_backend__dense_switch__FirstLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__FirstIndexPair_18, (MR_Integer) 1)));

#line 258 "dense_switch.m"
            ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__FirstIndex_20 == ll_backend__dense_switch__CurVal_9);
#line 262 "dense_switch.m"
            if (ll_backend__dense_switch__succeeded)
#line 260 "dense_switch.m"
              {
#line 260 "dense_switch.m"
                MR_Word ll_backend__dense_switch__V_34_34;
#line 260 "dense_switch.m"
                MR_Word ll_backend__dense_switch__LaterTargets_45;

#line 259 "dense_switch.m"
                {
#line 259 "dense_switch.m"
                  ll_backend__dense_switch__generate_dense_jump_table_8_p_0(ll_backend__dense_switch__NextVal_15, ll_backend__dense_switch__LastVal_10, ll_backend__dense_switch__LaterIndexPairs_19, &ll_backend__dense_switch__LaterTargets_45, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23, ll_backend__dense_switch__STATE_VARIABLE_CI_0_24, ll_backend__dense_switch__STATE_VARIABLE_CI_25);
                }
#line 261 "dense_switch.m"
                {
#line 261 "dense_switch.m"
                  ll_backend__dense_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 261 "dense_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dense_switch__V_34_34, 0) = ((MR_Box) (ll_backend__dense_switch__FirstLabel_21));
#line 261 "dense_switch.m"
                }
#line 261 "dense_switch.m"
                {
#line 261 "dense_switch.m"
                  MR_Word base;
#line 261 "dense_switch.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "dense_switch.m"
                  *ll_backend__dense_switch__Targets_12 = base;
#line 261 "dense_switch.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dense_switch__V_34_34));
#line 261 "dense_switch.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dense_switch__LaterTargets_45));
#line 261 "dense_switch.m"
                }
#line 260 "dense_switch.m"
              }
#line 262 "dense_switch.m"
            else
#line 263 "dense_switch.m"
              {
#line 263 "dense_switch.m"
                MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35;
#line 263 "dense_switch.m"
                MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_36_36;
#line 263 "dense_switch.m"
                MR_Word ll_backend__dense_switch__V_39_39;
#line 263 "dense_switch.m"
                MR_Word ll_backend__dense_switch__FailLabel_46;
#line 263 "dense_switch.m"
                MR_Word ll_backend__dense_switch__LaterTargets_47;

#line 276 "dense_switch.m"
                if ((ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "dense_switch.m"
                  {
#line 277 "dense_switch.m"
                    {
#line 277 "dense_switch.m"
                      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__dense_switch__FailLabel_46, ll_backend__dense_switch__STATE_VARIABLE_CI_0_24, &ll_backend__dense_switch__STATE_VARIABLE_CI_36_36);
                    }
#line 278 "dense_switch.m"
                    {
#line 278 "dense_switch.m"
                      ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "dense_switch.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35, 0) = ((MR_Box) (ll_backend__dense_switch__FailLabel_46));
#line 278 "dense_switch.m"
                    }
#line 276 "dense_switch.m"
                  }
#line 276 "dense_switch.m"
                else
#line 280 "dense_switch.m"
                  {
#line 280 "dense_switch.m"
                    ll_backend__dense_switch__FailLabel_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22, (MR_Integer) 0)));
#line 280 "dense_switch.m"
                    ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35 = ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22;
#line 280 "dense_switch.m"
                    ll_backend__dense_switch__STATE_VARIABLE_CI_36_36 = ll_backend__dense_switch__STATE_VARIABLE_CI_0_24;
#line 280 "dense_switch.m"
                  }
#line 264 "dense_switch.m"
                {
#line 264 "dense_switch.m"
                  ll_backend__dense_switch__generate_dense_jump_table_8_p_0(ll_backend__dense_switch__NextVal_15, ll_backend__dense_switch__LastVal_10, ll_backend__dense_switch__IndexPairs_11, &ll_backend__dense_switch__LaterTargets_47, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23, ll_backend__dense_switch__STATE_VARIABLE_CI_36_36, ll_backend__dense_switch__STATE_VARIABLE_CI_25);
                }
#line 266 "dense_switch.m"
                {
#line 266 "dense_switch.m"
                  ll_backend__dense_switch__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 266 "dense_switch.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dense_switch__V_39_39, 0) = ((MR_Box) (ll_backend__dense_switch__FailLabel_46));
#line 266 "dense_switch.m"
                }
#line 266 "dense_switch.m"
                {
#line 266 "dense_switch.m"
                  MR_Word base;
#line 266 "dense_switch.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "dense_switch.m"
                  *ll_backend__dense_switch__Targets_12 = base;
#line 266 "dense_switch.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dense_switch__V_39_39));
#line 266 "dense_switch.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dense_switch__LaterTargets_47));
#line 266 "dense_switch.m"
                }
#line 263 "dense_switch.m"
              }
#line 256 "dense_switch.m"
          }
#line 248 "dense_switch.m"
      }
#line 247 "dense_switch.m"
  }
#line 236 "dense_switch.m"
}

#line 224 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(
#line 224 "dense_switch.m"
  MR_Word ll_backend__dense_switch__Label_5,
#line 224 "dense_switch.m"
  MR_Word ll_backend__dense_switch__ConsTag_6,
#line 224 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_9,
#line 224 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_IndexMap_10)
#line 224 "dense_switch.m"
{
#line 230 "dense_switch.m"
  {
#line 230 "dense_switch.m"
    MR_bool ll_backend__dense_switch__succeeded = ((((MR_tag((MR_Word) ll_backend__dense_switch__ConsTag_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dense_switch__ConsTag_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 230 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__Index_8;

#line 228 "dense_switch.m"
    if (ll_backend__dense_switch__succeeded)
#line 228 "dense_switch.m"
      {
#line 228 "dense_switch.m"
        ll_backend__dense_switch__Index_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dense_switch__ConsTag_6, (MR_Integer) 1)));
#line 229 "dense_switch.m"
        {
#line 229 "dense_switch.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__dense_switch__Index_8, ((MR_Box) (ll_backend__dense_switch__Label_5)), ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_9, ll_backend__dense_switch__STATE_VARIABLE_IndexMap_10);
#line 229 "dense_switch.m"
          return;
        }
#line 228 "dense_switch.m"
      }
#line 228 "dense_switch.m"
    else
#line 231 "dense_switch.m"
      {
#line 231 "dense_switch.m"
        {
#line 231 "dense_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dense_switch", (MR_String) "predicate \140ll_backend.dense_switch.record_dense_label_for_cons_tag\'/4", (MR_String) "not int_tag");
#line 231 "dense_switch.m"
          return;
        }
#line 231 "dense_switch.m"
      }
#line 230 "dense_switch.m"
  }
#line 224 "dense_switch.m"
}

#line 205 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_12_p_0_2(
#line 205 "dense_switch.m"
  MR_Box ll_backend__dense_switch__closure_arg,
#line 205 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
#line 205 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_2,
#line 205 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_3)
#line 205 "dense_switch.m"
{
#line 205 "dense_switch.m"
  {
#line 205 "dense_switch.m"
    MR_Box ll_backend__dense_switch__closure = ll_backend__dense_switch__closure_arg;
#line 205 "dense_switch.m"
    MR_Word ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_10;

#line 205 "dense_switch.m"
    {
#line 205 "dense_switch.m"
      ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__dense_switch__wrapper_arg_1), ((MR_Word) ll_backend__dense_switch__wrapper_arg_2), &ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_10);
    }
#line 205 "dense_switch.m"
    *ll_backend__dense_switch__wrapper_arg_3 = ((MR_Box) (ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_10));
#line 205 "dense_switch.m"
  }
#line 205 "dense_switch.m"
}

#line 200 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_12_p_0_1(
#line 200 "dense_switch.m"
  MR_Box ll_backend__dense_switch__closure_arg,
#line 200 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
#line 200 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_2,
#line 200 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_3)
#line 200 "dense_switch.m"
{
#line 200 "dense_switch.m"
  {
#line 200 "dense_switch.m"
    MR_Box ll_backend__dense_switch__closure = ll_backend__dense_switch__closure_arg;
#line 200 "dense_switch.m"
    MR_String ll_backend__dense_switch__conv1_HeadVar__2_2;
#line 200 "dense_switch.m"
    MR_Word ll_backend__dense_switch__conv0_HeadVar__3_3;

#line 200 "dense_switch.m"
    {
#line 200 "dense_switch.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__dense_switch__wrapper_arg_1), &ll_backend__dense_switch__conv1_HeadVar__2_2, &ll_backend__dense_switch__conv0_HeadVar__3_3);
    }
#line 200 "dense_switch.m"
    *ll_backend__dense_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__dense_switch__conv1_HeadVar__2_2));
#line 200 "dense_switch.m"
    *ll_backend__dense_switch__wrapper_arg_3 = ((MR_Box) (ll_backend__dense_switch__conv0_HeadVar__3_3));
#line 200 "dense_switch.m"
  }
#line 200 "dense_switch.m"
}

#line 190 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_12_p_0(
#line 190 "dense_switch.m"
  MR_String ll_backend__dense_switch__VarName_13,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__CodeModel_14,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__SwitchGoalInfo_15,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__EndLabel_16,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__TaggedCase_17,
#line 190 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__Code_18,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_39,
#line 190 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_IndexMap_40,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_0_41,
#line 190 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_42,
#line 190 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_43,
#line 190 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_44)
#line 190 "dense_switch.m"
{
#line 197 "dense_switch.m"
  {
#line 197 "dense_switch.m"
    MR_bool ll_backend__dense_switch__succeeded;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__TypeCtorInfo_69_69;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__TypeCtorInfo_74_74;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__TaggedMainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__TaggedCase_17, (MR_Integer) 0)));
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__TaggedOtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__TaggedCase_17, (MR_Integer) 1)));
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__TaggedCase_17, (MR_Integer) 3)));
#line 197 "dense_switch.m"
    MR_String ll_backend__dense_switch__MainConsName_26;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__MainConsTag_27;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__OtherConsNames_28;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__OtherConsTags_29;
#line 197 "dense_switch.m"
    MR_String ll_backend__dense_switch__LabelComment_30;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__Label_31;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__LabelCode_32;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__BranchStart_33;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__TraceCode_34;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__GoalCode_35;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__BranchToEndCode_36;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__StoreMap_37;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__SaveCode_38;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_46_46;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_47_47;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_48_48;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_50_50;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_51_51;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_52_52;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_53_53;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_54_54;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_55_55;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_56_56;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_59_59;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_60_60;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_61_61;
#line 197 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_62_62;
#line 198 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__TaggedCase_17, (MR_Integer) 2)));
#line 205 "dense_switch.m"
    MR_Box ll_backend__dense_switch__conv3_STATE_VARIABLE_IndexMap_40;

#line 199 "dense_switch.m"
    {
#line 199 "dense_switch.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__dense_switch__TaggedMainConsId_22, &ll_backend__dense_switch__MainConsName_26, &ll_backend__dense_switch__MainConsTag_27);
    }
#line 1355 "ll_backend.dense_switch.c"
    ll_backend__dense_switch__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 200 "dense_switch.m"
    {
#line 200 "dense_switch.m"
      mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__dense_switch__TypeCtorInfo_69_69, (MR_Word) &ll_backend__dense_switch_scalar_common_2[2], ll_backend__dense_switch__TaggedOtherConsIds_23, &ll_backend__dense_switch__OtherConsNames_28, &ll_backend__dense_switch__OtherConsTags_29);
    }
#line 202 "dense_switch.m"
    {
#line 202 "dense_switch.m"
      ll_backend__dense_switch__LabelComment_30 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__dense_switch__VarName_13, ll_backend__dense_switch__MainConsName_26, ll_backend__dense_switch__OtherConsNames_28);
    }
#line 203 "dense_switch.m"
    {
#line 203 "dense_switch.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__dense_switch__Label_31, ll_backend__dense_switch__STATE_VARIABLE_CI_0_43, &ll_backend__dense_switch__STATE_VARIABLE_CI_46_46);
    }
#line 204 "dense_switch.m"
    {
#line 204 "dense_switch.m"
      ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(ll_backend__dense_switch__Label_31, ll_backend__dense_switch__MainConsTag_27, ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_39, &ll_backend__dense_switch__STATE_VARIABLE_IndexMap_47_47);
    }
#line 205 "dense_switch.m"
    {
#line 205 "dense_switch.m"
      ll_backend__dense_switch__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 205 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_48_48, 0) = ((MR_Box) (&ll_backend__dense_switch_scalar_common_5[0]));
#line 205 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_48_48, 1) = ((MR_Box) (ll_backend__dense_switch__generate_dense_case_12_p_0_2));
#line 205 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 205 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_48_48, 3) = ((MR_Box) (ll_backend__dense_switch__Label_31));
#line 205 "dense_switch.m"
    }
#line 205 "dense_switch.m"
    {
#line 205 "dense_switch.m"
      mercury__list__foldl_4_p_0(ll_backend__dense_switch__TypeCtorInfo_69_69, (MR_Word) &ll_backend__dense_switch_scalar_common_2[0], ll_backend__dense_switch__V_48_48, ll_backend__dense_switch__OtherConsTags_29, ((MR_Box) (ll_backend__dense_switch__STATE_VARIABLE_IndexMap_47_47)), &ll_backend__dense_switch__conv3_STATE_VARIABLE_IndexMap_40);
    }
#line 205 "dense_switch.m"
    *ll_backend__dense_switch__STATE_VARIABLE_IndexMap_40 = ((MR_Word) ll_backend__dense_switch__conv3_STATE_VARIABLE_IndexMap_40);
#line 1398 "ll_backend.dense_switch.c"
    ll_backend__dense_switch__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 208 "dense_switch.m"
    {
#line 208 "dense_switch.m"
      ll_backend__dense_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "dense_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 208 "dense_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_51_51, 1) = ((MR_Box) (ll_backend__dense_switch__Label_31));
#line 208 "dense_switch.m"
    }
#line 207 "dense_switch.m"
    {
#line 207 "dense_switch.m"
      ll_backend__dense_switch__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_50_50, 0) = ((MR_Box) (ll_backend__dense_switch__V_51_51));
#line 207 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_50_50, 1) = ((MR_Box) (ll_backend__dense_switch__LabelComment_30));
#line 207 "dense_switch.m"
    }
#line 207 "dense_switch.m"
    {
#line 207 "dense_switch.m"
      ll_backend__dense_switch__LabelCode_32 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_74_74, ((MR_Box) (ll_backend__dense_switch__V_50_50)));
    }
#line 212 "dense_switch.m"
    {
#line 212 "dense_switch.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__dense_switch__STATE_VARIABLE_CI_46_46, &ll_backend__dense_switch__BranchStart_33);
    }
#line 213 "dense_switch.m"
    {
#line 213 "dense_switch.m"
      ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(ll_backend__dense_switch__Goal_25, ll_backend__dense_switch__SwitchGoalInfo_15, &ll_backend__dense_switch__TraceCode_34, ll_backend__dense_switch__STATE_VARIABLE_CI_46_46, &ll_backend__dense_switch__STATE_VARIABLE_CI_52_52);
    }
#line 214 "dense_switch.m"
    {
#line 214 "dense_switch.m"
      ll_backend__code_gen__generate_goal_5_p_0(ll_backend__dense_switch__CodeModel_14, ll_backend__dense_switch__Goal_25, &ll_backend__dense_switch__GoalCode_35, ll_backend__dense_switch__STATE_VARIABLE_CI_52_52, &ll_backend__dense_switch__STATE_VARIABLE_CI_53_53);
    }
#line 216 "dense_switch.m"
    {
#line 216 "dense_switch.m"
      ll_backend__dense_switch__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 216 "dense_switch.m"
      MR_hl_field(MR_mktag(1), ll_backend__dense_switch__V_56_56, 0) = ((MR_Box) (ll_backend__dense_switch__EndLabel_16));
#line 216 "dense_switch.m"
    }
#line 216 "dense_switch.m"
    {
#line 216 "dense_switch.m"
      ll_backend__dense_switch__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "dense_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 216 "dense_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_55_55, 1) = ((MR_Box) (ll_backend__dense_switch__V_56_56));
#line 216 "dense_switch.m"
    }
#line 215 "dense_switch.m"
    {
#line 215 "dense_switch.m"
      ll_backend__dense_switch__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_54_54, 0) = ((MR_Box) (ll_backend__dense_switch__V_55_55));
#line 215 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_54_54, 1) = ((MR_Box) ((MR_String) "branch to end of dense switch"));
#line 215 "dense_switch.m"
    }
#line 215 "dense_switch.m"
    {
#line 215 "dense_switch.m"
      ll_backend__dense_switch__BranchToEndCode_36 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_74_74, ((MR_Box) (ll_backend__dense_switch__V_54_54)));
    }
#line 219 "dense_switch.m"
    {
#line 219 "dense_switch.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__dense_switch__SwitchGoalInfo_15, &ll_backend__dense_switch__StoreMap_37);
    }
#line 220 "dense_switch.m"
    {
#line 220 "dense_switch.m"
      ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__dense_switch__StoreMap_37, ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_0_41, ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_42, &ll_backend__dense_switch__SaveCode_38, ll_backend__dense_switch__STATE_VARIABLE_CI_53_53, &ll_backend__dense_switch__STATE_VARIABLE_CI_59_59);
    }
#line 221 "dense_switch.m"
    {
#line 221 "dense_switch.m"
      ll_backend__dense_switch__V_62_62 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_74_74, ll_backend__dense_switch__SaveCode_38, ll_backend__dense_switch__BranchToEndCode_36);
    }
#line 221 "dense_switch.m"
    {
#line 221 "dense_switch.m"
      ll_backend__dense_switch__V_61_61 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_74_74, ll_backend__dense_switch__GoalCode_35, ll_backend__dense_switch__V_62_62);
    }
#line 221 "dense_switch.m"
    {
#line 221 "dense_switch.m"
      ll_backend__dense_switch__V_60_60 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_74_74, ll_backend__dense_switch__TraceCode_34, ll_backend__dense_switch__V_61_61);
    }
#line 221 "dense_switch.m"
    {
#line 221 "dense_switch.m"
      *ll_backend__dense_switch__Code_18 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_74_74, ll_backend__dense_switch__LabelCode_32, ll_backend__dense_switch__V_60_60);
    }
#line 222 "dense_switch.m"
    {
#line 222 "dense_switch.m"
      ll_backend__code_info__reset_to_position_3_p_0(ll_backend__dense_switch__BranchStart_33, ll_backend__dense_switch__STATE_VARIABLE_CI_59_59, ll_backend__dense_switch__STATE_VARIABLE_CI_44);
#line 222 "dense_switch.m"
      return;
    }
#line 197 "dense_switch.m"
  }
#line 190 "dense_switch.m"
}

#line 152 "dense_switch.m"
static void MR_CALL 
ll_backend__dense_switch__generate_dense_switch_12_p_0_1(
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__closure_arg,
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
#line 152 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_2,
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_3,
#line 152 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_4,
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_5,
#line 152 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_6,
#line 152 "dense_switch.m"
  MR_Box ll_backend__dense_switch__wrapper_arg_7,
#line 152 "dense_switch.m"
  MR_Box * ll_backend__dense_switch__wrapper_arg_8)
#line 152 "dense_switch.m"
{
#line 152 "dense_switch.m"
  {
#line 152 "dense_switch.m"
    MR_Box ll_backend__dense_switch__closure = ll_backend__dense_switch__closure_arg;
#line 152 "dense_switch.m"
    MR_Word ll_backend__dense_switch__conv3_Code_18;
#line 152 "dense_switch.m"
    MR_Word ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_40;
#line 152 "dense_switch.m"
    MR_Word ll_backend__dense_switch__conv1_STATE_VARIABLE_MaybeEnd_42;
#line 152 "dense_switch.m"
    MR_Word ll_backend__dense_switch__conv0_STATE_VARIABLE_CI_44;

#line 152 "dense_switch.m"
    {
#line 152 "dense_switch.m"
      ll_backend__dense_switch__generate_dense_case_12_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 6))), ((MR_Word) ll_backend__dense_switch__wrapper_arg_1), &ll_backend__dense_switch__conv3_Code_18, ((MR_Word) ll_backend__dense_switch__wrapper_arg_3), &ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_40, ((MR_Word) ll_backend__dense_switch__wrapper_arg_5), &ll_backend__dense_switch__conv1_STATE_VARIABLE_MaybeEnd_42, ((MR_Word) ll_backend__dense_switch__wrapper_arg_7), &ll_backend__dense_switch__conv0_STATE_VARIABLE_CI_44);
    }
#line 152 "dense_switch.m"
    *ll_backend__dense_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__dense_switch__conv3_Code_18));
#line 152 "dense_switch.m"
    *ll_backend__dense_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_40));
#line 152 "dense_switch.m"
    *ll_backend__dense_switch__wrapper_arg_6 = ((MR_Box) (ll_backend__dense_switch__conv1_STATE_VARIABLE_MaybeEnd_42));
#line 152 "dense_switch.m"
    *ll_backend__dense_switch__wrapper_arg_8 = ((MR_Box) (ll_backend__dense_switch__conv0_STATE_VARIABLE_CI_44));
#line 152 "dense_switch.m"
  }
#line 152 "dense_switch.m"
}

#line 43 "dense_switch.m"
void MR_CALL 
ll_backend__dense_switch__generate_dense_switch_12_p_0(
#line 43 "dense_switch.m"
  MR_Word ll_backend__dense_switch__TaggedCases_13,
#line 43 "dense_switch.m"
  MR_Word ll_backend__dense_switch__VarRval_14,
#line 43 "dense_switch.m"
  MR_String ll_backend__dense_switch__VarName_15,
#line 43 "dense_switch.m"
  MR_Word ll_backend__dense_switch__CodeModel_16,
#line 43 "dense_switch.m"
  MR_Word ll_backend__dense_switch__SwitchGoalInfo_17,
#line 43 "dense_switch.m"
  MR_Word ll_backend__dense_switch__DenseSwitchInfo_18,
#line 43 "dense_switch.m"
  MR_Word ll_backend__dense_switch__EndLabel_19,
#line 43 "dense_switch.m"
  MR_Word ll_backend__dense_switch__MaybeEnd0_20,
#line 43 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__MaybeEnd_21,
#line 43 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__Code_22,
#line 43 "dense_switch.m"
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_43,
#line 43 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_44)
#line 43 "dense_switch.m"
{
#line 124 "dense_switch.m"
  {
#line 124 "dense_switch.m"
    MR_bool ll_backend__dense_switch__succeeded;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__TypeCtorInfo_79_79;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__TypeCtorInfo_80_80;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__TypeCtorInfo_86_86;
#line 124 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__FirstVal_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__DenseSwitchInfo_18, (MR_Integer) 0)));
#line 124 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__LastVal_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__DenseSwitchInfo_18, (MR_Integer) 1)));
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__DenseSwitchInfo_18, (MR_Integer) 2)));
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__IndexRval_27;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__RangeCheckCode_29;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__CasesCodes_30;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__IndexMap_31;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__CasesCode_32;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__IndexPairs_33;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__Targets_34;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__MaybeFailLabel_35;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__JumpCode_36;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__FailCode_37;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__EndLabelCode_42;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_49_49;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_53_53;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_54_54;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_55_55;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_57_57;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_58_58;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_59_59;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_64_64;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_65_65;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_67_67;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_68_68;
#line 124 "dense_switch.m"
    MR_Word ll_backend__dense_switch__V_69_69;
#line 152 "dense_switch.m"
    MR_Box ll_backend__dense_switch__conv6_IndexMap_31;
#line 152 "dense_switch.m"
    MR_Box ll_backend__dense_switch__conv5_MaybeEnd_21;
#line 152 "dense_switch.m"
    MR_Box ll_backend__dense_switch__conv4_STATE_VARIABLE_CI_55_55;

#line 129 "dense_switch.m"
    ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__FirstVal_24 == (MR_Integer) 0);
#line 131 "dense_switch.m"
    if (ll_backend__dense_switch__succeeded)
#line 130 "dense_switch.m"
      ll_backend__dense_switch__IndexRval_27 = ll_backend__dense_switch__VarRval_14;
#line 131 "dense_switch.m"
    else
#line 132 "dense_switch.m"
      {
#line 132 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_46_46;
#line 132 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_47_47;

#line 132 "dense_switch.m"
        {
#line 132 "dense_switch.m"
          ll_backend__dense_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 132 "dense_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__dense_switch__V_47_47, 0) = ((MR_Box) (ll_backend__dense_switch__FirstVal_24));
#line 132 "dense_switch.m"
        }
#line 132 "dense_switch.m"
        {
#line 132 "dense_switch.m"
          ll_backend__dense_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 132 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_46_46, 1) = ((MR_Box) (ll_backend__dense_switch__V_47_47));
#line 132 "dense_switch.m"
        }
#line 132 "dense_switch.m"
        {
#line 132 "dense_switch.m"
          ll_backend__dense_switch__IndexRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 132 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__IndexRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 132 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__IndexRval_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 132 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__IndexRval_27, 2) = ((MR_Box) (ll_backend__dense_switch__VarRval_14));
#line 132 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__IndexRval_27, 3) = ((MR_Box) (ll_backend__dense_switch__V_46_46));
#line 132 "dense_switch.m"
        }
#line 132 "dense_switch.m"
      }
#line 142 "dense_switch.m"
    if ((ll_backend__dense_switch__CanFail_26 == (MR_Integer) 0))
#line 137 "dense_switch.m"
      {
#line 137 "dense_switch.m"
        MR_Integer ll_backend__dense_switch__Difference_28 = (ll_backend__dense_switch__LastVal_25 - ll_backend__dense_switch__FirstVal_24);
#line 137 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_48_48;
#line 137 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_51_51;
#line 137 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_52_52;

#line 140 "dense_switch.m"
        {
#line 140 "dense_switch.m"
          ll_backend__dense_switch__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 140 "dense_switch.m"
          MR_hl_field(MR_mktag(1), ll_backend__dense_switch__V_52_52, 0) = ((MR_Box) (ll_backend__dense_switch__Difference_28));
#line 140 "dense_switch.m"
        }
#line 140 "dense_switch.m"
        {
#line 140 "dense_switch.m"
          ll_backend__dense_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 140 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_51_51, 1) = ((MR_Box) (ll_backend__dense_switch__V_52_52));
#line 140 "dense_switch.m"
        }
#line 139 "dense_switch.m"
        {
#line 139 "dense_switch.m"
          ll_backend__dense_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 139 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 139 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 139 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_48_48, 2) = ((MR_Box) (ll_backend__dense_switch__IndexRval_27));
#line 139 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_48_48, 3) = ((MR_Box) (ll_backend__dense_switch__V_51_51));
#line 139 "dense_switch.m"
        }
#line 139 "dense_switch.m"
        {
#line 139 "dense_switch.m"
          ll_backend__code_info__fail_if_rval_is_false_4_p_0(ll_backend__dense_switch__V_48_48, &ll_backend__dense_switch__RangeCheckCode_29, ll_backend__dense_switch__STATE_VARIABLE_CI_0_43, &ll_backend__dense_switch__STATE_VARIABLE_CI_49_49);
        }
#line 137 "dense_switch.m"
      }
#line 142 "dense_switch.m"
    else
#line 143 "dense_switch.m"
      {
#line 144 "dense_switch.m"
        {
#line 144 "dense_switch.m"
          ll_backend__dense_switch__RangeCheckCode_29 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 144 "dense_switch.m"
        ll_backend__dense_switch__STATE_VARIABLE_CI_49_49 = ll_backend__dense_switch__STATE_VARIABLE_CI_0_43;
#line 143 "dense_switch.m"
      }
#line 152 "dense_switch.m"
    {
#line 152 "dense_switch.m"
      ll_backend__dense_switch__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 152 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_53_53, 0) = ((MR_Box) (&ll_backend__dense_switch_scalar_common_3[0]));
#line 152 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_53_53, 1) = ((MR_Box) (ll_backend__dense_switch__generate_dense_switch_12_p_0_1));
#line 152 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 152 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_53_53, 3) = ((MR_Box) (ll_backend__dense_switch__VarName_15));
#line 152 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_53_53, 4) = ((MR_Box) (ll_backend__dense_switch__CodeModel_16));
#line 152 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_53_53, 5) = ((MR_Box) (ll_backend__dense_switch__SwitchGoalInfo_17));
#line 152 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_53_53, 6) = ((MR_Box) (ll_backend__dense_switch__EndLabel_19));
#line 152 "dense_switch.m"
    }
#line 1801 "ll_backend.dense_switch.c"
    ll_backend__dense_switch__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1803 "ll_backend.dense_switch.c"
    ll_backend__dense_switch__TypeCtorInfo_80_80 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 152 "dense_switch.m"
    {
#line 152 "dense_switch.m"
      ll_backend__dense_switch__V_54_54 = mercury__map__init_0_f_0(ll_backend__dense_switch__TypeCtorInfo_79_79, ll_backend__dense_switch__TypeCtorInfo_80_80);
    }
#line 152 "dense_switch.m"
    {
#line 152 "dense_switch.m"
      mercury__list__map_foldl3_9_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, (MR_Word) &ll_backend__dense_switch_scalar_common_1[0], (MR_Word) &ll_backend__dense_switch_scalar_common_2[0], (MR_Word) &ll_backend__dense_switch_scalar_common_1[1], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, ll_backend__dense_switch__V_53_53, ll_backend__dense_switch__TaggedCases_13, &ll_backend__dense_switch__CasesCodes_30, ((MR_Box) (ll_backend__dense_switch__V_54_54)), &ll_backend__dense_switch__conv6_IndexMap_31, ((MR_Box) (ll_backend__dense_switch__MaybeEnd0_20)), &ll_backend__dense_switch__conv5_MaybeEnd_21, ((MR_Box) (ll_backend__dense_switch__STATE_VARIABLE_CI_49_49)), &ll_backend__dense_switch__conv4_STATE_VARIABLE_CI_55_55);
    }
#line 152 "dense_switch.m"
    ll_backend__dense_switch__IndexMap_31 = ((MR_Word) ll_backend__dense_switch__conv6_IndexMap_31);
#line 152 "dense_switch.m"
    *ll_backend__dense_switch__MaybeEnd_21 = ((MR_Word) ll_backend__dense_switch__conv5_MaybeEnd_21);
#line 152 "dense_switch.m"
    ll_backend__dense_switch__STATE_VARIABLE_CI_55_55 = ((MR_Word) ll_backend__dense_switch__conv4_STATE_VARIABLE_CI_55_55);
#line 1821 "ll_backend.dense_switch.c"
    ll_backend__dense_switch__TypeCtorInfo_86_86 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 155 "dense_switch.m"
    {
#line 155 "dense_switch.m"
      ll_backend__dense_switch__CasesCode_32 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86, ll_backend__dense_switch__CasesCodes_30);
    }
#line 158 "dense_switch.m"
    {
#line 158 "dense_switch.m"
      mercury__map__to_assoc_list_2_p_0(ll_backend__dense_switch__TypeCtorInfo_79_79, ll_backend__dense_switch__TypeCtorInfo_80_80, ll_backend__dense_switch__IndexMap_31, &ll_backend__dense_switch__IndexPairs_33);
    }
#line 159 "dense_switch.m"
    {
#line 159 "dense_switch.m"
      ll_backend__dense_switch__generate_dense_jump_table_8_p_0(ll_backend__dense_switch__FirstVal_24, ll_backend__dense_switch__LastVal_25, ll_backend__dense_switch__IndexPairs_33, &ll_backend__dense_switch__Targets_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__dense_switch__MaybeFailLabel_35, ll_backend__dense_switch__STATE_VARIABLE_CI_55_55, &ll_backend__dense_switch__STATE_VARIABLE_CI_57_57);
    }
#line 162 "dense_switch.m"
    {
#line 162 "dense_switch.m"
      ll_backend__dense_switch__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 162 "dense_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 162 "dense_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_59_59, 1) = ((MR_Box) (ll_backend__dense_switch__IndexRval_27));
#line 162 "dense_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_59_59, 2) = ((MR_Box) (ll_backend__dense_switch__Targets_34));
#line 162 "dense_switch.m"
    }
#line 161 "dense_switch.m"
    {
#line 161 "dense_switch.m"
      ll_backend__dense_switch__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_58_58, 0) = ((MR_Box) (ll_backend__dense_switch__V_59_59));
#line 161 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_58_58, 1) = ((MR_Box) ((MR_String) "switch (using dense jump table)"));
#line 161 "dense_switch.m"
    }
#line 161 "dense_switch.m"
    {
#line 161 "dense_switch.m"
      ll_backend__dense_switch__JumpCode_36 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86, ((MR_Box) (ll_backend__dense_switch__V_58_58)));
    }
#line 171 "dense_switch.m"
    if ((ll_backend__dense_switch__MaybeFailLabel_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "dense_switch.m"
      {
#line 170 "dense_switch.m"
        {
#line 170 "dense_switch.m"
          ll_backend__dense_switch__FailCode_37 = mercury__cord__empty_0_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86);
        }
#line 170 "dense_switch.m"
        *ll_backend__dense_switch__STATE_VARIABLE_CI_44 = ll_backend__dense_switch__STATE_VARIABLE_CI_57_57;
#line 169 "dense_switch.m"
      }
#line 171 "dense_switch.m"
    else
#line 172 "dense_switch.m"
      {
#line 172 "dense_switch.m"
        MR_Word ll_backend__dense_switch__FailLabel_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__MaybeFailLabel_35, (MR_Integer) 0)));
#line 172 "dense_switch.m"
        MR_Word ll_backend__dense_switch__FailLabelCode_40;
#line 172 "dense_switch.m"
        MR_Word ll_backend__dense_switch__FailureCode_41;
#line 172 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_61_61;
#line 172 "dense_switch.m"
        MR_Word ll_backend__dense_switch__V_62_62;

#line 175 "dense_switch.m"
        {
#line 175 "dense_switch.m"
          ll_backend__dense_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 175 "dense_switch.m"
          MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_62_62, 1) = ((MR_Box) (ll_backend__dense_switch__FailLabel_38));
#line 175 "dense_switch.m"
        }
#line 174 "dense_switch.m"
        {
#line 174 "dense_switch.m"
          ll_backend__dense_switch__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "dense_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_61_61, 0) = ((MR_Box) (ll_backend__dense_switch__V_62_62));
#line 174 "dense_switch.m"
          MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_61_61, 1) = ((MR_Box) ((MR_String) "compiler-introduced \140fail\' case of dense switch"));
#line 174 "dense_switch.m"
        }
#line 174 "dense_switch.m"
        {
#line 174 "dense_switch.m"
          ll_backend__dense_switch__FailLabelCode_40 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86, ((MR_Box) (ll_backend__dense_switch__V_61_61)));
        }
#line 177 "dense_switch.m"
        {
#line 177 "dense_switch.m"
          ll_backend__code_info__generate_failure_3_p_0(&ll_backend__dense_switch__FailureCode_41, ll_backend__dense_switch__STATE_VARIABLE_CI_57_57, ll_backend__dense_switch__STATE_VARIABLE_CI_44);
        }
#line 178 "dense_switch.m"
        {
#line 178 "dense_switch.m"
          ll_backend__dense_switch__FailCode_37 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86, ll_backend__dense_switch__FailLabelCode_40, ll_backend__dense_switch__FailureCode_41);
        }
#line 172 "dense_switch.m"
      }
#line 182 "dense_switch.m"
    {
#line 182 "dense_switch.m"
      ll_backend__dense_switch__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "dense_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 182 "dense_switch.m"
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__V_65_65, 1) = ((MR_Box) (ll_backend__dense_switch__EndLabel_19));
#line 182 "dense_switch.m"
    }
#line 181 "dense_switch.m"
    {
#line 181 "dense_switch.m"
      ll_backend__dense_switch__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 181 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_64_64, 0) = ((MR_Box) (ll_backend__dense_switch__V_65_65));
#line 181 "dense_switch.m"
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__V_64_64, 1) = ((MR_Box) ((MR_String) "end of dense switch"));
#line 181 "dense_switch.m"
    }
#line 181 "dense_switch.m"
    {
#line 181 "dense_switch.m"
      ll_backend__dense_switch__EndLabelCode_42 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86, ((MR_Box) (ll_backend__dense_switch__V_64_64)));
    }
#line 186 "dense_switch.m"
    {
#line 186 "dense_switch.m"
      ll_backend__dense_switch__V_69_69 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86, ll_backend__dense_switch__FailCode_37, ll_backend__dense_switch__EndLabelCode_42);
    }
#line 186 "dense_switch.m"
    {
#line 186 "dense_switch.m"
      ll_backend__dense_switch__V_68_68 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86, ll_backend__dense_switch__CasesCode_32, ll_backend__dense_switch__V_69_69);
    }
#line 186 "dense_switch.m"
    {
#line 186 "dense_switch.m"
      ll_backend__dense_switch__V_67_67 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86, ll_backend__dense_switch__JumpCode_36, ll_backend__dense_switch__V_68_68);
    }
#line 186 "dense_switch.m"
    {
#line 186 "dense_switch.m"
      *ll_backend__dense_switch__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_86_86, ll_backend__dense_switch__RangeCheckCode_29, ll_backend__dense_switch__V_67_67);
    }
#line 124 "dense_switch.m"
  }
#line 43 "dense_switch.m"
}

#line 37 "dense_switch.m"
MR_bool MR_CALL 
ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_p_0(
#line 37 "dense_switch.m"
  MR_Word ll_backend__dense_switch__CI_10,
#line 37 "dense_switch.m"
  MR_Word ll_backend__dense_switch__VarType_11,
#line 37 "dense_switch.m"
  MR_Word ll_backend__dense_switch__TaggedCases_12,
#line 37 "dense_switch.m"
  MR_Integer ll_backend__dense_switch__LowerLimit_13,
#line 37 "dense_switch.m"
  MR_Integer ll_backend__dense_switch__UpperLimit_14,
#line 37 "dense_switch.m"
  MR_Integer ll_backend__dense_switch__NumValues_15,
#line 37 "dense_switch.m"
  MR_Integer ll_backend__dense_switch__ReqDensity_16,
#line 37 "dense_switch.m"
  MR_Word ll_backend__dense_switch__CanFail0_17,
#line 37 "dense_switch.m"
  MR_Word * ll_backend__dense_switch__DenseSwitchInfo_18)
#line 37 "dense_switch.m"
{
#line 83 "dense_switch.m"
  {
#line 83 "dense_switch.m"
    MR_bool ll_backend__dense_switch__succeeded;
#line 83 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__NumCases_19;
#line 83 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__Span_20;
#line 83 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__Range_21;
#line 83 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__Density_22;
#line 83 "dense_switch.m"
    MR_Word ll_backend__dense_switch__CanFail_29;
#line 83 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__FirstVal_30;
#line 83 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__LastVal_31;
#line 83 "dense_switch.m"
    MR_Integer ll_backend__dense_switch__V_33_33;

#line 84 "dense_switch.m"
    {
#line 84 "dense_switch.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__dense_switch__TaggedCases_12, &ll_backend__dense_switch__NumCases_19);
    }
#line 85 "dense_switch.m"
    ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__NumCases_19 > (MR_Integer) 2);
#line 83 "dense_switch.m"
    if (ll_backend__dense_switch__succeeded)
#line 83 "dense_switch.m"
      {
#line 87 "dense_switch.m"
        ll_backend__dense_switch__Span_20 = (ll_backend__dense_switch__UpperLimit_14 - ll_backend__dense_switch__LowerLimit_13);
#line 88 "dense_switch.m"
        ll_backend__dense_switch__V_33_33 = (MR_Integer) 1;
#line 88 "dense_switch.m"
        ll_backend__dense_switch__Range_21 = (ll_backend__dense_switch__Span_20 + ll_backend__dense_switch__V_33_33);
#line 89 "dense_switch.m"
        {
#line 89 "dense_switch.m"
          ll_backend__dense_switch__Density_22 = backend_libs__switch_util__switch_density_2_f_0(ll_backend__dense_switch__NumValues_15, ll_backend__dense_switch__Range_21);
        }
#line 90 "dense_switch.m"
        ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__Density_22 > ll_backend__dense_switch__ReqDensity_16);
#line 83 "dense_switch.m"
        if (ll_backend__dense_switch__succeeded)
#line 83 "dense_switch.m"
          {
#line 113 "dense_switch.m"
            if ((ll_backend__dense_switch__CanFail0_17 == (MR_Integer) 0))
#line 92 "dense_switch.m"
              {
#line 92 "dense_switch.m"
                MR_Word ll_backend__dense_switch__ModuleInfo_23;
#line 92 "dense_switch.m"
                MR_Word ll_backend__dense_switch__TypeCategory_24;
#line 108 "dense_switch.m"
                MR_Integer ll_backend__dense_switch__TypeRange_27;
#line 101 "dense_switch.m"
                MR_Integer ll_backend__dense_switch__DetDensity_28;
#line 100 "dense_switch.m"
                MR_Integer ll_backend__dense_switch___Min_25;
#line 100 "dense_switch.m"
                MR_Integer ll_backend__dense_switch___Max_26;

#line 97 "dense_switch.m"
                {
#line 97 "dense_switch.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__dense_switch__CI_10, &ll_backend__dense_switch__ModuleInfo_23);
                }
#line 98 "dense_switch.m"
                {
#line 98 "dense_switch.m"
                  ll_backend__dense_switch__TypeCategory_24 = check_hlds__type_util__classify_type_2_f_0(ll_backend__dense_switch__ModuleInfo_23, ll_backend__dense_switch__VarType_11);
                }
#line 100 "dense_switch.m"
                {
#line 100 "dense_switch.m"
                  ll_backend__dense_switch__succeeded = backend_libs__switch_util__type_range_6_p_0(ll_backend__dense_switch__ModuleInfo_23, ll_backend__dense_switch__TypeCategory_24, ll_backend__dense_switch__VarType_11, &ll_backend__dense_switch___Min_25, &ll_backend__dense_switch___Max_26, &ll_backend__dense_switch__TypeRange_27);
                }
#line 101 "dense_switch.m"
                if (ll_backend__dense_switch__succeeded)
#line 101 "dense_switch.m"
                  {
#line 102 "dense_switch.m"
                    {
#line 102 "dense_switch.m"
                      ll_backend__dense_switch__DetDensity_28 = backend_libs__switch_util__switch_density_2_f_0(ll_backend__dense_switch__NumValues_15, ll_backend__dense_switch__TypeRange_27);
                    }
#line 103 "dense_switch.m"
                    ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__DetDensity_28 > ll_backend__dense_switch__ReqDensity_16);
#line 101 "dense_switch.m"
                  }
#line 108 "dense_switch.m"
                if (ll_backend__dense_switch__succeeded)
#line 105 "dense_switch.m"
                  {
#line 105 "dense_switch.m"
                    ll_backend__dense_switch__CanFail_29 = (MR_Integer) 1;
#line 106 "dense_switch.m"
                    ll_backend__dense_switch__FirstVal_30 = (MR_Integer) 0;
#line 107 "dense_switch.m"
                    ll_backend__dense_switch__LastVal_31 = (ll_backend__dense_switch__TypeRange_27 - (MR_Integer) 1);
#line 105 "dense_switch.m"
                  }
#line 108 "dense_switch.m"
                else
#line 109 "dense_switch.m"
                  {
#line 109 "dense_switch.m"
                    ll_backend__dense_switch__CanFail_29 = ll_backend__dense_switch__CanFail0_17;
#line 110 "dense_switch.m"
                    ll_backend__dense_switch__FirstVal_30 = ll_backend__dense_switch__LowerLimit_13;
#line 111 "dense_switch.m"
                    ll_backend__dense_switch__LastVal_31 = ll_backend__dense_switch__UpperLimit_14;
#line 109 "dense_switch.m"
                  }
#line 92 "dense_switch.m"
              }
#line 113 "dense_switch.m"
            else
#line 114 "dense_switch.m"
              {
#line 115 "dense_switch.m"
                ll_backend__dense_switch__CanFail_29 = (MR_Integer) 1;
#line 116 "dense_switch.m"
                ll_backend__dense_switch__FirstVal_30 = ll_backend__dense_switch__LowerLimit_13;
#line 117 "dense_switch.m"
                ll_backend__dense_switch__LastVal_31 = ll_backend__dense_switch__UpperLimit_14;
#line 114 "dense_switch.m"
              }
#line 119 "dense_switch.m"
            {
#line 119 "dense_switch.m"
              MR_Word base;
#line 119 "dense_switch.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 119 "dense_switch.m"
              *ll_backend__dense_switch__DenseSwitchInfo_18 = base;
#line 119 "dense_switch.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dense_switch__FirstVal_30));
#line 119 "dense_switch.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__dense_switch__LastVal_31));
#line 119 "dense_switch.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__dense_switch__CanFail_29));
#line 119 "dense_switch.m"
            }
#line 119 "dense_switch.m"
            ll_backend__dense_switch__succeeded = MR_TRUE;
#line 83 "dense_switch.m"
          }
#line 83 "dense_switch.m"
      }
#line 83 "dense_switch.m"
    return ll_backend__dense_switch__succeeded;
#line 83 "dense_switch.m"
  }
#line 37 "dense_switch.m"
}

void mercury__ll_backend__dense_switch__init(void)
{
}

void mercury__ll_backend__dense_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__dense_switch__ll_backend__dense_switch__type_ctor_info_dense_switch_info_0);
}

void mercury__ll_backend__dense_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.dense_switch. */
