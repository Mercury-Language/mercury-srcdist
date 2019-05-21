/*
** Automatically generated from `dense_switch.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module ll_backend.dense_switch. */
/* :- implementation. */

/*
INIT mercury__ll_backend__dense_switch__init
ENDINIT
*/

#include "ll_backend.dense_switch.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct2 ll_backend__dense_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_PseudoTypeInfo ll_backend__dense_switch__ll_backend__dense_switch__field_types_dense_switch_info_0_0[3];

static const MR_ConstString ll_backend__dense_switch__ll_backend__dense_switch__field_names_dense_switch_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0[1];

static const MR_DuPtagLayout ll_backend__dense_switch__ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_name_ordered_dense_switch_info_0[1];

static const MR_Integer ll_backend__dense_switch__ll_backend__dense_switch__functor_number_map_dense_switch_info_0[1];

static MR_bool MR_CALL 
ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__247__1_2_p_0(
  MR_Word ll_backend__dense_switch__IndexPairs_11,
  MR_Word ll_backend__dense_switch__HeadVar__2_30);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0_2(
  MR_Box ll_backend__dense_switch__closure_arg,
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
  MR_Box ll_backend__dense_switch__wrapper_arg_2,
  MR_Box * ll_backend__dense_switch__wrapper_arg_3);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0_1(
  MR_Box ll_backend__dense_switch__closure_arg,
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
  MR_Box * ll_backend__dense_switch__wrapper_arg_2,
  MR_Box * ll_backend__dense_switch__wrapper_arg_3);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0(
  MR_Word ll_backend__dense_switch__BranchStart_14,
  MR_String ll_backend__dense_switch__VarName_15,
  MR_Word ll_backend__dense_switch__CodeModel_16,
  MR_Word ll_backend__dense_switch__SwitchGoalInfo_17,
  MR_Word ll_backend__dense_switch__EndLabel_18,
  MR_Word ll_backend__dense_switch__TaggedCase_19,
  MR_Word * ll_backend__dense_switch__Code_20,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_41,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_IndexMap_42,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_0_43,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_44,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_45,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_46);

static void MR_CALL 
ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(
  MR_Word ll_backend__dense_switch__Label_5,
  MR_Word ll_backend__dense_switch__ConsTag_6,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_9,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_IndexMap_10);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_switch_13_p_0_1(
  MR_Box ll_backend__dense_switch__closure_arg,
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
  MR_Box * ll_backend__dense_switch__wrapper_arg_2,
  MR_Box ll_backend__dense_switch__wrapper_arg_3,
  MR_Box * ll_backend__dense_switch__wrapper_arg_4,
  MR_Box ll_backend__dense_switch__wrapper_arg_5,
  MR_Box * ll_backend__dense_switch__wrapper_arg_6,
  MR_Box ll_backend__dense_switch__wrapper_arg_7,
  MR_Box * ll_backend__dense_switch__wrapper_arg_8);

static MR_bool MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0_1(
  MR_Box ll_backend__dense_switch__closure_arg);

static void MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0(
  MR_Integer ll_backend__dense_switch__CurVal_9,
  MR_Integer ll_backend__dense_switch__LastVal_10,
  MR_Word ll_backend__dense_switch__IndexPairs_11,
  MR_Word * ll_backend__dense_switch__Targets_12,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_24,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_25);

static MR_bool MR_CALL 
ll_backend__dense_switch____Unify____dense_switch_info_0_0_10001(
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
  MR_Box ll_backend__dense_switch__wrapper_arg_2);

static void MR_CALL 
ll_backend__dense_switch____Compare____dense_switch_info_0_0_10001(
  MR_Box * ll_backend__dense_switch__wrapper_arg_1,
  MR_Box ll_backend__dense_switch__wrapper_arg_2,
  MR_Box ll_backend__dense_switch__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_2[3][3];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_3[1][5];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_4[1][1];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_5[1][16];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_6[1][6];

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_7[1][7];




static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
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
    ((MR_Box) (&ll_backend__dense_switch_scalar_common_6[0])),
    ((MR_Box) (ll_backend__dense_switch__generate_dense_case_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_5[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&ll_backend__dense_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0))
  },
};

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_6[1][6] = {
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

static /* final */ const MR_Box ll_backend__dense_switch_scalar_common_7[1][7] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 ll_backend__dense_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__dense_switch__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__dense_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dense_switch__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0
  }
};

static const MR_PseudoTypeInfo ll_backend__dense_switch__ll_backend__dense_switch__field_types_dense_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0
};

static const MR_ConstString ll_backend__dense_switch__ll_backend__dense_switch__field_names_dense_switch_info_0_0[3] = {
  (MR_String) "first_value",
  (MR_String) "last_value",
  (MR_String) "new_can_fail"
};

static const MR_DuFunctorDesc ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0 = {
  (MR_String) "dense_switch_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__dense_switch__ll_backend__dense_switch__field_types_dense_switch_info_0_0,
  ll_backend__dense_switch__ll_backend__dense_switch__field_names_dense_switch_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0[1] = {
  &ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0
};

static const MR_DuPtagLayout ll_backend__dense_switch__ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__dense_switch__ll_backend__dense_switch__du_stag_ordered_dense_switch_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__dense_switch__ll_backend__dense_switch__du_name_ordered_dense_switch_info_0[1] = {
  &ll_backend__dense_switch__ll_backend__dense_switch__du_functor_desc_dense_switch_info_0_0
};

static const MR_Integer ll_backend__dense_switch__ll_backend__dense_switch__functor_number_map_dense_switch_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__dense_switch__ll_backend__dense_switch__type_ctor_info_dense_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__dense_switch____Unify____dense_switch_info_0_0_10001)),
  ((MR_Box) (ll_backend__dense_switch____Compare____dense_switch_info_0_0_10001)),
  (MR_String) "ll_backend.dense_switch",
  (MR_String) "dense_switch_info",
  {     ll_backend__dense_switch__ll_backend__dense_switch__du_name_ordered_dense_switch_info_0 },
  {     ll_backend__dense_switch__ll_backend__dense_switch__du_ptag_ordered_dense_switch_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__dense_switch__ll_backend__dense_switch__functor_number_map_dense_switch_info_0
};

static MR_bool MR_CALL 
ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__247__1_2_p_0(
  MR_Word ll_backend__dense_switch__IndexPairs_11,
  MR_Word ll_backend__dense_switch__HeadVar__2_30)
{
  {
    MR_bool ll_backend__dense_switch__succeeded;

    {
      ll_backend__dense_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__dense_switch_scalar_common_1[2], ((MR_Box) (ll_backend__dense_switch__IndexPairs_11)), ((MR_Box) (ll_backend__dense_switch__HeadVar__2_30)));
    }
    return ll_backend__dense_switch__succeeded;
  }
}

void MR_CALL 
ll_backend__dense_switch____Compare____dense_switch_info_0_0(
  MR_Word * ll_backend__dense_switch__HeadVar__1_1,
  MR_Word ll_backend__dense_switch__HeadVar__2_2,
  MR_Word ll_backend__dense_switch__HeadVar__3_3)
{
  {
    MR_bool ll_backend__dense_switch__succeeded;
    MR_Integer ll_backend__dense_switch__CastX_12 = (MR_Integer) ll_backend__dense_switch__HeadVar__2_2;
    MR_Integer ll_backend__dense_switch__CastY_13 = (MR_Integer) ll_backend__dense_switch__HeadVar__3_3;

    ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__CastX_12 == ll_backend__dense_switch__CastY_13);
    if (ll_backend__dense_switch__succeeded)
      *ll_backend__dense_switch__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ll_backend__dense_switch__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ll_backend__dense_switch__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ll_backend__dense_switch__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ll_backend__dense_switch__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ll_backend__dense_switch__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ll_backend__dense_switch__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ll_backend__dense_switch__Var_10;

      {
        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__dense_switch__Var_10, ll_backend__dense_switch__ArgX1_4, ll_backend__dense_switch__ArgY1_5);
      }
      ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__Var_10 == (MR_Integer) 0);
      ll_backend__dense_switch__succeeded = !(ll_backend__dense_switch__succeeded);
      if (ll_backend__dense_switch__succeeded)
        *ll_backend__dense_switch__HeadVar__1_1 = ll_backend__dense_switch__Var_10;
      else
      {
        MR_Word ll_backend__dense_switch__Var_11;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__dense_switch__Var_11, ll_backend__dense_switch__ArgX2_6, ll_backend__dense_switch__ArgY2_7);
        }
        ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__Var_11 == (MR_Integer) 0);
        ll_backend__dense_switch__succeeded = !(ll_backend__dense_switch__succeeded);
        if (ll_backend__dense_switch__succeeded)
          *ll_backend__dense_switch__HeadVar__1_1 = ll_backend__dense_switch__Var_11;
        else
        {
          MR_Integer ll_backend__dense_switch__Var_17 = (MR_Integer) ll_backend__dense_switch__ArgX3_8;
          MR_Integer ll_backend__dense_switch__Var_18 = (MR_Integer) ll_backend__dense_switch__ArgY3_9;

          {
            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__dense_switch__HeadVar__1_1, ll_backend__dense_switch__Var_17, ll_backend__dense_switch__Var_18);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__dense_switch____Unify____dense_switch_info_0_0(
  MR_Word ll_backend__dense_switch__HeadVar__1_1,
  MR_Word ll_backend__dense_switch__HeadVar__2_2)
{
  {
    MR_bool ll_backend__dense_switch__succeeded;
    MR_Integer ll_backend__dense_switch__CastX_9 = (MR_Integer) ll_backend__dense_switch__HeadVar__1_1;
    MR_Integer ll_backend__dense_switch__CastY_10 = (MR_Integer) ll_backend__dense_switch__HeadVar__2_2;

    ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__CastX_9 == ll_backend__dense_switch__CastY_10);
    if (ll_backend__dense_switch__succeeded)
      ll_backend__dense_switch__succeeded = MR_TRUE;
    else
    {
      MR_Integer ll_backend__dense_switch__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ll_backend__dense_switch__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ll_backend__dense_switch__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ll_backend__dense_switch__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__dense_switch__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ll_backend__dense_switch__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__HeadVar__2_2, (MR_Integer) 2)));

      ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__ArgX1_3 == ll_backend__dense_switch__ArgY1_4);
      if (ll_backend__dense_switch__succeeded)
      {
        ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__ArgX2_5 == ll_backend__dense_switch__ArgY2_6);
        if (ll_backend__dense_switch__succeeded)
          ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__ArgX3_7 == ll_backend__dense_switch__ArgY3_8);
      }
    }
    return ll_backend__dense_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0_2(
  MR_Box ll_backend__dense_switch__closure_arg,
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
  MR_Box ll_backend__dense_switch__wrapper_arg_2,
  MR_Box * ll_backend__dense_switch__wrapper_arg_3)
{
  {
    MR_Box ll_backend__dense_switch__closure = ll_backend__dense_switch__closure_arg;
    MR_Word ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_10;

    {
      ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__dense_switch__wrapper_arg_1), ((MR_Word) ll_backend__dense_switch__wrapper_arg_2), &ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_10);
    }
    *ll_backend__dense_switch__wrapper_arg_3 = ((MR_Box) (ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_10));
  }
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0_1(
  MR_Box ll_backend__dense_switch__closure_arg,
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
  MR_Box * ll_backend__dense_switch__wrapper_arg_2,
  MR_Box * ll_backend__dense_switch__wrapper_arg_3)
{
  {
    MR_Box ll_backend__dense_switch__closure = ll_backend__dense_switch__closure_arg;
    MR_String ll_backend__dense_switch__conv1_HeadVar__2_2;
    MR_Word ll_backend__dense_switch__conv0_HeadVar__3_3;

    {
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__dense_switch__wrapper_arg_1), &ll_backend__dense_switch__conv1_HeadVar__2_2, &ll_backend__dense_switch__conv0_HeadVar__3_3);
    }
    *ll_backend__dense_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__dense_switch__conv1_HeadVar__2_2));
    *ll_backend__dense_switch__wrapper_arg_3 = ((MR_Box) (ll_backend__dense_switch__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_case_13_p_0(
  MR_Word ll_backend__dense_switch__BranchStart_14,
  MR_String ll_backend__dense_switch__VarName_15,
  MR_Word ll_backend__dense_switch__CodeModel_16,
  MR_Word ll_backend__dense_switch__SwitchGoalInfo_17,
  MR_Word ll_backend__dense_switch__EndLabel_18,
  MR_Word ll_backend__dense_switch__TaggedCase_19,
  MR_Word * ll_backend__dense_switch__Code_20,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_41,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_IndexMap_42,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_0_43,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_44,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_45,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_46)
{
  {
    MR_Word ll_backend__dense_switch__TypeCtorInfo_72_72;
    MR_Word ll_backend__dense_switch__TypeCtorInfo_77_77;
    MR_Word ll_backend__dense_switch__TaggedMainConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__TaggedCase_19, (MR_Integer) 0)));
    MR_Word ll_backend__dense_switch__TaggedOtherConsIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__TaggedCase_19, (MR_Integer) 1)));
    MR_Word ll_backend__dense_switch__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__TaggedCase_19, (MR_Integer) 3)));
    MR_String ll_backend__dense_switch__MainConsName_28;
    MR_Word ll_backend__dense_switch__MainConsTag_29;
    MR_Word ll_backend__dense_switch__OtherConsNames_30;
    MR_Word ll_backend__dense_switch__OtherConsTags_31;
    MR_String ll_backend__dense_switch__LabelComment_32;
    MR_Word ll_backend__dense_switch__Label_33;
    MR_Word ll_backend__dense_switch__LabelCode_34;
    MR_Word ll_backend__dense_switch__TraceCode_36;
    MR_Word ll_backend__dense_switch__GoalCode_37;
    MR_Word ll_backend__dense_switch__BranchToEndCode_38;
    MR_Word ll_backend__dense_switch__StoreMap_39;
    MR_Word ll_backend__dense_switch__SaveCode_40;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_48_48;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_49_49;
    MR_Word ll_backend__dense_switch__Var_50;
    MR_Word ll_backend__dense_switch__Var_52;
    MR_Word ll_backend__dense_switch__Var_53;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CLD_54_54;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_55_55;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CLD_56_56;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CLD_58_58;
    MR_Word ll_backend__dense_switch__Var_59;
    MR_Word ll_backend__dense_switch__Var_60;
    MR_Word ll_backend__dense_switch__Var_61;
    MR_Word ll_backend__dense_switch__Var_64;
    MR_Word ll_backend__dense_switch__Var_65;
    MR_Word ll_backend__dense_switch__Var_66;
    MR_Word ll_backend__dense_switch__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__TaggedCase_19, (MR_Integer) 2)));
    MR_Box ll_backend__dense_switch__conv3_STATE_VARIABLE_IndexMap_42;

    {
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__dense_switch__TaggedMainConsId_24, &ll_backend__dense_switch__MainConsName_28, &ll_backend__dense_switch__MainConsTag_29);
    }
    ll_backend__dense_switch__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
    {
      mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__dense_switch__TypeCtorInfo_72_72, (MR_Word) &ll_backend__dense_switch_scalar_common_2[2], ll_backend__dense_switch__TaggedOtherConsIds_25, &ll_backend__dense_switch__OtherConsNames_30, &ll_backend__dense_switch__OtherConsTags_31);
    }
    {
      ll_backend__dense_switch__LabelComment_32 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__dense_switch__VarName_15, ll_backend__dense_switch__MainConsName_28, ll_backend__dense_switch__OtherConsNames_30);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__dense_switch__Label_33, ll_backend__dense_switch__STATE_VARIABLE_CI_0_45, &ll_backend__dense_switch__STATE_VARIABLE_CI_48_48);
    }
    {
      ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(ll_backend__dense_switch__Label_33, ll_backend__dense_switch__MainConsTag_29, ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_41, &ll_backend__dense_switch__STATE_VARIABLE_IndexMap_49_49);
    }
    {
      ll_backend__dense_switch__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_50, 0) = ((MR_Box) (&ll_backend__dense_switch_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_50, 1) = ((MR_Box) (ll_backend__dense_switch__generate_dense_case_13_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_50, 3) = ((MR_Box) (ll_backend__dense_switch__Label_33));
    }
    {
      mercury__list__foldl_4_p_0(ll_backend__dense_switch__TypeCtorInfo_72_72, (MR_Word) &ll_backend__dense_switch_scalar_common_2[0], ll_backend__dense_switch__Var_50, ll_backend__dense_switch__OtherConsTags_31, ((MR_Box) (ll_backend__dense_switch__STATE_VARIABLE_IndexMap_49_49)), &ll_backend__dense_switch__conv3_STATE_VARIABLE_IndexMap_42);
    }
    *ll_backend__dense_switch__STATE_VARIABLE_IndexMap_42 = ((MR_Word) ll_backend__dense_switch__conv3_STATE_VARIABLE_IndexMap_42);
    ll_backend__dense_switch__TypeCtorInfo_77_77 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__dense_switch__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_53, 1) = ((MR_Box) (ll_backend__dense_switch__Label_33));
    }
    {
      ll_backend__dense_switch__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_52, 0) = ((MR_Box) (ll_backend__dense_switch__Var_53));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_52, 1) = ((MR_Box) (ll_backend__dense_switch__LabelComment_32));
    }
    {
      ll_backend__dense_switch__LabelCode_34 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__dense_switch__Var_52)));
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__dense_switch__BranchStart_14, ll_backend__dense_switch__STATE_VARIABLE_CI_48_48, &ll_backend__dense_switch__STATE_VARIABLE_CLD_54_54);
    }
    {
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__dense_switch__Goal_27, ll_backend__dense_switch__SwitchGoalInfo_17, &ll_backend__dense_switch__TraceCode_36, ll_backend__dense_switch__STATE_VARIABLE_CI_48_48, &ll_backend__dense_switch__STATE_VARIABLE_CI_55_55, ll_backend__dense_switch__STATE_VARIABLE_CLD_54_54, &ll_backend__dense_switch__STATE_VARIABLE_CLD_56_56);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__dense_switch__CodeModel_16, ll_backend__dense_switch__Goal_27, &ll_backend__dense_switch__GoalCode_37, ll_backend__dense_switch__STATE_VARIABLE_CI_55_55, ll_backend__dense_switch__STATE_VARIABLE_CI_46, ll_backend__dense_switch__STATE_VARIABLE_CLD_56_56, &ll_backend__dense_switch__STATE_VARIABLE_CLD_58_58);
    }
    {
      ll_backend__dense_switch__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__dense_switch__Var_61, 0) = ((MR_Box) (ll_backend__dense_switch__EndLabel_18));
    }
    {
      ll_backend__dense_switch__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_60, 1) = ((MR_Box) (ll_backend__dense_switch__Var_61));
    }
    {
      ll_backend__dense_switch__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 0) = ((MR_Box) (ll_backend__dense_switch__Var_60));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 1) = ((MR_Box) ((MR_String) "branch to end of dense switch"));
    }
    {
      ll_backend__dense_switch__BranchToEndCode_38 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__dense_switch__Var_59)));
    }
    {
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__dense_switch__SwitchGoalInfo_17, &ll_backend__dense_switch__StoreMap_39);
    }
    {
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__dense_switch__StoreMap_39, ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_0_43, ll_backend__dense_switch__STATE_VARIABLE_MaybeEnd_44, &ll_backend__dense_switch__SaveCode_40, *ll_backend__dense_switch__STATE_VARIABLE_CI_46, ll_backend__dense_switch__STATE_VARIABLE_CLD_58_58);
    }
    {
      ll_backend__dense_switch__Var_66 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_77_77, ll_backend__dense_switch__SaveCode_40, ll_backend__dense_switch__BranchToEndCode_38);
    }
    {
      ll_backend__dense_switch__Var_65 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_77_77, ll_backend__dense_switch__GoalCode_37, ll_backend__dense_switch__Var_66);
    }
    {
      ll_backend__dense_switch__Var_64 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_77_77, ll_backend__dense_switch__TraceCode_36, ll_backend__dense_switch__Var_65);
    }
    {
      *ll_backend__dense_switch__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_77_77, ll_backend__dense_switch__LabelCode_34, ll_backend__dense_switch__Var_64);
    }
  }
}

static void MR_CALL 
ll_backend__dense_switch__record_dense_label_for_cons_tag_4_p_0(
  MR_Word ll_backend__dense_switch__Label_5,
  MR_Word ll_backend__dense_switch__ConsTag_6,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_9,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_IndexMap_10)
{
  {
    MR_bool ll_backend__dense_switch__succeeded = ((((MR_tag((MR_Word) ll_backend__dense_switch__ConsTag_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dense_switch__ConsTag_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Integer ll_backend__dense_switch__Index_8;
    MR_Word ll_backend__dense_switch__Var_11;

    if (ll_backend__dense_switch__succeeded)
    {
      ll_backend__dense_switch__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dense_switch__ConsTag_6, (MR_Integer) 1)));
      ll_backend__dense_switch__succeeded = ((MR_tag((MR_Word) ll_backend__dense_switch__Var_11)) == (MR_mktag((MR_Integer) 0)));
      if (ll_backend__dense_switch__succeeded)
        ll_backend__dense_switch__Index_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_11, (MR_Integer) 0)));
    }
    if (ll_backend__dense_switch__succeeded)
    {
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__dense_switch__Index_8, ((MR_Box) (ll_backend__dense_switch__Label_5)), ll_backend__dense_switch__STATE_VARIABLE_IndexMap_0_9, ll_backend__dense_switch__STATE_VARIABLE_IndexMap_10);
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dense_switch", (MR_String) "predicate \140ll_backend.dense_switch.record_dense_label_for_cons_tag\'/4", (MR_String) "not int_tag");
        return;
      }
    }
  }
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_switch_13_p_0_1(
  MR_Box ll_backend__dense_switch__closure_arg,
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
  MR_Box * ll_backend__dense_switch__wrapper_arg_2,
  MR_Box ll_backend__dense_switch__wrapper_arg_3,
  MR_Box * ll_backend__dense_switch__wrapper_arg_4,
  MR_Box ll_backend__dense_switch__wrapper_arg_5,
  MR_Box * ll_backend__dense_switch__wrapper_arg_6,
  MR_Box ll_backend__dense_switch__wrapper_arg_7,
  MR_Box * ll_backend__dense_switch__wrapper_arg_8)
{
  {
    MR_Box ll_backend__dense_switch__closure = ll_backend__dense_switch__closure_arg;
    MR_Word ll_backend__dense_switch__conv3_Code_20;
    MR_Word ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_42;
    MR_Word ll_backend__dense_switch__conv1_STATE_VARIABLE_MaybeEnd_44;
    MR_Word ll_backend__dense_switch__conv0_STATE_VARIABLE_CI_46;

    {
      ll_backend__dense_switch__generate_dense_case_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 7))), ((MR_Word) ll_backend__dense_switch__wrapper_arg_1), &ll_backend__dense_switch__conv3_Code_20, ((MR_Word) ll_backend__dense_switch__wrapper_arg_3), &ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_42, ((MR_Word) ll_backend__dense_switch__wrapper_arg_5), &ll_backend__dense_switch__conv1_STATE_VARIABLE_MaybeEnd_44, ((MR_Word) ll_backend__dense_switch__wrapper_arg_7), &ll_backend__dense_switch__conv0_STATE_VARIABLE_CI_46);
    }
    *ll_backend__dense_switch__wrapper_arg_2 = ((MR_Box) (ll_backend__dense_switch__conv3_Code_20));
    *ll_backend__dense_switch__wrapper_arg_4 = ((MR_Box) (ll_backend__dense_switch__conv2_STATE_VARIABLE_IndexMap_42));
    *ll_backend__dense_switch__wrapper_arg_6 = ((MR_Box) (ll_backend__dense_switch__conv1_STATE_VARIABLE_MaybeEnd_44));
    *ll_backend__dense_switch__wrapper_arg_8 = ((MR_Box) (ll_backend__dense_switch__conv0_STATE_VARIABLE_CI_46));
  }
}

void MR_CALL 
ll_backend__dense_switch__generate_dense_switch_13_p_0(
  MR_Word ll_backend__dense_switch__TaggedCases_14,
  MR_Word ll_backend__dense_switch__VarRval_15,
  MR_String ll_backend__dense_switch__VarName_16,
  MR_Word ll_backend__dense_switch__CodeModel_17,
  MR_Word ll_backend__dense_switch__SwitchGoalInfo_18,
  MR_Word ll_backend__dense_switch__DenseSwitchInfo_19,
  MR_Word ll_backend__dense_switch__EndLabel_20,
  MR_Word ll_backend__dense_switch__MaybeEnd0_21,
  MR_Word * ll_backend__dense_switch__MaybeEnd_22,
  MR_Word * ll_backend__dense_switch__Code_23,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_46,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_47,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CLD_0_48)
{
  {
    MR_bool ll_backend__dense_switch__succeeded;
    MR_Word ll_backend__dense_switch__TypeCtorInfo_85_85;
    MR_Word ll_backend__dense_switch__TypeCtorInfo_86_86;
    MR_Word ll_backend__dense_switch__TypeCtorInfo_92_92;
    MR_Integer ll_backend__dense_switch__FirstVal_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__DenseSwitchInfo_19, (MR_Integer) 0)));
    MR_Integer ll_backend__dense_switch__LastVal_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__DenseSwitchInfo_19, (MR_Integer) 1)));
    MR_Word ll_backend__dense_switch__CanFail_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__DenseSwitchInfo_19, (MR_Integer) 2)));
    MR_Word ll_backend__dense_switch__IndexRval_29;
    MR_Word ll_backend__dense_switch__RangeCheckCode_31;
    MR_Word ll_backend__dense_switch__BranchStart_32;
    MR_Word ll_backend__dense_switch__CasesCodes_33;
    MR_Word ll_backend__dense_switch__IndexMap_34;
    MR_Word ll_backend__dense_switch__CasesCode_35;
    MR_Word ll_backend__dense_switch__IndexPairs_36;
    MR_Word ll_backend__dense_switch__Targets_37;
    MR_Word ll_backend__dense_switch__MaybeFailLabel_38;
    MR_Word ll_backend__dense_switch__JumpCode_39;
    MR_Word ll_backend__dense_switch__FailCode_40;
    MR_Word ll_backend__dense_switch__EndLabelCode_45;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_54_54;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CLD_55_55;
    MR_Word ll_backend__dense_switch__Var_59;
    MR_Word ll_backend__dense_switch__Var_60;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_61_61;
    MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_63_63;
    MR_Word ll_backend__dense_switch__Var_64;
    MR_Word ll_backend__dense_switch__Var_65;
    MR_Word ll_backend__dense_switch__Var_70;
    MR_Word ll_backend__dense_switch__Var_71;
    MR_Word ll_backend__dense_switch__Var_73;
    MR_Word ll_backend__dense_switch__Var_74;
    MR_Word ll_backend__dense_switch__Var_75;
    MR_Box ll_backend__dense_switch__conv6_IndexMap_34;
    MR_Box ll_backend__dense_switch__conv5_MaybeEnd_22;
    MR_Box ll_backend__dense_switch__conv4_STATE_VARIABLE_CI_61_61;

    ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__FirstVal_26 == (MR_Integer) 0);
    if (ll_backend__dense_switch__succeeded)
      ll_backend__dense_switch__IndexRval_29 = ll_backend__dense_switch__VarRval_15;
    else
    {
      MR_Word ll_backend__dense_switch__Var_51;
      MR_Word ll_backend__dense_switch__Var_52;

      {
        ll_backend__dense_switch__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ll_backend__dense_switch__Var_52, 0) = ((MR_Box) (ll_backend__dense_switch__FirstVal_26));
      }
      {
        ll_backend__dense_switch__Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_51, 1) = ((MR_Box) (ll_backend__dense_switch__Var_52));
      }
      {
        ll_backend__dense_switch__IndexRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ll_backend__dense_switch__IndexRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), ll_backend__dense_switch__IndexRval_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__dense_switch_scalar_common_4[0])));
        MR_hl_field(MR_mktag(3), ll_backend__dense_switch__IndexRval_29, 2) = ((MR_Box) (ll_backend__dense_switch__VarRval_15));
        MR_hl_field(MR_mktag(3), ll_backend__dense_switch__IndexRval_29, 3) = ((MR_Box) (ll_backend__dense_switch__Var_51));
      }
    }
    switch (ll_backend__dense_switch__CanFail_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ll_backend__dense_switch__Difference_30 = (ll_backend__dense_switch__LastVal_27 - ll_backend__dense_switch__FirstVal_26);
          MR_Word ll_backend__dense_switch__Var_53;
          MR_Word ll_backend__dense_switch__Var_57;
          MR_Word ll_backend__dense_switch__Var_58;

          {
            ll_backend__dense_switch__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__dense_switch__Var_58, 0) = ((MR_Box) (ll_backend__dense_switch__Difference_30));
          }
          {
            ll_backend__dense_switch__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_57, 1) = ((MR_Box) (ll_backend__dense_switch__Var_58));
          }
          {
            ll_backend__dense_switch__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
            MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_53, 2) = ((MR_Box) (ll_backend__dense_switch__IndexRval_29));
            MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_53, 3) = ((MR_Box) (ll_backend__dense_switch__Var_57));
          }
          {
            ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__dense_switch__Var_53, &ll_backend__dense_switch__RangeCheckCode_31, ll_backend__dense_switch__STATE_VARIABLE_CI_0_46, &ll_backend__dense_switch__STATE_VARIABLE_CI_54_54, ll_backend__dense_switch__STATE_VARIABLE_CLD_0_48, &ll_backend__dense_switch__STATE_VARIABLE_CLD_55_55);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__dense_switch__RangeCheckCode_31 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          ll_backend__dense_switch__STATE_VARIABLE_CI_54_54 = ll_backend__dense_switch__STATE_VARIABLE_CI_0_46;
          ll_backend__dense_switch__STATE_VARIABLE_CLD_55_55 = ll_backend__dense_switch__STATE_VARIABLE_CLD_0_48;
        }
        break;
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__dense_switch__STATE_VARIABLE_CLD_55_55, &ll_backend__dense_switch__BranchStart_32);
    }
    {
      ll_backend__dense_switch__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 0) = ((MR_Box) (&ll_backend__dense_switch_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 1) = ((MR_Box) (ll_backend__dense_switch__generate_dense_switch_13_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 3) = ((MR_Box) (ll_backend__dense_switch__BranchStart_32));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 4) = ((MR_Box) (ll_backend__dense_switch__VarName_16));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 5) = ((MR_Box) (ll_backend__dense_switch__CodeModel_17));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 6) = ((MR_Box) (ll_backend__dense_switch__SwitchGoalInfo_18));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_59, 7) = ((MR_Box) (ll_backend__dense_switch__EndLabel_20));
    }
    ll_backend__dense_switch__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    ll_backend__dense_switch__TypeCtorInfo_86_86 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    {
      ll_backend__dense_switch__Var_60 = mercury__map__init_0_f_0(ll_backend__dense_switch__TypeCtorInfo_85_85, ll_backend__dense_switch__TypeCtorInfo_86_86);
    }
    {
      mercury__list__map_foldl3_9_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, (MR_Word) &ll_backend__dense_switch_scalar_common_1[0], (MR_Word) &ll_backend__dense_switch_scalar_common_2[0], (MR_Word) &ll_backend__dense_switch_scalar_common_1[1], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, ll_backend__dense_switch__Var_59, ll_backend__dense_switch__TaggedCases_14, &ll_backend__dense_switch__CasesCodes_33, ((MR_Box) (ll_backend__dense_switch__Var_60)), &ll_backend__dense_switch__conv6_IndexMap_34, ((MR_Box) (ll_backend__dense_switch__MaybeEnd0_21)), &ll_backend__dense_switch__conv5_MaybeEnd_22, ((MR_Box) (ll_backend__dense_switch__STATE_VARIABLE_CI_54_54)), &ll_backend__dense_switch__conv4_STATE_VARIABLE_CI_61_61);
    }
    ll_backend__dense_switch__IndexMap_34 = ((MR_Word) ll_backend__dense_switch__conv6_IndexMap_34);
    *ll_backend__dense_switch__MaybeEnd_22 = ((MR_Word) ll_backend__dense_switch__conv5_MaybeEnd_22);
    ll_backend__dense_switch__STATE_VARIABLE_CI_61_61 = ((MR_Word) ll_backend__dense_switch__conv4_STATE_VARIABLE_CI_61_61);
    ll_backend__dense_switch__TypeCtorInfo_92_92 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__dense_switch__CasesCode_35 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92, ll_backend__dense_switch__CasesCodes_33);
    }
    {
      mercury__map__to_assoc_list_2_p_0(ll_backend__dense_switch__TypeCtorInfo_85_85, ll_backend__dense_switch__TypeCtorInfo_86_86, ll_backend__dense_switch__IndexMap_34, &ll_backend__dense_switch__IndexPairs_36);
    }
    {
      ll_backend__dense_switch__generate_dense_jump_table_8_p_0(ll_backend__dense_switch__FirstVal_26, ll_backend__dense_switch__LastVal_27, ll_backend__dense_switch__IndexPairs_36, &ll_backend__dense_switch__Targets_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__dense_switch__MaybeFailLabel_38, ll_backend__dense_switch__STATE_VARIABLE_CI_61_61, &ll_backend__dense_switch__STATE_VARIABLE_CI_63_63);
    }
    {
      ll_backend__dense_switch__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_65, 1) = ((MR_Box) (ll_backend__dense_switch__IndexRval_29));
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_65, 2) = ((MR_Box) (ll_backend__dense_switch__Targets_37));
    }
    {
      ll_backend__dense_switch__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_64, 0) = ((MR_Box) (ll_backend__dense_switch__Var_65));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_64, 1) = ((MR_Box) ((MR_String) "switch (using dense jump table)"));
    }
    {
      ll_backend__dense_switch__JumpCode_39 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92, ((MR_Box) (ll_backend__dense_switch__Var_64)));
    }
    if ((ll_backend__dense_switch__MaybeFailLabel_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        ll_backend__dense_switch__FailCode_40 = mercury__cord__empty_0_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92);
      }
      *ll_backend__dense_switch__STATE_VARIABLE_CI_47 = ll_backend__dense_switch__STATE_VARIABLE_CI_63_63;
    }
    else
    {
      MR_Word ll_backend__dense_switch__FailLabel_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__MaybeFailLabel_38, (MR_Integer) 0)));
      MR_Word ll_backend__dense_switch__FailLabelCode_43;
      MR_Word ll_backend__dense_switch__FailureCode_44;
      MR_Word ll_backend__dense_switch__Var_67;
      MR_Word ll_backend__dense_switch__Var_68;

      {
        ll_backend__dense_switch__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_68, 1) = ((MR_Box) (ll_backend__dense_switch__FailLabel_41));
      }
      {
        ll_backend__dense_switch__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_67, 0) = ((MR_Box) (ll_backend__dense_switch__Var_68));
        MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_67, 1) = ((MR_Box) ((MR_String) "compiler-introduced \140fail\' case of dense switch"));
      }
      {
        ll_backend__dense_switch__FailLabelCode_43 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92, ((MR_Box) (ll_backend__dense_switch__Var_67)));
      }
      {
        ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__dense_switch__FailureCode_44, ll_backend__dense_switch__STATE_VARIABLE_CI_63_63, ll_backend__dense_switch__STATE_VARIABLE_CI_47, ll_backend__dense_switch__STATE_VARIABLE_CLD_55_55);
      }
      {
        ll_backend__dense_switch__FailCode_40 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92, ll_backend__dense_switch__FailLabelCode_43, ll_backend__dense_switch__FailureCode_44);
      }
    }
    {
      ll_backend__dense_switch__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__dense_switch__Var_71, 1) = ((MR_Box) (ll_backend__dense_switch__EndLabel_20));
    }
    {
      ll_backend__dense_switch__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_70, 0) = ((MR_Box) (ll_backend__dense_switch__Var_71));
      MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_70, 1) = ((MR_Box) ((MR_String) "end of dense switch"));
    }
    {
      ll_backend__dense_switch__EndLabelCode_45 = mercury__cord__singleton_1_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92, ((MR_Box) (ll_backend__dense_switch__Var_70)));
    }
    {
      ll_backend__dense_switch__Var_75 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92, ll_backend__dense_switch__FailCode_40, ll_backend__dense_switch__EndLabelCode_45);
    }
    {
      ll_backend__dense_switch__Var_74 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92, ll_backend__dense_switch__CasesCode_35, ll_backend__dense_switch__Var_75);
    }
    {
      ll_backend__dense_switch__Var_73 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92, ll_backend__dense_switch__JumpCode_39, ll_backend__dense_switch__Var_74);
    }
    {
      *ll_backend__dense_switch__Code_23 = mercury__cord__f_43_43_2_f_0(ll_backend__dense_switch__TypeCtorInfo_92_92, ll_backend__dense_switch__RangeCheckCode_31, ll_backend__dense_switch__Var_73);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0_1(
  MR_Box ll_backend__dense_switch__closure_arg)
{
  {
    MR_bool ll_backend__dense_switch__succeeded;
    MR_Box ll_backend__dense_switch__closure = ll_backend__dense_switch__closure_arg;

    {
      ll_backend__dense_switch__succeeded = ll_backend__dense_switch__IntroducedFrom__pred__generate_dense_jump_table__247__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__closure, (MR_Integer) 4))));
    }
    return ll_backend__dense_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__dense_switch__generate_dense_jump_table_8_p_0(
  MR_Integer ll_backend__dense_switch__CurVal_9,
  MR_Integer ll_backend__dense_switch__LastVal_10,
  MR_Word ll_backend__dense_switch__IndexPairs_11,
  MR_Word * ll_backend__dense_switch__Targets_12,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23,
  MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_0_24,
  MR_Word * ll_backend__dense_switch__STATE_VARIABLE_CI_25)
{
  {
    MR_bool ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__CurVal_9 > ll_backend__dense_switch__LastVal_10);

    if (ll_backend__dense_switch__succeeded)
    {
      MR_Word ll_backend__dense_switch__Var_26;

      {
        ll_backend__dense_switch__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_26, 0) = ((MR_Box) (&ll_backend__dense_switch_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_26, 1) = ((MR_Box) (ll_backend__dense_switch__generate_dense_jump_table_8_p_0_1));
        MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_26, 3) = ((MR_Box) (ll_backend__dense_switch__IndexPairs_11));
        MR_hl_field(MR_mktag(0), ll_backend__dense_switch__Var_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        mercury__require__expect_4_p_0(ll_backend__dense_switch__Var_26, (MR_String) "ll_backend.dense_switch", (MR_String) "predicate \140ll_backend.dense_switch.generate_dense_jump_table\'/8", (MR_String) "NextVal > LastVal, IndexList not []");
      }
      *ll_backend__dense_switch__Targets_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__dense_switch__STATE_VARIABLE_CI_25 = ll_backend__dense_switch__STATE_VARIABLE_CI_0_24;
      *ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23 = ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22;
    }
    else
    {
      MR_Integer ll_backend__dense_switch__NextVal_15 = (ll_backend__dense_switch__CurVal_9 + (MR_Integer) 1);

      if ((ll_backend__dense_switch__IndexPairs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__dense_switch__FailLabel_16;
        MR_Word ll_backend__dense_switch__LaterTargets_17;
        MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40;
        MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_41_41;
        MR_Word ll_backend__dense_switch__Var_44;

        if ((ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__dense_switch__FailLabel_16, ll_backend__dense_switch__STATE_VARIABLE_CI_0_24, &ll_backend__dense_switch__STATE_VARIABLE_CI_41_41);
          }
          {
            ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40, 0) = ((MR_Box) (ll_backend__dense_switch__FailLabel_16));
          }
        }
        else
        {
          ll_backend__dense_switch__FailLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22, (MR_Integer) 0)));
          ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40 = ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22;
          ll_backend__dense_switch__STATE_VARIABLE_CI_41_41 = ll_backend__dense_switch__STATE_VARIABLE_CI_0_24;
        }
        {
          ll_backend__dense_switch__generate_dense_jump_table_8_p_0(ll_backend__dense_switch__NextVal_15, ll_backend__dense_switch__LastVal_10, ll_backend__dense_switch__IndexPairs_11, &ll_backend__dense_switch__LaterTargets_17, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_40_40, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23, ll_backend__dense_switch__STATE_VARIABLE_CI_41_41, ll_backend__dense_switch__STATE_VARIABLE_CI_25);
        }
        {
          ll_backend__dense_switch__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__dense_switch__Var_44, 0) = ((MR_Box) (ll_backend__dense_switch__FailLabel_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__dense_switch__Targets_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dense_switch__Var_44));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dense_switch__LaterTargets_17));
        }
      }
      else
      {
        MR_Word ll_backend__dense_switch__FirstIndexPair_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__IndexPairs_11, (MR_Integer) 0)));
        MR_Word ll_backend__dense_switch__LaterIndexPairs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__IndexPairs_11, (MR_Integer) 1)));
        MR_Integer ll_backend__dense_switch__FirstIndex_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__FirstIndexPair_18, (MR_Integer) 0)));
        MR_Word ll_backend__dense_switch__FirstLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dense_switch__FirstIndexPair_18, (MR_Integer) 1)));

        ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__FirstIndex_20 == ll_backend__dense_switch__CurVal_9);
        if (ll_backend__dense_switch__succeeded)
        {
          MR_Word ll_backend__dense_switch__Var_34;
          MR_Word ll_backend__dense_switch__LaterTargets_45;

          {
            ll_backend__dense_switch__generate_dense_jump_table_8_p_0(ll_backend__dense_switch__NextVal_15, ll_backend__dense_switch__LastVal_10, ll_backend__dense_switch__LaterIndexPairs_19, &ll_backend__dense_switch__LaterTargets_45, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23, ll_backend__dense_switch__STATE_VARIABLE_CI_0_24, ll_backend__dense_switch__STATE_VARIABLE_CI_25);
          }
          {
            ll_backend__dense_switch__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__dense_switch__Var_34, 0) = ((MR_Box) (ll_backend__dense_switch__FirstLabel_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__dense_switch__Targets_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dense_switch__Var_34));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dense_switch__LaterTargets_45));
          }
        }
        else
        {
          MR_Word ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35;
          MR_Word ll_backend__dense_switch__STATE_VARIABLE_CI_36_36;
          MR_Word ll_backend__dense_switch__Var_39;
          MR_Word ll_backend__dense_switch__FailLabel_46;
          MR_Word ll_backend__dense_switch__LaterTargets_47;

          if ((ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__dense_switch__FailLabel_46, ll_backend__dense_switch__STATE_VARIABLE_CI_0_24, &ll_backend__dense_switch__STATE_VARIABLE_CI_36_36);
            }
            {
              ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35, 0) = ((MR_Box) (ll_backend__dense_switch__FailLabel_46));
            }
          }
          else
          {
            ll_backend__dense_switch__FailLabel_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22, (MR_Integer) 0)));
            ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35 = ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_0_22;
            ll_backend__dense_switch__STATE_VARIABLE_CI_36_36 = ll_backend__dense_switch__STATE_VARIABLE_CI_0_24;
          }
          {
            ll_backend__dense_switch__generate_dense_jump_table_8_p_0(ll_backend__dense_switch__NextVal_15, ll_backend__dense_switch__LastVal_10, ll_backend__dense_switch__IndexPairs_11, &ll_backend__dense_switch__LaterTargets_47, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_35_35, ll_backend__dense_switch__STATE_VARIABLE_MaybeFailLabel_23, ll_backend__dense_switch__STATE_VARIABLE_CI_36_36, ll_backend__dense_switch__STATE_VARIABLE_CI_25);
          }
          {
            ll_backend__dense_switch__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__dense_switch__Var_39, 0) = ((MR_Box) (ll_backend__dense_switch__FailLabel_46));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__dense_switch__Targets_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dense_switch__Var_39));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dense_switch__LaterTargets_47));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_p_0(
  MR_Word ll_backend__dense_switch__CI_10,
  MR_Word ll_backend__dense_switch__VarType_11,
  MR_Word ll_backend__dense_switch__TaggedCases_12,
  MR_Integer ll_backend__dense_switch__LowerLimit_13,
  MR_Integer ll_backend__dense_switch__UpperLimit_14,
  MR_Integer ll_backend__dense_switch__NumValues_15,
  MR_Integer ll_backend__dense_switch__ReqDensity_16,
  MR_Word ll_backend__dense_switch__CanFail0_17,
  MR_Word * ll_backend__dense_switch__DenseSwitchInfo_18)
{
  {
    MR_bool ll_backend__dense_switch__succeeded;
    MR_Integer ll_backend__dense_switch__NumCases_19;
    MR_Integer ll_backend__dense_switch__Span_20;
    MR_Integer ll_backend__dense_switch__Range_21;
    MR_Integer ll_backend__dense_switch__Density_22;
    MR_Word ll_backend__dense_switch__CanFail_29;
    MR_Integer ll_backend__dense_switch__FirstVal_30;
    MR_Integer ll_backend__dense_switch__LastVal_31;
    MR_Integer ll_backend__dense_switch__Var_33;

    {
      mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, ll_backend__dense_switch__TaggedCases_12, &ll_backend__dense_switch__NumCases_19);
    }
    ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__NumCases_19 > (MR_Integer) 2);
    if (ll_backend__dense_switch__succeeded)
    {
      ll_backend__dense_switch__Span_20 = (ll_backend__dense_switch__UpperLimit_14 - ll_backend__dense_switch__LowerLimit_13);
      ll_backend__dense_switch__Var_33 = (MR_Integer) 1;
      ll_backend__dense_switch__Range_21 = (ll_backend__dense_switch__Span_20 + ll_backend__dense_switch__Var_33);
      {
        ll_backend__dense_switch__Density_22 = backend_libs__switch_util__switch_density_2_f_0(ll_backend__dense_switch__NumValues_15, ll_backend__dense_switch__Range_21);
      }
      ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__Density_22 > ll_backend__dense_switch__ReqDensity_16);
      if (ll_backend__dense_switch__succeeded)
      {
        switch (ll_backend__dense_switch__CanFail0_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__dense_switch__ModuleInfo_23;
              MR_Word ll_backend__dense_switch__TypeCategory_24;
              MR_Integer ll_backend__dense_switch__TypeRange_27;
              MR_Integer ll_backend__dense_switch__DetDensity_28;
              MR_Integer ll_backend__dense_switch___Min_25;
              MR_Integer ll_backend__dense_switch___Max_26;

              {
                ll_backend__code_info__get_module_info_2_p_0(ll_backend__dense_switch__CI_10, &ll_backend__dense_switch__ModuleInfo_23);
              }
              {
                ll_backend__dense_switch__TypeCategory_24 = check_hlds__type_util__classify_type_2_f_0(ll_backend__dense_switch__ModuleInfo_23, ll_backend__dense_switch__VarType_11);
              }
              {
                ll_backend__dense_switch__succeeded = backend_libs__switch_util__type_range_6_p_0(ll_backend__dense_switch__ModuleInfo_23, ll_backend__dense_switch__TypeCategory_24, ll_backend__dense_switch__VarType_11, &ll_backend__dense_switch___Min_25, &ll_backend__dense_switch___Max_26, &ll_backend__dense_switch__TypeRange_27);
              }
              if (ll_backend__dense_switch__succeeded)
              {
                {
                  ll_backend__dense_switch__DetDensity_28 = backend_libs__switch_util__switch_density_2_f_0(ll_backend__dense_switch__NumValues_15, ll_backend__dense_switch__TypeRange_27);
                }
                ll_backend__dense_switch__succeeded = (ll_backend__dense_switch__DetDensity_28 > ll_backend__dense_switch__ReqDensity_16);
              }
              if (ll_backend__dense_switch__succeeded)
              {
                ll_backend__dense_switch__CanFail_29 = (MR_Integer) 1;
                ll_backend__dense_switch__FirstVal_30 = (MR_Integer) 0;
                ll_backend__dense_switch__LastVal_31 = (ll_backend__dense_switch__TypeRange_27 - (MR_Integer) 1);
              }
              else
              {
                ll_backend__dense_switch__CanFail_29 = ll_backend__dense_switch__CanFail0_17;
                ll_backend__dense_switch__FirstVal_30 = ll_backend__dense_switch__LowerLimit_13;
                ll_backend__dense_switch__LastVal_31 = ll_backend__dense_switch__UpperLimit_14;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__dense_switch__CanFail_29 = (MR_Integer) 1;
              ll_backend__dense_switch__FirstVal_30 = ll_backend__dense_switch__LowerLimit_13;
              ll_backend__dense_switch__LastVal_31 = ll_backend__dense_switch__UpperLimit_14;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__dense_switch__DenseSwitchInfo_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dense_switch__FirstVal_30));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__dense_switch__LastVal_31));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__dense_switch__CanFail_29));
        }
        ll_backend__dense_switch__succeeded = MR_TRUE;
      }
    }
    return ll_backend__dense_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__dense_switch____Unify____dense_switch_info_0_0_10001(
  MR_Box ll_backend__dense_switch__wrapper_arg_1,
  MR_Box ll_backend__dense_switch__wrapper_arg_2)
{
  {
    MR_bool ll_backend__dense_switch__succeeded;

    {
      ll_backend__dense_switch__succeeded = ll_backend__dense_switch____Unify____dense_switch_info_0_0(((MR_Word) ll_backend__dense_switch__wrapper_arg_1), ((MR_Word) ll_backend__dense_switch__wrapper_arg_2));
    }
    return ll_backend__dense_switch__succeeded;
  }
}

static void MR_CALL 
ll_backend__dense_switch____Compare____dense_switch_info_0_0_10001(
  MR_Box * ll_backend__dense_switch__wrapper_arg_1,
  MR_Box ll_backend__dense_switch__wrapper_arg_2,
  MR_Box ll_backend__dense_switch__wrapper_arg_3)
{
  {
    MR_Word ll_backend__dense_switch__conv0_HeadVar__1_1;

    {
      ll_backend__dense_switch____Compare____dense_switch_info_0_0(&ll_backend__dense_switch__conv0_HeadVar__1_1, ((MR_Word) ll_backend__dense_switch__wrapper_arg_2), ((MR_Word) ll_backend__dense_switch__wrapper_arg_3));
    }
    *ll_backend__dense_switch__wrapper_arg_1 = ((MR_Box) (ll_backend__dense_switch__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__dense_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.dense_switch. */
